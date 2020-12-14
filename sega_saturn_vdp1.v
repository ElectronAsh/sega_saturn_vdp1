module sega_saturn_vdp1 (
	input clock,
	input reset_n,
	
	output reg [19:0] gaddr,
	
	//input [31:0] gdata,		// Sprite ROM data.
	
	output reg fb_sel,
	
	output reg [16:0] fb0_addr,
	input [15:0] fb0_din,
	output reg [15:0] fb0_dout,
	output reg  fb0_we,
	
	output reg [16:0] fb1_addr,
	input [15:0] fb1_din,
	output reg [15:0] fb1_dout,
	output reg fb1_we,
	
`ifdef VERILATOR
	output reg [17:0] sp_addr,
	//input wire [15:0] sp_dout,	// FROM the sprite RAM to this module!
	output wire [15:0] sp_din,		// TO the sprite RAM FROM this module!
	output reg sp_we,
`endif
	
	output reg [15:0] vo		// Video (pixel data) out.
);

assign fb_sel = 0;

`ifdef VERILATOR
reg [15:0] sp_dout;

reg [31:0] gdata;
`endif

reg [15:0] CMDCTRL;
reg [15:0] CMDLINK;
reg [15:0] CMDPMOD;
reg [15:0] CMDCOLR;
reg [15:0] CMDSRCA;
reg [15:0] CMDSIZE;
reg signed [15:0] CMDXA;
reg signed [15:0] CMDYA;
reg signed [15:0] CMDXB;
reg signed [15:0] CMDYB;
reg signed [15:0] CMDXC;
reg signed [15:0] CMDYC;
reg signed [15:0] CMDXD;
reg signed [15:0] CMDYD;
reg [15:0] CMDGRDA;

reg signed [15:0] local_x = -100;
reg signed [15:0] local_y = -400;


reg draw_running;
reg [7:0] cmd_state;
reg [15:0] table_index;


reg toggle;

reg [8:0] tex_pix_cnt;
reg [7:0] tex_line_cnt;

