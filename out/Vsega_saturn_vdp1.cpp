// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsega_saturn_vdp1.h for the primary calling header

#include "Vsega_saturn_vdp1.h"
#include "Vsega_saturn_vdp1__Syms.h"

//==========

VL_CTOR_IMP(Vsega_saturn_vdp1) {
    Vsega_saturn_vdp1__Syms* __restrict vlSymsp = __VlSymsp = new Vsega_saturn_vdp1__Syms(this, name());
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vsega_saturn_vdp1::__Vconfigure(Vsega_saturn_vdp1__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vsega_saturn_vdp1::~Vsega_saturn_vdp1() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Vsega_saturn_vdp1::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsega_saturn_vdp1::eval\n"); );
    Vsega_saturn_vdp1__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 2000)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("sega_saturn_vdp1.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsega_saturn_vdp1::_eval_initial_loop(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 2000)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("sega_saturn_vdp1.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsega_saturn_vdp1::_settle__TOP__1(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::_settle__TOP__1\n"); );
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sega_saturn_vdp1__DOT__gaddr = vlTOPp->gaddr;
    vlTOPp->sega_saturn_vdp1__DOT__fb1_addr = vlTOPp->fb1_addr;
    vlTOPp->sega_saturn_vdp1__DOT__fb1_dout = vlTOPp->fb1_dout;
    vlTOPp->sega_saturn_vdp1__DOT__sp_din = vlTOPp->sp_din;
    vlTOPp->sega_saturn_vdp1__DOT__sp_we = vlTOPp->sp_we;
    vlTOPp->sega_saturn_vdp1__DOT__vo = vlTOPp->vo;
    vlTOPp->sega_saturn_vdp1__DOT__fb0_din = vlTOPp->fb0_din;
    vlTOPp->sega_saturn_vdp1__DOT__fb1_din = vlTOPp->fb1_din;
    vlTOPp->sega_saturn_vdp1__DOT__clock = vlTOPp->clock;
    vlTOPp->sega_saturn_vdp1__DOT__reset_n = vlTOPp->reset_n;
    vlTOPp->sega_saturn_vdp1__DOT__fb1_we = vlTOPp->fb1_we;
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_res = (0x3ffU 
                                               & vlTOPp->sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res);
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__res 
        = vlTOPp->sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res;
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__done 
        = vlTOPp->sega_saturn_vdp1__DOT__sqrt_done;
    vlTOPp->sega_saturn_vdp1__DOT__x_out_span = vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x;
    vlTOPp->sega_saturn_vdp1__DOT__y_out_span = vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__in_loop 
        = (1U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__state));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__in_loop 
        = (1U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__state));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__in_loop 
        = (1U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__state));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2 
        = (0x3ffU & (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err)) 
                     << 1U));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2 
        = (0x3ffU & (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err)) 
                     << 1U));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2 
        = (0x3ffU & (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err)) 
                     << 1U));
    vlTOPp->sega_saturn_vdp1__DOT__x_out_ad = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x;
    vlTOPp->sega_saturn_vdp1__DOT__x_out_bc = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x;
    vlTOPp->sega_saturn_vdp1__DOT__y_out_ad = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y;
    vlTOPp->sega_saturn_vdp1__DOT__y_out_bc = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y;
    vlTOPp->sega_saturn_vdp1__DOT__fb0_addr = vlTOPp->fb0_addr;
    vlTOPp->sega_saturn_vdp1__DOT__fb0_dout = vlTOPp->fb0_dout;
    vlTOPp->sega_saturn_vdp1__DOT__fb0_we = vlTOPp->fb0_we;
    vlTOPp->sega_saturn_vdp1__DOT__sp_addr = vlTOPp->sp_addr;
    vlTOPp->sega_saturn_vdp1__DOT__char_size_x = (0x1f8U 
                                                  & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDSIZE) 
                                                     >> 5U));
    vlTOPp->sega_saturn_vdp1__DOT__char_size_y = (0xffU 
                                                  & (IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDSIZE));
    vlTOPp->sega_saturn_vdp1__DOT__char_addr_byte = 
        ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDSRCA) 
         << 3U);
    vlTOPp->sega_saturn_vdp1__DOT__tex_u_out = (0xffffU 
                                                & (vlTOPp->sega_saturn_vdp1__DOT__tex_u_accum 
                                                   >> 0x10U));
    vlTOPp->sega_saturn_vdp1__DOT__tex_v_out = (0xffffU 
                                                & (vlTOPp->sega_saturn_vdp1__DOT__tex_v_accum 
                                                   >> 0x10U));
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__go 
        = (6U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__go 
        = vlTOPp->sega_saturn_vdp1__DOT__go_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__go 
        = vlTOPp->sega_saturn_vdp1__DOT__go_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__go 
        = vlTOPp->sega_saturn_vdp1__DOT__go_span;
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__clk 
        = vlTOPp->sega_saturn_vdp1__DOT__clock;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__pclk 
        = vlTOPp->sega_saturn_vdp1__DOT__clock;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__pclk 
        = vlTOPp->sega_saturn_vdp1__DOT__clock;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__pclk 
        = vlTOPp->sega_saturn_vdp1__DOT__clock;
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__reset_n 
        = vlTOPp->sega_saturn_vdp1__DOT__reset_n;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__reset_n 
        = vlTOPp->sega_saturn_vdp1__DOT__reset_n;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__reset_n 
        = vlTOPp->sega_saturn_vdp1__DOT__reset_n;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__reset_n 
        = vlTOPp->sega_saturn_vdp1__DOT__reset_n;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x_out 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_span;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y_out 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_span;
    vlTOPp->sega_saturn_vdp1__DOT__busy_ad = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__in_loop;
    vlTOPp->sega_saturn_vdp1__DOT__busy_bc = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__in_loop;
    vlTOPp->sega_saturn_vdp1__DOT__busy_span = vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__in_loop;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x_out 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__stax 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x0 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x_out 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__endx 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x1 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y_out 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__stay 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_ad;
    vlTOPp->sega_saturn_vdp1__DOT__span_at_ad = (((IData)(vlTOPp->sega_saturn_vdp1__DOT__x_out_span) 
                                                  == (IData)(vlTOPp->sega_saturn_vdp1__DOT__x_out_ad)) 
                                                 & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__y_out_span) 
                                                    == (IData)(vlTOPp->sega_saturn_vdp1__DOT__y_out_ad)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y0 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y_out 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__endy 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_bc;
    vlTOPp->sega_saturn_vdp1__DOT__span_at_bc = (((IData)(vlTOPp->sega_saturn_vdp1__DOT__x_out_span) 
                                                  == (IData)(vlTOPp->sega_saturn_vdp1__DOT__x_out_bc)) 
                                                 & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__y_out_span) 
                                                    == (IData)(vlTOPp->sega_saturn_vdp1__DOT__y_out_bc)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y1 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__busy 
        = vlTOPp->sega_saturn_vdp1__DOT__busy_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__busy 
        = vlTOPp->sega_saturn_vdp1__DOT__busy_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__busy 
        = vlTOPp->sega_saturn_vdp1__DOT__busy_span;
    vlTOPp->sega_saturn_vdp1__DOT__deltax_span = (0x1ffU 
                                                  & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x1) 
                                                     - (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x0)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__complete 
        = (((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x) 
            == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x1)) 
           & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y) 
              == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y1)));
    vlTOPp->sega_saturn_vdp1__DOT__deltay_span = (0x1ffU 
                                                  & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y1) 
                                                     - (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y0)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__deltax 
        = vlTOPp->sega_saturn_vdp1__DOT__deltax_span;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__right 
        = (1U & (~ ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_span) 
                    >> 8U)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__deltay 
        = vlTOPp->sega_saturn_vdp1__DOT__deltay_span;
    vlTOPp->sega_saturn_vdp1__DOT__length_span = (VL_GTS_III(1,9,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_span), (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_span))
                                                   ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_span)
                                                   : (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_span));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__down 
        = (1U & (~ ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_span) 
                    >> 8U)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__xa 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__right)
                      ? ((IData)(1U) + VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x)))
                      : (VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x)) 
                         - (IData)(1U))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dx 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__right)
                      ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_span)
                      : VL_NEGATE_I((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_span))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__length 
        = vlTOPp->sega_saturn_vdp1__DOT__length_span;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__ya 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__down)
                      ? ((IData)(1U) + VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y)))
                      : (VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y)) 
                         - (IData)(1U))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dy 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__down)
                      ? VL_NEGATE_I((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_span))
                      : (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_span)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_lt_dx 
        = (VL_LTS_III(1,10,10, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2), 
                      (0x3ffU & VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dx))))
            ? 1U : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_gt_dy 
        = (VL_GTS_III(1,10,10, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2), 
                      (0x3ffU & VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dy))))
            ? 1U : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__yb 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_lt_dx)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__ya)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__xb 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_gt_dy)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__xa)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err1 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_gt_dy)
                      ? (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dy)))
                      : VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__next_y 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__in_loop)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__yb)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y0));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__next_x 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__in_loop)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__xb)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x0));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err2 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_lt_dx)
                      ? ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err1) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dx)))
                      : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err1)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err_next 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__in_loop)
                      ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err2)
                      : (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dx)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dy)))));
}

