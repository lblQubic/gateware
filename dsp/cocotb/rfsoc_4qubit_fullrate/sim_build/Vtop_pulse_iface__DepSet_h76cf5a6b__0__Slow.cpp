// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_pulse_iface.h"

VL_ATTR_COLD void Vtop_pulse_iface___ctor_var_reset(Vtop_pulse_iface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_pulse_iface___ctor_var_reset\n"); );
    // Body
    vlSelf->phase = VL_RAND_RESET_I(17);
    vlSelf->freq = VL_RAND_RESET_I(9);
    vlSelf->amp = VL_RAND_RESET_I(16);
    vlSelf->env_word = VL_RAND_RESET_I(24);
    vlSelf->cfg = VL_RAND_RESET_I(4);
    vlSelf->cstrobe = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
}
