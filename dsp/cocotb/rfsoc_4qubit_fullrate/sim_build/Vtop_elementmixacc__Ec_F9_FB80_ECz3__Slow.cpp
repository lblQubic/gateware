// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_elementmixacc__Ec_F9_FB80_ECz3.h"

// Parameter definitions for Vtop_elementmixacc__Ec_F9_FB80_ECz3
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::ENV_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::ENV_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::FREQ_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::FREQ_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::ACCADDWIDTH;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::NSLICE;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::NSLICEWIDTH;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::genblk1__BRA__0__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::genblk1__BRA__0__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::genblk1__BRA__1__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::genblk1__BRA__1__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::genblk1__BRA__2__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::genblk1__BRA__2__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::genblk1__BRA__3__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_elementmixacc__Ec_F9_FB80_ECz3::genblk1__BRA__3__KET____DOT__mult1__DOT__YWIDTH;


void Vtop_elementmixacc__Ec_F9_FB80_ECz3___ctor_var_reset(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf);

Vtop_elementmixacc__Ec_F9_FB80_ECz3::Vtop_elementmixacc__Ec_F9_FB80_ECz3(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_elementmixacc__Ec_F9_FB80_ECz3___ctor_var_reset(this);
}

void Vtop_elementmixacc__Ec_F9_FB80_ECz3::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_elementmixacc__Ec_F9_FB80_ECz3::~Vtop_elementmixacc__Ec_F9_FB80_ECz3() {
}