void Vsega_saturn_vdp1::_initial__TOP__2(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::_initial__TOP__2\n"); );
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->fb_sel = 0U;
    vlTOPp->sega_saturn_vdp1__DOT__local_x = 0xff9cU;
    vlTOPp->sega_saturn_vdp1__DOT__local_y = 0xfe70U;
    vlTOPp->sega_saturn_vdp1__DOT__tex_u_width = 0x20U;
    vlTOPp->sega_saturn_vdp1__DOT__tex_v_height = 0x20U;
    vlTOPp->sega_saturn_vdp1__DOT__fb_sel = vlTOPp->fb_sel;
}

VL_INLINE_OPT void Vsega_saturn_vdp1::_combo__TOP__3(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::_combo__TOP__3\n"); );
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sega_saturn_vdp1__DOT__fb0_din = vlTOPp->fb0_din;
    vlTOPp->sega_saturn_vdp1__DOT__fb1_din = vlTOPp->fb1_din;
    vlTOPp->sega_saturn_vdp1__DOT__clock = vlTOPp->clock;
    vlTOPp->sega_saturn_vdp1__DOT__reset_n = vlTOPp->reset_n;
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__clk 
        = vlTOPp->sega_saturn_vdp1__DOT__clock;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__pclk 
        = vlTOPp->sega_saturn_vdp1__DOT__clock;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__pclk 
        = vlTOPp->sega_saturn_vdp1__DOT__clock;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__pclk 
        = vlTOPp->sega_saturn_vdp1__DOT__clock;
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__reset_n 
        = vlTOPp->sega_saturn_vdp1__DOT__reset_n;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__reset_n 
        = vlTOPp->sega_saturn_vdp1__DOT__reset_n;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__reset_n 
        = vlTOPp->sega_saturn_vdp1__DOT__reset_n;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__reset_n 
        = vlTOPp->sega_saturn_vdp1__DOT__reset_n;
}

