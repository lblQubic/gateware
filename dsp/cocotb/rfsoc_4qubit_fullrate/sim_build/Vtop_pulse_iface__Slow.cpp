// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_pulse_iface.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop_pulse_iface) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_pulse_iface::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtop_pulse_iface::~Vtop_pulse_iface() {
}

void Vtop_pulse_iface::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_pulse_iface::_ctor_var_reset\n"); );
    // Body
    phase = VL_RAND_RESET_I(17);
    freq = VL_RAND_RESET_I(9);
    amp = VL_RAND_RESET_I(16);
    env_word = VL_RAND_RESET_I(24);
    cfg = VL_RAND_RESET_I(4);
    cstrobe = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
}
