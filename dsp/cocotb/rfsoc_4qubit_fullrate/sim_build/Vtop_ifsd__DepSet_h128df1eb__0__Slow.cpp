// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_ifsd.h"

VL_ATTR_COLD void Vtop_ifsd___ctor_var_reset(Vtop_ifsd* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_ifsd___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 65; ++__Vi0) {
        vlSelf->weight_bias[__Vi0] = VL_RAND_RESET_I(18);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->normalizer_min[__Vi0] = VL_RAND_RESET_I(32);
    }
}