VL_INLINE_OPT void Vsega_saturn_vdp1::_sequent__TOP__4(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::_sequent__TOP__4\n"); );
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdly__sega_saturn_vdp1__DOT__cmd_state;
    CData/*7:0*/ __Vdly__sega_saturn_vdp1__DOT__tex_line_cnt;
    CData/*3:0*/ __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__state;
    SData/*15:0*/ __Vdly__sega_saturn_vdp1__DOT__table_index;
    SData/*15:0*/ __Vdly__sega_saturn_vdp1__DOT__CMDYA;
    SData/*15:0*/ __Vdly__sega_saturn_vdp1__DOT__CMDXA;
    SData/*15:0*/ __Vdly__sega_saturn_vdp1__DOT__CMDSRCA;
    SData/*15:0*/ __Vdly__sega_saturn_vdp1__DOT__CMDCOLR;
    SData/*15:0*/ __Vdly__sega_saturn_vdp1__DOT__CMDCTRL;
    SData/*8:0*/ __Vdly__sega_saturn_vdp1__DOT__tex_pix_cnt;
    IData/*17:0*/ __Vdly__sp_addr;
    IData/*20:0*/ __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__one;
    IData/*19:0*/ __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__op;
    IData/*19:0*/ __Vdly__sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res;
    // Body
    __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__state 
        = vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__state;
    __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__op 
        = vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__op;
    __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__one 
        = vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__one;
    __Vdly__sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res 
        = vlTOPp->sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res;
    __Vdly__sega_saturn_vdp1__DOT__tex_line_cnt = vlTOPp->sega_saturn_vdp1__DOT__tex_line_cnt;
    __Vdly__sega_saturn_vdp1__DOT__tex_pix_cnt = vlTOPp->sega_saturn_vdp1__DOT__tex_pix_cnt;
    __Vdly__sega_saturn_vdp1__DOT__CMDCTRL = vlTOPp->sega_saturn_vdp1__DOT__CMDCTRL;
    __Vdly__sega_saturn_vdp1__DOT__CMDCOLR = vlTOPp->sega_saturn_vdp1__DOT__CMDCOLR;
    __Vdly__sega_saturn_vdp1__DOT__table_index = vlTOPp->sega_saturn_vdp1__DOT__table_index;
    __Vdly__sega_saturn_vdp1__DOT__CMDSRCA = vlTOPp->sega_saturn_vdp1__DOT__CMDSRCA;
    __Vdly__sp_addr = vlTOPp->sp_addr;
    __Vdly__sega_saturn_vdp1__DOT__cmd_state = vlTOPp->sega_saturn_vdp1__DOT__cmd_state;
    __Vdly__sega_saturn_vdp1__DOT__CMDXA = vlTOPp->sega_saturn_vdp1__DOT__CMDXA;
    __Vdly__sega_saturn_vdp1__DOT__CMDYA = vlTOPp->sega_saturn_vdp1__DOT__CMDYA;
    if ((1U & (~ (IData)(vlTOPp->reset_n)))) {
        vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->reset_n)))) {
        vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->reset_n)))) {
        vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->reset_n)))) {
        vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->reset_n)))) {
        vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y = 0U;
    }
    if ((1U & (~ (IData)(vlTOPp->reset_n)))) {
        vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y = 0U;
    }
    vlTOPp->sega_saturn_vdp1__DOT__clock_ad = 0U;
    vlTOPp->sega_saturn_vdp1__DOT__clock_bc = 0U;
    if ((1U & (~ (IData)(vlTOPp->reset_n)))) {
        vlTOPp->sega_saturn_vdp1__DOT__toggle = 1U;
    }
    if ((1U & (~ (IData)(vlTOPp->reset_n)))) {
        vlTOPp->fb1_we = 0U;
    }
    if (vlTOPp->reset_n) {
        vlTOPp->sega_saturn_vdp1__DOT__sqrt_done = 0U;
        if ((0U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__state))) {
            if ((6U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) {
                __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__one = 0x100000U;
                __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__op 
                    = vlTOPp->sega_saturn_vdp1__DOT__sqrt_in;
                __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__state = 1U;
                __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__one = 0x40000U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__state))) {
                if ((0U != VL_EXTENDS_II(32,21, vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__one))) {
                    if (VL_GTES_III(1,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,20, vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__op)), 
                                    (0x1fffffU & (VL_EXTENDS_II(21,20, vlTOPp->sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res) 
                                                  + vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__one)))) {
                        __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__op 
                            = (0xfffffU & ((0x1fffffU 
                                            & VL_EXTENDS_II(21,20, vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__op)) 
                                           - ((0x1fffffU 
                                               & VL_EXTENDS_II(21,20, vlTOPp->sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res)) 
                                              + vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__one)));
                        __Vdly__sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res 
                            = (0xfffffU & (VL_EXTENDS_II(20,20, vlTOPp->sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res) 
                                           + VL_MULS_III(20,32,32, (IData)(2U), 
                                                         VL_EXTENDS_II(32,21, vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__one))));
                    }
                    __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__state 
                        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__state)));
                    __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__one 
                        = (0x1fffffU & (vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__one 
                                        >> 2U));
                } else {
                    vlTOPp->sega_saturn_vdp1__DOT__sqrt_done = 1U;
                    __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__state = 0U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__state))) {
                    __Vdly__sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res 
                        = (0xfffffU & (vlTOPp->sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res 
                                       >> 1U));
                    __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__state = 1U;
                }
            }
        }
    } else {
        __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__state = 0U;
    }
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__state 
        = ((IData)(vlTOPp->reset_n) ? ((0U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__state))
                                        ? ((IData)(vlTOPp->sega_saturn_vdp1__DOT__go_span)
                                            ? 1U : 0U)
                                        : ((1U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__state))
                                            ? ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__complete)
                                                ? 0U
                                                : 1U)
                                            : 0U)) : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__state 
        = ((IData)(vlTOPp->reset_n) ? ((0U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__state))
                                        ? ((IData)(vlTOPp->sega_saturn_vdp1__DOT__go_bc)
                                            ? 1U : 0U)
                                        : ((1U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__state))
                                            ? ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__complete)
                                                ? 0U
                                                : 1U)
                                            : 0U)) : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__state 
        = ((IData)(vlTOPp->reset_n) ? ((0U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__state))
                                        ? ((IData)(vlTOPp->sega_saturn_vdp1__DOT__go_ad)
                                            ? 1U : 0U)
                                        : ((1U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__state))
                                            ? ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__complete)
                                                ? 0U
                                                : 1U)
                                            : 0U)) : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__one 
        = __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__one;
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__op 
        = __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__op;
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__state 
        = __Vdly__sega_saturn_vdp1__DOT__sqrt_inst__DOT__state;
    vlTOPp->sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res 
        = __Vdly__sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res;
    vlTOPp->sega_saturn_vdp1__DOT__fb1_we = vlTOPp->fb1_we;
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__done 
        = vlTOPp->sega_saturn_vdp1__DOT__sqrt_done;
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_res = (0x3ffU 
                                               & vlTOPp->sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res);
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__res 
        = vlTOPp->sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res;
    vlTOPp->sega_saturn_vdp1__DOT__go_span = 0U;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__in_loop 
        = (1U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__state));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__in_loop 
        = (1U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__state));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__in_loop 
        = (1U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__state));
    if (vlTOPp->reset_n) {
        vlTOPp->sega_saturn_vdp1__DOT__go_ad = 0U;
        vlTOPp->sega_saturn_vdp1__DOT__go_bc = 0U;
        if (((((((((0U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state)) 
                   | (1U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) 
                  | (2U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) 
                 | (3U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) 
                | (4U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) 
               | (5U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) 
              | (6U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) 
             | (7U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state)))) {
            if ((0U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) {
                if (vlTOPp->sega_saturn_vdp1__DOT__draw_running) {
                    __Vdly__sega_saturn_vdp1__DOT__cmd_state 
                        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state)));
                }
                __Vdly__sp_addr = 0U;
                __Vdly__sega_saturn_vdp1__DOT__table_index = 0U;
            } else {
                if ((1U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) {
                    __Vdly__sp_addr = (0x3ffffU & ((IData)(1U) 
                                                   + vlTOPp->sp_addr));
                    if ((8U & vlTOPp->sp_addr)) {
                        if ((4U & vlTOPp->sp_addr)) {
                            if ((2U & vlTOPp->sp_addr)) {
                                if ((1U & vlTOPp->sp_addr)) {
                                    __Vdly__sega_saturn_vdp1__DOT__table_index 
                                        = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlTOPp->sega_saturn_vdp1__DOT__table_index)));
                                    __Vdly__sega_saturn_vdp1__DOT__cmd_state 
                                        = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state)));
                                } else {
                                    vlTOPp->sega_saturn_vdp1__DOT__CMDGRDA 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                }
                            } else {
                                if ((1U & vlTOPp->sp_addr)) {
                                    vlTOPp->sega_saturn_vdp1__DOT__CMDYD 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                } else {
                                    vlTOPp->sega_saturn_vdp1__DOT__CMDXD 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                }
                            }
                        } else {
                            if ((2U & vlTOPp->sp_addr)) {
                                if ((1U & vlTOPp->sp_addr)) {
                                    vlTOPp->sega_saturn_vdp1__DOT__CMDYC 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                } else {
                                    vlTOPp->sega_saturn_vdp1__DOT__CMDXC 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                }
                            } else {
                                if ((1U & vlTOPp->sp_addr)) {
                                    vlTOPp->sega_saturn_vdp1__DOT__CMDYB 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                } else {
                                    vlTOPp->sega_saturn_vdp1__DOT__CMDXB 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                }
                            }
                        }
                    } else {
                        if ((4U & vlTOPp->sp_addr)) {
                            if ((2U & vlTOPp->sp_addr)) {
                                if ((1U & vlTOPp->sp_addr)) {
                                    __Vdly__sega_saturn_vdp1__DOT__CMDYA 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                } else {
                                    __Vdly__sega_saturn_vdp1__DOT__CMDXA 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                }
                            } else {
                                if ((1U & vlTOPp->sp_addr)) {
                                    vlTOPp->sega_saturn_vdp1__DOT__CMDSIZE 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                } else {
                                    __Vdly__sega_saturn_vdp1__DOT__CMDSRCA 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                }
                            }
                        } else {
                            if ((2U & vlTOPp->sp_addr)) {
                                if ((1U & vlTOPp->sp_addr)) {
                                    __Vdly__sega_saturn_vdp1__DOT__CMDCOLR 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                } else {
                                    vlTOPp->sega_saturn_vdp1__DOT__CMDPMOD 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                }
                            } else {
                                if ((1U & vlTOPp->sp_addr)) {
                                    vlTOPp->sega_saturn_vdp1__DOT__CMDLINK 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                } else {
                                    __Vdly__sega_saturn_vdp1__DOT__CMDCTRL 
                                        = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                }
                            }
                        }
                    }
                } else {
                    if ((2U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) {
                        if ((8U & (IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDCTRL))) {
                            if ((1U & (~ ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDCTRL) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDCTRL))) {
                                    if ((1U & (~ (IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDCTRL)))) {
                                        __Vdly__sega_saturn_vdp1__DOT__cmd_state = 3U;
                                        vlTOPp->sega_saturn_vdp1__DOT__local_x 
                                            = vlTOPp->sega_saturn_vdp1__DOT__CMDXA;
                                        vlTOPp->sega_saturn_vdp1__DOT__local_y 
                                            = vlTOPp->sega_saturn_vdp1__DOT__CMDYA;
                                    }
                                } else {
                                    __Vdly__sega_saturn_vdp1__DOT__cmd_state = 3U;
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDCTRL))) {
                                if ((2U & (IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDCTRL))) {
                                    if ((1U & (~ (IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDCTRL)))) {
                                        __Vdly__sega_saturn_vdp1__DOT__cmd_state = 3U;
                                    }
                                } else {
                                    __Vdly__sega_saturn_vdp1__DOT__cmd_state 
                                        = ((1U & (IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDCTRL))
                                            ? 3U : 4U);
                                }
                            } else {
                                if ((2U & (IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDCTRL))) {
                                    if ((1U & (~ (IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDCTRL)))) {
                                        __Vdly__sega_saturn_vdp1__DOT__cmd_state = 4U;
                                    }
                                } else {
                                    __Vdly__sega_saturn_vdp1__DOT__cmd_state = 3U;
                                }
                            }
                        }
                    } else {
                        if ((3U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) {
                            __Vdly__sega_saturn_vdp1__DOT__cmd_state = 1U;
                            __Vdly__sp_addr = (0x3ffffU 
                                               & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__table_index) 
                                                  << 4U));
                        } else {
                            if ((4U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) {
                                __Vdly__sega_saturn_vdp1__DOT__cmd_state = 5U;
                                __Vdly__sega_saturn_vdp1__DOT__tex_pix_cnt = 0U;
                                __Vdly__sega_saturn_vdp1__DOT__tex_line_cnt = 0U;
                            } else {
                                if ((5U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) {
                                    __Vdly__sega_saturn_vdp1__DOT__cmd_state 
                                        = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state)));
                                    vlTOPp->sega_saturn_vdp1__DOT__tex_u_inc 
                                        = VL_DIV_III(32, 
                                                     ((IData)(vlTOPp->sega_saturn_vdp1__DOT__tex_u_width) 
                                                      << 0x10U), (IData)(0x30U));
                                    vlTOPp->sega_saturn_vdp1__DOT__tex_u_accum = 0U;
                                    vlTOPp->sega_saturn_vdp1__DOT__tex_v_inc 
                                        = (0x3fffc00U 
                                           & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__tex_v_height) 
                                              << 0xaU));
                                    vlTOPp->sega_saturn_vdp1__DOT__tex_v_accum = 0U;
                                    vlTOPp->sega_saturn_vdp1__DOT__go_ad = 1U;
                                } else {
                                    if ((6U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) {
                                        __Vdly__sega_saturn_vdp1__DOT__cmd_state 
                                            = (0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state)));
                                    } else {
                                        __Vdly__sp_addr 
                                            = (0x3ffffU 
                                               & (((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDSRCA) 
                                                   << 2U) 
                                                  + 
                                                  (((IData)(vlTOPp->sega_saturn_vdp1__DOT__tex_line_cnt) 
                                                    * (IData)(vlTOPp->sega_saturn_vdp1__DOT__char_size_x)) 
                                                   + (IData)(vlTOPp->sega_saturn_vdp1__DOT__tex_pix_cnt))));
                                        vlTOPp->fb0_dout 
                                            = vlTOPp->sega_saturn_vdp1__DOT__sp_dout;
                                        vlTOPp->fb0_addr 
                                            = ((0x1fe00U 
                                                & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__y_out_ad) 
                                                   << 9U)) 
                                               | (IData)(vlTOPp->sega_saturn_vdp1__DOT__x_out_ad));
                                        vlTOPp->fb0_we = 1U;
                                        if ((1U & (~ (IData)(vlTOPp->sega_saturn_vdp1__DOT__busy_ad)))) {
                                            __Vdly__sega_saturn_vdp1__DOT__cmd_state 
                                                = (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state)));
                                            vlTOPp->sega_saturn_vdp1__DOT__go_bc = 1U;
                                        }
                                        if (((IData)(vlTOPp->sega_saturn_vdp1__DOT__tex_pix_cnt) 
                                             == (IData)(vlTOPp->sega_saturn_vdp1__DOT__char_size_x))) {
                                            __Vdly__sega_saturn_vdp1__DOT__tex_line_cnt 
                                                = (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->sega_saturn_vdp1__DOT__tex_line_cnt)));
                                            __Vdly__sega_saturn_vdp1__DOT__tex_pix_cnt = 0U;
                                        } else {
                                            __Vdly__sega_saturn_vdp1__DOT__tex_pix_cnt 
                                                = (0x1ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->sega_saturn_vdp1__DOT__tex_pix_cnt)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((8U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) {
                __Vdly__sega_saturn_vdp1__DOT__cmd_state 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state)));
            } else {
                if ((9U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state))) {
                    __Vdly__sp_addr = (0x3ffffU & (
                                                   ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDSRCA) 
                                                    << 2U) 
                                                   + 
                                                   (((IData)(vlTOPp->sega_saturn_vdp1__DOT__tex_line_cnt) 
                                                     * (IData)(vlTOPp->sega_saturn_vdp1__DOT__char_size_x)) 
                                                    + (IData)(vlTOPp->sega_saturn_vdp1__DOT__tex_pix_cnt))));
                    vlTOPp->fb0_dout = vlTOPp->sega_saturn_vdp1__DOT__CMDCOLR;
                    vlTOPp->fb0_addr = ((0x1fe00U & 
                                         ((IData)(vlTOPp->sega_saturn_vdp1__DOT__y_out_bc) 
                                          << 9U)) | (IData)(vlTOPp->sega_saturn_vdp1__DOT__x_out_bc));
                    if ((1U & (~ (IData)(vlTOPp->sega_saturn_vdp1__DOT__busy_bc)))) {
                        __Vdly__sega_saturn_vdp1__DOT__cmd_state = 3U;
                        vlTOPp->fb0_we = 0U;
                    }
                    if (((IData)(vlTOPp->sega_saturn_vdp1__DOT__tex_pix_cnt) 
                         == (IData)(vlTOPp->sega_saturn_vdp1__DOT__char_size_x))) {
                        __Vdly__sega_saturn_vdp1__DOT__tex_line_cnt 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlTOPp->sega_saturn_vdp1__DOT__tex_line_cnt)));
                        __Vdly__sega_saturn_vdp1__DOT__tex_pix_cnt = 0U;
                    } else {
                        __Vdly__sega_saturn_vdp1__DOT__tex_pix_cnt 
                            = (0x1ffU & ((IData)(1U) 
                                         + (IData)(vlTOPp->sega_saturn_vdp1__DOT__tex_pix_cnt)));
                    }
                }
            }
        }
    } else {
        __Vdly__sega_saturn_vdp1__DOT__cmd_state = 0U;
    }
    vlTOPp->sega_saturn_vdp1__DOT__busy_span = vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__in_loop;
    vlTOPp->sega_saturn_vdp1__DOT__table_index = __Vdly__sega_saturn_vdp1__DOT__table_index;
    vlTOPp->sega_saturn_vdp1__DOT__CMDCOLR = __Vdly__sega_saturn_vdp1__DOT__CMDCOLR;
    vlTOPp->sega_saturn_vdp1__DOT__CMDCTRL = __Vdly__sega_saturn_vdp1__DOT__CMDCTRL;
    vlTOPp->sega_saturn_vdp1__DOT__tex_pix_cnt = __Vdly__sega_saturn_vdp1__DOT__tex_pix_cnt;
    vlTOPp->sega_saturn_vdp1__DOT__tex_line_cnt = __Vdly__sega_saturn_vdp1__DOT__tex_line_cnt;
    vlTOPp->sega_saturn_vdp1__DOT__cmd_state = __Vdly__sega_saturn_vdp1__DOT__cmd_state;
    vlTOPp->sp_addr = __Vdly__sp_addr;
    vlTOPp->sega_saturn_vdp1__DOT__CMDSRCA = __Vdly__sega_saturn_vdp1__DOT__CMDSRCA;
    vlTOPp->sega_saturn_vdp1__DOT__busy_ad = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__in_loop;
    vlTOPp->sega_saturn_vdp1__DOT__busy_bc = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__in_loop;
    vlTOPp->sega_saturn_vdp1__DOT__CMDXA = __Vdly__sega_saturn_vdp1__DOT__CMDXA;
    vlTOPp->sega_saturn_vdp1__DOT__CMDYA = __Vdly__sega_saturn_vdp1__DOT__CMDYA;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__go 
        = vlTOPp->sega_saturn_vdp1__DOT__go_span;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__busy 
        = vlTOPp->sega_saturn_vdp1__DOT__busy_span;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__go 
        = vlTOPp->sega_saturn_vdp1__DOT__go_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__go 
        = vlTOPp->sega_saturn_vdp1__DOT__go_bc;
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__go 
        = (6U == (IData)(vlTOPp->sega_saturn_vdp1__DOT__cmd_state));
    vlTOPp->sega_saturn_vdp1__DOT__sp_addr = vlTOPp->sp_addr;
    vlTOPp->sega_saturn_vdp1__DOT__char_addr_byte = 
        ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDSRCA) 
         << 3U);
    vlTOPp->sega_saturn_vdp1__DOT__tex_u_out = (0xffffU 
                                                & (vlTOPp->sega_saturn_vdp1__DOT__tex_u_accum 
                                                   >> 0x10U));
    vlTOPp->sega_saturn_vdp1__DOT__tex_v_out = (0xffffU 
                                                & (vlTOPp->sega_saturn_vdp1__DOT__tex_v_accum 
                                                   >> 0x10U));
    vlTOPp->sega_saturn_vdp1__DOT__fb0_dout = vlTOPp->fb0_dout;
    vlTOPp->sega_saturn_vdp1__DOT__fb0_addr = vlTOPp->fb0_addr;
    vlTOPp->sega_saturn_vdp1__DOT__fb0_we = vlTOPp->fb0_we;
    vlTOPp->sega_saturn_vdp1__DOT__char_size_x = (0x1f8U 
                                                  & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDSIZE) 
                                                     >> 5U));
    vlTOPp->sega_saturn_vdp1__DOT__char_size_y = (0xffU 
                                                  & (IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDSIZE));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__busy 
        = vlTOPp->sega_saturn_vdp1__DOT__busy_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__busy 
        = vlTOPp->sega_saturn_vdp1__DOT__busy_bc;
    if ((1U & (~ (IData)(vlTOPp->reset_n)))) {
        vlTOPp->sega_saturn_vdp1__DOT__draw_running = 1U;
    }
    vlTOPp->sega_saturn_vdp1__DOT__stax_ad = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDXA) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_x)));
    vlTOPp->sega_saturn_vdp1__DOT__stax_bc = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDXB) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_x)));
    vlTOPp->sega_saturn_vdp1__DOT__endx_ad = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDXD) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_x)));
    vlTOPp->sega_saturn_vdp1__DOT__endx_bc = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDXC) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_x)));
    vlTOPp->sega_saturn_vdp1__DOT__stay_ad = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDYA) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_y)));
    vlTOPp->sega_saturn_vdp1__DOT__endy_ad = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDYD) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_y)));
    vlTOPp->sega_saturn_vdp1__DOT__stay_bc = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDYB) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_y)));
    vlTOPp->sega_saturn_vdp1__DOT__endy_bc = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDYC) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_y)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__stax 
        = vlTOPp->sega_saturn_vdp1__DOT__stax_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x0 
        = vlTOPp->sega_saturn_vdp1__DOT__stax_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__stax 
        = vlTOPp->sega_saturn_vdp1__DOT__stax_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x0 
        = vlTOPp->sega_saturn_vdp1__DOT__stax_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__endx 
        = vlTOPp->sega_saturn_vdp1__DOT__endx_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x1 
        = vlTOPp->sega_saturn_vdp1__DOT__endx_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__endx 
        = vlTOPp->sega_saturn_vdp1__DOT__endx_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x1 
        = vlTOPp->sega_saturn_vdp1__DOT__endx_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__stay 
        = vlTOPp->sega_saturn_vdp1__DOT__stay_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y0 
        = vlTOPp->sega_saturn_vdp1__DOT__stay_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__endy 
        = vlTOPp->sega_saturn_vdp1__DOT__endy_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y1 
        = vlTOPp->sega_saturn_vdp1__DOT__endy_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__stay 
        = vlTOPp->sega_saturn_vdp1__DOT__stay_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y0 
        = vlTOPp->sega_saturn_vdp1__DOT__stay_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__endy 
        = vlTOPp->sega_saturn_vdp1__DOT__endy_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y1 
        = vlTOPp->sega_saturn_vdp1__DOT__endy_bc;
    vlTOPp->sega_saturn_vdp1__DOT__deltax_ad = (0x1ffU 
                                                & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x1) 
                                                   - (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x0)));
    vlTOPp->sega_saturn_vdp1__DOT__deltax_bc = (0x1ffU 
                                                & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x1) 
                                                   - (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x0)));
    vlTOPp->sega_saturn_vdp1__DOT__deltay_ad = (0x1ffU 
                                                & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y1) 
                                                   - (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y0)));
    vlTOPp->sega_saturn_vdp1__DOT__deltay_bc = (0x1ffU 
                                                & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y1) 
                                                   - (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y0)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__deltax 
        = vlTOPp->sega_saturn_vdp1__DOT__deltax_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__right 
        = (1U & (~ ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad) 
                    >> 8U)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__deltax 
        = vlTOPp->sega_saturn_vdp1__DOT__deltax_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__right 
        = (1U & (~ ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_bc) 
                    >> 8U)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__deltay 
        = vlTOPp->sega_saturn_vdp1__DOT__deltay_ad;
    vlTOPp->sega_saturn_vdp1__DOT__length_ad = (VL_GTS_III(1,9,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad), (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_ad))
                                                 ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad)
                                                 : (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_ad));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__down 
        = (1U & (~ ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_ad) 
                    >> 8U)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__deltay 
        = vlTOPp->sega_saturn_vdp1__DOT__deltay_bc;
    vlTOPp->sega_saturn_vdp1__DOT__length_bc = (VL_GTS_III(1,9,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_bc), (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_bc))
                                                 ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_bc)
                                                 : (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_bc));
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_in = (0xfffffU 
                                              & (((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad) 
                                                  * (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad)) 
                                                 + 
                                                 ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_bc) 
                                                  * (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_bc))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__down 
        = (1U & (~ ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_bc) 
                    >> 8U)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dx 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__right)
                      ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad)
                      : VL_NEGATE_I((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dx 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__right)
                      ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_bc)
                      : VL_NEGATE_I((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_bc))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__length 
        = vlTOPp->sega_saturn_vdp1__DOT__length_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dy 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__down)
                      ? VL_NEGATE_I((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_ad))
                      : (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_ad)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__length 
        = vlTOPp->sega_saturn_vdp1__DOT__length_bc;
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__op_in 
        = vlTOPp->sega_saturn_vdp1__DOT__sqrt_in;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dy 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__down)
                      ? VL_NEGATE_I((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_bc))
                      : (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_bc)));
}

