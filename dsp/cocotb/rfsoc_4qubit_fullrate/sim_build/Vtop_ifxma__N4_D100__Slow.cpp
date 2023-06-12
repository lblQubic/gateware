// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_ifxma__N4_D100.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop_ifxma__N4_D100) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_ifxma__N4_D100::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtop_ifxma__N4_D100::~Vtop_ifxma__N4_D100() {
}

void Vtop_ifxma__N4_D100::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_ifxma__N4_D100::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            coef[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(256, sumcplxx[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(256, sumcplxy[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(256, daccplxx[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(256, daccplxy[__Vi0]);
    }
}
