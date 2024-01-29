// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_ifxma__N10.h"

VL_ATTR_COLD void Vtop_ifxma__N10___ctor_var_reset(Vtop_ifxma__N10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_ifxma__N10___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->coef[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->sumcplxx[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->sumcplxy[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->daccplxx[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->daccplxy[__Vi0]);
    }
}
