// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_panzoomtrigif__N4_D100.h"

VL_ATTR_COLD void Vtop_panzoomtrigif__N4_D100___eval_static__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET__(Vtop_panzoomtrigif__N4_D100* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__N4_D100___eval_static__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET__\n"); );
    // Body
    vlSelf->trig = 0U;
    vlSelf->delayaftertrigcnt = 0U;
    vlSelf->decimatorcnt = 0U;
    vlSelf->addr = 0U;
    vlSelf->data[0U] = 0U;
    vlSelf->data[1U] = 0U;
    vlSelf->data[2U] = 0U;
    vlSelf->data[3U] = 0U;
    vlSelf->data[4U] = 0U;
    vlSelf->data[5U] = 0U;
    vlSelf->data[6U] = 0U;
    vlSelf->data[7U] = 0U;
    vlSelf->datasel[0U] = 0U;
    vlSelf->datasel[1U] = 0U;
    vlSelf->datasel[2U] = 0U;
    vlSelf->datasel[3U] = 0U;
    vlSelf->datasel[4U] = 0U;
    vlSelf->datasel[5U] = 0U;
    vlSelf->datasel[6U] = 0U;
    vlSelf->datasel[7U] = 0U;
    vlSelf->we = 0U;
    vlSelf->state = 7U;
    vlSelf->nextstate = 7U;
}

VL_ATTR_COLD void Vtop_panzoomtrigif__N4_D100___ctor_var_reset(Vtop_panzoomtrigif__N4_D100* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_panzoomtrigif__N4_D100___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->stb_start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->chan[__Vi0]);
    }
    vlSelf->trig = VL_RAND_RESET_I(1);
    vlSelf->delayaftertrigcnt = VL_RAND_RESET_I(16);
    vlSelf->delayaftertrig = VL_RAND_RESET_I(16);
    vlSelf->delayaftertrigcnt0 = VL_RAND_RESET_I(1);
    vlSelf->decimator = VL_RAND_RESET_I(8);
    vlSelf->decimatorcnt = VL_RAND_RESET_I(8);
    vlSelf->decimator0 = VL_RAND_RESET_I(1);
    vlSelf->addr = VL_RAND_RESET_I(9);
    vlSelf->nextaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(256, vlSelf->data);
    VL_RAND_RESET_W(256, vlSelf->datasel);
    vlSelf->we = VL_RAND_RESET_I(1);
    vlSelf->chansel = VL_RAND_RESET_I(5);
    vlSelf->buffull = VL_RAND_RESET_I(1);
    vlSelf->state = 0;
    vlSelf->nextstate = 0;
}
