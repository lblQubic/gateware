// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_cmd_mem_iface__C10_M80_MB1.h"

VL_ATTR_COLD void Vtop_cmd_mem_iface__C10_M80_MB1___ctor_var_reset(Vtop_cmd_mem_iface__C10_M80_MB1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_cmd_mem_iface__C10_M80_MB1___ctor_var_reset\n"); );
    // Body
    vlSelf->instr_ptr = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->cmd_read);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->mem_bus[__Vi0]);
    }
}
