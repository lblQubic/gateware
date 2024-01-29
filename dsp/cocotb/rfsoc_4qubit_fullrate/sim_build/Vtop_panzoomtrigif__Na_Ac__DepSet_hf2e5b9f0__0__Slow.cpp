// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_panzoomtrigif__Na_Ac.h"

VL_ATTR_COLD void Vtop_panzoomtrigif__Na_Ac___eval_static__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__(Vtop_panzoomtrigif__Na_Ac* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__Na_Ac___eval_static__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__\n"); );
    // Body
    vlSelf->trig = 0U;
    vlSelf->delayaftertrigcnt = 0U;
    vlSelf->decimatorcnt = 0U;
    vlSelf->addr = 0U;
    vlSelf->data = 0ULL;
    vlSelf->datasel = 0ULL;
    vlSelf->we = 0U;
    vlSelf->state = 7U;
    vlSelf->nextstate = 7U;
}

VL_ATTR_COLD void Vtop_panzoomtrigif__Na_Ac___ctor_var_reset(Vtop_panzoomtrigif__Na_Ac* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__Na_Ac___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->stb_start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->chan[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->trig = VL_RAND_RESET_I(1);
    vlSelf->delayaftertrigcnt = VL_RAND_RESET_I(16);
    vlSelf->delayaftertrig = VL_RAND_RESET_I(16);
    vlSelf->delayaftertrigcnt0 = VL_RAND_RESET_I(1);
    vlSelf->decimator = VL_RAND_RESET_I(8);
    vlSelf->decimatorcnt = VL_RAND_RESET_I(8);
    vlSelf->decimator0 = VL_RAND_RESET_I(1);
    vlSelf->addr = VL_RAND_RESET_I(12);
    vlSelf->nextaddr = VL_RAND_RESET_I(12);
    vlSelf->data = VL_RAND_RESET_Q(64);
    vlSelf->datasel = VL_RAND_RESET_Q(64);
    vlSelf->we = VL_RAND_RESET_I(1);
    vlSelf->chansel = VL_RAND_RESET_I(5);
    vlSelf->buffull = VL_RAND_RESET_I(1);
    vlSelf->state = 0;
    vlSelf->nextstate = 0;
}