VL_INLINE_OPT void Vsega_saturn_vdp1::_sequent__TOP__5(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::_sequent__TOP__5\n"); );
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y 
        = vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__next_y;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x 
        = vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__next_x;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err 
        = (0x1ffU & (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err_next));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err 
        = (0x1ffU & (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err_next));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err 
        = (0x1ffU & (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err_next));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x 
        = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__next_x;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x 
        = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__next_x;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y 
        = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__next_y;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y 
        = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__next_y;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2 
        = (0x3ffU & (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err)) 
                     << 1U));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2 
        = (0x3ffU & (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err)) 
                     << 1U));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2 
        = (0x3ffU & (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err)) 
                     << 1U));
}

void Vsega_saturn_vdp1::_settle__TOP__6(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::_settle__TOP__6\n"); );
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sega_saturn_vdp1__DOT__fb_sel = vlTOPp->fb_sel;
    vlTOPp->sega_saturn_vdp1__DOT__stax_ad = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDXA) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_x)));
    vlTOPp->sega_saturn_vdp1__DOT__stax_bc = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDXB) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_x)));
    vlTOPp->sega_saturn_vdp1__DOT__endx_ad = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDXD) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_x)));
    vlTOPp->sega_saturn_vdp1__DOT__endx_bc = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDXC) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_x)));
    vlTOPp->sega_saturn_vdp1__DOT__stay_ad = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDYA) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_y)));
    vlTOPp->sega_saturn_vdp1__DOT__endy_ad = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDYD) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_y)));
    vlTOPp->sega_saturn_vdp1__DOT__stay_bc = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDYB) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_y)));
    vlTOPp->sega_saturn_vdp1__DOT__endy_bc = (0x1ffU 
                                              & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__CMDYC) 
                                                 + (IData)(vlTOPp->sega_saturn_vdp1__DOT__local_y)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__stax 
        = vlTOPp->sega_saturn_vdp1__DOT__stax_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x0 
        = vlTOPp->sega_saturn_vdp1__DOT__stax_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__stax 
        = vlTOPp->sega_saturn_vdp1__DOT__stax_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x0 
        = vlTOPp->sega_saturn_vdp1__DOT__stax_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__endx 
        = vlTOPp->sega_saturn_vdp1__DOT__endx_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x1 
        = vlTOPp->sega_saturn_vdp1__DOT__endx_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__endx 
        = vlTOPp->sega_saturn_vdp1__DOT__endx_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x1 
        = vlTOPp->sega_saturn_vdp1__DOT__endx_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__stay 
        = vlTOPp->sega_saturn_vdp1__DOT__stay_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y0 
        = vlTOPp->sega_saturn_vdp1__DOT__stay_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__endy 
        = vlTOPp->sega_saturn_vdp1__DOT__endy_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y1 
        = vlTOPp->sega_saturn_vdp1__DOT__endy_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__stay 
        = vlTOPp->sega_saturn_vdp1__DOT__stay_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y0 
        = vlTOPp->sega_saturn_vdp1__DOT__stay_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__endy 
        = vlTOPp->sega_saturn_vdp1__DOT__endy_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y1 
        = vlTOPp->sega_saturn_vdp1__DOT__endy_bc;
    vlTOPp->sega_saturn_vdp1__DOT__deltax_ad = (0x1ffU 
                                                & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x1) 
                                                   - (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x0)));
    vlTOPp->sega_saturn_vdp1__DOT__deltax_bc = (0x1ffU 
                                                & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x1) 
                                                   - (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x0)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__complete 
        = (((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x) 
            == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x1)) 
           & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y) 
              == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y1)));
    vlTOPp->sega_saturn_vdp1__DOT__deltay_ad = (0x1ffU 
                                                & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y1) 
                                                   - (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y0)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__complete 
        = (((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x) 
            == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x1)) 
           & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y) 
              == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y1)));
    vlTOPp->sega_saturn_vdp1__DOT__deltay_bc = (0x1ffU 
                                                & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y1) 
                                                   - (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y0)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__deltax 
        = vlTOPp->sega_saturn_vdp1__DOT__deltax_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__right 
        = (1U & (~ ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad) 
                    >> 8U)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__deltax 
        = vlTOPp->sega_saturn_vdp1__DOT__deltax_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__right 
        = (1U & (~ ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_bc) 
                    >> 8U)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__deltay 
        = vlTOPp->sega_saturn_vdp1__DOT__deltay_ad;
    vlTOPp->sega_saturn_vdp1__DOT__length_ad = (VL_GTS_III(1,9,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad), (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_ad))
                                                 ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad)
                                                 : (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_ad));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__down 
        = (1U & (~ ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_ad) 
                    >> 8U)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__deltay 
        = vlTOPp->sega_saturn_vdp1__DOT__deltay_bc;
    vlTOPp->sega_saturn_vdp1__DOT__length_bc = (VL_GTS_III(1,9,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_bc), (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_bc))
                                                 ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_bc)
                                                 : (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_bc));
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_in = (0xfffffU 
                                              & (((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad) 
                                                  * (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad)) 
                                                 + 
                                                 ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_bc) 
                                                  * (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_bc))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__down 
        = (1U & (~ ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_bc) 
                    >> 8U)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__xa 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__right)
                      ? ((IData)(1U) + VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x)))
                      : (VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x)) 
                         - (IData)(1U))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dx 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__right)
                      ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad)
                      : VL_NEGATE_I((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_ad))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__xa 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__right)
                      ? ((IData)(1U) + VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x)))
                      : (VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x)) 
                         - (IData)(1U))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dx 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__right)
                      ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_bc)
                      : VL_NEGATE_I((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_bc))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__length 
        = vlTOPp->sega_saturn_vdp1__DOT__length_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__ya 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__down)
                      ? ((IData)(1U) + VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y)))
                      : (VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y)) 
                         - (IData)(1U))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dy 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__down)
                      ? VL_NEGATE_I((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_ad))
                      : (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_ad)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__length 
        = vlTOPp->sega_saturn_vdp1__DOT__length_bc;
    vlTOPp->sega_saturn_vdp1__DOT__sqrt_inst__DOT__op_in 
        = vlTOPp->sega_saturn_vdp1__DOT__sqrt_in;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__ya 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__down)
                      ? ((IData)(1U) + VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y)))
                      : (VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y)) 
                         - (IData)(1U))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dy 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__down)
                      ? VL_NEGATE_I((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_bc))
                      : (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_bc)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_lt_dx 
        = (VL_LTS_III(1,10,10, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2), 
                      (0x3ffU & VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dx))))
            ? 1U : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_lt_dx 
        = (VL_LTS_III(1,10,10, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2), 
                      (0x3ffU & VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dx))))
            ? 1U : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_gt_dy 
        = (VL_GTS_III(1,10,10, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2), 
                      (0x3ffU & VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dy))))
            ? 1U : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_gt_dy 
        = (VL_GTS_III(1,10,10, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2), 
                      (0x3ffU & VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dy))))
            ? 1U : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__yb 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_lt_dx)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__ya)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__yb 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_lt_dx)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__ya)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__xb 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_gt_dy)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__xa)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err1 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_gt_dy)
                      ? (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dy)))
                      : VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__xb 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_gt_dy)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__xa)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err1 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_gt_dy)
                      ? (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dy)))
                      : VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__next_y 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__in_loop)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__yb)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y0));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__next_y 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__in_loop)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__yb)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y0));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__next_x 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__in_loop)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__xb)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x0));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err2 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_lt_dx)
                      ? ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err1) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dx)))
                      : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err1)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__next_x 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__in_loop)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__xb)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x0));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err2 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_lt_dx)
                      ? ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err1) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dx)))
                      : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err1)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err_next 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__in_loop)
                      ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err2)
                      : (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dx)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dy)))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err_next 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__in_loop)
                      ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err2)
                      : (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dx)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dy)))));
}

