// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_cmd_mem_iface__C10_M80_MB1.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop_cmd_mem_iface__C10_M80_MB1) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_cmd_mem_iface__C10_M80_MB1::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtop_cmd_mem_iface__C10_M80_MB1::~Vtop_cmd_mem_iface__C10_M80_MB1() {
}

void Vtop_cmd_mem_iface__C10_M80_MB1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_cmd_mem_iface__C10_M80_MB1::_ctor_var_reset\n"); );
    // Body
    instr_ptr = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, cmd_read);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        VL_RAND_RESET_W(128, mem_bus[__Vi0]);
    }
}
