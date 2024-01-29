// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_ifelement__Ec_F9_FB200.h"

VL_ATTR_COLD void Vtop_ifelement__Ec_F9_FB200___eval_static__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__(Vtop_ifelement__Ec_F9_FB200* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_F9_FB200___eval_static__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__\n"); );
    // Body
    vlSelf->cmdstb_sr = 0U;
    vlSelf->dummy_cmdstb_sr = 0U;
    vlSelf->reset_sr = 0U;
    vlSelf->envstart = 0U;
    vlSelf->envlength = 0U;
    vlSelf->ampx = 0U;
    vlSelf->ampy = 0U;
    vlSelf->pini = 0U;
    vlSelf->mode = 0U;
    vlSelf->valid_r = 0U;
    vlSelf->multix_r[0U] = 0U;
    vlSelf->multix_r[1U] = 0U;
    vlSelf->multix_r[2U] = 0U;
    vlSelf->multix_r[3U] = 0U;
    vlSelf->multix_r[4U] = 0U;
    vlSelf->multix_r[5U] = 0U;
    vlSelf->multix_r[6U] = 0U;
    vlSelf->multix_r[7U] = 0U;
    vlSelf->multiy_r[0U] = 0U;
    vlSelf->multiy_r[1U] = 0U;
    vlSelf->multiy_r[2U] = 0U;
    vlSelf->multiy_r[3U] = 0U;
    vlSelf->multiy_r[4U] = 0U;
    vlSelf->multiy_r[5U] = 0U;
    vlSelf->multiy_r[6U] = 0U;
    vlSelf->multiy_r[7U] = 0U;
    vlSelf->tcnt = 0U;
    vlSelf->command[0U] = 0U;
    vlSelf->command[1U] = 0U;
    vlSelf->command[2U] = 0U;
    vlSelf->command[3U] = 0U;
    vlSelf->command_d[0U] = 0U;
    vlSelf->command_d[1U] = 0U;
    vlSelf->command_d[2U] = 0U;
    vlSelf->command_d[3U] = 0U;
    vlSelf->command_d2[0U] = 0U;
    vlSelf->command_d2[1U] = 0U;
    vlSelf->command_d2[2U] = 0U;
    vlSelf->command_d2[3U] = 0U;
    vlSelf->cw_d0 = 0U;
    vlSelf->cw_d1 = 0U;
    vlSelf->cw_d2 = 0U;
    vlSelf->cw_d3 = 0U;
    vlSelf->cw_d4 = 0U;
    vlSelf->busy_r = 0U;
    vlSelf->cw_sr = 0U;
    vlSelf->dummycw_sr = 0U;
    vlSelf->trigt = 0U;
}

VL_ATTR_COLD void Vtop_ifelement__Ec_F9_FB200___ctor_var_reset(Vtop_ifelement__Ec_F9_FB200* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ifelement__Ec_F9_FB200___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->cmdstb = VL_RAND_RESET_I(1);
    vlSelf->cmdstb_sr = VL_RAND_RESET_I(16);
    vlSelf->dummy_cmdstb_sr = VL_RAND_RESET_I(1);
    vlSelf->reset_sr = VL_RAND_RESET_I(16);
    vlSelf->envstart = VL_RAND_RESET_I(12);
    vlSelf->envlength = VL_RAND_RESET_I(12);
    vlSelf->ampx = VL_RAND_RESET_I(16);
    vlSelf->ampy = VL_RAND_RESET_I(16);
    vlSelf->pini = VL_RAND_RESET_I(17);
    vlSelf->mode = VL_RAND_RESET_I(2);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->valid_r = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->multix);
    VL_RAND_RESET_W(256, vlSelf->multiy);
    VL_RAND_RESET_W(256, vlSelf->multix_r);
    VL_RAND_RESET_W(256, vlSelf->multiy_r);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->multix_check[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->multiy_check[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->tcnt = VL_RAND_RESET_I(27);
    VL_RAND_RESET_W(128, vlSelf->command);
    VL_RAND_RESET_W(128, vlSelf->command_d);
    VL_RAND_RESET_W(128, vlSelf->command_d2);
    vlSelf->cw_d0 = VL_RAND_RESET_I(1);
    vlSelf->cw_d1 = VL_RAND_RESET_I(1);
    vlSelf->cw_d2 = VL_RAND_RESET_I(1);
    vlSelf->cw_d3 = VL_RAND_RESET_I(1);
    vlSelf->cw_d4 = VL_RAND_RESET_I(1);
    vlSelf->prepbusy = VL_RAND_RESET_I(1);
    vlSelf->pulsebusy = VL_RAND_RESET_I(1);
    vlSelf->postprobusy = VL_RAND_RESET_I(1);
    vlSelf->busy_r = VL_RAND_RESET_I(1);
    vlSelf->busy = VL_RAND_RESET_I(1);
    vlSelf->cw = VL_RAND_RESET_I(1);
    vlSelf->cw2 = VL_RAND_RESET_I(1);
    vlSelf->cw_sr = VL_RAND_RESET_I(5);
    vlSelf->dummycw_sr = VL_RAND_RESET_I(1);
    vlSelf->trigt = VL_RAND_RESET_I(27);
    vlSelf->freqaddr = VL_RAND_RESET_I(9);
}