VL_INLINE_OPT void Vsega_saturn_vdp1::_sequent__TOP__7(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::_sequent__TOP__7\n"); );
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sega_saturn_vdp1__DOT__y_out_span = vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y;
    vlTOPp->sega_saturn_vdp1__DOT__x_out_span = vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x;
    vlTOPp->sega_saturn_vdp1__DOT__x_out_ad = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__xa 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__right)
                      ? ((IData)(1U) + VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x)))
                      : (VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x)) 
                         - (IData)(1U))));
    vlTOPp->sega_saturn_vdp1__DOT__x_out_bc = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__xa 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__right)
                      ? ((IData)(1U) + VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x)))
                      : (VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x)) 
                         - (IData)(1U))));
    vlTOPp->sega_saturn_vdp1__DOT__y_out_ad = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__complete 
        = (((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x) 
            == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x1)) 
           & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y) 
              == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y1)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__ya 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__down)
                      ? ((IData)(1U) + VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y)))
                      : (VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y)) 
                         - (IData)(1U))));
    vlTOPp->sega_saturn_vdp1__DOT__y_out_bc = vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__complete 
        = (((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x) 
            == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x1)) 
           & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y) 
              == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y1)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__ya 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__down)
                      ? ((IData)(1U) + VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y)))
                      : (VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y)) 
                         - (IData)(1U))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_lt_dx 
        = (VL_LTS_III(1,10,10, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2), 
                      (0x3ffU & VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dx))))
            ? 1U : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_gt_dy 
        = (VL_GTS_III(1,10,10, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2), 
                      (0x3ffU & VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dy))))
            ? 1U : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_lt_dx 
        = (VL_LTS_III(1,10,10, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2), 
                      (0x3ffU & VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dx))))
            ? 1U : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_gt_dy 
        = (VL_GTS_III(1,10,10, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2), 
                      (0x3ffU & VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dy))))
            ? 1U : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y_out 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_span;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x_out 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_span;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x_out 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__stax 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x0 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x_out 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__endx 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x1 
        = vlTOPp->sega_saturn_vdp1__DOT__x_out_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y_out 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__stay 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_ad;
    vlTOPp->sega_saturn_vdp1__DOT__span_at_ad = (((IData)(vlTOPp->sega_saturn_vdp1__DOT__x_out_span) 
                                                  == (IData)(vlTOPp->sega_saturn_vdp1__DOT__x_out_ad)) 
                                                 & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__y_out_span) 
                                                    == (IData)(vlTOPp->sega_saturn_vdp1__DOT__y_out_ad)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y0 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_ad;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y_out 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__endy 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_bc;
    vlTOPp->sega_saturn_vdp1__DOT__span_at_bc = (((IData)(vlTOPp->sega_saturn_vdp1__DOT__x_out_span) 
                                                  == (IData)(vlTOPp->sega_saturn_vdp1__DOT__x_out_bc)) 
                                                 & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__y_out_span) 
                                                    == (IData)(vlTOPp->sega_saturn_vdp1__DOT__y_out_bc)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y1 
        = vlTOPp->sega_saturn_vdp1__DOT__y_out_bc;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__yb 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_lt_dx)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__ya)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__xb 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_gt_dy)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__xa)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err1 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_gt_dy)
                      ? (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dy)))
                      : VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__yb 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_lt_dx)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__ya)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__xb 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_gt_dy)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__xa)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err1 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_gt_dy)
                      ? (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dy)))
                      : VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err))));
    vlTOPp->sega_saturn_vdp1__DOT__deltax_span = (0x1ffU 
                                                  & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x1) 
                                                     - (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x0)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__complete 
        = (((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x) 
            == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x1)) 
           & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y) 
              == (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y1)));
    vlTOPp->sega_saturn_vdp1__DOT__deltay_span = (0x1ffU 
                                                  & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y1) 
                                                     - (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y0)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__next_y 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__in_loop)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__yb)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y0));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__next_x 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__in_loop)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__xb)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x0));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err2 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_lt_dx)
                      ? ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err1) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dx)))
                      : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err1)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__next_y 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__in_loop)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__yb)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y0));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__next_x 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__in_loop)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__xb)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x0));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err2 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_lt_dx)
                      ? ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err1) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dx)))
                      : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err1)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__deltax 
        = vlTOPp->sega_saturn_vdp1__DOT__deltax_span;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__right 
        = (1U & (~ ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_span) 
                    >> 8U)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__deltay 
        = vlTOPp->sega_saturn_vdp1__DOT__deltay_span;
    vlTOPp->sega_saturn_vdp1__DOT__length_span = (VL_GTS_III(1,9,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_span), (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_span))
                                                   ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_span)
                                                   : (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_span));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__down 
        = (1U & (~ ((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_span) 
                    >> 8U)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err_next 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__in_loop)
                      ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err2)
                      : (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dx)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dy)))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err_next 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__in_loop)
                      ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err2)
                      : (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dx)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dy)))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__xa 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__right)
                      ? ((IData)(1U) + VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x)))
                      : (VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x)) 
                         - (IData)(1U))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dx 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__right)
                      ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_span)
                      : VL_NEGATE_I((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltax_span))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__length 
        = vlTOPp->sega_saturn_vdp1__DOT__length_span;
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__ya 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__down)
                      ? ((IData)(1U) + VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y)))
                      : (VL_EXTENDS_II(32,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y)) 
                         - (IData)(1U))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dy 
        = (0x1ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__down)
                      ? VL_NEGATE_I((IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_span))
                      : (IData)(vlTOPp->sega_saturn_vdp1__DOT__deltay_span)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_lt_dx 
        = (VL_LTS_III(1,10,10, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2), 
                      (0x3ffU & VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dx))))
            ? 1U : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_gt_dy 
        = (VL_GTS_III(1,10,10, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2), 
                      (0x3ffU & VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dy))))
            ? 1U : 0U);
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__yb 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_lt_dx)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__ya)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__xb 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_gt_dy)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__xa)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err1 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_gt_dy)
                      ? (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dy)))
                      : VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err))));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__next_y 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__in_loop)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__yb)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__y0));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__next_x 
        = ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__in_loop)
            ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__xb)
            : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__x0));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err2 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_lt_dx)
                      ? ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err1) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dx)))
                      : (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err1)));
    vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err_next 
        = (0x3ffU & ((IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__in_loop)
                      ? (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__err2)
                      : (VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dx)) 
                         + VL_EXTENDS_II(10,9, (IData)(vlTOPp->sega_saturn_vdp1__DOT__linedraw_span__DOT__dy)))));
}

