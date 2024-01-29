// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_ammod__N10.h"

// Parameter definitions for Vtop_ammod__N10
constexpr CData/*0:0*/ Vtop_ammod__N10::cordicg__DOT__OPIN;
constexpr IData/*31:0*/ Vtop_ammod__N10::NSLICE;
constexpr IData/*31:0*/ Vtop_ammod__N10::freqcossinpdelay__DOT__DW;
constexpr IData/*31:0*/ Vtop_ammod__N10::freqcossinpdelay__DOT__LEN;
constexpr IData/*31:0*/ Vtop_ammod__N10::ampxdelay__DOT__DW;
constexpr IData/*31:0*/ Vtop_ammod__N10::ampxdelay__DOT__LEN;
constexpr IData/*31:0*/ Vtop_ammod__N10::pinidelay__DOT__DW;
constexpr IData/*31:0*/ Vtop_ammod__N10::pinidelay__DOT__LEN;
constexpr IData/*31:0*/ Vtop_ammod__N10::cordicg__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::cordicg__DOT__NSTAGE;
constexpr IData/*31:0*/ Vtop_ammod__N10::cordicg__DOT__NORMALIZE;
constexpr IData/*31:0*/ Vtop_ammod__N10::cordicg__DOT__ZWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::cordicg__DOT__BUFIN;
constexpr IData/*31:0*/ Vtop_ammod__N10::cordicg__DOT__GW;
constexpr VlWide<33>/*1055:0*/ Vtop_ammod__N10::cordicg__DOT__PHASE_CONST;
constexpr IData/*31:0*/ Vtop_ammod__N10::cordicg__DOT__WIDTHP1;
constexpr IData/*31:0*/ Vtop_ammod__N10::cordicg__DOT__BUFINDELAY;
constexpr IData/*31:0*/ Vtop_ammod__N10::cordicg__DOT__NORMALIZEDDELAY;
constexpr IData/*31:0*/ Vtop_ammod__N10::cordicg__DOT__reg_delay__DOT__DW;
constexpr IData/*31:0*/ Vtop_ammod__N10::cordicg__DOT__reg_delay__DOT__LEN;
constexpr IData/*31:0*/ Vtop_ammod__N10::multidelay__DOT__DW;
constexpr IData/*31:0*/ Vtop_ammod__N10::multidelay__DOT__LEN;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__0__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__0__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__0__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__0__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__1__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__1__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__1__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__1__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__2__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__2__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__2__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__2__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__3__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__3__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__3__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__3__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__4__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__4__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__4__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__4__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__5__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__5__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__5__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__5__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__6__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__6__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__6__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__6__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__7__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__7__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__7__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__7__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__8__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__8__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__8__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__8__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__9__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__9__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__9__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__9__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__10__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__10__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__10__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__10__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__11__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__11__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__11__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__11__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__12__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__12__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__12__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__12__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__13__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__13__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__13__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__13__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__14__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__14__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__14__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__14__KET____DOT__mult2__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__15__KET____DOT__mult1__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__15__KET____DOT__mult1__DOT__YWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__15__KET____DOT__mult2__DOT__XWIDTH;
constexpr IData/*31:0*/ Vtop_ammod__N10::genblk2__BRA__15__KET____DOT__mult2__DOT__YWIDTH;


void Vtop_ammod__N10___ctor_var_reset(Vtop_ammod__N10* vlSelf);

Vtop_ammod__N10::Vtop_ammod__N10(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_ammod__N10___ctor_var_reset(this);
}

void Vtop_ammod__N10::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_ammod__N10::~Vtop_ammod__N10() {
}
