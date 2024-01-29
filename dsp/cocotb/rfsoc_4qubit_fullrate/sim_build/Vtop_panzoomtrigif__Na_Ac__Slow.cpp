// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_panzoomtrigif__Na_Ac.h"

// Parameter definitions for Vtop_panzoomtrigif__Na_Ac
constexpr IData/*31:0*/ Vtop_panzoomtrigif__Na_Ac::NCHAN;
constexpr IData/*31:0*/ Vtop_panzoomtrigif__Na_Ac::ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_panzoomtrigif__Na_Ac::DATAWIDTH;
constexpr IData/*31:0*/ Vtop_panzoomtrigif__Na_Ac::SELWIDTH;


void Vtop_panzoomtrigif__Na_Ac___ctor_var_reset(Vtop_panzoomtrigif__Na_Ac* vlSelf);

Vtop_panzoomtrigif__Na_Ac::Vtop_panzoomtrigif__Na_Ac(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_panzoomtrigif__Na_Ac___ctor_var_reset(this);
}

void Vtop_panzoomtrigif__Na_Ac::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_panzoomtrigif__Na_Ac::~Vtop_panzoomtrigif__Na_Ac() {
}
