// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_ammod__N10.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop_ammod__N10) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_ammod__N10::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtop_ammod__N10::~Vtop_ammod__N10() {
}

void Vtop_ammod__N10::_initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10::_initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->cordicg__DOT__stage__BRA__0__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__znext = 0U;
    this->cordicg__DOT__genblk6__DOT__zdummy = 0U;
    this->freqcossinpdelay__DOT__gate = 1U;
    this->freqcossinpdelay__DOT__reset = 0U;
    this->ampxdelay__DOT__gate = 1U;
    this->ampxdelay__DOT__reset = 0U;
    this->pinidelay__DOT__gate = 1U;
    this->pinidelay__DOT__reset = 0U;
    this->cordicg__DOT__yin = 0U;
    this->cordicg__DOT__reg_delay__DOT__gate = 1U;
    this->cordicg__DOT__reg_delay__DOT__reset = 0U;
    this->multidelay__DOT__gate = 1U;
    this->multidelay__DOT__reset = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__zminus = 0U;
    this->cordicg__DOT__errorr = 0U;
    this->cordicg__DOT__genblk3__DOT__xin_d = 0U;
    this->cordicg__DOT__genblk3__DOT__yin_d = 0U;
    this->phtime__DOT__freq_r = 0U;
    this->phtime__DOT__tcnt_r = 0U;
    this->phtime__DOT__phasetime_r3 = 0U;
    this->cordicg__DOT__phaseout_r = 0U;
    this->cordicg__DOT__genblk3__DOT__phasein_d = 0U;
    this->cordicg__DOT__yout_r = 0U;
    this->gateout_r = 0U;
    this->multiy16x16_r[0U] = 0U;
    this->multiy16x16_r[1U] = 0U;
    this->multiy16x16_r[2U] = 0U;
    this->multiy16x16_r[3U] = 0U;
    this->multiy16x16_r[4U] = 0U;
    this->multiy16x16_r[5U] = 0U;
    this->multiy16x16_r[6U] = 0U;
    this->multiy16x16_r[7U] = 0U;
    this->multix16x16_r[0U] = 0U;
    this->multix16x16_r[1U] = 0U;
    this->multix16x16_r[2U] = 0U;
    this->multix16x16_r[3U] = 0U;
    this->multix16x16_r[4U] = 0U;
    this->multix16x16_r[5U] = 0U;
    this->multix16x16_r[6U] = 0U;
    this->multix16x16_r[7U] = 0U;
    this->phtime__DOT__phasetime_r2 = 0U;
    this->cordicg__DOT__zg1 = 0U;
    this->cordicg__DOT__genblk6__DOT__xdummy = 0U;
    this->cordicg__DOT__genblk6__DOT__ydummy = 0U;
    this->ampx_d2 = 0U;
    this->phaseinit = 0U;
    this->gphaseinit = 0U;
    this->phtime__DOT__gatesr = 0U;
    this->ampxdelay__DOT__usual__DOT__shifter[0U] = 0U;
    this->ampxdelay__DOT__usual__DOT__shifter[1U] = 0U;
    this->ampxdelay__DOT__usual__DOT__shifter[2U] = 0U;
    this->ampxdelay__DOT__usual__DOT__shifter[3U] = 0U;
    this->pinidelay__DOT__usual__DOT__shifter[0U] = 0U;
    this->pinidelay__DOT__usual__DOT__shifter[1U] = 0U;
    this->pinidelay__DOT__usual__DOT__shifter[2U] = 0U;
    this->pinidelay__DOT__usual__DOT__shifter[3U] = 0U;
    this->multidelay__DOT__usual__DOT__shifter = 0U;
    this->cordicg__DOT__xout_r = 0U;
    this->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x18fU)) {
        this->freqcossinpdelay__DOT__usual__DOT__shifter[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    this->phtime__DOT__phasetime_r1 = 0U;
    this->cordicg__DOT__xsum2_d = 0U;
    this->cordicg__DOT__xsum3 = 0U;
    this->cordicg__DOT__ysum2_d = 0U;
    this->cordicg__DOT__ysum3 = 0U;
    this->cordicg__DOT__zg0 = 0U;
    this->phtime__DOT__phasetime_r0 = 0U;
    this->cordicg__DOT__xsum0 = 0U;
    this->cordicg__DOT__xsum1 = 0U;
    this->cordicg__DOT__xsum2 = 0U;
    this->cordicg__DOT__ysum0 = 0U;
    this->cordicg__DOT__ysum1 = 0U;
    this->cordicg__DOT__ysum2 = 0U;
    this->genblk2__BRA__0__KET____DOT__envxi = 0U;
    this->genblk2__BRA__0__KET____DOT__envyi = 0U;
    this->genblk2__BRA__0__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__0__KET____DOT__cospi = 0U;
    this->genblk2__BRA__1__KET____DOT__envxi = 0U;
    this->genblk2__BRA__1__KET____DOT__envyi = 0U;
    this->genblk2__BRA__1__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__1__KET____DOT__cospi = 0U;
    this->genblk2__BRA__2__KET____DOT__envxi = 0U;
    this->genblk2__BRA__2__KET____DOT__envyi = 0U;
    this->genblk2__BRA__2__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__2__KET____DOT__cospi = 0U;
    this->genblk2__BRA__3__KET____DOT__envxi = 0U;
    this->genblk2__BRA__3__KET____DOT__envyi = 0U;
    this->genblk2__BRA__3__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__3__KET____DOT__cospi = 0U;
    this->genblk2__BRA__4__KET____DOT__envxi = 0U;
    this->genblk2__BRA__4__KET____DOT__envyi = 0U;
    this->genblk2__BRA__4__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__4__KET____DOT__cospi = 0U;
    this->genblk2__BRA__5__KET____DOT__envxi = 0U;
    this->genblk2__BRA__5__KET____DOT__envyi = 0U;
    this->genblk2__BRA__5__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__5__KET____DOT__cospi = 0U;
    this->genblk2__BRA__6__KET____DOT__envxi = 0U;
    this->genblk2__BRA__6__KET____DOT__envyi = 0U;
    this->genblk2__BRA__6__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__6__KET____DOT__cospi = 0U;
    this->genblk2__BRA__7__KET____DOT__envxi = 0U;
    this->genblk2__BRA__7__KET____DOT__envyi = 0U;
    this->genblk2__BRA__7__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__7__KET____DOT__cospi = 0U;
    this->genblk2__BRA__8__KET____DOT__envxi = 0U;
    this->genblk2__BRA__8__KET____DOT__envyi = 0U;
    this->genblk2__BRA__8__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__8__KET____DOT__cospi = 0U;
    this->genblk2__BRA__9__KET____DOT__envxi = 0U;
    this->genblk2__BRA__9__KET____DOT__envyi = 0U;
    this->genblk2__BRA__9__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__9__KET____DOT__cospi = 0U;
    this->genblk2__BRA__10__KET____DOT__envxi = 0U;
    this->genblk2__BRA__10__KET____DOT__envyi = 0U;
    this->genblk2__BRA__10__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__10__KET____DOT__cospi = 0U;
    this->genblk2__BRA__11__KET____DOT__envxi = 0U;
    this->genblk2__BRA__11__KET____DOT__envyi = 0U;
    this->genblk2__BRA__11__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__11__KET____DOT__cospi = 0U;
    this->genblk2__BRA__12__KET____DOT__envxi = 0U;
    this->genblk2__BRA__12__KET____DOT__envyi = 0U;
    this->genblk2__BRA__12__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__12__KET____DOT__cospi = 0U;
    this->genblk2__BRA__13__KET____DOT__envxi = 0U;
    this->genblk2__BRA__13__KET____DOT__envyi = 0U;
    this->genblk2__BRA__13__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__13__KET____DOT__cospi = 0U;
    this->genblk2__BRA__14__KET____DOT__envxi = 0U;
    this->genblk2__BRA__14__KET____DOT__envyi = 0U;
    this->genblk2__BRA__14__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__14__KET____DOT__cospi = 0U;
    this->genblk2__BRA__15__KET____DOT__envxi = 0U;
    this->genblk2__BRA__15__KET____DOT__envyi = 0U;
    this->genblk2__BRA__15__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__15__KET____DOT__cospi = 0U;
    this->cos = 0U;
    this->sin = 0U;
}

void Vtop_ammod__N10::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__7\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->cordicg__DOT__PHASE[0U] = 0x20000000U;
    this->cordicg__DOT__PHASE[1U] = 0x12e4051eU;
    this->cordicg__DOT__PHASE[2U] = 0x9fb385bU;
    this->cordicg__DOT__PHASE[3U] = 0x51111d4U;
    this->cordicg__DOT__PHASE[4U] = 0x28b0d43U;
    this->cordicg__DOT__PHASE[5U] = 0x145d7e1U;
    this->cordicg__DOT__PHASE[6U] = 0xa2f61eU;
    this->cordicg__DOT__PHASE[7U] = 0x517c55U;
    this->cordicg__DOT__PHASE[8U] = 0x28be53U;
    this->cordicg__DOT__PHASE[9U] = 0x145f2fU;
    this->cordicg__DOT__PHASE[0xaU] = 0xa2f98U;
    this->cordicg__DOT__PHASE[0xbU] = 0x517ccU;
    this->cordicg__DOT__PHASE[0xcU] = 0x28be6U;
    this->cordicg__DOT__PHASE[0xdU] = 0x145f3U;
    this->cordicg__DOT__PHASE[0xeU] = 0xa2faU;
    this->cordicg__DOT__PHASE[0xfU] = 0x517dU;
    this->cordicg__DOT__PHASE[0x10U] = 0x28beU;
    this->cordicg__DOT__PHASE[0x11U] = 0x145fU;
    this->cordicg__DOT__PHASE[0x12U] = 0xa30U;
    this->cordicg__DOT__PHASE[0x13U] = 0x518U;
    this->cordicg__DOT__PHASE[0x14U] = 0x28cU;
    this->cordicg__DOT__PHASE[0x15U] = 0x146U;
    this->cordicg__DOT__PHASE[0x16U] = 0xa3U;
    this->cordicg__DOT__PHASE[0x17U] = 0x51U;
    this->cordicg__DOT__PHASE[0x18U] = 0x29U;
    this->cordicg__DOT__PHASE[0x19U] = 0x14U;
    this->cordicg__DOT__PHASE[0x1aU] = 0xaU;
    this->cordicg__DOT__PHASE[0x1bU] = 5U;
    this->cordicg__DOT__PHASE[0x1cU] = 3U;
    this->cordicg__DOT__PHASE[0x1dU] = 1U;
    this->cordicg__DOT__PHASE[0x1eU] = 1U;
    this->cordicg__DOT__PHASE[0x1fU] = 0U;
    this->cordicg__DOT__PHASE[0x20U] = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[1U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[2U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[3U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[4U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[5U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[6U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[7U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[8U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[9U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0xaU] >> 0x10U));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0xbU] >> 0x10U));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0xcU] >> 0x10U));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0xdU] >> 0x10U));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0xeU] >> 0x10U));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0xfU] >> 0x10U));
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int;
    this->cordicg__DOT__plusall[0U] = (1U & (this->cordicg__DOT__z
                                             [0U] >> 0x10U));
    this->cordicg__DOT__plusall[1U] = (1U & (this->cordicg__DOT__z
                                             [1U] >> 0x10U));
    this->cordicg__DOT__plusall[2U] = (1U & (this->cordicg__DOT__z
                                             [2U] >> 0x10U));
    this->cordicg__DOT__plusall[3U] = (1U & (this->cordicg__DOT__z
                                             [3U] >> 0x10U));
    this->cordicg__DOT__plusall[4U] = (1U & (this->cordicg__DOT__z
                                             [4U] >> 0x10U));
    this->cordicg__DOT__plusall[5U] = (1U & (this->cordicg__DOT__z
                                             [5U] >> 0x10U));
    this->cordicg__DOT__plusall[6U] = (1U & (this->cordicg__DOT__z
                                             [6U] >> 0x10U));
    this->cordicg__DOT__plusall[7U] = (1U & (this->cordicg__DOT__z
                                             [7U] >> 0x10U));
    this->cordicg__DOT__plusall[8U] = (1U & (this->cordicg__DOT__z
                                             [8U] >> 0x10U));
    this->cordicg__DOT__plusall[9U] = (1U & (this->cordicg__DOT__z
                                             [9U] >> 0x10U));
    this->cordicg__DOT__plusall[0xaU] = (1U & (this->cordicg__DOT__z
                                               [0xaU] 
                                               >> 0x10U));
    this->cordicg__DOT__plusall[0xbU] = (1U & (this->cordicg__DOT__z
                                               [0xbU] 
                                               >> 0x10U));
    this->cordicg__DOT__plusall[0xcU] = (1U & (this->cordicg__DOT__z
                                               [0xcU] 
                                               >> 0x10U));
    this->cordicg__DOT__plusall[0xdU] = (1U & (this->cordicg__DOT__z
                                               [0xdU] 
                                               >> 0x10U));
    this->cordicg__DOT__plusall[0xeU] = (1U & (this->cordicg__DOT__z
                                               [0xeU] 
                                               >> 0x10U));
    this->cordicg__DOT__plusall[0xfU] = (1U & (this->cordicg__DOT__z
                                               [0xfU] 
                                               >> 0x10U));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__zi_int;
    this->cordicg__DOT__zg = this->cordicg__DOT__z[0xfU];
    this->cordicg__DOT__xg = this->cordicg__DOT__x[0xfU];
    this->cordicg__DOT__yg = this->cordicg__DOT__y[0xfU];
    this->cosp[0U] = 0x7fffU;
    this->sinp[0U] = 0U;
    this->cordicg__DOT__error = this->cordicg__DOT__errorr;
    this->cordicg__DOT__xin_1 = this->cordicg__DOT__genblk3__DOT__xin_d;
    this->cordicg__DOT__yin_1 = this->cordicg__DOT__genblk3__DOT__yin_d;
    this->phtime__DOT__phasetime_w = (0x3fffffffffffffULL 
                                      & ((QData)((IData)(this->phtime__DOT__freq_r)) 
                                         * (QData)((IData)(this->phtime__DOT__tcnt_r))));
    this->phtime__DOT__phasetime = this->phtime__DOT__phasetime_r3;
    this->cordicg__DOT__phaseout = this->cordicg__DOT__phaseout_r;
    this->cordicg__DOT__phasein_1 = this->cordicg__DOT__genblk3__DOT__phasein_d;
    this->cordicg__DOT__yout = this->cordicg__DOT__yout_r;
    this->gateout = this->gateout_r;
    this->multiy16x16[0U] = this->multiy16x16_r[0U];
    this->multiy16x16[1U] = this->multiy16x16_r[1U];
    this->multiy16x16[2U] = this->multiy16x16_r[2U];
    this->multiy16x16[3U] = this->multiy16x16_r[3U];
    this->multiy16x16[4U] = this->multiy16x16_r[4U];
    this->multiy16x16[5U] = this->multiy16x16_r[5U];
    this->multiy16x16[6U] = this->multiy16x16_r[6U];
    this->multiy16x16[7U] = this->multiy16x16_r[7U];
    this->multix16x16[0U] = this->multix16x16_r[0U];
    this->multix16x16[1U] = this->multix16x16_r[1U];
    this->multix16x16[2U] = this->multix16x16_r[2U];
    this->multix16x16[3U] = this->multix16x16_r[3U];
    this->multix16x16[4U] = this->multix16x16_r[4U];
    this->multix16x16[5U] = this->multix16x16_r[5U];
    this->multix16x16[6U] = this->multix16x16_r[6U];
    this->multix16x16[7U] = this->multix16x16_r[7U];
    this->cordicg__DOT__xin = this->ampx_d2;
    this->cordicg__DOT__phasein = this->phaseinit;
    this->cordicg__DOT__gin = this->gphaseinit;
    this->phtime__DOT__gateout = (1U & ((IData)(this->phtime__DOT__gatesr) 
                                        >> 4U));
    this->ampxdelay__DOT__dout = (0xffffU & this->ampxdelay__DOT__usual__DOT__shifter[3U]);
    this->pinidelay__DOT__dout = (0x1ffffU & (this->pinidelay__DOT__usual__DOT__shifter[3U] 
                                              >> 6U));
    this->multidelay__DOT__dout = (1U & ((IData)(this->multidelay__DOT__usual__DOT__shifter) 
                                         >> 0xcU));
    this->cordicg__DOT__xout = this->cordicg__DOT__xout_r;
    this->cordicg__DOT__reg_delay__DOT__dout = (1U 
                                                & (this->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                                                   >> 0x13U));
    this->freqcossinpdelay__DOT__dout[0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x180U];
    this->freqcossinpdelay__DOT__dout[1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x181U];
    this->freqcossinpdelay__DOT__dout[2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x182U];
    this->freqcossinpdelay__DOT__dout[3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x183U];
    this->freqcossinpdelay__DOT__dout[4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x184U];
    this->freqcossinpdelay__DOT__dout[5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x185U];
    this->freqcossinpdelay__DOT__dout[6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x186U];
    this->freqcossinpdelay__DOT__dout[7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x187U];
    this->freqcossinpdelay__DOT__dout[8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x188U];
    this->freqcossinpdelay__DOT__dout[9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x189U];
    this->freqcossinpdelay__DOT__dout[0xaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18aU];
    this->freqcossinpdelay__DOT__dout[0xbU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18bU];
    this->freqcossinpdelay__DOT__dout[0xcU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18cU];
    this->freqcossinpdelay__DOT__dout[0xdU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18dU];
    this->freqcossinpdelay__DOT__dout[0xeU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18eU];
    this->freqcossinpdelay__DOT__dout[0xfU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18fU];
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__0__KET____DOT__envxi;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__0__KET____DOT__envyi;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__0__KET____DOT__sinpi;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__0__KET____DOT__cospi;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__1__KET____DOT__envxi;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__1__KET____DOT__envyi;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__1__KET____DOT__sinpi;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__1__KET____DOT__cospi;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__2__KET____DOT__envxi;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__2__KET____DOT__envyi;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__2__KET____DOT__sinpi;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__2__KET____DOT__cospi;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__3__KET____DOT__envxi;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__3__KET____DOT__envyi;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__3__KET____DOT__sinpi;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__3__KET____DOT__cospi;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__4__KET____DOT__envxi;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__4__KET____DOT__envyi;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__4__KET____DOT__sinpi;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__4__KET____DOT__cospi;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__5__KET____DOT__envxi;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__5__KET____DOT__envyi;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__5__KET____DOT__sinpi;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__5__KET____DOT__cospi;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__6__KET____DOT__envxi;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__6__KET____DOT__envyi;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__6__KET____DOT__sinpi;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__6__KET____DOT__cospi;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__7__KET____DOT__envxi;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__7__KET____DOT__envyi;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__7__KET____DOT__sinpi;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__7__KET____DOT__cospi;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__8__KET____DOT__envxi;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__8__KET____DOT__envyi;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__8__KET____DOT__sinpi;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__8__KET____DOT__cospi;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__9__KET____DOT__envxi;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__9__KET____DOT__envyi;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__9__KET____DOT__sinpi;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__9__KET____DOT__cospi;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__10__KET____DOT__envxi;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__10__KET____DOT__envyi;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__10__KET____DOT__sinpi;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__10__KET____DOT__cospi;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__11__KET____DOT__envxi;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__11__KET____DOT__envyi;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__11__KET____DOT__sinpi;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__11__KET____DOT__cospi;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__12__KET____DOT__envxi;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__12__KET____DOT__envyi;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__12__KET____DOT__sinpi;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__12__KET____DOT__cospi;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__13__KET____DOT__envxi;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__13__KET____DOT__envyi;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__13__KET____DOT__sinpi;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__13__KET____DOT__cospi;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__14__KET____DOT__envxi;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__14__KET____DOT__envyi;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__14__KET____DOT__sinpi;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__14__KET____DOT__cospi;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__15__KET____DOT__envxi;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__15__KET____DOT__envyi;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__15__KET____DOT__sinpi;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__15__KET____DOT__cospi;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->freqcossinpdelay__DOT__din[0U] = this->freqcossinp32x16[0U];
    this->freqcossinpdelay__DOT__din[1U] = this->freqcossinp32x16[1U];
    this->freqcossinpdelay__DOT__din[2U] = this->freqcossinp32x16[2U];
    this->freqcossinpdelay__DOT__din[3U] = this->freqcossinp32x16[3U];
    this->freqcossinpdelay__DOT__din[4U] = this->freqcossinp32x16[4U];
    this->freqcossinpdelay__DOT__din[5U] = this->freqcossinp32x16[5U];
    this->freqcossinpdelay__DOT__din[6U] = this->freqcossinp32x16[6U];
    this->freqcossinpdelay__DOT__din[7U] = this->freqcossinp32x16[7U];
    this->freqcossinpdelay__DOT__din[8U] = this->freqcossinp32x16[8U];
    this->freqcossinpdelay__DOT__din[9U] = this->freqcossinp32x16[9U];
    this->freqcossinpdelay__DOT__din[0xaU] = this->freqcossinp32x16[0xaU];
    this->freqcossinpdelay__DOT__din[0xbU] = this->freqcossinp32x16[0xbU];
    this->freqcossinpdelay__DOT__din[0xcU] = this->freqcossinp32x16[0xcU];
    this->freqcossinpdelay__DOT__din[0xdU] = this->freqcossinp32x16[0xdU];
    this->freqcossinpdelay__DOT__din[0xeU] = this->freqcossinp32x16[0xeU];
    this->freqcossinpdelay__DOT__din[0xfU] = this->freqcossinp32x16[0xfU];
    this->freq32 = this->freqcossinp32x16[0U];
    this->envx[0U] = (0xffffU & ((this->envxy32x16[1U] 
                                  << 0x10U) | (this->envxy32x16[0U] 
                                               >> 0x10U)));
    this->envy[0U] = (0xffffU & this->envxy32x16[0U]);
    this->envx[1U] = (0xffffU & ((this->envxy32x16[2U] 
                                  << 0x10U) | (this->envxy32x16[1U] 
                                               >> 0x10U)));
    this->envy[1U] = (0xffffU & this->envxy32x16[1U]);
    this->envx[2U] = (0xffffU & ((this->envxy32x16[3U] 
                                  << 0x10U) | (this->envxy32x16[2U] 
                                               >> 0x10U)));
    this->envy[2U] = (0xffffU & this->envxy32x16[2U]);
    this->envx[3U] = (0xffffU & ((this->envxy32x16[4U] 
                                  << 0x10U) | (this->envxy32x16[3U] 
                                               >> 0x10U)));
    this->envy[3U] = (0xffffU & this->envxy32x16[3U]);
    this->envx[4U] = (0xffffU & ((this->envxy32x16[5U] 
                                  << 0x10U) | (this->envxy32x16[4U] 
                                               >> 0x10U)));
    this->envy[4U] = (0xffffU & this->envxy32x16[4U]);
    this->envx[5U] = (0xffffU & ((this->envxy32x16[6U] 
                                  << 0x10U) | (this->envxy32x16[5U] 
                                               >> 0x10U)));
    this->envy[5U] = (0xffffU & this->envxy32x16[5U]);
    this->envx[6U] = (0xffffU & ((this->envxy32x16[7U] 
                                  << 0x10U) | (this->envxy32x16[6U] 
                                               >> 0x10U)));
    this->envy[6U] = (0xffffU & this->envxy32x16[6U]);
    this->envx[7U] = (0xffffU & ((this->envxy32x16[8U] 
                                  << 0x10U) | (this->envxy32x16[7U] 
                                               >> 0x10U)));
    this->envy[7U] = (0xffffU & this->envxy32x16[7U]);
    this->envx[8U] = (0xffffU & ((this->envxy32x16[9U] 
                                  << 0x10U) | (this->envxy32x16[8U] 
                                               >> 0x10U)));
    this->envy[8U] = (0xffffU & this->envxy32x16[8U]);
    this->envx[9U] = (0xffffU & ((this->envxy32x16[0xaU] 
                                  << 0x10U) | (this->envxy32x16[9U] 
                                               >> 0x10U)));
    this->envy[9U] = (0xffffU & this->envxy32x16[9U]);
    this->envx[0xaU] = (0xffffU & ((this->envxy32x16[0xbU] 
                                    << 0x10U) | (this->envxy32x16[0xaU] 
                                                 >> 0x10U)));
    this->envy[0xaU] = (0xffffU & this->envxy32x16[0xaU]);
    this->envx[0xbU] = (0xffffU & ((this->envxy32x16[0xcU] 
                                    << 0x10U) | (this->envxy32x16[0xbU] 
                                                 >> 0x10U)));
    this->envy[0xbU] = (0xffffU & this->envxy32x16[0xbU]);
    this->envx[0xcU] = (0xffffU & ((this->envxy32x16[0xdU] 
                                    << 0x10U) | (this->envxy32x16[0xcU] 
                                                 >> 0x10U)));
    this->envy[0xcU] = (0xffffU & this->envxy32x16[0xcU]);
    this->envx[0xdU] = (0xffffU & ((this->envxy32x16[0xeU] 
                                    << 0x10U) | (this->envxy32x16[0xdU] 
                                                 >> 0x10U)));
    this->envy[0xdU] = (0xffffU & this->envxy32x16[0xdU]);
    this->envx[0xeU] = (0xffffU & ((this->envxy32x16[0xfU] 
                                    << 0x10U) | (this->envxy32x16[0xeU] 
                                                 >> 0x10U)));
    this->envy[0xeU] = (0xffffU & this->envxy32x16[0xeU]);
    this->envx[0xfU] = (0xffffU & (this->envxy32x16[0xfU] 
                                   >> 0x10U));
    this->envy[0xfU] = (0xffffU & this->envxy32x16[0xfU]);
    this->phtime__DOT__gatein = this->gatein;
    this->ampxdelay__DOT__din = this->ampx;
    this->pinidelay__DOT__din = this->pini;
    this->phtime__DOT__tcnt = this->tcnt;
    this->freqcossinpdelay__DOT__clk = this->clk;
    this->phtime__DOT__clk = this->clk;
    this->ampxdelay__DOT__clk = this->clk;
    this->pinidelay__DOT__clk = this->clk;
    this->multidelay__DOT__clk = this->clk;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->cordicg__DOT__clk = this->clk;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[1U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[2U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[3U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[4U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[5U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[6U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[7U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[8U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[9U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xaU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xbU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xcU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xdU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xeU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xfU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[1U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[2U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[3U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[4U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[5U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[6U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[7U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[8U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[9U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xaU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xbU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xcU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xdU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xeU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xfU] 
                       >> 0xfU));
    this->genblk2__BRA__0__KET____DOT__zr1 = this->genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__0__KET____DOT__zi1 = this->genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__1__KET____DOT__zr1 = this->genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__1__KET____DOT__zi1 = this->genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__2__KET____DOT__zr1 = this->genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__2__KET____DOT__zi1 = this->genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__3__KET____DOT__zr1 = this->genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__3__KET____DOT__zi1 = this->genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__4__KET____DOT__zr1 = this->genblk2__BRA__4__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__4__KET____DOT__zi1 = this->genblk2__BRA__4__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__5__KET____DOT__zr1 = this->genblk2__BRA__5__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__5__KET____DOT__zi1 = this->genblk2__BRA__5__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__6__KET____DOT__zr1 = this->genblk2__BRA__6__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__6__KET____DOT__zi1 = this->genblk2__BRA__6__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__7__KET____DOT__zr1 = this->genblk2__BRA__7__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__7__KET____DOT__zi1 = this->genblk2__BRA__7__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__8__KET____DOT__zr1 = this->genblk2__BRA__8__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__8__KET____DOT__zi1 = this->genblk2__BRA__8__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__9__KET____DOT__zr1 = this->genblk2__BRA__9__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__9__KET____DOT__zi1 = this->genblk2__BRA__9__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__10__KET____DOT__zr1 = this->genblk2__BRA__10__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__10__KET____DOT__zi1 = this->genblk2__BRA__10__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__11__KET____DOT__zr1 = this->genblk2__BRA__11__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__11__KET____DOT__zi1 = this->genblk2__BRA__11__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__12__KET____DOT__zr1 = this->genblk2__BRA__12__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__12__KET____DOT__zi1 = this->genblk2__BRA__12__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__13__KET____DOT__zr1 = this->genblk2__BRA__13__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__13__KET____DOT__zi1 = this->genblk2__BRA__13__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__14__KET____DOT__zr1 = this->genblk2__BRA__14__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__14__KET____DOT__zi1 = this->genblk2__BRA__14__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__15__KET____DOT__zr1 = this->genblk2__BRA__15__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__15__KET____DOT__zi1 = this->genblk2__BRA__15__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__0__KET____DOT__zr = this->genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__0__KET____DOT__zi = this->genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__1__KET____DOT__zr = this->genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__1__KET____DOT__zi = this->genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__2__KET____DOT__zr = this->genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__2__KET____DOT__zi = this->genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__3__KET____DOT__zr = this->genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__3__KET____DOT__zi = this->genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__4__KET____DOT__zr = this->genblk2__BRA__4__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__4__KET____DOT__zi = this->genblk2__BRA__4__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__5__KET____DOT__zr = this->genblk2__BRA__5__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__5__KET____DOT__zi = this->genblk2__BRA__5__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__6__KET____DOT__zr = this->genblk2__BRA__6__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__6__KET____DOT__zi = this->genblk2__BRA__6__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__7__KET____DOT__zr = this->genblk2__BRA__7__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__7__KET____DOT__zi = this->genblk2__BRA__7__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__8__KET____DOT__zr = this->genblk2__BRA__8__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__8__KET____DOT__zi = this->genblk2__BRA__8__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__9__KET____DOT__zr = this->genblk2__BRA__9__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__9__KET____DOT__zi = this->genblk2__BRA__9__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__10__KET____DOT__zr = this->genblk2__BRA__10__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__10__KET____DOT__zi = this->genblk2__BRA__10__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__11__KET____DOT__zr = this->genblk2__BRA__11__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__11__KET____DOT__zi = this->genblk2__BRA__11__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__12__KET____DOT__zr = this->genblk2__BRA__12__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__12__KET____DOT__zi = this->genblk2__BRA__12__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__13__KET____DOT__zr = this->genblk2__BRA__13__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__13__KET____DOT__zi = this->genblk2__BRA__13__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__14__KET____DOT__zr = this->genblk2__BRA__14__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__14__KET____DOT__zi = this->genblk2__BRA__14__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__15__KET____DOT__zr = this->genblk2__BRA__15__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__15__KET____DOT__zi = this->genblk2__BRA__15__KET____DOT__mult2__DOT__zi;
    this->phasetime = this->phtime__DOT__phasetime;
    this->cordicg__DOT__phaseout1 = this->cordicg__DOT__phaseout;
    this->cordicg__DOT__shiftpi = (1U & ((this->cordicg__DOT__phasein_1 
                                          >> 0x10U) 
                                         ^ (this->cordicg__DOT__phasein_1 
                                            >> 0xfU)));
    this->cordicg__DOT__yout1 = this->cordicg__DOT__yout;
    this->sin_w = this->cordicg__DOT__yout;
    this->cordicg__DOT__reg_delay__DOT__din = this->cordicg__DOT__gin;
    this->gphtime = this->phtime__DOT__gateout;
    this->ampx_d = this->ampxdelay__DOT__dout;
    this->pini_d = this->pinidelay__DOT__dout;
    this->gmulti = this->multidelay__DOT__dout;
    this->cordicg__DOT__xout1 = this->cordicg__DOT__xout;
    this->cos_w = this->cordicg__DOT__xout;
    this->cordicg__DOT__gout = this->cordicg__DOT__reg_delay__DOT__dout;
    this->freqcossinp32x16_d[0U] = this->freqcossinpdelay__DOT__dout[0U];
    this->freqcossinp32x16_d[1U] = this->freqcossinpdelay__DOT__dout[1U];
    this->freqcossinp32x16_d[2U] = this->freqcossinpdelay__DOT__dout[2U];
    this->freqcossinp32x16_d[3U] = this->freqcossinpdelay__DOT__dout[3U];
    this->freqcossinp32x16_d[4U] = this->freqcossinpdelay__DOT__dout[4U];
    this->freqcossinp32x16_d[5U] = this->freqcossinpdelay__DOT__dout[5U];
    this->freqcossinp32x16_d[6U] = this->freqcossinpdelay__DOT__dout[6U];
    this->freqcossinp32x16_d[7U] = this->freqcossinpdelay__DOT__dout[7U];
    this->freqcossinp32x16_d[8U] = this->freqcossinpdelay__DOT__dout[8U];
    this->freqcossinp32x16_d[9U] = this->freqcossinpdelay__DOT__dout[9U];
    this->freqcossinp32x16_d[0xaU] = this->freqcossinpdelay__DOT__dout[0xaU];
    this->freqcossinp32x16_d[0xbU] = this->freqcossinpdelay__DOT__dout[0xbU];
    this->freqcossinp32x16_d[0xcU] = this->freqcossinpdelay__DOT__dout[0xcU];
    this->freqcossinp32x16_d[0xdU] = this->freqcossinpdelay__DOT__dout[0xdU];
    this->freqcossinp32x16_d[0xeU] = this->freqcossinpdelay__DOT__dout[0xeU];
    this->freqcossinp32x16_d[0xfU] = this->freqcossinpdelay__DOT__dout[0xfU];
    this->freq = (0x7ffffffU & (this->freq32 >> 5U));
    this->cordicg__DOT__reg_delay__DOT__clk = this->cordicg__DOT__clk;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zi1 
                              >> 0xfU)));
    this->multix[0U] = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[0U] = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[1U] = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[1U] = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[2U] = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[2U] = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[3U] = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[3U] = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[4U] = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[4U] = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[5U] = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[5U] = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[6U] = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[6U] = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[7U] = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[7U] = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[8U] = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[8U] = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[9U] = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[9U] = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[0xaU] = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zr 
                                             >> 0xfU)));
    this->multiy[0xaU] = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zi 
                                             >> 0xfU)));
    this->multix[0xbU] = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zr 
                                             >> 0xfU)));
    this->multiy[0xbU] = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zi 
                                             >> 0xfU)));
    this->multix[0xcU] = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zr 
                                             >> 0xfU)));
    this->multiy[0xcU] = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zi 
                                             >> 0xfU)));
    this->multix[0xdU] = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zr 
                                             >> 0xfU)));
    this->multiy[0xdU] = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zi 
                                             >> 0xfU)));
    this->multix[0xeU] = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zr 
                                             >> 0xfU)));
    this->multiy[0xeU] = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zi 
                                             >> 0xfU)));
    this->multix[0xfU] = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zr 
                                             >> 0xfU)));
    this->multiy[0xfU] = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zi 
                                             >> 0xfU)));
    this->gcordic = this->cordicg__DOT__gout;
    this->cosp[1U] = (0xffffU & ((this->freqcossinp32x16_d[2U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[1U] 
                                               >> 0x10U)));
    this->sinp[1U] = (0xffffU & this->freqcossinp32x16_d[1U]);
    this->cosp[2U] = (0xffffU & ((this->freqcossinp32x16_d[3U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[2U] 
                                               >> 0x10U)));
    this->sinp[2U] = (0xffffU & this->freqcossinp32x16_d[2U]);
    this->cosp[3U] = (0xffffU & ((this->freqcossinp32x16_d[4U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[3U] 
                                               >> 0x10U)));
    this->sinp[3U] = (0xffffU & this->freqcossinp32x16_d[3U]);
    this->cosp[4U] = (0xffffU & ((this->freqcossinp32x16_d[5U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[4U] 
                                               >> 0x10U)));
    this->sinp[4U] = (0xffffU & this->freqcossinp32x16_d[4U]);
    this->cosp[5U] = (0xffffU & ((this->freqcossinp32x16_d[6U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[5U] 
                                               >> 0x10U)));
    this->sinp[5U] = (0xffffU & this->freqcossinp32x16_d[5U]);
    this->cosp[6U] = (0xffffU & ((this->freqcossinp32x16_d[7U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[6U] 
                                               >> 0x10U)));
    this->sinp[6U] = (0xffffU & this->freqcossinp32x16_d[6U]);
    this->cosp[7U] = (0xffffU & ((this->freqcossinp32x16_d[8U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[7U] 
                                               >> 0x10U)));
    this->sinp[7U] = (0xffffU & this->freqcossinp32x16_d[7U]);
    this->cosp[8U] = (0xffffU & ((this->freqcossinp32x16_d[9U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[8U] 
                                               >> 0x10U)));
    this->sinp[8U] = (0xffffU & this->freqcossinp32x16_d[8U]);
    this->cosp[9U] = (0xffffU & ((this->freqcossinp32x16_d[0xaU] 
                                  << 0x10U) | (this->freqcossinp32x16_d[9U] 
                                               >> 0x10U)));
    this->sinp[9U] = (0xffffU & this->freqcossinp32x16_d[9U]);
    this->cosp[0xaU] = (0xffffU & ((this->freqcossinp32x16_d[0xbU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xaU] 
                                                 >> 0x10U)));
    this->sinp[0xaU] = (0xffffU & this->freqcossinp32x16_d[0xaU]);
    this->cosp[0xbU] = (0xffffU & ((this->freqcossinp32x16_d[0xcU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xbU] 
                                                 >> 0x10U)));
    this->sinp[0xbU] = (0xffffU & this->freqcossinp32x16_d[0xbU]);
    this->cosp[0xcU] = (0xffffU & ((this->freqcossinp32x16_d[0xdU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xcU] 
                                                 >> 0x10U)));
    this->sinp[0xcU] = (0xffffU & this->freqcossinp32x16_d[0xcU]);
    this->cosp[0xdU] = (0xffffU & ((this->freqcossinp32x16_d[0xeU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xdU] 
                                                 >> 0x10U)));
    this->sinp[0xdU] = (0xffffU & this->freqcossinp32x16_d[0xdU]);
    this->cosp[0xeU] = (0xffffU & ((this->freqcossinp32x16_d[0xfU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xeU] 
                                                 >> 0x10U)));
    this->sinp[0xeU] = (0xffffU & this->freqcossinp32x16_d[0xeU]);
    this->cosp[0xfU] = (0xffffU & (this->freqcossinp32x16_d[0xfU] 
                                   >> 0x10U));
    this->sinp[0xfU] = (0xffffU & this->freqcossinp32x16_d[0xfU]);
    this->phtime__DOT__freq = this->freq;
    this->multidelay__DOT__din = this->gcordic;
}

void Vtop_ammod__N10::_initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10::_initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->cordicg__DOT__stage__BRA__0__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__znext = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__xnext = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__ynext = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__znext = 0U;
    this->cordicg__DOT__genblk6__DOT__zdummy = 0U;
    this->freqcossinpdelay__DOT__gate = 1U;
    this->freqcossinpdelay__DOT__reset = 0U;
    this->ampxdelay__DOT__gate = 1U;
    this->ampxdelay__DOT__reset = 0U;
    this->pinidelay__DOT__gate = 1U;
    this->pinidelay__DOT__reset = 0U;
    this->cordicg__DOT__yin = 0U;
    this->cordicg__DOT__reg_delay__DOT__gate = 1U;
    this->cordicg__DOT__reg_delay__DOT__reset = 0U;
    this->multidelay__DOT__gate = 1U;
    this->multidelay__DOT__reset = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__1__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__2__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__3__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__4__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__5__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__6__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__7__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__8__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__9__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__10__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__11__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__12__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__13__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__14__KET____DOT__zminus = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__xplus = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__xminus = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__yplus = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__yminus = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__zplus = 0U;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__zminus = 0U;
    this->cordicg__DOT__errorr = 0U;
    this->cordicg__DOT__genblk3__DOT__xin_d = 0U;
    this->cordicg__DOT__genblk3__DOT__yin_d = 0U;
    this->phtime__DOT__freq_r = 0U;
    this->phtime__DOT__tcnt_r = 0U;
    this->phtime__DOT__phasetime_r3 = 0U;
    this->cordicg__DOT__phaseout_r = 0U;
    this->cordicg__DOT__genblk3__DOT__phasein_d = 0U;
    this->cordicg__DOT__yout_r = 0U;
    this->gateout_r = 0U;
    this->multix16x16_r[0U] = 0U;
    this->multix16x16_r[1U] = 0U;
    this->multix16x16_r[2U] = 0U;
    this->multix16x16_r[3U] = 0U;
    this->multix16x16_r[4U] = 0U;
    this->multix16x16_r[5U] = 0U;
    this->multix16x16_r[6U] = 0U;
    this->multix16x16_r[7U] = 0U;
    this->multiy16x16_r[0U] = 0U;
    this->multiy16x16_r[1U] = 0U;
    this->multiy16x16_r[2U] = 0U;
    this->multiy16x16_r[3U] = 0U;
    this->multiy16x16_r[4U] = 0U;
    this->multiy16x16_r[5U] = 0U;
    this->multiy16x16_r[6U] = 0U;
    this->multiy16x16_r[7U] = 0U;
    this->phtime__DOT__phasetime_r2 = 0U;
    this->cordicg__DOT__zg1 = 0U;
    this->cordicg__DOT__genblk6__DOT__xdummy = 0U;
    this->cordicg__DOT__genblk6__DOT__ydummy = 0U;
    this->ampx_d2 = 0U;
    this->phaseinit = 0U;
    this->gphaseinit = 0U;
    this->phtime__DOT__gatesr = 0U;
    this->ampxdelay__DOT__usual__DOT__shifter[0U] = 0U;
    this->ampxdelay__DOT__usual__DOT__shifter[1U] = 0U;
    this->ampxdelay__DOT__usual__DOT__shifter[2U] = 0U;
    this->ampxdelay__DOT__usual__DOT__shifter[3U] = 0U;
    this->pinidelay__DOT__usual__DOT__shifter[0U] = 0U;
    this->pinidelay__DOT__usual__DOT__shifter[1U] = 0U;
    this->pinidelay__DOT__usual__DOT__shifter[2U] = 0U;
    this->pinidelay__DOT__usual__DOT__shifter[3U] = 0U;
    this->multidelay__DOT__usual__DOT__shifter = 0U;
    this->cordicg__DOT__xout_r = 0U;
    this->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x18fU)) {
        this->freqcossinpdelay__DOT__usual__DOT__shifter[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    this->phtime__DOT__phasetime_r1 = 0U;
    this->cordicg__DOT__xsum2_d = 0U;
    this->cordicg__DOT__xsum3 = 0U;
    this->cordicg__DOT__ysum2_d = 0U;
    this->cordicg__DOT__ysum3 = 0U;
    this->cordicg__DOT__zg0 = 0U;
    this->phtime__DOT__phasetime_r0 = 0U;
    this->cordicg__DOT__xsum0 = 0U;
    this->cordicg__DOT__xsum1 = 0U;
    this->cordicg__DOT__xsum2 = 0U;
    this->cordicg__DOT__ysum0 = 0U;
    this->cordicg__DOT__ysum1 = 0U;
    this->cordicg__DOT__ysum2 = 0U;
    this->genblk2__BRA__0__KET____DOT__envxi = 0U;
    this->genblk2__BRA__0__KET____DOT__envyi = 0U;
    this->genblk2__BRA__0__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__0__KET____DOT__cospi = 0U;
    this->genblk2__BRA__1__KET____DOT__envxi = 0U;
    this->genblk2__BRA__1__KET____DOT__envyi = 0U;
    this->genblk2__BRA__1__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__1__KET____DOT__cospi = 0U;
    this->genblk2__BRA__2__KET____DOT__envxi = 0U;
    this->genblk2__BRA__2__KET____DOT__envyi = 0U;
    this->genblk2__BRA__2__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__2__KET____DOT__cospi = 0U;
    this->genblk2__BRA__3__KET____DOT__envxi = 0U;
    this->genblk2__BRA__3__KET____DOT__envyi = 0U;
    this->genblk2__BRA__3__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__3__KET____DOT__cospi = 0U;
    this->genblk2__BRA__4__KET____DOT__envxi = 0U;
    this->genblk2__BRA__4__KET____DOT__envyi = 0U;
    this->genblk2__BRA__4__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__4__KET____DOT__cospi = 0U;
    this->genblk2__BRA__5__KET____DOT__envxi = 0U;
    this->genblk2__BRA__5__KET____DOT__envyi = 0U;
    this->genblk2__BRA__5__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__5__KET____DOT__cospi = 0U;
    this->genblk2__BRA__6__KET____DOT__envxi = 0U;
    this->genblk2__BRA__6__KET____DOT__envyi = 0U;
    this->genblk2__BRA__6__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__6__KET____DOT__cospi = 0U;
    this->genblk2__BRA__7__KET____DOT__envxi = 0U;
    this->genblk2__BRA__7__KET____DOT__envyi = 0U;
    this->genblk2__BRA__7__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__7__KET____DOT__cospi = 0U;
    this->genblk2__BRA__8__KET____DOT__envxi = 0U;
    this->genblk2__BRA__8__KET____DOT__envyi = 0U;
    this->genblk2__BRA__8__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__8__KET____DOT__cospi = 0U;
    this->genblk2__BRA__9__KET____DOT__envxi = 0U;
    this->genblk2__BRA__9__KET____DOT__envyi = 0U;
    this->genblk2__BRA__9__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__9__KET____DOT__cospi = 0U;
    this->genblk2__BRA__10__KET____DOT__envxi = 0U;
    this->genblk2__BRA__10__KET____DOT__envyi = 0U;
    this->genblk2__BRA__10__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__10__KET____DOT__cospi = 0U;
    this->genblk2__BRA__11__KET____DOT__envxi = 0U;
    this->genblk2__BRA__11__KET____DOT__envyi = 0U;
    this->genblk2__BRA__11__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__11__KET____DOT__cospi = 0U;
    this->genblk2__BRA__12__KET____DOT__envxi = 0U;
    this->genblk2__BRA__12__KET____DOT__envyi = 0U;
    this->genblk2__BRA__12__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__12__KET____DOT__cospi = 0U;
    this->genblk2__BRA__13__KET____DOT__envxi = 0U;
    this->genblk2__BRA__13__KET____DOT__envyi = 0U;
    this->genblk2__BRA__13__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__13__KET____DOT__cospi = 0U;
    this->genblk2__BRA__14__KET____DOT__envxi = 0U;
    this->genblk2__BRA__14__KET____DOT__envyi = 0U;
    this->genblk2__BRA__14__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__14__KET____DOT__cospi = 0U;
    this->genblk2__BRA__15__KET____DOT__envxi = 0U;
    this->genblk2__BRA__15__KET____DOT__envyi = 0U;
    this->genblk2__BRA__15__KET____DOT__sinpi = 0U;
    this->genblk2__BRA__15__KET____DOT__cospi = 0U;
    this->cos = 0U;
    this->sin = 0U;
}

void Vtop_ammod__N10::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__8\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->cordicg__DOT__PHASE[0U] = 0x20000000U;
    this->cordicg__DOT__PHASE[1U] = 0x12e4051eU;
    this->cordicg__DOT__PHASE[2U] = 0x9fb385bU;
    this->cordicg__DOT__PHASE[3U] = 0x51111d4U;
    this->cordicg__DOT__PHASE[4U] = 0x28b0d43U;
    this->cordicg__DOT__PHASE[5U] = 0x145d7e1U;
    this->cordicg__DOT__PHASE[6U] = 0xa2f61eU;
    this->cordicg__DOT__PHASE[7U] = 0x517c55U;
    this->cordicg__DOT__PHASE[8U] = 0x28be53U;
    this->cordicg__DOT__PHASE[9U] = 0x145f2fU;
    this->cordicg__DOT__PHASE[0xaU] = 0xa2f98U;
    this->cordicg__DOT__PHASE[0xbU] = 0x517ccU;
    this->cordicg__DOT__PHASE[0xcU] = 0x28be6U;
    this->cordicg__DOT__PHASE[0xdU] = 0x145f3U;
    this->cordicg__DOT__PHASE[0xeU] = 0xa2faU;
    this->cordicg__DOT__PHASE[0xfU] = 0x517dU;
    this->cordicg__DOT__PHASE[0x10U] = 0x28beU;
    this->cordicg__DOT__PHASE[0x11U] = 0x145fU;
    this->cordicg__DOT__PHASE[0x12U] = 0xa30U;
    this->cordicg__DOT__PHASE[0x13U] = 0x518U;
    this->cordicg__DOT__PHASE[0x14U] = 0x28cU;
    this->cordicg__DOT__PHASE[0x15U] = 0x146U;
    this->cordicg__DOT__PHASE[0x16U] = 0xa3U;
    this->cordicg__DOT__PHASE[0x17U] = 0x51U;
    this->cordicg__DOT__PHASE[0x18U] = 0x29U;
    this->cordicg__DOT__PHASE[0x19U] = 0x14U;
    this->cordicg__DOT__PHASE[0x1aU] = 0xaU;
    this->cordicg__DOT__PHASE[0x1bU] = 5U;
    this->cordicg__DOT__PHASE[0x1cU] = 3U;
    this->cordicg__DOT__PHASE[0x1dU] = 1U;
    this->cordicg__DOT__PHASE[0x1eU] = 1U;
    this->cordicg__DOT__PHASE[0x1fU] = 0U;
    this->cordicg__DOT__PHASE[0x20U] = 0U;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[1U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[2U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[3U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[4U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[5U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[6U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[7U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[8U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[9U] >> 0x10U));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0xaU] >> 0x10U));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0xbU] >> 0x10U));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0xcU] >> 0x10U));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0xdU] >> 0x10U));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0xeU] >> 0x10U));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__plus 
        = (1U & (this->cordicg__DOT__z[0xfU] >> 0x10U));
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int;
    this->cordicg__DOT__plusall[0U] = (1U & (this->cordicg__DOT__z
                                             [0U] >> 0x10U));
    this->cordicg__DOT__plusall[1U] = (1U & (this->cordicg__DOT__z
                                             [1U] >> 0x10U));
    this->cordicg__DOT__plusall[2U] = (1U & (this->cordicg__DOT__z
                                             [2U] >> 0x10U));
    this->cordicg__DOT__plusall[3U] = (1U & (this->cordicg__DOT__z
                                             [3U] >> 0x10U));
    this->cordicg__DOT__plusall[4U] = (1U & (this->cordicg__DOT__z
                                             [4U] >> 0x10U));
    this->cordicg__DOT__plusall[5U] = (1U & (this->cordicg__DOT__z
                                             [5U] >> 0x10U));
    this->cordicg__DOT__plusall[6U] = (1U & (this->cordicg__DOT__z
                                             [6U] >> 0x10U));
    this->cordicg__DOT__plusall[7U] = (1U & (this->cordicg__DOT__z
                                             [7U] >> 0x10U));
    this->cordicg__DOT__plusall[8U] = (1U & (this->cordicg__DOT__z
                                             [8U] >> 0x10U));
    this->cordicg__DOT__plusall[9U] = (1U & (this->cordicg__DOT__z
                                             [9U] >> 0x10U));
    this->cordicg__DOT__plusall[0xaU] = (1U & (this->cordicg__DOT__z
                                               [0xaU] 
                                               >> 0x10U));
    this->cordicg__DOT__plusall[0xbU] = (1U & (this->cordicg__DOT__z
                                               [0xbU] 
                                               >> 0x10U));
    this->cordicg__DOT__plusall[0xcU] = (1U & (this->cordicg__DOT__z
                                               [0xcU] 
                                               >> 0x10U));
    this->cordicg__DOT__plusall[0xdU] = (1U & (this->cordicg__DOT__z
                                               [0xdU] 
                                               >> 0x10U));
    this->cordicg__DOT__plusall[0xeU] = (1U & (this->cordicg__DOT__z
                                               [0xeU] 
                                               >> 0x10U));
    this->cordicg__DOT__plusall[0xfU] = (1U & (this->cordicg__DOT__z
                                               [0xfU] 
                                               >> 0x10U));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__zi_int;
    this->cordicg__DOT__zg = this->cordicg__DOT__z[0xfU];
    this->cordicg__DOT__xg = this->cordicg__DOT__x[0xfU];
    this->cordicg__DOT__yg = this->cordicg__DOT__y[0xfU];
    this->cosp[0U] = 0x7fffU;
    this->sinp[0U] = 0U;
    this->cordicg__DOT__error = this->cordicg__DOT__errorr;
    this->cordicg__DOT__xin_1 = this->cordicg__DOT__genblk3__DOT__xin_d;
    this->cordicg__DOT__yin_1 = this->cordicg__DOT__genblk3__DOT__yin_d;
    this->phtime__DOT__phasetime_w = (0x3fffffffffffffULL 
                                      & ((QData)((IData)(this->phtime__DOT__freq_r)) 
                                         * (QData)((IData)(this->phtime__DOT__tcnt_r))));
    this->phtime__DOT__phasetime = this->phtime__DOT__phasetime_r3;
    this->cordicg__DOT__phaseout = this->cordicg__DOT__phaseout_r;
    this->cordicg__DOT__phasein_1 = this->cordicg__DOT__genblk3__DOT__phasein_d;
    this->cordicg__DOT__yout = this->cordicg__DOT__yout_r;
    this->gateout = this->gateout_r;
    this->multix16x16[0U] = this->multix16x16_r[0U];
    this->multix16x16[1U] = this->multix16x16_r[1U];
    this->multix16x16[2U] = this->multix16x16_r[2U];
    this->multix16x16[3U] = this->multix16x16_r[3U];
    this->multix16x16[4U] = this->multix16x16_r[4U];
    this->multix16x16[5U] = this->multix16x16_r[5U];
    this->multix16x16[6U] = this->multix16x16_r[6U];
    this->multix16x16[7U] = this->multix16x16_r[7U];
    this->multiy16x16[0U] = this->multiy16x16_r[0U];
    this->multiy16x16[1U] = this->multiy16x16_r[1U];
    this->multiy16x16[2U] = this->multiy16x16_r[2U];
    this->multiy16x16[3U] = this->multiy16x16_r[3U];
    this->multiy16x16[4U] = this->multiy16x16_r[4U];
    this->multiy16x16[5U] = this->multiy16x16_r[5U];
    this->multiy16x16[6U] = this->multiy16x16_r[6U];
    this->multiy16x16[7U] = this->multiy16x16_r[7U];
    this->cordicg__DOT__xin = this->ampx_d2;
    this->cordicg__DOT__phasein = this->phaseinit;
    this->cordicg__DOT__gin = this->gphaseinit;
    this->phtime__DOT__gateout = (1U & ((IData)(this->phtime__DOT__gatesr) 
                                        >> 4U));
    this->ampxdelay__DOT__dout = (0xffffU & this->ampxdelay__DOT__usual__DOT__shifter[3U]);
    this->pinidelay__DOT__dout = (0x1ffffU & (this->pinidelay__DOT__usual__DOT__shifter[3U] 
                                              >> 6U));
    this->multidelay__DOT__dout = (1U & ((IData)(this->multidelay__DOT__usual__DOT__shifter) 
                                         >> 0xcU));
    this->cordicg__DOT__xout = this->cordicg__DOT__xout_r;
    this->cordicg__DOT__reg_delay__DOT__dout = (1U 
                                                & (this->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                                                   >> 0x13U));
    this->freqcossinpdelay__DOT__dout[0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x180U];
    this->freqcossinpdelay__DOT__dout[1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x181U];
    this->freqcossinpdelay__DOT__dout[2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x182U];
    this->freqcossinpdelay__DOT__dout[3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x183U];
    this->freqcossinpdelay__DOT__dout[4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x184U];
    this->freqcossinpdelay__DOT__dout[5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x185U];
    this->freqcossinpdelay__DOT__dout[6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x186U];
    this->freqcossinpdelay__DOT__dout[7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x187U];
    this->freqcossinpdelay__DOT__dout[8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x188U];
    this->freqcossinpdelay__DOT__dout[9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x189U];
    this->freqcossinpdelay__DOT__dout[0xaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18aU];
    this->freqcossinpdelay__DOT__dout[0xbU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18bU];
    this->freqcossinpdelay__DOT__dout[0xcU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18cU];
    this->freqcossinpdelay__DOT__dout[0xdU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18dU];
    this->freqcossinpdelay__DOT__dout[0xeU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18eU];
    this->freqcossinpdelay__DOT__dout[0xfU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18fU];
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__0__KET____DOT__envxi;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__0__KET____DOT__envyi;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__0__KET____DOT__sinpi;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__0__KET____DOT__cospi;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__1__KET____DOT__envxi;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__1__KET____DOT__envyi;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__1__KET____DOT__sinpi;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__1__KET____DOT__cospi;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__2__KET____DOT__envxi;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__2__KET____DOT__envyi;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__2__KET____DOT__sinpi;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__2__KET____DOT__cospi;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__3__KET____DOT__envxi;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__3__KET____DOT__envyi;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__3__KET____DOT__sinpi;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__3__KET____DOT__cospi;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__4__KET____DOT__envxi;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__4__KET____DOT__envyi;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__4__KET____DOT__sinpi;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__4__KET____DOT__cospi;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__5__KET____DOT__envxi;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__5__KET____DOT__envyi;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__5__KET____DOT__sinpi;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__5__KET____DOT__cospi;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__6__KET____DOT__envxi;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__6__KET____DOT__envyi;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__6__KET____DOT__sinpi;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__6__KET____DOT__cospi;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__7__KET____DOT__envxi;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__7__KET____DOT__envyi;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__7__KET____DOT__sinpi;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__7__KET____DOT__cospi;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__8__KET____DOT__envxi;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__8__KET____DOT__envyi;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__8__KET____DOT__sinpi;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__8__KET____DOT__cospi;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__9__KET____DOT__envxi;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__9__KET____DOT__envyi;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__9__KET____DOT__sinpi;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__9__KET____DOT__cospi;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__10__KET____DOT__envxi;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__10__KET____DOT__envyi;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__10__KET____DOT__sinpi;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__10__KET____DOT__cospi;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__11__KET____DOT__envxi;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__11__KET____DOT__envyi;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__11__KET____DOT__sinpi;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__11__KET____DOT__cospi;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__12__KET____DOT__envxi;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__12__KET____DOT__envyi;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__12__KET____DOT__sinpi;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__12__KET____DOT__cospi;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__13__KET____DOT__envxi;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__13__KET____DOT__envyi;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__13__KET____DOT__sinpi;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__13__KET____DOT__cospi;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__14__KET____DOT__envxi;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__14__KET____DOT__envyi;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__14__KET____DOT__sinpi;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__14__KET____DOT__cospi;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__15__KET____DOT__envxi;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__15__KET____DOT__envyi;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__15__KET____DOT__sinpi;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__15__KET____DOT__cospi;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__xr 
        = this->cos;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__xi 
        = this->sin;
    this->freqcossinpdelay__DOT__din[0U] = this->freqcossinp32x16[0U];
    this->freqcossinpdelay__DOT__din[1U] = this->freqcossinp32x16[1U];
    this->freqcossinpdelay__DOT__din[2U] = this->freqcossinp32x16[2U];
    this->freqcossinpdelay__DOT__din[3U] = this->freqcossinp32x16[3U];
    this->freqcossinpdelay__DOT__din[4U] = this->freqcossinp32x16[4U];
    this->freqcossinpdelay__DOT__din[5U] = this->freqcossinp32x16[5U];
    this->freqcossinpdelay__DOT__din[6U] = this->freqcossinp32x16[6U];
    this->freqcossinpdelay__DOT__din[7U] = this->freqcossinp32x16[7U];
    this->freqcossinpdelay__DOT__din[8U] = this->freqcossinp32x16[8U];
    this->freqcossinpdelay__DOT__din[9U] = this->freqcossinp32x16[9U];
    this->freqcossinpdelay__DOT__din[0xaU] = this->freqcossinp32x16[0xaU];
    this->freqcossinpdelay__DOT__din[0xbU] = this->freqcossinp32x16[0xbU];
    this->freqcossinpdelay__DOT__din[0xcU] = this->freqcossinp32x16[0xcU];
    this->freqcossinpdelay__DOT__din[0xdU] = this->freqcossinp32x16[0xdU];
    this->freqcossinpdelay__DOT__din[0xeU] = this->freqcossinp32x16[0xeU];
    this->freqcossinpdelay__DOT__din[0xfU] = this->freqcossinp32x16[0xfU];
    this->freq32 = this->freqcossinp32x16[0U];
    this->envx[0U] = (0xffffU & ((this->envxy32x16[1U] 
                                  << 0x10U) | (this->envxy32x16[0U] 
                                               >> 0x10U)));
    this->envy[0U] = (0xffffU & this->envxy32x16[0U]);
    this->envx[1U] = (0xffffU & ((this->envxy32x16[2U] 
                                  << 0x10U) | (this->envxy32x16[1U] 
                                               >> 0x10U)));
    this->envy[1U] = (0xffffU & this->envxy32x16[1U]);
    this->envx[2U] = (0xffffU & ((this->envxy32x16[3U] 
                                  << 0x10U) | (this->envxy32x16[2U] 
                                               >> 0x10U)));
    this->envy[2U] = (0xffffU & this->envxy32x16[2U]);
    this->envx[3U] = (0xffffU & ((this->envxy32x16[4U] 
                                  << 0x10U) | (this->envxy32x16[3U] 
                                               >> 0x10U)));
    this->envy[3U] = (0xffffU & this->envxy32x16[3U]);
    this->envx[4U] = (0xffffU & ((this->envxy32x16[5U] 
                                  << 0x10U) | (this->envxy32x16[4U] 
                                               >> 0x10U)));
    this->envy[4U] = (0xffffU & this->envxy32x16[4U]);
    this->envx[5U] = (0xffffU & ((this->envxy32x16[6U] 
                                  << 0x10U) | (this->envxy32x16[5U] 
                                               >> 0x10U)));
    this->envy[5U] = (0xffffU & this->envxy32x16[5U]);
    this->envx[6U] = (0xffffU & ((this->envxy32x16[7U] 
                                  << 0x10U) | (this->envxy32x16[6U] 
                                               >> 0x10U)));
    this->envy[6U] = (0xffffU & this->envxy32x16[6U]);
    this->envx[7U] = (0xffffU & ((this->envxy32x16[8U] 
                                  << 0x10U) | (this->envxy32x16[7U] 
                                               >> 0x10U)));
    this->envy[7U] = (0xffffU & this->envxy32x16[7U]);
    this->envx[8U] = (0xffffU & ((this->envxy32x16[9U] 
                                  << 0x10U) | (this->envxy32x16[8U] 
                                               >> 0x10U)));
    this->envy[8U] = (0xffffU & this->envxy32x16[8U]);
    this->envx[9U] = (0xffffU & ((this->envxy32x16[0xaU] 
                                  << 0x10U) | (this->envxy32x16[9U] 
                                               >> 0x10U)));
    this->envy[9U] = (0xffffU & this->envxy32x16[9U]);
    this->envx[0xaU] = (0xffffU & ((this->envxy32x16[0xbU] 
                                    << 0x10U) | (this->envxy32x16[0xaU] 
                                                 >> 0x10U)));
    this->envy[0xaU] = (0xffffU & this->envxy32x16[0xaU]);
    this->envx[0xbU] = (0xffffU & ((this->envxy32x16[0xcU] 
                                    << 0x10U) | (this->envxy32x16[0xbU] 
                                                 >> 0x10U)));
    this->envy[0xbU] = (0xffffU & this->envxy32x16[0xbU]);
    this->envx[0xcU] = (0xffffU & ((this->envxy32x16[0xdU] 
                                    << 0x10U) | (this->envxy32x16[0xcU] 
                                                 >> 0x10U)));
    this->envy[0xcU] = (0xffffU & this->envxy32x16[0xcU]);
    this->envx[0xdU] = (0xffffU & ((this->envxy32x16[0xeU] 
                                    << 0x10U) | (this->envxy32x16[0xdU] 
                                                 >> 0x10U)));
    this->envy[0xdU] = (0xffffU & this->envxy32x16[0xdU]);
    this->envx[0xeU] = (0xffffU & ((this->envxy32x16[0xfU] 
                                    << 0x10U) | (this->envxy32x16[0xeU] 
                                                 >> 0x10U)));
    this->envy[0xeU] = (0xffffU & this->envxy32x16[0xeU]);
    this->envx[0xfU] = (0xffffU & (this->envxy32x16[0xfU] 
                                   >> 0x10U));
    this->envy[0xfU] = (0xffffU & this->envxy32x16[0xfU]);
    this->phtime__DOT__gatein = this->gatein;
    this->ampxdelay__DOT__din = this->ampx;
    this->pinidelay__DOT__din = this->pini;
    this->phtime__DOT__tcnt = this->tcnt;
    this->freqcossinpdelay__DOT__clk = this->clk;
    this->phtime__DOT__clk = this->clk;
    this->ampxdelay__DOT__clk = this->clk;
    this->pinidelay__DOT__clk = this->clk;
    this->multidelay__DOT__clk = this->clk;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__clk 
        = this->clk;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__clk 
        = this->clk;
    this->cordicg__DOT__clk = this->clk;
    this->cordicg__DOT__stage__BRA__0__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[1U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[2U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[3U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[4U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[5U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[6U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[7U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[8U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[9U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xaU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xbU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xcU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xdU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xeU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xfU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[1U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[2U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[3U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[4U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[5U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[6U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[7U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[8U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[9U] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xaU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xbU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xcU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xdU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xeU] 
                       >> 0xfU));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__ain 
        = (0x1ffffU & (this->cordicg__DOT__PHASE[0xfU] 
                       >> 0xfU));
    this->genblk2__BRA__0__KET____DOT__zr1 = this->genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__0__KET____DOT__zi1 = this->genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__1__KET____DOT__zr1 = this->genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__1__KET____DOT__zi1 = this->genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__2__KET____DOT__zr1 = this->genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__2__KET____DOT__zi1 = this->genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__3__KET____DOT__zr1 = this->genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__3__KET____DOT__zi1 = this->genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__4__KET____DOT__zr1 = this->genblk2__BRA__4__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__4__KET____DOT__zi1 = this->genblk2__BRA__4__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__5__KET____DOT__zr1 = this->genblk2__BRA__5__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__5__KET____DOT__zi1 = this->genblk2__BRA__5__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__6__KET____DOT__zr1 = this->genblk2__BRA__6__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__6__KET____DOT__zi1 = this->genblk2__BRA__6__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__7__KET____DOT__zr1 = this->genblk2__BRA__7__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__7__KET____DOT__zi1 = this->genblk2__BRA__7__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__8__KET____DOT__zr1 = this->genblk2__BRA__8__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__8__KET____DOT__zi1 = this->genblk2__BRA__8__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__9__KET____DOT__zr1 = this->genblk2__BRA__9__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__9__KET____DOT__zi1 = this->genblk2__BRA__9__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__10__KET____DOT__zr1 = this->genblk2__BRA__10__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__10__KET____DOT__zi1 = this->genblk2__BRA__10__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__11__KET____DOT__zr1 = this->genblk2__BRA__11__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__11__KET____DOT__zi1 = this->genblk2__BRA__11__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__12__KET____DOT__zr1 = this->genblk2__BRA__12__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__12__KET____DOT__zi1 = this->genblk2__BRA__12__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__13__KET____DOT__zr1 = this->genblk2__BRA__13__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__13__KET____DOT__zi1 = this->genblk2__BRA__13__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__14__KET____DOT__zr1 = this->genblk2__BRA__14__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__14__KET____DOT__zi1 = this->genblk2__BRA__14__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__15__KET____DOT__zr1 = this->genblk2__BRA__15__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__15__KET____DOT__zi1 = this->genblk2__BRA__15__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__0__KET____DOT__zr = this->genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__0__KET____DOT__zi = this->genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__1__KET____DOT__zr = this->genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__1__KET____DOT__zi = this->genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__2__KET____DOT__zr = this->genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__2__KET____DOT__zi = this->genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__3__KET____DOT__zr = this->genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__3__KET____DOT__zi = this->genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__4__KET____DOT__zr = this->genblk2__BRA__4__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__4__KET____DOT__zi = this->genblk2__BRA__4__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__5__KET____DOT__zr = this->genblk2__BRA__5__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__5__KET____DOT__zi = this->genblk2__BRA__5__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__6__KET____DOT__zr = this->genblk2__BRA__6__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__6__KET____DOT__zi = this->genblk2__BRA__6__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__7__KET____DOT__zr = this->genblk2__BRA__7__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__7__KET____DOT__zi = this->genblk2__BRA__7__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__8__KET____DOT__zr = this->genblk2__BRA__8__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__8__KET____DOT__zi = this->genblk2__BRA__8__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__9__KET____DOT__zr = this->genblk2__BRA__9__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__9__KET____DOT__zi = this->genblk2__BRA__9__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__10__KET____DOT__zr = this->genblk2__BRA__10__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__10__KET____DOT__zi = this->genblk2__BRA__10__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__11__KET____DOT__zr = this->genblk2__BRA__11__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__11__KET____DOT__zi = this->genblk2__BRA__11__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__12__KET____DOT__zr = this->genblk2__BRA__12__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__12__KET____DOT__zi = this->genblk2__BRA__12__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__13__KET____DOT__zr = this->genblk2__BRA__13__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__13__KET____DOT__zi = this->genblk2__BRA__13__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__14__KET____DOT__zr = this->genblk2__BRA__14__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__14__KET____DOT__zi = this->genblk2__BRA__14__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__15__KET____DOT__zr = this->genblk2__BRA__15__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__15__KET____DOT__zi = this->genblk2__BRA__15__KET____DOT__mult2__DOT__zi;
    this->phasetime = this->phtime__DOT__phasetime;
    this->cordicg__DOT__phaseout1 = this->cordicg__DOT__phaseout;
    this->cordicg__DOT__shiftpi = (1U & ((this->cordicg__DOT__phasein_1 
                                          >> 0x10U) 
                                         ^ (this->cordicg__DOT__phasein_1 
                                            >> 0xfU)));
    this->cordicg__DOT__yout1 = this->cordicg__DOT__yout;
    this->sin_w = this->cordicg__DOT__yout;
    this->cordicg__DOT__reg_delay__DOT__din = this->cordicg__DOT__gin;
    this->gphtime = this->phtime__DOT__gateout;
    this->ampx_d = this->ampxdelay__DOT__dout;
    this->pini_d = this->pinidelay__DOT__dout;
    this->gmulti = this->multidelay__DOT__dout;
    this->cordicg__DOT__xout1 = this->cordicg__DOT__xout;
    this->cos_w = this->cordicg__DOT__xout;
    this->cordicg__DOT__gout = this->cordicg__DOT__reg_delay__DOT__dout;
    this->freqcossinp32x16_d[0U] = this->freqcossinpdelay__DOT__dout[0U];
    this->freqcossinp32x16_d[1U] = this->freqcossinpdelay__DOT__dout[1U];
    this->freqcossinp32x16_d[2U] = this->freqcossinpdelay__DOT__dout[2U];
    this->freqcossinp32x16_d[3U] = this->freqcossinpdelay__DOT__dout[3U];
    this->freqcossinp32x16_d[4U] = this->freqcossinpdelay__DOT__dout[4U];
    this->freqcossinp32x16_d[5U] = this->freqcossinpdelay__DOT__dout[5U];
    this->freqcossinp32x16_d[6U] = this->freqcossinpdelay__DOT__dout[6U];
    this->freqcossinp32x16_d[7U] = this->freqcossinpdelay__DOT__dout[7U];
    this->freqcossinp32x16_d[8U] = this->freqcossinpdelay__DOT__dout[8U];
    this->freqcossinp32x16_d[9U] = this->freqcossinpdelay__DOT__dout[9U];
    this->freqcossinp32x16_d[0xaU] = this->freqcossinpdelay__DOT__dout[0xaU];
    this->freqcossinp32x16_d[0xbU] = this->freqcossinpdelay__DOT__dout[0xbU];
    this->freqcossinp32x16_d[0xcU] = this->freqcossinpdelay__DOT__dout[0xcU];
    this->freqcossinp32x16_d[0xdU] = this->freqcossinpdelay__DOT__dout[0xdU];
    this->freqcossinp32x16_d[0xeU] = this->freqcossinpdelay__DOT__dout[0xeU];
    this->freqcossinp32x16_d[0xfU] = this->freqcossinpdelay__DOT__dout[0xfU];
    this->freq = (0x7ffffffU & (this->freq32 >> 5U));
    this->cordicg__DOT__reg_delay__DOT__clk = this->cordicg__DOT__clk;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zi1 
                              >> 0xfU)));
    this->multix[0U] = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[0U] = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[1U] = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[1U] = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[2U] = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[2U] = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[3U] = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[3U] = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[4U] = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[4U] = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[5U] = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[5U] = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[6U] = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[6U] = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[7U] = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[7U] = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[8U] = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[8U] = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[9U] = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zr 
                                           >> 0xfU)));
    this->multiy[9U] = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zi 
                                           >> 0xfU)));
    this->multix[0xaU] = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zr 
                                             >> 0xfU)));
    this->multiy[0xaU] = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zi 
                                             >> 0xfU)));
    this->multix[0xbU] = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zr 
                                             >> 0xfU)));
    this->multiy[0xbU] = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zi 
                                             >> 0xfU)));
    this->multix[0xcU] = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zr 
                                             >> 0xfU)));
    this->multiy[0xcU] = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zi 
                                             >> 0xfU)));
    this->multix[0xdU] = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zr 
                                             >> 0xfU)));
    this->multiy[0xdU] = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zi 
                                             >> 0xfU)));
    this->multix[0xeU] = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zr 
                                             >> 0xfU)));
    this->multiy[0xeU] = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zi 
                                             >> 0xfU)));
    this->multix[0xfU] = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zr 
                                             >> 0xfU)));
    this->multiy[0xfU] = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zi 
                                             >> 0xfU)));
    this->gcordic = this->cordicg__DOT__gout;
    this->cosp[1U] = (0xffffU & ((this->freqcossinp32x16_d[2U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[1U] 
                                               >> 0x10U)));
    this->sinp[1U] = (0xffffU & this->freqcossinp32x16_d[1U]);
    this->cosp[2U] = (0xffffU & ((this->freqcossinp32x16_d[3U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[2U] 
                                               >> 0x10U)));
    this->sinp[2U] = (0xffffU & this->freqcossinp32x16_d[2U]);
    this->cosp[3U] = (0xffffU & ((this->freqcossinp32x16_d[4U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[3U] 
                                               >> 0x10U)));
    this->sinp[3U] = (0xffffU & this->freqcossinp32x16_d[3U]);
    this->cosp[4U] = (0xffffU & ((this->freqcossinp32x16_d[5U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[4U] 
                                               >> 0x10U)));
    this->sinp[4U] = (0xffffU & this->freqcossinp32x16_d[4U]);
    this->cosp[5U] = (0xffffU & ((this->freqcossinp32x16_d[6U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[5U] 
                                               >> 0x10U)));
    this->sinp[5U] = (0xffffU & this->freqcossinp32x16_d[5U]);
    this->cosp[6U] = (0xffffU & ((this->freqcossinp32x16_d[7U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[6U] 
                                               >> 0x10U)));
    this->sinp[6U] = (0xffffU & this->freqcossinp32x16_d[6U]);
    this->cosp[7U] = (0xffffU & ((this->freqcossinp32x16_d[8U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[7U] 
                                               >> 0x10U)));
    this->sinp[7U] = (0xffffU & this->freqcossinp32x16_d[7U]);
    this->cosp[8U] = (0xffffU & ((this->freqcossinp32x16_d[9U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[8U] 
                                               >> 0x10U)));
    this->sinp[8U] = (0xffffU & this->freqcossinp32x16_d[8U]);
    this->cosp[9U] = (0xffffU & ((this->freqcossinp32x16_d[0xaU] 
                                  << 0x10U) | (this->freqcossinp32x16_d[9U] 
                                               >> 0x10U)));
    this->sinp[9U] = (0xffffU & this->freqcossinp32x16_d[9U]);
    this->cosp[0xaU] = (0xffffU & ((this->freqcossinp32x16_d[0xbU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xaU] 
                                                 >> 0x10U)));
    this->sinp[0xaU] = (0xffffU & this->freqcossinp32x16_d[0xaU]);
    this->cosp[0xbU] = (0xffffU & ((this->freqcossinp32x16_d[0xcU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xbU] 
                                                 >> 0x10U)));
    this->sinp[0xbU] = (0xffffU & this->freqcossinp32x16_d[0xbU]);
    this->cosp[0xcU] = (0xffffU & ((this->freqcossinp32x16_d[0xdU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xcU] 
                                                 >> 0x10U)));
    this->sinp[0xcU] = (0xffffU & this->freqcossinp32x16_d[0xcU]);
    this->cosp[0xdU] = (0xffffU & ((this->freqcossinp32x16_d[0xeU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xdU] 
                                                 >> 0x10U)));
    this->sinp[0xdU] = (0xffffU & this->freqcossinp32x16_d[0xdU]);
    this->cosp[0xeU] = (0xffffU & ((this->freqcossinp32x16_d[0xfU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xeU] 
                                                 >> 0x10U)));
    this->sinp[0xeU] = (0xffffU & this->freqcossinp32x16_d[0xeU]);
    this->cosp[0xfU] = (0xffffU & (this->freqcossinp32x16_d[0xfU] 
                                   >> 0x10U));
    this->sinp[0xfU] = (0xffffU & this->freqcossinp32x16_d[0xfU]);
    this->phtime__DOT__freq = this->freq;
    this->multidelay__DOT__din = this->gcordic;
}

void Vtop_ammod__N10::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    gatein = VL_RAND_RESET_I(1);
    tcnt = VL_RAND_RESET_I(27);
    VL_RAND_RESET_W(512, freqcossinp32x16);
    VL_RAND_RESET_W(512, envxy32x16);
    pini = VL_RAND_RESET_I(17);
    ampx = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(256, multix16x16);
    VL_RAND_RESET_W(256, multiy16x16);
    gateout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        cosp[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        sinp[__Vi0] = VL_RAND_RESET_I(16);
    }
    freq = VL_RAND_RESET_I(27);
    freq32 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        envx[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        envy[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        multix[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        multiy[__Vi0] = VL_RAND_RESET_I(16);
    }
    VL_RAND_RESET_W(256, multix16x16_r);
    VL_RAND_RESET_W(256, multiy16x16_r);
    VL_RAND_RESET_W(512, freqcossinp32x16_d);
    phasetime = VL_RAND_RESET_I(27);
    gphtime = VL_RAND_RESET_I(1);
    ampx_d = VL_RAND_RESET_I(16);
    ampx_d2 = VL_RAND_RESET_I(16);
    pini_d = VL_RAND_RESET_I(17);
    phaseinit = VL_RAND_RESET_I(17);
    gphaseinit = VL_RAND_RESET_I(1);
    cos_w = VL_RAND_RESET_I(16);
    sin_w = VL_RAND_RESET_I(16);
    cos = VL_RAND_RESET_I(16);
    sin = VL_RAND_RESET_I(16);
    gcordic = VL_RAND_RESET_I(1);
    gmulti = VL_RAND_RESET_I(1);
    gateout_r = VL_RAND_RESET_I(1);
    genblk2__BRA__0__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__cospi = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__envxi = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__envyi = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__cospi = VL_RAND_RESET_I(16);
    freqcossinpdelay__DOT__clk = VL_RAND_RESET_I(1);
    freqcossinpdelay__DOT__gate = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, freqcossinpdelay__DOT__din);
    VL_RAND_RESET_W(512, freqcossinpdelay__DOT__dout);
    freqcossinpdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(12800, freqcossinpdelay__DOT__usual__DOT__shifter);
    phtime__DOT__clk = VL_RAND_RESET_I(1);
    phtime__DOT__freq = VL_RAND_RESET_I(27);
    phtime__DOT__tcnt = VL_RAND_RESET_I(27);
    phtime__DOT__gatein = VL_RAND_RESET_I(1);
    phtime__DOT__phasetime = VL_RAND_RESET_I(27);
    phtime__DOT__gateout = VL_RAND_RESET_I(1);
    phtime__DOT__freq_r = VL_RAND_RESET_I(27);
    phtime__DOT__tcnt_r = VL_RAND_RESET_I(27);
    phtime__DOT__phasetime_w = VL_RAND_RESET_Q(54);
    phtime__DOT__phasetime_r0 = VL_RAND_RESET_I(27);
    phtime__DOT__phasetime_r1 = VL_RAND_RESET_I(27);
    phtime__DOT__phasetime_r2 = VL_RAND_RESET_I(27);
    phtime__DOT__phasetime_r3 = VL_RAND_RESET_I(27);
    phtime__DOT__gatesr = VL_RAND_RESET_I(8);
    ampxdelay__DOT__clk = VL_RAND_RESET_I(1);
    ampxdelay__DOT__gate = VL_RAND_RESET_I(1);
    ampxdelay__DOT__din = VL_RAND_RESET_I(16);
    ampxdelay__DOT__dout = VL_RAND_RESET_I(16);
    ampxdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, ampxdelay__DOT__usual__DOT__shifter);
    pinidelay__DOT__clk = VL_RAND_RESET_I(1);
    pinidelay__DOT__gate = VL_RAND_RESET_I(1);
    pinidelay__DOT__din = VL_RAND_RESET_I(17);
    pinidelay__DOT__dout = VL_RAND_RESET_I(17);
    pinidelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(119, pinidelay__DOT__usual__DOT__shifter);
    cordicg__DOT__clk = VL_RAND_RESET_I(1);
    cordicg__DOT__xin = VL_RAND_RESET_I(16);
    cordicg__DOT__yin = VL_RAND_RESET_I(16);
    cordicg__DOT__phasein = VL_RAND_RESET_I(17);
    cordicg__DOT__xout = VL_RAND_RESET_I(16);
    cordicg__DOT__yout = VL_RAND_RESET_I(16);
    cordicg__DOT__phaseout = VL_RAND_RESET_I(17);
    cordicg__DOT__error = VL_RAND_RESET_I(1);
    cordicg__DOT__gin = VL_RAND_RESET_I(1);
    cordicg__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<33; ++__Vi0) {
        cordicg__DOT__PHASE[__Vi0] = VL_RAND_RESET_I(32);
    }
    cordicg__DOT__xout_r = VL_RAND_RESET_I(16);
    cordicg__DOT__yout_r = VL_RAND_RESET_I(16);
    cordicg__DOT__phaseout_r = VL_RAND_RESET_I(17);
    cordicg__DOT__errorr = VL_RAND_RESET_I(1);
    cordicg__DOT__xin_1 = VL_RAND_RESET_I(16);
    cordicg__DOT__yin_1 = VL_RAND_RESET_I(16);
    cordicg__DOT__phasein_1 = VL_RAND_RESET_I(17);
    cordicg__DOT__shiftpi = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        cordicg__DOT__plusall[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        cordicg__DOT__op[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        cordicg__DOT__pluscheck[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        cordicg__DOT__pluscheck0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        cordicg__DOT__x[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        cordicg__DOT__y[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        cordicg__DOT__z[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        cordicg__DOT__xshift[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        cordicg__DOT__yshift[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        cordicg__DOT__zshift[__Vi0] = VL_RAND_RESET_I(17);
    }
    cordicg__DOT__xg = VL_RAND_RESET_I(17);
    cordicg__DOT__yg = VL_RAND_RESET_I(17);
    cordicg__DOT__zg = VL_RAND_RESET_I(17);
    cordicg__DOT__xsum0 = VL_RAND_RESET_I(17);
    cordicg__DOT__xsum1 = VL_RAND_RESET_I(17);
    cordicg__DOT__xsum2 = VL_RAND_RESET_I(17);
    cordicg__DOT__xsum2_d = VL_RAND_RESET_I(17);
    cordicg__DOT__xsum3 = VL_RAND_RESET_I(17);
    cordicg__DOT__ysum0 = VL_RAND_RESET_I(17);
    cordicg__DOT__ysum1 = VL_RAND_RESET_I(17);
    cordicg__DOT__ysum2 = VL_RAND_RESET_I(17);
    cordicg__DOT__ysum2_d = VL_RAND_RESET_I(17);
    cordicg__DOT__ysum3 = VL_RAND_RESET_I(17);
    cordicg__DOT__zg0 = VL_RAND_RESET_I(17);
    cordicg__DOT__zg1 = VL_RAND_RESET_I(17);
    cordicg__DOT__xout1 = VL_RAND_RESET_I(16);
    cordicg__DOT__yout1 = VL_RAND_RESET_I(16);
    cordicg__DOT__phaseout1 = VL_RAND_RESET_I(17);
    cordicg__DOT__genblk3__DOT__xin_d = VL_RAND_RESET_I(16);
    cordicg__DOT__genblk3__DOT__yin_d = VL_RAND_RESET_I(16);
    cordicg__DOT__genblk3__DOT__phasein_d = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__0__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__0__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__0__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__0__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__0__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__0__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__0__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__0__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__0__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__0__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__0__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__1__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__1__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__1__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__1__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__1__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__1__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__1__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__1__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__1__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__1__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__1__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__2__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__2__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__2__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__2__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__2__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__2__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__2__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__2__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__2__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__2__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__2__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__3__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__3__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__3__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__3__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__3__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__3__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__3__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__3__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__3__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__3__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__3__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__4__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__4__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__4__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__4__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__4__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__4__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__4__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__4__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__4__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__4__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__4__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__5__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__5__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__5__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__5__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__5__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__5__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__5__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__5__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__5__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__5__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__5__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__6__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__6__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__6__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__6__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__6__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__6__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__6__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__6__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__6__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__6__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__6__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__7__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__7__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__7__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__7__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__7__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__7__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__7__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__7__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__7__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__7__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__7__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__8__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__8__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__8__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__8__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__8__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__8__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__8__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__8__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__8__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__8__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__8__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__9__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__9__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__9__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__9__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__9__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__9__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__9__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__9__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__9__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__9__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__9__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__10__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__10__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__10__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__10__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__10__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__10__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__10__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__10__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__10__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__10__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__10__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__11__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__11__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__11__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__11__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__11__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__11__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__11__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__11__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__11__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__11__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__11__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__12__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__12__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__12__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__12__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__12__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__12__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__12__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__12__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__12__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__12__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__12__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__13__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__13__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__13__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__13__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__13__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__13__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__13__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__13__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__13__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__13__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__13__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__14__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__14__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__14__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__14__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__14__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__14__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__14__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__14__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__14__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__14__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__14__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__15__KET____DOT__ain = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__15__KET____DOT__plus = VL_RAND_RESET_I(1);
    cordicg__DOT__stage__BRA__15__KET____DOT__xnext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__15__KET____DOT__ynext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__15__KET____DOT__znext = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__15__KET____DOT__xplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__15__KET____DOT__xminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__15__KET____DOT__yplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__15__KET____DOT__yminus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__15__KET____DOT__zplus = VL_RAND_RESET_I(17);
    cordicg__DOT__stage__BRA__15__KET____DOT__zminus = VL_RAND_RESET_I(17);
    cordicg__DOT__genblk6__DOT__xdummy = VL_RAND_RESET_I(1);
    cordicg__DOT__genblk6__DOT__ydummy = VL_RAND_RESET_I(1);
    cordicg__DOT__genblk6__DOT__zdummy = VL_RAND_RESET_I(1);
    cordicg__DOT__reg_delay__DOT__clk = VL_RAND_RESET_I(1);
    cordicg__DOT__reg_delay__DOT__gate = VL_RAND_RESET_I(1);
    cordicg__DOT__reg_delay__DOT__din = VL_RAND_RESET_I(1);
    cordicg__DOT__reg_delay__DOT__dout = VL_RAND_RESET_I(1);
    cordicg__DOT__reg_delay__DOT__reset = VL_RAND_RESET_I(1);
    cordicg__DOT__reg_delay__DOT__usual__DOT__shifter = VL_RAND_RESET_I(20);
    multidelay__DOT__clk = VL_RAND_RESET_I(1);
    multidelay__DOT__gate = VL_RAND_RESET_I(1);
    multidelay__DOT__din = VL_RAND_RESET_I(1);
    multidelay__DOT__dout = VL_RAND_RESET_I(1);
    multidelay__DOT__reset = VL_RAND_RESET_I(1);
    multidelay__DOT__usual__DOT__shifter = VL_RAND_RESET_I(13);
    genblk2__BRA__0__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__0__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__0__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__0__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__0__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__0__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__0__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__0__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__0__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__1__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__1__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__1__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__1__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__1__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__1__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__1__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__1__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__2__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__2__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__2__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__2__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__2__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__2__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__2__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__2__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__3__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__3__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__3__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__3__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__3__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__3__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__3__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__3__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__4__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__4__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__4__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__4__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__4__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__4__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__4__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__4__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__4__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__4__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__5__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__5__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__5__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__5__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__5__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__5__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__5__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__5__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__5__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__5__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__6__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__6__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__6__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__6__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__6__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__6__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__6__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__6__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__6__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__6__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__7__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__7__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__7__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__7__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__7__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__7__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__7__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__7__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__7__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__7__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__8__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__8__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__8__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__8__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__8__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__8__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__8__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__8__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__8__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__8__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__9__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__9__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__9__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__9__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__9__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__9__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__9__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__9__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__9__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__9__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__10__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__10__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__10__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__10__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__10__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__10__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__10__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__10__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__10__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__10__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__11__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__11__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__11__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__11__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__11__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__11__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__11__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__11__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__11__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__11__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__12__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__12__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__12__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__12__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__12__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__12__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__12__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__12__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__12__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__12__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__13__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__13__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__13__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__13__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__13__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__13__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__13__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__13__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__13__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__13__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__14__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__14__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__14__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__14__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__14__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__14__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__14__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__14__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__14__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__14__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__15__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__15__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__15__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__15__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    genblk2__BRA__15__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    genblk2__BRA__15__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    genblk2__BRA__15__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    genblk2__BRA__15__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    genblk2__BRA__15__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    genblk2__BRA__15__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    __Vdlyvval__cordicg__DOT__y__v0 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v0 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__z__v0 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__z__v1 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v1 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v1 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v0 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v0 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v2 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v2 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v2 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v1 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v1 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v3 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v3 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v3 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v2 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v2 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v4 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v4 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v4 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v3 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v3 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v5 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v5 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v5 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v4 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v4 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v6 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v6 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v6 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v5 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v5 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v7 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v7 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v7 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v6 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v6 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v8 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v8 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v8 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v7 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v7 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v9 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v9 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v9 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v8 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v8 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v10 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v10 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v10 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v9 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v9 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v11 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v11 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v11 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v10 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v10 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v12 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v12 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v12 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v11 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v11 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v13 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v13 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v13 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v12 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v12 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v14 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v14 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v14 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v13 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v13 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v15 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v15 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v15 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v14 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v14 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__z__v16 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__x__v16 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__y__v16 = VL_RAND_RESET_I(17);
    __Vdlyvval__cordicg__DOT__pluscheck__v15 = VL_RAND_RESET_I(1);
    __Vdlyvval__cordicg__DOT__pluscheck0__v15 = VL_RAND_RESET_I(1);
}
