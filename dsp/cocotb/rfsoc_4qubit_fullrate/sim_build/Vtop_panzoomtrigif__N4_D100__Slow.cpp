// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_panzoomtrigif__N4_D100.h"

// Parameter definitions for Vtop_panzoomtrigif__N4_D100
constexpr IData/*31:0*/ Vtop_panzoomtrigif__N4_D100::NCHAN;
constexpr IData/*31:0*/ Vtop_panzoomtrigif__N4_D100::ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_panzoomtrigif__N4_D100::DATAWIDTH;
constexpr IData/*31:0*/ Vtop_panzoomtrigif__N4_D100::SELWIDTH;


void Vtop_panzoomtrigif__N4_D100___ctor_var_reset(Vtop_panzoomtrigif__N4_D100* vlSelf);

Vtop_panzoomtrigif__N4_D100::Vtop_panzoomtrigif__N4_D100(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_panzoomtrigif__N4_D100___ctor_var_reset(this);
}

void Vtop_panzoomtrigif__N4_D100::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_panzoomtrigif__N4_D100::~Vtop_panzoomtrigif__N4_D100() {
}