void Vsega_saturn_vdp1::_eval(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::_eval\n"); );
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
    if ((((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))) 
         | ((~ (IData)(vlTOPp->reset_n)) & (IData)(vlTOPp->__Vclklast__TOP__reset_n)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if ((((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock))) 
         | ((~ (IData)(vlTOPp->reset_n)) & (IData)(vlTOPp->__Vclklast__TOP__reset_n)))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__reset_n = vlTOPp->reset_n;
}

void Vsega_saturn_vdp1::_eval_initial(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::_eval_initial\n"); );
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__2(vlSymsp);
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__reset_n = vlTOPp->reset_n;
}

void Vsega_saturn_vdp1::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::final\n"); );
    // Variables
    Vsega_saturn_vdp1__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsega_saturn_vdp1::_eval_settle(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::_eval_settle\n"); );
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
}

VL_INLINE_OPT QData Vsega_saturn_vdp1::_change_request(Vsega_saturn_vdp1__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::_change_request\n"); );
    Vsega_saturn_vdp1* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsega_saturn_vdp1::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
}
#endif  // VL_DEBUG

void Vsega_saturn_vdp1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsega_saturn_vdp1::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset_n = VL_RAND_RESET_I(1);
    gaddr = VL_RAND_RESET_I(20);
    fb_sel = VL_RAND_RESET_I(1);
    fb0_addr = VL_RAND_RESET_I(17);
    fb0_din = VL_RAND_RESET_I(16);
    fb0_dout = VL_RAND_RESET_I(16);
    fb0_we = VL_RAND_RESET_I(1);
    fb1_addr = VL_RAND_RESET_I(17);
    fb1_din = VL_RAND_RESET_I(16);
    fb1_dout = VL_RAND_RESET_I(16);
    fb1_we = VL_RAND_RESET_I(1);
    sp_addr = VL_RAND_RESET_I(18);
    sp_din = VL_RAND_RESET_I(16);
    sp_we = VL_RAND_RESET_I(1);
    vo = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__clock = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__reset_n = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__gaddr = VL_RAND_RESET_I(20);
    sega_saturn_vdp1__DOT__fb_sel = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__fb0_addr = VL_RAND_RESET_I(17);
    sega_saturn_vdp1__DOT__fb0_din = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__fb0_dout = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__fb0_we = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__fb1_addr = VL_RAND_RESET_I(17);
    sega_saturn_vdp1__DOT__fb1_din = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__fb1_dout = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__fb1_we = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__sp_addr = VL_RAND_RESET_I(18);
    sega_saturn_vdp1__DOT__sp_din = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__sp_we = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__vo = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__sp_dout = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__gdata = VL_RAND_RESET_I(32);
    sega_saturn_vdp1__DOT__CMDCTRL = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDLINK = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDPMOD = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDCOLR = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDSRCA = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDSIZE = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDXA = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDYA = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDXB = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDYB = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDXC = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDYC = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDXD = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDYD = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__CMDGRDA = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__local_x = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__local_y = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__draw_running = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__cmd_state = VL_RAND_RESET_I(8);
    sega_saturn_vdp1__DOT__table_index = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__toggle = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__tex_pix_cnt = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__tex_line_cnt = VL_RAND_RESET_I(8);
    sega_saturn_vdp1__DOT__char_size_x = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__char_size_y = VL_RAND_RESET_I(8);
    sega_saturn_vdp1__DOT__char_addr_byte = VL_RAND_RESET_I(19);
    sega_saturn_vdp1__DOT__span_at_bc = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__span_at_ad = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__tex_u_width = VL_RAND_RESET_I(8);
    sega_saturn_vdp1__DOT__tex_u_inc = VL_RAND_RESET_I(32);
    sega_saturn_vdp1__DOT__tex_u_accum = VL_RAND_RESET_I(32);
    sega_saturn_vdp1__DOT__tex_u_out = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__tex_v_height = VL_RAND_RESET_I(8);
    sega_saturn_vdp1__DOT__tex_v_inc = VL_RAND_RESET_I(32);
    sega_saturn_vdp1__DOT__tex_v_accum = VL_RAND_RESET_I(32);
    sega_saturn_vdp1__DOT__tex_v_out = VL_RAND_RESET_I(16);
    sega_saturn_vdp1__DOT__sqrt_in = VL_RAND_RESET_I(20);
    sega_saturn_vdp1__DOT____Vcellout__sqrt_inst__res = VL_RAND_RESET_I(20);
    sega_saturn_vdp1__DOT__sqrt_res = VL_RAND_RESET_I(10);
    sega_saturn_vdp1__DOT__sqrt_done = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__deltax_ad = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__deltay_ad = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__x_out_ad = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__y_out_ad = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__length_ad = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__clock_ad = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__go_ad = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__stax_ad = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__stay_ad = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__endx_ad = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__endy_ad = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__busy_ad = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__deltax_bc = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__deltay_bc = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__x_out_bc = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__y_out_bc = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__length_bc = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__clock_bc = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__go_bc = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__stax_bc = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__stay_bc = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__endx_bc = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__endy_bc = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__busy_bc = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__deltax_span = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__deltay_span = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__x_out_span = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__y_out_span = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__length_span = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__go_span = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__busy_span = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__sqrt_inst__DOT__clk = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__sqrt_inst__DOT__reset_n = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__sqrt_inst__DOT__op_in = VL_RAND_RESET_I(20);
    sega_saturn_vdp1__DOT__sqrt_inst__DOT__go = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__sqrt_inst__DOT__res = VL_RAND_RESET_I(20);
    sega_saturn_vdp1__DOT__sqrt_inst__DOT__done = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__sqrt_inst__DOT__state = VL_RAND_RESET_I(4);
    sega_saturn_vdp1__DOT__sqrt_inst__DOT__one = VL_RAND_RESET_I(21);
    sega_saturn_vdp1__DOT__sqrt_inst__DOT__op = VL_RAND_RESET_I(20);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__reset_n = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__pclk = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__go = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__busy = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__stax = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__stay = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__endx = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__endy = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__deltax = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__deltay = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__length = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x_out = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y_out = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__state = VL_RAND_RESET_I(2);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dx = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__dy = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x0 = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__x1 = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y0 = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__y1 = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__next_x = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__next_y = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__xa = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__ya = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__xb = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__yb = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err_next = VL_RAND_RESET_I(10);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err1 = VL_RAND_RESET_I(10);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__err2 = VL_RAND_RESET_I(10);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2 = VL_RAND_RESET_I(10);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__in_loop = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__right = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__down = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__complete = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_lt_dx = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_ad__DOT__e2_gt_dy = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__reset_n = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__pclk = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__go = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__busy = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__stax = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__stay = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__endx = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__endy = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__deltax = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__deltay = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__length = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x_out = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y_out = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__state = VL_RAND_RESET_I(2);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dx = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__dy = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x0 = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__x1 = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y0 = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__y1 = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__next_x = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__next_y = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__xa = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__ya = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__xb = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__yb = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err_next = VL_RAND_RESET_I(10);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err1 = VL_RAND_RESET_I(10);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__err2 = VL_RAND_RESET_I(10);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2 = VL_RAND_RESET_I(10);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__in_loop = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__right = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__down = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__complete = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_lt_dx = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_side_bc__DOT__e2_gt_dy = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__reset_n = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__pclk = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__go = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__busy = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__stax = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__stay = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__endx = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__endy = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__deltax = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__deltay = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__length = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__x_out = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__y_out = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__state = VL_RAND_RESET_I(2);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__err = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__x = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__y = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__dx = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__dy = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__x0 = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__x1 = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__y0 = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__y1 = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__next_x = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__next_y = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__xa = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__ya = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__xb = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__yb = VL_RAND_RESET_I(9);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__err_next = VL_RAND_RESET_I(10);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__err1 = VL_RAND_RESET_I(10);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__err2 = VL_RAND_RESET_I(10);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__e2 = VL_RAND_RESET_I(10);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__in_loop = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__right = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__down = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__complete = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_lt_dx = VL_RAND_RESET_I(1);
    sega_saturn_vdp1__DOT__linedraw_span__DOT__e2_gt_dy = VL_RAND_RESET_I(1);
}
