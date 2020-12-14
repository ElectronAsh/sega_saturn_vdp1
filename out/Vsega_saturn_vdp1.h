// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSEGA_SATURN_VDP1_H_
#define _VSEGA_SATURN_VDP1_H_  // guard

#include "verilated.h"

//==========

class Vsega_saturn_vdp1__Syms;

//----------

VL_MODULE(Vsega_saturn_vdp1) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset_n,0,0);
    VL_OUT8(fb_sel,0,0);
    VL_OUT8(fb0_we,0,0);
    VL_OUT8(fb1_we,0,0);
    VL_OUT8(sp_we,0,0);
    VL_IN16(fb0_din,15,0);
    VL_OUT16(fb0_dout,15,0);
    VL_IN16(fb1_din,15,0);
    VL_OUT16(fb1_dout,15,0);
    VL_OUT16(sp_din,15,0);
    VL_OUT16(vo,15,0);
    VL_OUT(gaddr,19,0);
    VL_OUT(fb0_addr,16,0);
    VL_OUT(fb1_addr,16,0);
    VL_OUT(sp_addr,17,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ sega_saturn_vdp1__DOT__clock;
    CData/*0:0*/ sega_saturn_vdp1__DOT__reset_n;
    CData/*0:0*/ sega_saturn_vdp1__DOT__fb_sel;
    CData/*0:0*/ sega_saturn_vdp1__DOT__fb0_we;
    CData/*0:0*/ sega_saturn_vdp1__DOT__fb1_we;
    CData/*0:0*/ sega_saturn_vdp1__DOT__sp_we;
    CData/*0:0*/ sega_saturn_vdp1__DOT__draw_running;
    CData/*7:0*/ sega_saturn_vdp1__DOT__cmd_state;
    CData/*0:0*/ sega_saturn_vdp1__DOT__toggle;
    CData/*7:0*/ sega_saturn_vdp1__DOT__tex_line_cnt;
    CData/*7:0*/ sega_saturn_vdp1__DOT__char_size_y;
    CData/*0:0*/ sega_saturn_vdp1__DOT__span_at_bc;
    CData/*0:0*/ sega_saturn_vdp1__DOT__span_at_ad;
    CData/*7:0*/ sega_saturn_vdp1__DOT__tex_u_width;
    CData/*7:0*/ sega_saturn_vdp1__DOT__tex_v_height;
    CData/*0:0*/ sega_saturn_vdp1__DOT__sqrt_done;
    CData/*0:0*/ sega_saturn_vdp1__DOT__clock_ad;
    CData/*0:0*/ sega_saturn_vdp1__DOT__go_ad;
    CData/*0:0*/ sega_saturn_vdp1__DOT__busy_ad;
    CData/*0:0*/ sega_saturn_vdp1__DOT__clock_bc;
    CData/*0:0*/ sega_saturn_vdp1__DOT__go_bc;
    CData/*0:0*/ sega_saturn_vdp1__DOT__busy_bc;
    CData/*0:0*/ sega_saturn_vdp1__DOT__go_span;
    CData/*0:0*/ sega_saturn_vdp1__DOT__busy_span;
    CData/*0:0*/ sega_saturn_vdp1__DOT__sqrt_inst__DOT__clk;
    CData/*0:0*/ sega_saturn_vdp1__DOT__sqrt_inst__DOT__reset_n;
    CData/*0:0*/ sega_saturn_vdp1__DOT__sqrt_inst__DOT__go;
    CData/*0:0*/ sega_saturn_vdp1__DOT__sqrt_inst__DOT__done;
    CData/*3:0*/ sega_saturn_vdp1__DOT__sqrt_inst__DOT__state;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__reset_n;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__pclk;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__go;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__busy;
    CData/*1:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__state;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__in_loop;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__right;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__down;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__complete;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_lt_dx;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_gt_dy;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__reset_n;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__pclk;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__go;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__busy;
    CData/*1:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__state;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__in_loop;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__right;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__down;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__complete;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_lt_dx;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_gt_dy;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__reset_n;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__pclk;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__go;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__busy;
    CData/*1:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__state;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__in_loop;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__right;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__down;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__complete;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_lt_dx;
    CData/*0:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_gt_dy;
    SData/*15:0*/ sega_saturn_vdp1__DOT__fb0_din;
    SData/*15:0*/ sega_saturn_vdp1__DOT__fb0_dout;
    SData/*15:0*/ sega_saturn_vdp1__DOT__fb1_din;
    SData/*15:0*/ sega_saturn_vdp1__DOT__fb1_dout;
    SData/*15:0*/ sega_saturn_vdp1__DOT__sp_din;
    SData/*15:0*/ sega_saturn_vdp1__DOT__vo;
    SData/*15:0*/ sega_saturn_vdp1__DOT__sp_dout;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDCTRL;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDLINK;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDPMOD;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDCOLR;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDSRCA;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDSIZE;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDXA;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDYA;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDXB;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDYB;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDXC;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDYC;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDXD;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDYD;
    SData/*15:0*/ sega_saturn_vdp1__DOT__CMDGRDA;
    SData/*15:0*/ sega_saturn_vdp1__DOT__local_x;
    SData/*15:0*/ sega_saturn_vdp1__DOT__local_y;
    SData/*15:0*/ sega_saturn_vdp1__DOT__table_index;
    SData/*8:0*/ sega_saturn_vdp1__DOT__tex_pix_cnt;
    SData/*8:0*/ sega_saturn_vdp1__DOT__char_size_x;
    SData/*15:0*/ sega_saturn_vdp1__DOT__tex_u_out;
    SData/*15:0*/ sega_saturn_vdp1__DOT__tex_v_out;
    SData/*9:0*/ sega_saturn_vdp1__DOT__sqrt_res;
    SData/*8:0*/ sega_saturn_vdp1__DOT__deltax_ad;
    SData/*8:0*/ sega_saturn_vdp1__DOT__deltay_ad;
    SData/*8:0*/ sega_saturn_vdp1__DOT__x_out_ad;
    SData/*8:0*/ sega_saturn_vdp1__DOT__y_out_ad;
    SData/*8:0*/ sega_saturn_vdp1__DOT__length_ad;
    SData/*8:0*/ sega_saturn_vdp1__DOT__stax_ad;
    SData/*8:0*/ sega_saturn_vdp1__DOT__stay_ad;
    SData/*8:0*/ sega_saturn_vdp1__DOT__endx_ad;
    SData/*8:0*/ sega_saturn_vdp1__DOT__endy_ad;
    SData/*8:0*/ sega_saturn_vdp1__DOT__deltax_bc;
    SData/*8:0*/ sega_saturn_vdp1__DOT__deltay_bc;
    SData/*8:0*/ sega_saturn_vdp1__DOT__x_out_bc;
    SData/*8:0*/ sega_saturn_vdp1__DOT__y_out_bc;
    SData/*8:0*/ sega_saturn_vdp1__DOT__length_bc;
    SData/*8:0*/ sega_saturn_vdp1__DOT__stax_bc;
    SData/*8:0*/ sega_saturn_vdp1__DOT__stay_bc;
    SData/*8:0*/ sega_saturn_vdp1__DOT__endx_bc;
    SData/*8:0*/ sega_saturn_vdp1__DOT__endy_bc;
    SData/*8:0*/ sega_saturn_vdp1__DOT__deltax_span;
    SData/*8:0*/ sega_saturn_vdp1__DOT__deltay_span;
    SData/*8:0*/ sega_saturn_vdp1__DOT__x_out_span;
    SData/*8:0*/ sega_saturn_vdp1__DOT__y_out_span;
    SData/*8:0*/ sega_saturn_vdp1__DOT__length_span;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__stax;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__stay;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__endx;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__endy;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__deltax;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__deltay;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__length;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x_out;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y_out;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dx;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dy;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x0;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x1;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y0;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y1;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__next_x;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__next_y;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__xa;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__ya;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__xb;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__yb;
    SData/*9:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err_next;
    SData/*9:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err1;
    SData/*9:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err2;
    SData/*9:0*/ sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__stax;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__stay;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__endx;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__endy;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__deltax;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__deltay;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__length;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x_out;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y_out;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dx;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dy;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x0;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x1;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y0;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y1;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__next_x;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__next_y;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__xa;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__ya;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__xb;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__yb;
    SData/*9:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err_next;
    SData/*9:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err1;
    SData/*9:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err2;
    SData/*9:0*/ sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__stax;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__stay;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__endx;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__endy;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__deltax;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__deltay;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__length;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__x_out;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__y_out;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__err;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__x;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__y;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__dx;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__dy;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__x0;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__x1;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__y0;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__y1;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__next_x;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__next_y;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__xa;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__ya;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__xb;
    SData/*8:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__yb;
    SData/*9:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__err_next;
    SData/*9:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__err1;
    SData/*9:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__err2;
    SData/*9:0*/ sega_saturn_vdp1__DOT__linedraw_span__DOT__e2;
    IData/*19:0*/ sega_saturn_vdp1__DOT__gaddr;
    IData/*16:0*/ sega_saturn_vdp1__DOT__fb0_addr;
    IData/*16:0*/ sega_saturn_vdp1__DOT__fb1_addr;
    IData/*17:0*/ sega_saturn_vdp1__DOT__sp_addr;
    IData/*31:0*/ sega_saturn_vdp1__DOT__gdata;
    IData/*18:0*/ sega_saturn_vdp1__DOT__char_addr_byte;
    IData/*31:0*/ sega_saturn_vdp1__DOT__tex_u_inc;
    IData/*31:0*/ sega_saturn_vdp1__DOT__tex_u_accum;
    IData/*31:0*/ sega_saturn_vdp1__DOT__tex_v_inc;
    IData/*31:0*/ sega_saturn_vdp1__DOT__tex_v_accum;
    IData/*19:0*/ sega_saturn_vdp1__DOT__sqrt_in;
    IData/*19:0*/ sega_saturn_vdp1__DOT__sqrt_inst__DOT__op_in;
    IData/*19:0*/ sega_saturn_vdp1__DOT__sqrt_inst__DOT__res;
    IData/*20:0*/ sega_saturn_vdp1__DOT__sqrt_inst__DOT__one;
    IData/*19:0*/ sega_saturn_vdp1__DOT__sqrt_inst__DOT__op;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vclklast__TOP__reset_n;
    IData/*19:0*/ sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vsega_saturn_vdp1__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    enum _IDatasega_saturn_vdp1__DOT__linedraw_side_ad__DOT__IDLE { sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__IDLE = 0U};
    enum _IDatasega_saturn_vdp1__DOT__linedraw_side_ad__DOT__RUN { sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__RUN = 1U};
    enum _IDatasega_saturn_vdp1__DOT__linedraw_side_ad__DOT__DONE { sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__DONE = 2U};
    enum _IDatasega_saturn_vdp1__DOT__linedraw_side_bc__DOT__IDLE { sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__IDLE = 0U};
    enum _IDatasega_saturn_vdp1__DOT__linedraw_side_bc__DOT__RUN { sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__RUN = 1U};
    enum _IDatasega_saturn_vdp1__DOT__linedraw_side_bc__DOT__DONE { sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__DONE = 2U};
    enum _IDatasega_saturn_vdp1__DOT__linedraw_span__DOT__IDLE { sega_saturn_vdp1__DOT__linedraw_span__DOT__IDLE = 0U};
    enum _IDatasega_saturn_vdp1__DOT__linedraw_span__DOT__RUN { sega_saturn_vdp1__DOT__linedraw_span__DOT__RUN = 1U};
    enum _IDatasega_saturn_vdp1__DOT__linedraw_span__DOT__DONE { sega_saturn_vdp1__DOT__linedraw_span__DOT__DONE = 2U};
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsega_saturn_vdp1);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vsega_saturn_vdp1(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vsega_saturn_vdp1();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vsega_saturn_vdp1__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vsega_saturn_vdp1__Syms* symsp, bool first);
  private:
    static QData _change_request(Vsega_saturn_vdp1__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vsega_saturn_vdp1__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vsega_saturn_vdp1__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__2(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vsega_saturn_vdp1__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vsega_saturn_vdp1__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vsega_saturn_vdp1__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__6(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
