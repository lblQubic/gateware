// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_ifxma__N10.h"

// Parameter definitions for Vtop_ifxma__N10
constexpr IData/*31:0*/ Vtop_ifxma__N10::NDAC;
constexpr IData/*31:0*/ Vtop_ifxma__N10::DAC_AXIS_DATAWIDTH;


void Vtop_ifxma__N10___ctor_var_reset(Vtop_ifxma__N10* vlSelf);

Vtop_ifxma__N10::Vtop_ifxma__N10(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_ifxma__N10___ctor_var_reset(this);
}

void Vtop_ifxma__N10::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_ifxma__N10::~Vtop_ifxma__N10() {
}
