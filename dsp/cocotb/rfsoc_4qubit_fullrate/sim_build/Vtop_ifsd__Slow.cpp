// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_ifsd.h"

void Vtop_ifsd___ctor_var_reset(Vtop_ifsd* vlSelf);

Vtop_ifsd::Vtop_ifsd(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_ifsd___ctor_var_reset(this);
}

void Vtop_ifsd::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_ifsd::~Vtop_ifsd() {
}
