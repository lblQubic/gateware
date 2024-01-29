// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_sync_iface.h"

VL_ATTR_COLD void Vtop_sync_iface___ctor_var_reset(Vtop_sync_iface* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_sync_iface___ctor_var_reset\n"); );
    // Body
    vlSelf->barrier = VL_RAND_RESET_I(8);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->ready = VL_RAND_RESET_I(1);
}
