// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_ifelement__E8_EB200_F9_FB200.h"

// Parameter definitions for Vtop_ifelement__E8_EB200_F9_FB200
constexpr IData/*31:0*/ Vtop_ifelement__E8_EB200_F9_FB200::ENV_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifelement__E8_EB200_F9_FB200::ENV_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifelement__E8_EB200_F9_FB200::TCNTWIDTH;
constexpr IData/*31:0*/ Vtop_ifelement__E8_EB200_F9_FB200::FREQ_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifelement__E8_EB200_F9_FB200::FREQ_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifelement__E8_EB200_F9_FB200::NSLICE;


void Vtop_ifelement__E8_EB200_F9_FB200___ctor_var_reset(Vtop_ifelement__E8_EB200_F9_FB200* vlSelf);

Vtop_ifelement__E8_EB200_F9_FB200::Vtop_ifelement__E8_EB200_F9_FB200(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_ifelement__E8_EB200_F9_FB200___ctor_var_reset(this);
}

void Vtop_ifelement__E8_EB200_F9_FB200::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_ifelement__E8_EB200_F9_FB200::~Vtop_ifelement__E8_EB200_F9_FB200() {
}
