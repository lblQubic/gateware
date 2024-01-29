// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_elementconn__pi3.h"

// Parameter definitions for Vtop_elementconn__pi3
constexpr CData/*0:0*/ Vtop_elementconn__pi3::ammod__DOT__cordicg__DOT__OPIN;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ENV_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ENV_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::FREQ_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::FREQ_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::INTPRATIO;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::NSLICE;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::envaddrdelay__DOT__DW;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::envaddrdelay__DOT__LEN;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__NSLICE;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__freqcossinpdelay__DOT__DW;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__freqcossinpdelay__DOT__LEN;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__ampxdelay__DOT__DW;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__ampxdelay__DOT__LEN;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__pinidelay__DOT__DW;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__pinidelay__DOT__LEN;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__cordicg__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__cordicg__DOT__NSTAGE;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__cordicg__DOT__NORMALIZE;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__cordicg__DOT__ZWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__cordicg__DOT__BUFIN;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__cordicg__DOT__GW;
constexpr VlWide<33>/*1055:0*/ Vtop_elementconn__pi3::ammod__DOT__cordicg__DOT__PHASE_CONST;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__cordicg__DOT__WIDTHP1;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__cordicg__DOT__BUFINDELAY;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__cordicg__DOT__NORMALIZEDDELAY;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__cordicg__DOT__reg_delay__DOT__DW;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__cordicg__DOT__reg_delay__DOT__LEN;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__multidelay__DOT__DW;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__multidelay__DOT__LEN;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_elementconn__pi3::ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__YWIDTH;


void Vtop_elementconn__pi3___ctor_var_reset(Vtop_elementconn__pi3* vlSelf);

Vtop_elementconn__pi3::Vtop_elementconn__pi3(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_elementconn__pi3___ctor_var_reset(this);
}

void Vtop_elementconn__pi3::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_elementconn__pi3::~Vtop_elementconn__pi3() {
}