wire [8:0] char_size_x = {CMDSIZE[13:8],3'b000};
wire [7:0] char_size_y = CMDSIZE[7:0];

wire [18:0] char_addr_byte = {CMDSRCA,3'b000};

always @(posedge clock or negedge reset_n)
if (!reset_n) begin
	//draw_running <= 1'b0;
	draw_running <= 1'b1;
	cmd_state <= 8'd0;
	
	//fb0_we <= 1'b0;
	fb1_we <= 1'b0;
	
	go_span <= 1'b0;
	clock_ad <= 1'b0;
	clock_bc <= 1'b0;
	
	toggle <= 1'b1;
end
else begin
	go_span <= 1'b0;
	clock_ad <= 1'b0;
	clock_bc <= 1'b0;

	go_ad <= 1'b0;
	go_bc <= 1'b0;

	case (cmd_state)
	0: begin
		sp_addr <= 18'h000000;
		table_index <= 16'd0;
		if (draw_running) cmd_state <= cmd_state + 1;
	end
	
	1: begin	// Read the next Command Table.
		sp_addr <= sp_addr + 1;
		/*if (sp_addr[3:0]==4'h0 && sp_dout[15]) begin // First entry has the END code! (MSB bit set).
			draw_running <= 0;	// Stop drawing!
			cmd_state <= 0;		// Go to idle state.
		end
		else*/ begin
			case (sp_addr[3:0])
				4'h0: CMDCTRL <= sp_dout;
				4'h1: CMDLINK <= sp_dout;
				4'h2: CMDPMOD <= sp_dout;
				4'h3: CMDCOLR <= sp_dout;
				4'h4: CMDSRCA <= sp_dout;
				4'h5: CMDSIZE <= sp_dout;
				4'h6: CMDXA   <= sp_dout;	// { {6{sp_dout[10]}}, sp_dout[9:0] }. Don't need to sign-extend?
				4'h7: CMDYA   <= sp_dout;
				4'h8: CMDXB   <= sp_dout;
				4'h9: CMDYB   <= sp_dout;
				4'ha: CMDXC   <= sp_dout;
				4'hb: CMDYC   <= sp_dout;
				4'hc: CMDXD   <= sp_dout;
				4'hd: CMDYD   <= sp_dout;
				4'he: CMDGRDA <= sp_dout;
				4'hf: begin
					table_index <= table_index + 1;
					cmd_state <= cmd_state + 1;	// No table entry here, but using this clock cycle.
				end
				default: ;
			endcase
		end
	end

	2: begin	// Parse the Command bits.
		case (CMDCTRL[3:0])
			4'b0000: cmd_state <= 8'd3;	// Textured Normal Sprite. TODO!
			4'b0001: cmd_state <= 8'd3;	// Textured Scaled Sprite. TODO!
			4'b0010: cmd_state <= 8'd4;	// Textured Distorted Sprite. TODO!
			// no command 3.
			4'b0100: cmd_state <= 8'd4;	// Non-Textured Polygon.
			4'b0101: cmd_state <= 8'd3;	// Non-Textured PolyLINE. TODO!
			4'b0110: cmd_state <= 8'd3;	// Non-Textured Line. TODO!
			// no command 7.
			4'b1000: cmd_state <= 8'd3;	// Set User Clipping coords. TODO!
			4'b1001: cmd_state <= 8'd3; // Set System Clipping coords. TODO!
			//4'b1010: cmd_state <= 8'd3; // Set Local coords. TODO!
			4'b1010: begin
				local_x <= CMDXA;	// Set Local coords. TODO!
				local_y <= CMDYA;
				cmd_state <= 8'd3;
			end
		default:;
		endcase
	end
	
	3: begin	// Parse next command table.
		sp_addr <= table_index << 4;
		cmd_state <= 1;	// Loop! TESTING.
	end
	
	4: begin	// Non-Textured Polygon.
		//go_span <= 1'b1;
		
		tex_pix_cnt <= 9'd0;
		tex_line_cnt <= 8'd0;

		cmd_state <= 5;
	end
	
	5: begin
		//tex_u_inc <= (tex_u_width<<16) / length_span;	// Put tex_u_width in 16.16 fixed-point first.
		tex_u_inc <= (tex_u_width<<16) / 48;	// Put tex_u_width in 16.16 fixed-point first.
		tex_u_accum <= 32'h0;					// Zero the accumulator.
		
		// TODO: length_ad should be chosen between length_ad or length_bc, whichever line is longest...
		//tex_v_inc <= (tex_v_height<<16) / length_ad;	// Put tex_v_height in 16.16 fixed-point first.
		tex_v_inc <= (tex_v_height<<16) / 64;	// Put tex_v_height in 16.16 fixed-point first.
		tex_v_accum <= 32'h0;					// Zero the accumulator.

		go_ad <= 1'b1;
		//go_span <= 1'b1;
	
		cmd_state <= cmd_state + 1;
	end
	
	6: begin
		cmd_state <= cmd_state + 1;
	end
	
	7: begin
		// When the span pixel (starts on the AD side) reaches the pixel on the BC side.
		/*
		if (span_at_bc) begin
			//if (toggle) clock_ad <= 1'b1;
			clock_ad <= 1'b1;
			
			toggle <= !toggle;
			clock_bc <= 1'b1;
			go_span <= 1'b1;

			tex_pix_cnt <= 0;
			tex_line_cnt <= tex_line_cnt + 1;

			tex_v_accum <= tex_v_accum + tex_v_inc;		// Only increment this once for each new span line.
			tex_u_accum <= 32'd0;
		end
		else begin
			tex_u_accum <= tex_u_accum + tex_u_inc;
			tex_pix_cnt <= tex_pix_cnt + 1;
		end
		
		if (x_out_span==endx_bc && y_out_span==endy_bc) begin
			fb0_we <= 1'b0;
			cmd_state <= 3;
		end
		
		fb0_addr <= {y_out_span, x_out_span};
		*/
		
		sp_addr <= {CMDSRCA,2'b00}+( (tex_line_cnt*char_size_x)+tex_pix_cnt );	// bits shifted left by 2 bits, to give the WORD address!
		if (tex_pix_cnt==char_size_x) begin
			tex_pix_cnt <= 0;
			tex_line_cnt <= tex_line_cnt + 1;
		end
		else tex_pix_cnt <= tex_pix_cnt + 1;
		//fb0_dout <= 16'h7FFF;	// White.
		fb0_dout <= sp_dout;

		fb0_addr <= {y_out_ad, x_out_ad};
		fb0_we <= 1'b1;
		
		//if (CMDCTRL[3:0]==4'b0010) fb0_dout <= 16'h7C00;	// Blue. (distorted sprite)
						 //else fb0_dout <= 16'h001F;	// Red.  (non-textured poly)
		
		if (!busy_ad) begin
			//fb0_we <= 1'b0;
			go_bc <= 1'b1;
			cmd_state <= cmd_state + 1;
		end
	end
	
	8: begin
		cmd_state <= cmd_state + 1;
	end
	
	9: begin
		sp_addr <= {CMDSRCA,2'b00}+( (tex_line_cnt*char_size_x)+tex_pix_cnt );	// bits shifted left by 2 bits, to give the WORD address!
		if (tex_pix_cnt==char_size_x) begin
			tex_pix_cnt <= 0;
			tex_line_cnt <= tex_line_cnt + 1;
		end
		else tex_pix_cnt <= tex_pix_cnt + 1;
		//fb0_dout <= 16'h7FFF;	// White.
		//fb0_dout <= sp_dout;
		
		fb0_dout <= CMDCOLR;
	
		fb0_addr <= {y_out_bc, x_out_bc};
		//if (CMDCTRL[3:0]==4'b0010) fb0_dout <= 16'h03FF;	// Yellow. (distorted sprite)
						 //else fb0_dout <= 16'h03E0;	// Green.  (non-textured poly)
		
		if (!busy_bc) begin
			fb0_we <= 1'b0;
			cmd_state <= 3;
		end
	end
	
	default: ;
	endcase
end

wire span_at_bc = x_out_span==x_out_bc && y_out_span==y_out_bc;
wire span_at_ad = x_out_span==x_out_ad && y_out_span==y_out_ad;

wire [7:0] tex_u_width = 8'd32;
reg [31:0] tex_u_inc;
reg [31:0] tex_u_accum;
wire [15:0] tex_u_out = tex_u_accum[31:16];

wire [7:0] tex_v_height = 8'd32;
reg [31:0] tex_v_inc;
reg [31:0] tex_v_accum;
wire [15:0] tex_v_out = tex_v_accum[31:16];


// deltax is x0-x1.
// deltax is y0-y1.
//
// So we're doing (a^a)+(b^b) = c^
// 
// We should then get the result of the sqrt of c^ on sqrt_res when the sqrt_done bit pulses high. ElectronAsh.
// (takes around 20 clock cycles from the time of pulsing sqrt_go high.)
wire [19:0] sqrt_in = (deltax_ad*deltax_ad) + (deltax_bc*deltay_bc);
//wire [19:0] sqrt_in = 20'd1296;

sqrt sqrt_inst(
	.clk( clock ),
	.reset_n( reset_n ),

	.op_in( sqrt_in ),
	
//	.go( 1'b1 ),
	.go( cmd_state==6 ),
	
	.res( sqrt_res ),
	.done( sqrt_done )
);
(*keep*) wire [9:0] sqrt_res;
(*keep*) wire sqrt_done;


wire [8:0] deltax_ad;
wire [8:0] deltay_ad;
wire [8:0] x_out_ad;
wire [8:0] y_out_ad;
wire [8:0] length_ad;
reg clock_ad;

reg go_ad;

wire [8:0] stax_ad = CMDXA + local_x;
wire [8:0] stay_ad = CMDYA + local_y;
wire [8:0] endx_ad = CMDXD + local_x;
wire [8:0] endy_ad = CMDYD + local_y;

//wire [8:0] stax_ad = 8'd132;
//wire [8:0] stay_ad = 8'd32;
//wire [8:0] endx_ad = 8'd132;
//wire [8:0] endy_ad = 8'd64;
wire busy_ad;
linedraw linedraw_side_ad (
	.reset_n( reset_n ),

	//.pclk( clock_ad ),
	.pclk( clock ),
		
	.stax( stax_ad ),
	.stay( stay_ad ),
	
	.endx( endx_ad ),
	.endy( endy_ad ),
	
	.deltax( deltax_ad ),
	.deltay( deltay_ad ),
	
	.length( length_ad ),
	
	//.go( cmd_state==7 ),
	.go( go_ad ),
	.busy( busy_ad ),
	
	.x_out( x_out_ad ),
	.y_out( y_out_ad )
);


wire [8:0] deltax_bc;
wire [8:0] deltay_bc;
wire [8:0] x_out_bc;
wire [8:0] y_out_bc;
wire [8:0] length_bc;
reg clock_bc;

reg go_bc;

wire [8:0] stax_bc = CMDXB + local_x;
wire [8:0] stay_bc = CMDYB + local_y;
wire [8:0] endx_bc = CMDXC + local_x;
wire [8:0] endy_bc = CMDYC + local_y;

//wire [8:0] stax_bc = 8'd164;
//wire [8:0] stay_bc = 8'd32;
//wire [8:0] endx_bc = 8'd164;
//wire [8:0] endy_bc = 8'd64;
wire busy_bc;
linedraw linedraw_side_bc (
	.reset_n( reset_n ),

	//.pclk( clock_bc ),
	.pclk( clock ),
	
	.stax( stax_bc ),
	.stay( stay_bc ),
	
	.endx( endx_bc ),
	.endy( endy_bc ),
	
	.deltax( deltax_bc ),
	.deltay( deltay_bc ),
	
	.length( length_bc ),
	
	//.go( cmd_state==7 ),
	.go( go_bc ),
	.busy( busy_bc ),
	
	.x_out( x_out_bc ),
	.y_out( y_out_bc )
);


wire [8:0] deltax_span;
wire [8:0] deltay_span;
wire [8:0] x_out_span;
wire [8:0] y_out_span;
wire [8:0] length_span;
reg go_span;
wire busy_span;
linedraw linedraw_span (
	.reset_n( reset_n ),

	.pclk( clock ),
	
	.stax( x_out_ad ),
	.stay( y_out_ad ),
	
	.endx( x_out_bc ),
	.endy( y_out_bc ),
	
	.deltax( deltax_span ),
	.deltay( deltay_span ),
	
	.length( length_span ),
	
	.go( go_span ),
	.busy( busy_span ),
	
	.x_out( x_out_span ),
	.y_out( y_out_span )
);

//assign fb0_addr = {y_out_ad, x_out_ad};
//assign fb0_addr = {y_out_bc, x_out_bc};

//assign fb0_addr = {y_out_span, x_out_span};
//assign fb0_we = 1'b1;
//assign fb0_dout = 16'hFFFF;

endmodule


module linedraw (
	input wire reset_n,

	input wire pclk,

	input wire go,
	output wire busy,
	input wire [8:0] stax,
	input wire [8:0] stay,
	input wire [8:0] endx,
	input wire [8:0] endy,
	
	output wire signed [8:0] deltax,
	output wire signed [8:0] deltay,
	
	output wire [8:0] length,
	
	output wire [8:0] x_out,
	output wire [8:0] y_out	
);

parameter [1:0] IDLE = 2'd0;
parameter [1:0] RUN = 2'd1;
parameter [1:0] DONE = 2'd2;

reg [1:0] state;
reg signed [8:0] err;
reg signed [8:0] x, y;
wire signed [8:0] dx, dy, x0, x1, y0, y1, next_x, next_y, xa, ya, xb, yb;
wire signed [9:0] err_next, err1, err2, e2;

wire  in_loop, right, down, complete, e2_lt_dx, e2_gt_dy;

assign length = (deltax>deltay) ? deltax : deltay;

//FSM
always @ (posedge pclk or negedge reset_n)
if (!reset_n) begin
	state <= IDLE;
	x=0;
	y=0;
end
else begin
  case (state)
    IDLE : if (go)
             state <= RUN;
           else
             state <= IDLE;

    RUN : if (complete)
             //state   <= DONE;
			 state   <= IDLE;
          else
             state   <= RUN;

	/*
    DONE : if (go)
             state <= RUN;
           else
             state <= IDLE;
			*/

    default : state <= IDLE;
  endcase
 end


//Line Drawing Algorithm

//Data Path for dx, dy, right, down
assign x0 =  stax;
assign x1 =  endx;
assign deltax = x1 - x0;
assign right = ~(deltax[8]);
assign dx = (!right) ? (-deltax) : (deltax);

assign y0 = stay;
assign y1 = endy;
assign deltay = y1 - y0;
assign down = ~(deltay[8]);
assign dy = (down) ? (-deltay) : (deltay);

//Data Path for Error

assign e2 = err << 1;
assign e2_gt_dy = (e2 > dy) ? 1 : 0;
assign e2_lt_dx = (e2 < dx) ? 1 : 0;
assign err1 = e2_gt_dy ? (err + dy) : err;
assign err2 = e2_lt_dx ? (err1 + dx) : err1;
assign err_next = (in_loop) ? err2 : (dx + dy);
assign in_loop = (state == RUN);

//Data Path for X and Y
assign next_x = (in_loop) ? xb : x0;
assign xb = e2_gt_dy ? xa : x;
assign xa = right ? (x + 1) : (x - 1);

assign next_y = (in_loop) ? yb : y0;
assign yb = e2_lt_dx ? ya : y;
assign ya = down ? (y + 1) : (y - 1);

assign complete = ( (x == x1) && (y == y1) );

always @(posedge pclk)
 begin
    err <= err_next;
    x <= next_x;
    y <= next_y;
 end

assign busy = in_loop;
assign x_out = x;
assign y_out = y;


endmodule

/*
int sqrt(int x)
{
	register int op, res, one;

	op = x;
	res = 0;

	// "one" starts at the highest power of four <= than the argument.

	one = 1 << 30;	// second-to-top bit set
	while (one > op) {
		printf("one: 0x%08X\n", one);
		one >>= 2;
	}
	
	printf("\n");

	while (one != 0) {
		printf("one: 0x%08X  op: %d  res: %d\n", one, op, res);
		
		if (op >= res + one) {
			op = op - (res + one);
			res = res +  2 * one;
		}
		res /= 2;
		one /= 4;
	}
	printf("result: %d\n", res);
	
	return(res);
}
*/


module sqrt(
	input clk,
	input reset_n,

	input signed [19:0] op_in,
	input go,
	
	output reg signed [19:0] res,
	output reg done
);

reg [3:0] state;

reg signed [20:0] one;
reg signed [19:0] op;


always @(posedge clk or negedge reset_n)
if (!reset_n) begin
	state <= 4'd0;
end
else begin
	done <= 1'b0;

	case (state)
		0: if (go) begin
			one <= 21'h100000;
			if (21'h100000 > op_in) one <= 21'h40000;
			else if (21'h40000 > op_in) one <= 21'h10000; 
			else if (21'h10000 > op_in) one <= 21'h4000;
			else if (21'h4000 > op_in) one <= 21'h1000;
			else if (21'h1000 > op_in) one <= 21'h400;
			else if (21'h400 > op_in) one <= 21'h100;
			else if (21'h100 > op_in) one <= 21'h40;
			else if (21'h40 > op_in) one <= 21'h10;
			else if (21'h10 > op_in) one <= 21'h4;
			else if (21'h4 > op_in) one <= 21'h1;
			else one <= 21'h0;

			op <= op_in;
			state <= 1;
		end

		1: begin
			if (one != 0) begin
				if (op >= res + one) begin
					op <= op - (res + one);
					res <= res + (2 * one);
				end
				one <= one>>2;	// divide by 4.
				state <= state + 1;
			end
			else begin
				done <= 1'b1;
				state <= 0;
			end
		end

		2: begin
			res <= res>>1;	// divide by 2.
			state <= 1;		// Jump back.
		end
		
		default:;
	endcase
	
end


endmodule
