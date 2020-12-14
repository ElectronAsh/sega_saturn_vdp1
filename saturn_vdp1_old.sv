module saturn_vdp1(
	input MCLK,			// MCLK1
	input RESET_N,		// SYSRES

	// B-Bus...
	input CS_N,			// BCS1
	input AD_N,			// BADDT
	input DTE_N,		// BDTEN
	output IRQ1_N,		// IRQ1
	output READY_N,		// BRDY1
	inout [15:0] VBUS,	// BD[15:0]
	
	// VRAM SDRAM...
	output VCS_N,		// VCS
	output VWE_N,		// VWE
	output VRAS_N,		// VRAS
	output VCAS_N,		// VCAS
	output VLDQM_N,		// VLDQM
	output VUDQM_N,		// VUDQM
	output VCLK,		// VCLK
	output [9:0] VRAMA,	// VRA[9:0]
	inout [15:0] VRAMD,	// VRD[15:0]
	
	// Framebuffer 0 SDRAM...
	output F0CS_N,		// F0CS
	output F0WE_N,		// F0WE
	output F0RAS_N,		// F0RAS
	output F0CAS_N,		// F0CAS
	output F0LDQM_N,	// F0LDQM
	output F0UDQM_N,	// F0UDQM
	output F0CLK,		// F0CLK
	output [9:0] F0A,	// F0A[9:0]
	inout [15:0] F0D,	// F0D[15:0]
	
	// Framebuffer 1 SDRAM...
	output F1CS_N,		// F1CS
	output F1WE_N,		// F1WE
	output F1RAS_N,		// F1RAS
	output F1CAS_N,		// F1CAS
	output F1LDQM_N,	// F1LDQM
	output F1UDQM_N,	// F1UDQM
	output F1CLK,		// F1CLK
	output [9:0] F1A,	// F1A[9:0]
	inout [15:0] F1D,	// F1D[15:0]
	
	// Pixel Bus output...
	output HTIM_N,		// HTIM
	output VTIM_N,		// VTIM
	output V2CLK,		// nc
	output [7:0] VOUT	// FBD[7:0]
);

// 0x05C00000. VDP1 VRAM.
// 0x05C80000. VDP1 Framebuffer.

logic [3:0] TVMR;	// TV Mode Reg.				0x05D00000. Write-only.
logic VBE = TVMR[3];
logic [2:0] TVM = TVMR[2:0];

logic [4:0] FBCR;	// Framebuffer Control.		0x05D00002. Write-only.
logic EOS = FBCR[4];
logic DIE = FBCR[3];
logic DIL = FBCR[2];
logic FCM = FBCR[1];
logic FCT = FBCR[0];

logic [1:0] PTMR;	// Plot Trigger reg.		0x05D00004. Write-only.

// EWDR holds a 16-bit value which is written to the framebuffer. This can
// be a palette index or RGB code. Normally this would be zero, but you can
// use it to fill the framebuffer with a particular color.
//
logic [15:0] EWDR;	// Erase/write colour.		0x05D00006. Write-only.

//  EWLR and EWRR define the upper left and lower right points, respectively,
//  of a rectangle within the framebuffer to be erased. They both have the
//  following layout:
// 
//  MSB          LSB
//  xxxxxxxyyyyyyyyy : EWLR and EWRR
// 
//  x = X coordinate ($00-$7F)
//  y = Y coordinate ($000-$1FF)
// 
// [15:9]=X coord. The X coordinate is in units of EIGHT pixels.
// [8:0] =Y coord. The Y coordinate is in units of single lines.
// 
logic [15:0] EWLR;	// Erase/write upper-left.	0x05D00008. Write-only.
logic [15:0] EWRR;	// Erase/write lower-right.	0x05D0000A. Write-only.

logic [15:0] ENDR;	// Force Draw end.			0x05D0000C. Write-only.

logic [1:0] EDSR;	// Transfer End status.		0x05D0000E. Read-only.
logic [15:0] LOPR;	// Last cmd table entry.	0x05D00010. Read-only.
logic [15:0] COPR;	// Curr cmd table entry.	0x05D00012. Read-only.

logic [15:0] MODR;	// Mode Status.				0x05D00014. Read-only.
assign MODR[15:12] = 4'b0001;
assign MODR[8] = PTMR[1];
assign MODR[7] = EOS;
assign MODR[6] = DIE;
assign MODR[5] = DIL;
assign MODR[4] = FCM;
assign MODR[3] = VBE;
assign MODR[2:0] = TVM;














endmodule
