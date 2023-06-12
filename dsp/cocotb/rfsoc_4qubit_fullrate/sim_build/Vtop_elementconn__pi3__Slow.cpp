// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_elementconn__pi3.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop_elementconn__pi3) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_elementconn__pi3::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtop_elementconn__pi3::~Vtop_elementconn__pi3() {
}

void Vtop_elementconn__pi3::_initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    this->freqdata_r3[0U] = 0U;
    this->freqdata_r3[1U] = 0U;
    this->freqdata_r3[2U] = 0U;
    this->freqdata_r3[3U] = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xnext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ynext = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__znext = 0U;
    this->ammod__DOT__cordicg__DOT__genblk6__DOT__zdummy = 0U;
    this->envaddrdelay__DOT__gate = 1U;
    this->envaddrdelay__DOT__reset = 0U;
    this->ammod__DOT__freqcossinpdelay__DOT__gate = 1U;
    this->ammod__DOT__freqcossinpdelay__DOT__reset = 0U;
    this->ammod__DOT__ampxdelay__DOT__gate = 1U;
    this->ammod__DOT__ampxdelay__DOT__reset = 0U;
    this->ammod__DOT__pinidelay__DOT__gate = 1U;
    this->ammod__DOT__pinidelay__DOT__reset = 0U;
    this->ammod__DOT__cordicg__DOT__yin = 0U;
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__gate = 1U;
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__reset = 0U;
    this->ammod__DOT__multidelay__DOT__gate = 1U;
    this->ammod__DOT__multidelay__DOT__reset = 0U;
    this->dummybusy = 0U;
    this->freqaddr_r4 = 0U;
    this->envaddr_r3 = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yminus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zplus = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zminus = 0U;
    this->ammod__DOT__cordicg__DOT__errorr = 0U;
    this->ammod__DOT__cordicg__DOT__genblk3__DOT__xin_d = 0U;
    this->ammod__DOT__cordicg__DOT__genblk3__DOT__yin_d = 0U;
    this->ammod__DOT__phtime__DOT__freq_r = 0U;
    this->ammod__DOT__phtime__DOT__tcnt_r = 0U;
    this->ammod__DOT__phtime__DOT__phasetime_r3 = 0U;
    this->ammod__DOT__cordicg__DOT__phaseout_r = 0U;
    this->ammod__DOT__cordicg__DOT__genblk3__DOT__phasein_d = 0U;
    this->ammod__DOT__cordicg__DOT__yout_r = 0U;
    this->ammod__DOT__gateout_r = 0U;
    this->envdata_r3[0U] = 0U;
    this->envdata_r3[1U] = 0U;
    this->envdata_r3[2U] = 0U;
    this->envdata_r3[3U] = 0U;
    this->ammod__DOT__multix16x16_r = 0ULL;
    this->ammod__DOT__multiy16x16_r = 0ULL;
    this->envaddr_r2 = 0U;
    this->freqaddr_r3 = 0U;
    this->envdata_r2[0U] = 0U;
    this->envdata_r2[1U] = 0U;
    this->envdata_r2[2U] = 0U;
    this->envdata_r2[3U] = 0U;
    this->ammod__DOT__phtime__DOT__phasetime_r2 = 0U;
    this->ammod__DOT__cordicg__DOT__zg1 = 0U;
    this->ammod__DOT__cordicg__DOT__genblk6__DOT__xdummy = 0U;
    this->ammod__DOT__cordicg__DOT__genblk6__DOT__ydummy = 0U;
    this->envaddr_r = 0U;
    this->ammod__DOT__ampx_d2 = 0U;
    this->ammod__DOT__phaseinit = 0U;
    this->ammod__DOT__gphaseinit = 0U;
    this->ammod__DOT__phtime__DOT__gatesr = 0U;
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] = 0U;
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] = 0U;
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] = 0U;
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U] = 0U;
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] = 0U;
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] = 0U;
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] = 0U;
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] = 0U;
    this->ammod__DOT__multidelay__DOT__usual__DOT__shifter = 0U;
    this->ammod__DOT__cordicg__DOT__xout_r = 0U;
    this->freqdata_r2[0U] = 0U;
    this->freqdata_r2[1U] = 0U;
    this->freqdata_r2[2U] = 0U;
    this->freqdata_r2[3U] = 0U;
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter = 0U;
    this->envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    this->envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    this->envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    this->envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    this->envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    this->envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    this->envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    this->envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    this->envaddrdelay__DOT__usual__DOT__shifter[8U] = 0U;
    this->envaddrdelay__DOT__usual__DOT__shifter[9U] = 0U;
    this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] = 0U;
    this->envaddrdelay__DOT__usual__DOT__shifter[0xbU] = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x63U)) {
        this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    this->busy = 0U;
    this->freqaddr_r2 = 0U;
    this->freqdata_r[0U] = 0U;
    this->freqdata_r[1U] = 0U;
    this->freqdata_r[2U] = 0U;
    this->freqdata_r[3U] = 0U;
    this->envdata_r = 0U;
    this->ammod__DOT__phtime__DOT__phasetime_r1 = 0U;
    this->ammod__DOT__cordicg__DOT__xsum2_d = 0U;
    this->ammod__DOT__cordicg__DOT__xsum3 = 0U;
    this->ammod__DOT__cordicg__DOT__ysum2_d = 0U;
    this->ammod__DOT__cordicg__DOT__ysum3 = 0U;
    this->ammod__DOT__cordicg__DOT__zg0 = 0U;
    this->envaddr_cnt = 0U;
    this->busy_sr = 0ULL;
    this->ammod__DOT__phtime__DOT__phasetime_r0 = 0U;
    this->ammod__DOT__cordicg__DOT__xsum0 = 0U;
    this->ammod__DOT__cordicg__DOT__xsum1 = 0U;
    this->ammod__DOT__cordicg__DOT__xsum2 = 0U;
    this->ammod__DOT__cordicg__DOT__ysum0 = 0U;
    this->ammod__DOT__cordicg__DOT__ysum1 = 0U;
    this->ammod__DOT__cordicg__DOT__ysum2 = 0U;
    this->freqaddr_r = 0U;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi = 0U;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi = 0U;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi = 0U;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi = 0U;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi = 0U;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi = 0U;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi = 0U;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi = 0U;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi = 0U;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi = 0U;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi = 0U;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi = 0U;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi = 0U;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi = 0U;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi = 0U;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi = 0U;
    this->ammod__DOT__cos = 0U;
    this->ammod__DOT__sin = 0U;
}

