// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_sync_iface.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop_sync_iface) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_sync_iface::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtop_sync_iface::~Vtop_sync_iface() {
}

void Vtop_sync_iface::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_sync_iface::_ctor_var_reset\n"); );
    // Body
    barrier = VL_RAND_RESET_I(8);
    enable = VL_RAND_RESET_I(1);
    ready = VL_RAND_RESET_I(1);
}
