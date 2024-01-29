// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_ifelement__Ec_F9_FB80.h"

// Parameter definitions for Vtop_ifelement__Ec_F9_FB80
constexpr IData/*31:0*/ Vtop_ifelement__Ec_F9_FB80::ENV_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifelement__Ec_F9_FB80::ENV_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifelement__Ec_F9_FB80::TCNTWIDTH;
constexpr IData/*31:0*/ Vtop_ifelement__Ec_F9_FB80::FREQ_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifelement__Ec_F9_FB80::FREQ_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifelement__Ec_F9_FB80::NSLICE;


void Vtop_ifelement__Ec_F9_FB80___ctor_var_reset(Vtop_ifelement__Ec_F9_FB80* vlSelf);

Vtop_ifelement__Ec_F9_FB80::Vtop_ifelement__Ec_F9_FB80(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_ifelement__Ec_F9_FB80___ctor_var_reset(this);
}

void Vtop_ifelement__Ec_F9_FB80::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_ifelement__Ec_F9_FB80::~Vtop_ifelement__Ec_F9_FB80() {
}