void Vtop_elementconn__pi3::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->ammod__DOT__cordicg__DOT__PHASE[0U] = 0x20000000U;
    this->ammod__DOT__cordicg__DOT__PHASE[1U] = 0x12e4051eU;
    this->ammod__DOT__cordicg__DOT__PHASE[2U] = 0x9fb385bU;
    this->ammod__DOT__cordicg__DOT__PHASE[3U] = 0x51111d4U;
    this->ammod__DOT__cordicg__DOT__PHASE[4U] = 0x28b0d43U;
    this->ammod__DOT__cordicg__DOT__PHASE[5U] = 0x145d7e1U;
    this->ammod__DOT__cordicg__DOT__PHASE[6U] = 0xa2f61eU;
    this->ammod__DOT__cordicg__DOT__PHASE[7U] = 0x517c55U;
    this->ammod__DOT__cordicg__DOT__PHASE[8U] = 0x28be53U;
    this->ammod__DOT__cordicg__DOT__PHASE[9U] = 0x145f2fU;
    this->ammod__DOT__cordicg__DOT__PHASE[0xaU] = 0xa2f98U;
    this->ammod__DOT__cordicg__DOT__PHASE[0xbU] = 0x517ccU;
    this->ammod__DOT__cordicg__DOT__PHASE[0xcU] = 0x28be6U;
    this->ammod__DOT__cordicg__DOT__PHASE[0xdU] = 0x145f3U;
    this->ammod__DOT__cordicg__DOT__PHASE[0xeU] = 0xa2faU;
    this->ammod__DOT__cordicg__DOT__PHASE[0xfU] = 0x517dU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x10U] = 0x28beU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x11U] = 0x145fU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x12U] = 0xa30U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x13U] = 0x518U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x14U] = 0x28cU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x15U] = 0x146U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x16U] = 0xa3U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x17U] = 0x51U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x18U] = 0x29U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x19U] = 0x14U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1aU] = 0xaU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1bU] = 5U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1cU] = 3U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1dU] = 1U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1eU] = 1U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1fU] = 0U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x20U] = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[1U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[2U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[3U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[4U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[5U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[6U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[7U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[8U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[9U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xaU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xbU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xcU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xdU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xeU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xfU] 
                 >> 0x10U));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__cordicg__DOT__plusall[0U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [0U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[1U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [1U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[2U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [2U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[3U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [3U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[4U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [4U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[5U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [5U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[6U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [6U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[7U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [7U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[8U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [8U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[9U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [9U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xaU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xaU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xbU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xbU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xcU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xcU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xdU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xdU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xeU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xeU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xfU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xfU] 
               >> 0x10U));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__cordicg__DOT__zg = this->ammod__DOT__cordicg__DOT__z
        [0xfU];
    this->ammod__DOT__cordicg__DOT__xg = this->ammod__DOT__cordicg__DOT__x
        [0xfU];
    this->ammod__DOT__cordicg__DOT__yg = this->ammod__DOT__cordicg__DOT__y
        [0xfU];
    this->ammod__DOT__cosp[0U] = 0x7fffU;
    this->ammod__DOT__sinp[0U] = 0U;
    this->ammod__DOT__cordicg__DOT__error = this->ammod__DOT__cordicg__DOT__errorr;
    this->ammod__DOT__cordicg__DOT__xin_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__xin_d;
    this->ammod__DOT__cordicg__DOT__yin_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__yin_d;
    this->ammod__DOT__phtime__DOT__phasetime_w = (0x3fffffffffffffULL 
                                                  & ((QData)((IData)(this->ammod__DOT__phtime__DOT__freq_r)) 
                                                     * (QData)((IData)(this->ammod__DOT__phtime__DOT__tcnt_r))));
    this->ammod__DOT__phtime__DOT__phasetime = this->ammod__DOT__phtime__DOT__phasetime_r3;
    this->ammod__DOT__cordicg__DOT__phaseout = this->ammod__DOT__cordicg__DOT__phaseout_r;
    this->ammod__DOT__cordicg__DOT__phasein_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__phasein_d;
    this->ammod__DOT__cordicg__DOT__yout = this->ammod__DOT__cordicg__DOT__yout_r;
    this->ammod__DOT__gateout = this->ammod__DOT__gateout_r;
    this->ammod__DOT__envxy32x16[0U] = this->envdata_r3[0U];
    this->ammod__DOT__envxy32x16[1U] = this->envdata_r3[1U];
    this->ammod__DOT__envxy32x16[2U] = this->envdata_r3[2U];
    this->ammod__DOT__envxy32x16[3U] = this->envdata_r3[3U];
    this->ammod__DOT__envx[0U] = (0xffffU & ((this->envdata_r3[1U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[0U] 
                                                >> 0x10U)));
    this->ammod__DOT__envy[0U] = (0xffffU & this->envdata_r3[0U]);
    this->ammod__DOT__envx[1U] = (0xffffU & ((this->envdata_r3[2U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[1U] 
                                                >> 0x10U)));
    this->ammod__DOT__envy[1U] = (0xffffU & this->envdata_r3[1U]);
    this->ammod__DOT__envx[2U] = (0xffffU & ((this->envdata_r3[3U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[2U] 
                                                >> 0x10U)));
    this->ammod__DOT__envy[2U] = (0xffffU & this->envdata_r3[2U]);
    this->ammod__DOT__envx[3U] = (0xffffU & (this->envdata_r3[3U] 
                                             >> 0x10U));
    this->ammod__DOT__envy[3U] = (0xffffU & this->envdata_r3[3U]);
    this->ammod__DOT__multix16x16 = this->ammod__DOT__multix16x16_r;
    this->ammod__DOT__multiy16x16 = this->ammod__DOT__multiy16x16_r;
    this->envaddrdelay__DOT__din = this->envaddr_r;
    this->ammod__DOT__cordicg__DOT__xin = this->ammod__DOT__ampx_d2;
    this->ammod__DOT__cordicg__DOT__phasein = this->ammod__DOT__phaseinit;
    this->ammod__DOT__cordicg__DOT__gin = this->ammod__DOT__gphaseinit;
    this->ammod__DOT__phtime__DOT__gateout = (1U & 
                                              ((IData)(this->ammod__DOT__phtime__DOT__gatesr) 
                                               >> 4U));
    this->ammod__DOT__ampxdelay__DOT__dout = (0xffffU 
                                              & this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U]);
    this->ammod__DOT__pinidelay__DOT__dout = (0x1ffffU 
                                              & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
                                                 >> 6U));
    this->ammod__DOT__multidelay__DOT__dout = (1U & 
                                               ((IData)(this->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                                                >> 0xcU));
    this->ammod__DOT__cordicg__DOT__xout = this->ammod__DOT__cordicg__DOT__xout_r;
    this->ammod__DOT__freqcossinp32x16[0U] = this->freqdata_r2[0U];
    this->ammod__DOT__freqcossinp32x16[1U] = this->freqdata_r2[1U];
    this->ammod__DOT__freqcossinp32x16[2U] = this->freqdata_r2[2U];
    this->ammod__DOT__freqcossinp32x16[3U] = this->freqdata_r2[3U];
    this->ammod__DOT__freq32 = this->freqdata_r2[0U];
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout 
        = (1U & (this->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                 >> 0x13U));
    this->envaddrdelay__DOT__dout = (0xfffU & ((this->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                                                << 4U) 
                                               | (this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                                  >> 0x1cU)));
    this->ammod__DOT__freqcossinpdelay__DOT__dout[0U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x60U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[1U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x61U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[2U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x62U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[3U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x63U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.prepbusy 
        = (0U != this->busy_sr);
    this->ammod__DOT__gatein = (1U & (IData)((this->busy_sr 
                                              >> 3U)));
    this->freqaddr = this->freqaddr_r;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__ampx = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.ampx;
    this->ammod__DOT__pini = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.pini;
    this->ammod__DOT__tcnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.tcnt;
    this->lastenv = ((IData)(this->envaddr_cnt) == 
                     (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.envstart) 
                       + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.envlength)) 
                      - (IData)(1U)));
    this->envaddrdelay__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk;
    this->ammod__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [1U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [2U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [3U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [4U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [5U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [6U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [7U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [8U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [9U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xaU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xbU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xcU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xdU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xeU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xfU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [1U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [2U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [3U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [4U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [5U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [6U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [7U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [8U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [9U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xaU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xbU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xcU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xdU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xeU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xfU] >> 0xfU));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__phasetime = this->ammod__DOT__phtime__DOT__phasetime;
    this->ammod__DOT__cordicg__DOT__phaseout1 = this->ammod__DOT__cordicg__DOT__phaseout;
    this->ammod__DOT__cordicg__DOT__shiftpi = (1U & 
                                               ((this->ammod__DOT__cordicg__DOT__phasein_1 
                                                 >> 0x10U) 
                                                ^ (this->ammod__DOT__cordicg__DOT__phasein_1 
                                                   >> 0xfU)));
    this->ammod__DOT__cordicg__DOT__yout1 = this->ammod__DOT__cordicg__DOT__yout;
    this->ammod__DOT__sin_w = this->ammod__DOT__cordicg__DOT__yout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.valid 
        = this->ammod__DOT__gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multix 
        = this->ammod__DOT__multix16x16;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multiy 
        = this->ammod__DOT__multiy16x16;
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__din 
        = this->ammod__DOT__cordicg__DOT__gin;
    this->ammod__DOT__gphtime = this->ammod__DOT__phtime__DOT__gateout;
    this->ammod__DOT__ampx_d = this->ammod__DOT__ampxdelay__DOT__dout;
    this->ammod__DOT__pini_d = this->ammod__DOT__pinidelay__DOT__dout;
    this->ammod__DOT__gmulti = this->ammod__DOT__multidelay__DOT__dout;
    this->ammod__DOT__cordicg__DOT__xout1 = this->ammod__DOT__cordicg__DOT__xout;
    this->ammod__DOT__cos_w = this->ammod__DOT__cordicg__DOT__xout;
    this->ammod__DOT__freqcossinpdelay__DOT__din[0U] 
        = this->ammod__DOT__freqcossinp32x16[0U];
    this->ammod__DOT__freqcossinpdelay__DOT__din[1U] 
        = this->ammod__DOT__freqcossinp32x16[1U];
    this->ammod__DOT__freqcossinpdelay__DOT__din[2U] 
        = this->ammod__DOT__freqcossinp32x16[2U];
    this->ammod__DOT__freqcossinpdelay__DOT__din[3U] 
        = this->ammod__DOT__freqcossinp32x16[3U];
    this->ammod__DOT__freq = (0x7ffffffU & (this->ammod__DOT__freq32 
                                            >> 5U));
    this->ammod__DOT__cordicg__DOT__gout = this->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    this->envaddr = this->envaddrdelay__DOT__dout;
    this->ammod__DOT__freqcossinp32x16_d[0U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[0U];
    this->ammod__DOT__freqcossinp32x16_d[1U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[1U];
    this->ammod__DOT__freqcossinp32x16_d[2U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[2U];
    this->ammod__DOT__freqcossinp32x16_d[3U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[3U];
    this->ammod__DOT__phtime__DOT__gatein = this->ammod__DOT__gatein;
    this->ammod__DOT__ampxdelay__DOT__din = this->ammod__DOT__ampx;
    this->ammod__DOT__pinidelay__DOT__din = this->ammod__DOT__pini;
    this->ammod__DOT__phtime__DOT__tcnt = this->ammod__DOT__tcnt;
    this->ammod__DOT__freqcossinpdelay__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__phtime__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__ampxdelay__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__pinidelay__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__multidelay__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__cordicg__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__multix[0U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__multiy[0U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__multix[1U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__multiy[1U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__multix[2U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__multiy[2U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__multix[3U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__multiy[3U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
                                                       >> 0xfU)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.valid;
    this->ammod__DOT__phtime__DOT__freq = this->ammod__DOT__freq;
    this->ammod__DOT__gcordic = this->ammod__DOT__cordicg__DOT__gout;
    this->ammod__DOT__cosp[1U] = (0xffffU & ((this->ammod__DOT__freqcossinp32x16_d[2U] 
                                              << 0x10U) 
                                             | (this->ammod__DOT__freqcossinp32x16_d[1U] 
                                                >> 0x10U)));
    this->ammod__DOT__sinp[1U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[1U]);
    this->ammod__DOT__cosp[2U] = (0xffffU & ((this->ammod__DOT__freqcossinp32x16_d[3U] 
                                              << 0x10U) 
                                             | (this->ammod__DOT__freqcossinp32x16_d[2U] 
                                                >> 0x10U)));
    this->ammod__DOT__sinp[2U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[2U]);
    this->ammod__DOT__cosp[3U] = (0xffffU & (this->ammod__DOT__freqcossinp32x16_d[3U] 
                                             >> 0x10U));
    this->ammod__DOT__sinp[3U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[3U]);
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__clk 
        = this->ammod__DOT__cordicg__DOT__clk;
    this->ammod__DOT__multidelay__DOT__din = this->ammod__DOT__gcordic;
}

void Vtop_elementconn__pi3::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->ammod__DOT__cordicg__DOT__PHASE[0U] = 0x20000000U;
    this->ammod__DOT__cordicg__DOT__PHASE[1U] = 0x12e4051eU;
    this->ammod__DOT__cordicg__DOT__PHASE[2U] = 0x9fb385bU;
    this->ammod__DOT__cordicg__DOT__PHASE[3U] = 0x51111d4U;
    this->ammod__DOT__cordicg__DOT__PHASE[4U] = 0x28b0d43U;
    this->ammod__DOT__cordicg__DOT__PHASE[5U] = 0x145d7e1U;
    this->ammod__DOT__cordicg__DOT__PHASE[6U] = 0xa2f61eU;
    this->ammod__DOT__cordicg__DOT__PHASE[7U] = 0x517c55U;
    this->ammod__DOT__cordicg__DOT__PHASE[8U] = 0x28be53U;
    this->ammod__DOT__cordicg__DOT__PHASE[9U] = 0x145f2fU;
    this->ammod__DOT__cordicg__DOT__PHASE[0xaU] = 0xa2f98U;
    this->ammod__DOT__cordicg__DOT__PHASE[0xbU] = 0x517ccU;
    this->ammod__DOT__cordicg__DOT__PHASE[0xcU] = 0x28be6U;
    this->ammod__DOT__cordicg__DOT__PHASE[0xdU] = 0x145f3U;
    this->ammod__DOT__cordicg__DOT__PHASE[0xeU] = 0xa2faU;
    this->ammod__DOT__cordicg__DOT__PHASE[0xfU] = 0x517dU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x10U] = 0x28beU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x11U] = 0x145fU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x12U] = 0xa30U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x13U] = 0x518U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x14U] = 0x28cU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x15U] = 0x146U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x16U] = 0xa3U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x17U] = 0x51U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x18U] = 0x29U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x19U] = 0x14U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1aU] = 0xaU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1bU] = 5U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1cU] = 3U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1dU] = 1U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1eU] = 1U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1fU] = 0U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x20U] = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[1U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[2U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[3U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[4U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[5U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[6U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[7U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[8U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[9U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xaU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xbU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xcU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xdU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xeU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xfU] 
                 >> 0x10U));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__cordicg__DOT__plusall[0U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [0U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[1U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [1U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[2U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [2U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[3U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [3U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[4U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [4U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[5U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [5U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[6U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [6U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[7U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [7U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[8U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [8U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[9U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [9U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xaU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xaU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xbU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xbU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xcU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xcU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xdU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xdU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xeU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xeU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xfU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xfU] 
               >> 0x10U));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__cordicg__DOT__zg = this->ammod__DOT__cordicg__DOT__z
        [0xfU];
    this->ammod__DOT__cordicg__DOT__xg = this->ammod__DOT__cordicg__DOT__x
        [0xfU];
    this->ammod__DOT__cordicg__DOT__yg = this->ammod__DOT__cordicg__DOT__y
        [0xfU];
    this->ammod__DOT__cosp[0U] = 0x7fffU;
    this->ammod__DOT__sinp[0U] = 0U;
    this->ammod__DOT__cordicg__DOT__error = this->ammod__DOT__cordicg__DOT__errorr;
    this->ammod__DOT__cordicg__DOT__xin_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__xin_d;
    this->ammod__DOT__cordicg__DOT__yin_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__yin_d;
    this->ammod__DOT__phtime__DOT__phasetime_w = (0x3fffffffffffffULL 
                                                  & ((QData)((IData)(this->ammod__DOT__phtime__DOT__freq_r)) 
                                                     * (QData)((IData)(this->ammod__DOT__phtime__DOT__tcnt_r))));
    this->ammod__DOT__phtime__DOT__phasetime = this->ammod__DOT__phtime__DOT__phasetime_r3;
    this->ammod__DOT__cordicg__DOT__phaseout = this->ammod__DOT__cordicg__DOT__phaseout_r;
    this->ammod__DOT__cordicg__DOT__phasein_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__phasein_d;
    this->ammod__DOT__cordicg__DOT__yout = this->ammod__DOT__cordicg__DOT__yout_r;
    this->ammod__DOT__gateout = this->ammod__DOT__gateout_r;
    this->ammod__DOT__envxy32x16[0U] = this->envdata_r3[0U];
    this->ammod__DOT__envxy32x16[1U] = this->envdata_r3[1U];
    this->ammod__DOT__envxy32x16[2U] = this->envdata_r3[2U];
    this->ammod__DOT__envxy32x16[3U] = this->envdata_r3[3U];
    this->ammod__DOT__envx[0U] = (0xffffU & ((this->envdata_r3[1U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[0U] 
                                                >> 0x10U)));
    this->ammod__DOT__envy[0U] = (0xffffU & this->envdata_r3[0U]);
    this->ammod__DOT__envx[1U] = (0xffffU & ((this->envdata_r3[2U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[1U] 
                                                >> 0x10U)));
    this->ammod__DOT__envy[1U] = (0xffffU & this->envdata_r3[1U]);
    this->ammod__DOT__envx[2U] = (0xffffU & ((this->envdata_r3[3U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[2U] 
                                                >> 0x10U)));
    this->ammod__DOT__envy[2U] = (0xffffU & this->envdata_r3[2U]);
    this->ammod__DOT__envx[3U] = (0xffffU & (this->envdata_r3[3U] 
                                             >> 0x10U));
    this->ammod__DOT__envy[3U] = (0xffffU & this->envdata_r3[3U]);
    this->ammod__DOT__multix16x16 = this->ammod__DOT__multix16x16_r;
    this->ammod__DOT__multiy16x16 = this->ammod__DOT__multiy16x16_r;
    this->envaddrdelay__DOT__din = this->envaddr_r;
    this->ammod__DOT__cordicg__DOT__xin = this->ammod__DOT__ampx_d2;
    this->ammod__DOT__cordicg__DOT__phasein = this->ammod__DOT__phaseinit;
    this->ammod__DOT__cordicg__DOT__gin = this->ammod__DOT__gphaseinit;
    this->ammod__DOT__phtime__DOT__gateout = (1U & 
                                              ((IData)(this->ammod__DOT__phtime__DOT__gatesr) 
                                               >> 4U));
    this->ammod__DOT__ampxdelay__DOT__dout = (0xffffU 
                                              & this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U]);
    this->ammod__DOT__pinidelay__DOT__dout = (0x1ffffU 
                                              & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
                                                 >> 6U));
    this->ammod__DOT__multidelay__DOT__dout = (1U & 
                                               ((IData)(this->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                                                >> 0xcU));
    this->ammod__DOT__cordicg__DOT__xout = this->ammod__DOT__cordicg__DOT__xout_r;
    this->ammod__DOT__freqcossinp32x16[0U] = this->freqdata_r2[0U];
    this->ammod__DOT__freqcossinp32x16[1U] = this->freqdata_r2[1U];
    this->ammod__DOT__freqcossinp32x16[2U] = this->freqdata_r2[2U];
    this->ammod__DOT__freqcossinp32x16[3U] = this->freqdata_r2[3U];
    this->ammod__DOT__freq32 = this->freqdata_r2[0U];
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout 
        = (1U & (this->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                 >> 0x13U));
    this->envaddrdelay__DOT__dout = (0xfffU & ((this->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                                                << 4U) 
                                               | (this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                                  >> 0x1cU)));
    this->ammod__DOT__freqcossinpdelay__DOT__dout[0U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x60U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[1U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x61U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[2U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x62U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[3U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x63U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.prepbusy 
        = (0U != this->busy_sr);
    this->ammod__DOT__gatein = (1U & (IData)((this->busy_sr 
                                              >> 3U)));
    this->freqaddr = this->freqaddr_r;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__ampx = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.ampx;
    this->ammod__DOT__pini = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.pini;
    this->ammod__DOT__tcnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.tcnt;
    this->lastenv = ((IData)(this->envaddr_cnt) == 
                     (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.envstart) 
                       + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.envlength)) 
                      - (IData)(1U)));
    this->envaddrdelay__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk;
    this->ammod__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [1U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [2U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [3U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [4U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [5U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [6U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [7U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [8U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [9U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xaU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xbU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xcU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xdU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xeU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xfU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [1U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [2U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [3U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [4U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [5U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [6U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [7U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [8U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [9U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xaU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xbU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xcU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xdU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xeU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xfU] >> 0xfU));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__phasetime = this->ammod__DOT__phtime__DOT__phasetime;
    this->ammod__DOT__cordicg__DOT__phaseout1 = this->ammod__DOT__cordicg__DOT__phaseout;
    this->ammod__DOT__cordicg__DOT__shiftpi = (1U & 
                                               ((this->ammod__DOT__cordicg__DOT__phasein_1 
                                                 >> 0x10U) 
                                                ^ (this->ammod__DOT__cordicg__DOT__phasein_1 
                                                   >> 0xfU)));
    this->ammod__DOT__cordicg__DOT__yout1 = this->ammod__DOT__cordicg__DOT__yout;
    this->ammod__DOT__sin_w = this->ammod__DOT__cordicg__DOT__yout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.valid 
        = this->ammod__DOT__gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multix 
        = this->ammod__DOT__multix16x16;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multiy 
        = this->ammod__DOT__multiy16x16;
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__din 
        = this->ammod__DOT__cordicg__DOT__gin;
    this->ammod__DOT__gphtime = this->ammod__DOT__phtime__DOT__gateout;
    this->ammod__DOT__ampx_d = this->ammod__DOT__ampxdelay__DOT__dout;
    this->ammod__DOT__pini_d = this->ammod__DOT__pinidelay__DOT__dout;
    this->ammod__DOT__gmulti = this->ammod__DOT__multidelay__DOT__dout;
    this->ammod__DOT__cordicg__DOT__xout1 = this->ammod__DOT__cordicg__DOT__xout;
    this->ammod__DOT__cos_w = this->ammod__DOT__cordicg__DOT__xout;
    this->ammod__DOT__freqcossinpdelay__DOT__din[0U] 
        = this->ammod__DOT__freqcossinp32x16[0U];
    this->ammod__DOT__freqcossinpdelay__DOT__din[1U] 
        = this->ammod__DOT__freqcossinp32x16[1U];
    this->ammod__DOT__freqcossinpdelay__DOT__din[2U] 
        = this->ammod__DOT__freqcossinp32x16[2U];
    this->ammod__DOT__freqcossinpdelay__DOT__din[3U] 
        = this->ammod__DOT__freqcossinp32x16[3U];
    this->ammod__DOT__freq = (0x7ffffffU & (this->ammod__DOT__freq32 
                                            >> 5U));
    this->ammod__DOT__cordicg__DOT__gout = this->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    this->envaddr = this->envaddrdelay__DOT__dout;
    this->ammod__DOT__freqcossinp32x16_d[0U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[0U];
    this->ammod__DOT__freqcossinp32x16_d[1U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[1U];
    this->ammod__DOT__freqcossinp32x16_d[2U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[2U];
    this->ammod__DOT__freqcossinp32x16_d[3U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[3U];
    this->ammod__DOT__phtime__DOT__gatein = this->ammod__DOT__gatein;
    this->ammod__DOT__ampxdelay__DOT__din = this->ammod__DOT__ampx;
    this->ammod__DOT__pinidelay__DOT__din = this->ammod__DOT__pini;
    this->ammod__DOT__phtime__DOT__tcnt = this->ammod__DOT__tcnt;
    this->ammod__DOT__freqcossinpdelay__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__phtime__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__ampxdelay__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__pinidelay__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__multidelay__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__cordicg__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__multix[0U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__multiy[0U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__multix[1U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__multiy[1U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__multix[2U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__multiy[2U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__multix[3U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__multiy[3U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
                                                       >> 0xfU)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.valid;
    this->ammod__DOT__phtime__DOT__freq = this->ammod__DOT__freq;
    this->ammod__DOT__gcordic = this->ammod__DOT__cordicg__DOT__gout;
    this->ammod__DOT__cosp[1U] = (0xffffU & ((this->ammod__DOT__freqcossinp32x16_d[2U] 
                                              << 0x10U) 
                                             | (this->ammod__DOT__freqcossinp32x16_d[1U] 
                                                >> 0x10U)));
    this->ammod__DOT__sinp[1U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[1U]);
    this->ammod__DOT__cosp[2U] = (0xffffU & ((this->ammod__DOT__freqcossinp32x16_d[3U] 
                                              << 0x10U) 
                                             | (this->ammod__DOT__freqcossinp32x16_d[2U] 
                                                >> 0x10U)));
    this->ammod__DOT__sinp[2U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[2U]);
    this->ammod__DOT__cosp[3U] = (0xffffU & (this->ammod__DOT__freqcossinp32x16_d[3U] 
                                             >> 0x10U));
    this->ammod__DOT__sinp[3U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[3U]);
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__clk 
        = this->ammod__DOT__cordicg__DOT__clk;
    this->ammod__DOT__multidelay__DOT__din = this->ammod__DOT__gcordic;
}

void Vtop_elementconn__pi3::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->ammod__DOT__cordicg__DOT__PHASE[0U] = 0x20000000U;
    this->ammod__DOT__cordicg__DOT__PHASE[1U] = 0x12e4051eU;
    this->ammod__DOT__cordicg__DOT__PHASE[2U] = 0x9fb385bU;
    this->ammod__DOT__cordicg__DOT__PHASE[3U] = 0x51111d4U;
    this->ammod__DOT__cordicg__DOT__PHASE[4U] = 0x28b0d43U;
    this->ammod__DOT__cordicg__DOT__PHASE[5U] = 0x145d7e1U;
    this->ammod__DOT__cordicg__DOT__PHASE[6U] = 0xa2f61eU;
    this->ammod__DOT__cordicg__DOT__PHASE[7U] = 0x517c55U;
    this->ammod__DOT__cordicg__DOT__PHASE[8U] = 0x28be53U;
    this->ammod__DOT__cordicg__DOT__PHASE[9U] = 0x145f2fU;
    this->ammod__DOT__cordicg__DOT__PHASE[0xaU] = 0xa2f98U;
    this->ammod__DOT__cordicg__DOT__PHASE[0xbU] = 0x517ccU;
    this->ammod__DOT__cordicg__DOT__PHASE[0xcU] = 0x28be6U;
    this->ammod__DOT__cordicg__DOT__PHASE[0xdU] = 0x145f3U;
    this->ammod__DOT__cordicg__DOT__PHASE[0xeU] = 0xa2faU;
    this->ammod__DOT__cordicg__DOT__PHASE[0xfU] = 0x517dU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x10U] = 0x28beU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x11U] = 0x145fU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x12U] = 0xa30U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x13U] = 0x518U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x14U] = 0x28cU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x15U] = 0x146U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x16U] = 0xa3U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x17U] = 0x51U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x18U] = 0x29U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x19U] = 0x14U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1aU] = 0xaU;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1bU] = 5U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1cU] = 3U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1dU] = 1U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1eU] = 1U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x1fU] = 0U;
    this->ammod__DOT__cordicg__DOT__PHASE[0x20U] = 0U;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[1U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[2U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[3U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[4U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[5U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[6U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[7U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[8U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[9U] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xaU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xbU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xcU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xdU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xeU] 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__plus 
        = (1U & (this->ammod__DOT__cordicg__DOT__z[0xfU] 
                 >> 0x10U));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__cordicg__DOT__plusall[0U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [0U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[1U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [1U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[2U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [2U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[3U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [3U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[4U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [4U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[5U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [5U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[6U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [6U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[7U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [7U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[8U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [8U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[9U] = (1U 
                                                   & (this->ammod__DOT__cordicg__DOT__z
                                                      [9U] 
                                                      >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xaU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xaU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xbU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xbU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xcU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xcU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xdU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xdU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xeU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xeU] 
               >> 0x10U));
    this->ammod__DOT__cordicg__DOT__plusall[0xfU] = 
        (1U & (this->ammod__DOT__cordicg__DOT__z[0xfU] 
               >> 0x10U));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__cordicg__DOT__zg = this->ammod__DOT__cordicg__DOT__z
        [0xfU];
    this->ammod__DOT__cordicg__DOT__xg = this->ammod__DOT__cordicg__DOT__x
        [0xfU];
    this->ammod__DOT__cordicg__DOT__yg = this->ammod__DOT__cordicg__DOT__y
        [0xfU];
    this->ammod__DOT__cosp[0U] = 0x7fffU;
    this->ammod__DOT__sinp[0U] = 0U;
    this->ammod__DOT__cordicg__DOT__error = this->ammod__DOT__cordicg__DOT__errorr;
    this->ammod__DOT__cordicg__DOT__xin_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__xin_d;
    this->ammod__DOT__cordicg__DOT__yin_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__yin_d;
    this->ammod__DOT__phtime__DOT__phasetime_w = (0x3fffffffffffffULL 
                                                  & ((QData)((IData)(this->ammod__DOT__phtime__DOT__freq_r)) 
                                                     * (QData)((IData)(this->ammod__DOT__phtime__DOT__tcnt_r))));
    this->ammod__DOT__phtime__DOT__phasetime = this->ammod__DOT__phtime__DOT__phasetime_r3;
    this->ammod__DOT__cordicg__DOT__phaseout = this->ammod__DOT__cordicg__DOT__phaseout_r;
    this->ammod__DOT__cordicg__DOT__phasein_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__phasein_d;
    this->ammod__DOT__cordicg__DOT__yout = this->ammod__DOT__cordicg__DOT__yout_r;
    this->ammod__DOT__gateout = this->ammod__DOT__gateout_r;
    this->ammod__DOT__envxy32x16[0U] = this->envdata_r3[0U];
    this->ammod__DOT__envxy32x16[1U] = this->envdata_r3[1U];
    this->ammod__DOT__envxy32x16[2U] = this->envdata_r3[2U];
    this->ammod__DOT__envxy32x16[3U] = this->envdata_r3[3U];
    this->ammod__DOT__envx[0U] = (0xffffU & ((this->envdata_r3[1U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[0U] 
                                                >> 0x10U)));
    this->ammod__DOT__envy[0U] = (0xffffU & this->envdata_r3[0U]);
    this->ammod__DOT__envx[1U] = (0xffffU & ((this->envdata_r3[2U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[1U] 
                                                >> 0x10U)));
    this->ammod__DOT__envy[1U] = (0xffffU & this->envdata_r3[1U]);
    this->ammod__DOT__envx[2U] = (0xffffU & ((this->envdata_r3[3U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[2U] 
                                                >> 0x10U)));
    this->ammod__DOT__envy[2U] = (0xffffU & this->envdata_r3[2U]);
    this->ammod__DOT__envx[3U] = (0xffffU & (this->envdata_r3[3U] 
                                             >> 0x10U));
    this->ammod__DOT__envy[3U] = (0xffffU & this->envdata_r3[3U]);
    this->ammod__DOT__multix16x16 = this->ammod__DOT__multix16x16_r;
    this->ammod__DOT__multiy16x16 = this->ammod__DOT__multiy16x16_r;
    this->envaddrdelay__DOT__din = this->envaddr_r;
    this->ammod__DOT__cordicg__DOT__xin = this->ammod__DOT__ampx_d2;
    this->ammod__DOT__cordicg__DOT__phasein = this->ammod__DOT__phaseinit;
    this->ammod__DOT__cordicg__DOT__gin = this->ammod__DOT__gphaseinit;
    this->ammod__DOT__phtime__DOT__gateout = (1U & 
                                              ((IData)(this->ammod__DOT__phtime__DOT__gatesr) 
                                               >> 4U));
    this->ammod__DOT__ampxdelay__DOT__dout = (0xffffU 
                                              & this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U]);
    this->ammod__DOT__pinidelay__DOT__dout = (0x1ffffU 
                                              & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
                                                 >> 6U));
    this->ammod__DOT__multidelay__DOT__dout = (1U & 
                                               ((IData)(this->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                                                >> 0xcU));
    this->ammod__DOT__cordicg__DOT__xout = this->ammod__DOT__cordicg__DOT__xout_r;
    this->ammod__DOT__freqcossinp32x16[0U] = this->freqdata_r2[0U];
    this->ammod__DOT__freqcossinp32x16[1U] = this->freqdata_r2[1U];
    this->ammod__DOT__freqcossinp32x16[2U] = this->freqdata_r2[2U];
    this->ammod__DOT__freqcossinp32x16[3U] = this->freqdata_r2[3U];
    this->ammod__DOT__freq32 = this->freqdata_r2[0U];
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout 
        = (1U & (this->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                 >> 0x13U));
    this->envaddrdelay__DOT__dout = (0xfffU & ((this->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                                                << 4U) 
                                               | (this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                                  >> 0x1cU)));
    this->ammod__DOT__freqcossinpdelay__DOT__dout[0U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x60U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[1U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x61U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[2U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x62U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[3U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x63U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.prepbusy 
        = (0U != this->busy_sr);
    this->ammod__DOT__gatein = (1U & (IData)((this->busy_sr 
                                              >> 3U)));
    this->freqaddr = this->freqaddr_r;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__ampx = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.ampx;
    this->ammod__DOT__pini = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.pini;
    this->ammod__DOT__tcnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.tcnt;
    this->lastenv = ((IData)(this->envaddr_cnt) == 
                     (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.envstart) 
                       + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.envlength)) 
                      - (IData)(1U)));
    this->envaddrdelay__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk;
    this->ammod__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk;
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [1U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [2U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [3U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [4U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [5U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [6U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [7U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [8U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [9U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xaU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xbU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xcU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xdU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xeU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xfU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [1U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [2U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [3U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [4U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [5U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [6U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [7U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [8U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [9U] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xaU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xbU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xcU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xdU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xeU] >> 0xfU));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__PHASE
                       [0xfU] >> 0xfU));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__phasetime = this->ammod__DOT__phtime__DOT__phasetime;
    this->ammod__DOT__cordicg__DOT__phaseout1 = this->ammod__DOT__cordicg__DOT__phaseout;
    this->ammod__DOT__cordicg__DOT__shiftpi = (1U & 
                                               ((this->ammod__DOT__cordicg__DOT__phasein_1 
                                                 >> 0x10U) 
                                                ^ (this->ammod__DOT__cordicg__DOT__phasein_1 
                                                   >> 0xfU)));
    this->ammod__DOT__cordicg__DOT__yout1 = this->ammod__DOT__cordicg__DOT__yout;
    this->ammod__DOT__sin_w = this->ammod__DOT__cordicg__DOT__yout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.valid 
        = this->ammod__DOT__gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multix 
        = this->ammod__DOT__multix16x16;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multiy 
        = this->ammod__DOT__multiy16x16;
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__din 
        = this->ammod__DOT__cordicg__DOT__gin;
    this->ammod__DOT__gphtime = this->ammod__DOT__phtime__DOT__gateout;
    this->ammod__DOT__ampx_d = this->ammod__DOT__ampxdelay__DOT__dout;
    this->ammod__DOT__pini_d = this->ammod__DOT__pinidelay__DOT__dout;
    this->ammod__DOT__gmulti = this->ammod__DOT__multidelay__DOT__dout;
    this->ammod__DOT__cordicg__DOT__xout1 = this->ammod__DOT__cordicg__DOT__xout;
    this->ammod__DOT__cos_w = this->ammod__DOT__cordicg__DOT__xout;
    this->ammod__DOT__freqcossinpdelay__DOT__din[0U] 
        = this->ammod__DOT__freqcossinp32x16[0U];
    this->ammod__DOT__freqcossinpdelay__DOT__din[1U] 
        = this->ammod__DOT__freqcossinp32x16[1U];
    this->ammod__DOT__freqcossinpdelay__DOT__din[2U] 
        = this->ammod__DOT__freqcossinp32x16[2U];
    this->ammod__DOT__freqcossinpdelay__DOT__din[3U] 
        = this->ammod__DOT__freqcossinp32x16[3U];
    this->ammod__DOT__freq = (0x7ffffffU & (this->ammod__DOT__freq32 
                                            >> 5U));
    this->ammod__DOT__cordicg__DOT__gout = this->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    this->envaddr = this->envaddrdelay__DOT__dout;
    this->ammod__DOT__freqcossinp32x16_d[0U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[0U];
    this->ammod__DOT__freqcossinp32x16_d[1U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[1U];
    this->ammod__DOT__freqcossinp32x16_d[2U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[2U];
    this->ammod__DOT__freqcossinp32x16_d[3U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[3U];
    this->ammod__DOT__phtime__DOT__gatein = this->ammod__DOT__gatein;
    this->ammod__DOT__ampxdelay__DOT__din = this->ammod__DOT__ampx;
    this->ammod__DOT__pinidelay__DOT__din = this->ammod__DOT__pini;
    this->ammod__DOT__phtime__DOT__tcnt = this->ammod__DOT__tcnt;
    this->ammod__DOT__freqcossinpdelay__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__phtime__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__ampxdelay__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__pinidelay__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__multidelay__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__clk 
        = this->ammod__DOT__clk;
    this->ammod__DOT__cordicg__DOT__clk = this->ammod__DOT__clk;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__multix[0U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__multiy[0U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__multix[1U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__multiy[1U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__multix[2U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__multiy[2U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__multix[3U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__multiy[3U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
                                                       >> 0xfU)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.valid;
    this->ammod__DOT__phtime__DOT__freq = this->ammod__DOT__freq;
    this->ammod__DOT__gcordic = this->ammod__DOT__cordicg__DOT__gout;
    this->ammod__DOT__cosp[1U] = (0xffffU & ((this->ammod__DOT__freqcossinp32x16_d[2U] 
                                              << 0x10U) 
                                             | (this->ammod__DOT__freqcossinp32x16_d[1U] 
                                                >> 0x10U)));
    this->ammod__DOT__sinp[1U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[1U]);
    this->ammod__DOT__cosp[2U] = (0xffffU & ((this->ammod__DOT__freqcossinp32x16_d[3U] 
                                              << 0x10U) 
                                             | (this->ammod__DOT__freqcossinp32x16_d[2U] 
                                                >> 0x10U)));
    this->ammod__DOT__sinp[2U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[2U]);
    this->ammod__DOT__cosp[3U] = (0xffffU & (this->ammod__DOT__freqcossinp32x16_d[3U] 
                                             >> 0x10U));
    this->ammod__DOT__sinp[3U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[3U]);
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__clk 
        = this->ammod__DOT__cordicg__DOT__clk;
    this->ammod__DOT__multidelay__DOT__din = this->ammod__DOT__gcordic;
}

void Vtop_elementconn__pi3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_ctor_var_reset\n"); );
    // Body
    envaddr = VL_RAND_RESET_I(12);
    envdata = VL_RAND_RESET_I(32);
    freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, freqdata);
    envaddr_cnt = VL_RAND_RESET_I(12);
    busy = VL_RAND_RESET_I(1);
    busy_sr = VL_RAND_RESET_Q(42);
    dummybusy = VL_RAND_RESET_I(1);
    freqaddr_r = VL_RAND_RESET_I(9);
    freqaddr_r2 = VL_RAND_RESET_I(9);
    freqaddr_r3 = VL_RAND_RESET_I(9);
    freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, freqdata_r);
    VL_RAND_RESET_W(128, freqdata_r2);
    VL_RAND_RESET_W(128, freqdata_r3);
    envaddr_r = VL_RAND_RESET_I(12);
    envaddr_r2 = VL_RAND_RESET_I(12);
    envaddr_r3 = VL_RAND_RESET_I(12);
    envdata_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, envdata_r3);
    VL_RAND_RESET_W(128, envdata_r2);
    lastenv = VL_RAND_RESET_I(1);
    envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    envaddrdelay__DOT__din = VL_RAND_RESET_I(12);
    envaddrdelay__DOT__dout = VL_RAND_RESET_I(12);
    envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(360, envaddrdelay__DOT__usual__DOT__shifter);
    ammod__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__gatein = VL_RAND_RESET_I(1);
    ammod__DOT__tcnt = VL_RAND_RESET_I(27);
    VL_RAND_RESET_W(128, ammod__DOT__freqcossinp32x16);
    VL_RAND_RESET_W(128, ammod__DOT__envxy32x16);
    ammod__DOT__pini = VL_RAND_RESET_I(17);
    ammod__DOT__ampx = VL_RAND_RESET_I(16);
    ammod__DOT__multix16x16 = VL_RAND_RESET_Q(64);
    ammod__DOT__multiy16x16 = VL_RAND_RESET_Q(64);
    ammod__DOT__gateout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        ammod__DOT__cosp[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        ammod__DOT__sinp[__Vi0] = VL_RAND_RESET_I(16);
    }
    ammod__DOT__freq = VL_RAND_RESET_I(27);
    ammod__DOT__freq32 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        ammod__DOT__envx[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        ammod__DOT__envy[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        ammod__DOT__multix[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        ammod__DOT__multiy[__Vi0] = VL_RAND_RESET_I(16);
    }
    ammod__DOT__multix16x16_r = VL_RAND_RESET_Q(64);
    ammod__DOT__multiy16x16_r = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, ammod__DOT__freqcossinp32x16_d);
    ammod__DOT__phasetime = VL_RAND_RESET_I(27);
    ammod__DOT__gphtime = VL_RAND_RESET_I(1);
    ammod__DOT__ampx_d = VL_RAND_RESET_I(16);
    ammod__DOT__ampx_d2 = VL_RAND_RESET_I(16);
    ammod__DOT__pini_d = VL_RAND_RESET_I(17);
    ammod__DOT__phaseinit = VL_RAND_RESET_I(17);
    ammod__DOT__gphaseinit = VL_RAND_RESET_I(1);
    ammod__DOT__cos_w = VL_RAND_RESET_I(16);
    ammod__DOT__sin_w = VL_RAND_RESET_I(16);
    ammod__DOT__cos = VL_RAND_RESET_I(16);
    ammod__DOT__sin = VL_RAND_RESET_I(16);
    ammod__DOT__gcordic = VL_RAND_RESET_I(1);
    ammod__DOT__gmulti = VL_RAND_RESET_I(1);
    ammod__DOT__gateout_r = VL_RAND_RESET_I(1);
    ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__zr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__zi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__envxi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__envyi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__cospi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__zr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__zi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__envxi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__envyi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__cospi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__zr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__zi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__envxi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__envyi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__cospi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__zr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__zi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__envxi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__envyi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__cospi = VL_RAND_RESET_I(16);
    ammod__DOT__freqcossinpdelay__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__freqcossinpdelay__DOT__gate = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, ammod__DOT__freqcossinpdelay__DOT__din);
    VL_RAND_RESET_W(128, ammod__DOT__freqcossinpdelay__DOT__dout);
    ammod__DOT__freqcossinpdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(3200, ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter);
    ammod__DOT__phtime__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__phtime__DOT__freq = VL_RAND_RESET_I(27);
    ammod__DOT__phtime__DOT__tcnt = VL_RAND_RESET_I(27);
    ammod__DOT__phtime__DOT__gatein = VL_RAND_RESET_I(1);
    ammod__DOT__phtime__DOT__phasetime = VL_RAND_RESET_I(27);
    ammod__DOT__phtime__DOT__gateout = VL_RAND_RESET_I(1);
    ammod__DOT__phtime__DOT__freq_r = VL_RAND_RESET_I(27);
    ammod__DOT__phtime__DOT__tcnt_r = VL_RAND_RESET_I(27);
    ammod__DOT__phtime__DOT__phasetime_w = VL_RAND_RESET_Q(54);
    ammod__DOT__phtime__DOT__phasetime_r0 = VL_RAND_RESET_I(27);
    ammod__DOT__phtime__DOT__phasetime_r1 = VL_RAND_RESET_I(27);
    ammod__DOT__phtime__DOT__phasetime_r2 = VL_RAND_RESET_I(27);
    ammod__DOT__phtime__DOT__phasetime_r3 = VL_RAND_RESET_I(27);
    ammod__DOT__phtime__DOT__gatesr = VL_RAND_RESET_I(8);
    ammod__DOT__ampxdelay__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__ampxdelay__DOT__gate = VL_RAND_RESET_I(1);
    ammod__DOT__ampxdelay__DOT__din = VL_RAND_RESET_I(16);
    ammod__DOT__ampxdelay__DOT__dout = VL_RAND_RESET_I(16);
    ammod__DOT__ampxdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, ammod__DOT__ampxdelay__DOT__usual__DOT__shifter);
    ammod__DOT__pinidelay__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__pinidelay__DOT__gate = VL_RAND_RESET_I(1);
    ammod__DOT__pinidelay__DOT__din = VL_RAND_RESET_I(17);
    ammod__DOT__pinidelay__DOT__dout = VL_RAND_RESET_I(17);
    ammod__DOT__pinidelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(119, ammod__DOT__pinidelay__DOT__usual__DOT__shifter);
    ammod__DOT__cordicg__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__xin = VL_RAND_RESET_I(16);
    ammod__DOT__cordicg__DOT__yin = VL_RAND_RESET_I(16);
    ammod__DOT__cordicg__DOT__phasein = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__xout = VL_RAND_RESET_I(16);
    ammod__DOT__cordicg__DOT__yout = VL_RAND_RESET_I(16);
    ammod__DOT__cordicg__DOT__phaseout = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__error = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__gin = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<33; ++__Vi0) {
        ammod__DOT__cordicg__DOT__PHASE[__Vi0] = VL_RAND_RESET_I(32);
    }
    ammod__DOT__cordicg__DOT__xout_r = VL_RAND_RESET_I(16);
    ammod__DOT__cordicg__DOT__yout_r = VL_RAND_RESET_I(16);
    ammod__DOT__cordicg__DOT__phaseout_r = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__errorr = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__xin_1 = VL_RAND_RESET_I(16);
    ammod__DOT__cordicg__DOT__yin_1 = VL_RAND_RESET_I(16);
    ammod__DOT__cordicg__DOT__phasein_1 = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__shiftpi = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        ammod__DOT__cordicg__DOT__plusall[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        ammod__DOT__cordicg__DOT__op[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        ammod__DOT__cordicg__DOT__pluscheck[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        ammod__DOT__cordicg__DOT__pluscheck0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        ammod__DOT__cordicg__DOT__x[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        ammod__DOT__cordicg__DOT__y[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        ammod__DOT__cordicg__DOT__z[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        ammod__DOT__cordicg__DOT__xshift[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        ammod__DOT__cordicg__DOT__yshift[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        ammod__DOT__cordicg__DOT__zshift[__Vi0] = VL_RAND_RESET_I(17);
    }
    ammod__DOT__cordicg__DOT__xg = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__yg = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__zg = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__xsum0 = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__xsum1 = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__xsum2 = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__xsum2_d = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__xsum3 = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__ysum0 = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__ysum1 = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__ysum2 = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__ysum2_d = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__ysum3 = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__zg0 = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__zg1 = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__xout1 = VL_RAND_RESET_I(16);
    ammod__DOT__cordicg__DOT__yout1 = VL_RAND_RESET_I(16);
    ammod__DOT__cordicg__DOT__phaseout1 = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__genblk3__DOT__xin_d = VL_RAND_RESET_I(16);
    ammod__DOT__cordicg__DOT__genblk3__DOT__yin_d = VL_RAND_RESET_I(16);
    ammod__DOT__cordicg__DOT__genblk3__DOT__phasein_d = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__plus = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xnext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ynext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__znext = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zplus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zminus = VL_RAND_RESET_I(17);
    ammod__DOT__cordicg__DOT__genblk6__DOT__xdummy = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__genblk6__DOT__ydummy = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__genblk6__DOT__zdummy = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__reg_delay__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__reg_delay__DOT__gate = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__reg_delay__DOT__din = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__reg_delay__DOT__dout = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__reg_delay__DOT__reset = VL_RAND_RESET_I(1);
    ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter = VL_RAND_RESET_I(20);
    ammod__DOT__multidelay__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__multidelay__DOT__gate = VL_RAND_RESET_I(1);
    ammod__DOT__multidelay__DOT__din = VL_RAND_RESET_I(1);
    ammod__DOT__multidelay__DOT__dout = VL_RAND_RESET_I(1);
    ammod__DOT__multidelay__DOT__reset = VL_RAND_RESET_I(1);
    ammod__DOT__multidelay__DOT__usual__DOT__shifter = VL_RAND_RESET_I(13);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__clk = VL_RAND_RESET_I(1);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr4 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr1 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr2 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3 = VL_RAND_RESET_I(16);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addr = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addi = VL_RAND_RESET_I(17);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__mult0 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multr = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multi = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1 = VL_RAND_RESET_Q(33);
    ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2 = VL_RAND_RESET_Q(33);
    __Vdly__envaddr_cnt = VL_RAND_RESET_I(12);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v0 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v0 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v0 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v1 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v1 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v1 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v2 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v2 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v2 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v3 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v3 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v3 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v4 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v4 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v4 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v5 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v5 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v5 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v6 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v6 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v6 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v7 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v7 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v7 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v8 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v8 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v8 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v9 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v9 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v9 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v10 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v10 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v10 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v11 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v11 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v11 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v12 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v12 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v12 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v13 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v13 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v13 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v14 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v14 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v14 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v15 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v15 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v15 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v16 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v16 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v16 = VL_RAND_RESET_I(17);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15 = VL_RAND_RESET_I(1);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15 = VL_RAND_RESET_I(1);
}
