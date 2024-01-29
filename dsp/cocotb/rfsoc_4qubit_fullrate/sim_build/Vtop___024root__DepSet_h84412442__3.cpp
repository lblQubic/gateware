// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    VlWide<8>/*255:0*/ dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout;
    VL_ZERO_W(256, dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout);
    VlWide<8>/*255:0*/ dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout;
    VL_ZERO_W(256, dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout);
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.shotcnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__currentshotcnt;
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.reset) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nshot 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.nshot;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 1U;
    } else if ((0U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nshot 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.nshot;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 1U;
    } else if ((1U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 0U;
    } else if ((3U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 0U;
    } else if ((2U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 1U;
    } else if ((6U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 1U;
    } else if ((7U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 1U;
    } else if ((5U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 1U;
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_arm_ready 
        = ((0xf0U & (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_arm_ready)) 
           | (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__.enable) 
               << 3U) | (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.enable) 
                          << 2U) | (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.enable) 
                                     << 1U) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.enable)))));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_arm_ready 
        = ((0xfU & (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_arm_ready)) 
           | (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__7__KET__.enable) 
               << 7U) | (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__6__KET__.enable) 
                          << 6U) | (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__5__KET__.enable) 
                                     << 5U) | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__.enable) 
                                               << 4U)))));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__youtslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vout;
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[0U] 
        = (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vout) 
            << 0x10U) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vout));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[1U] 
        = (((0xffffU & (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vout)) 
            | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vout) 
               >> 0x10U)) | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vout) 
                             << 0x10U));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[2U] 
        = (((0xffffU & (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vout)) 
            | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vout) 
               >> 0x10U)) | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vout) 
                             << 0x10U));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[3U] 
        = (((0xffffU & (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vout)) 
            | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vout) 
               >> 0x10U)) | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vout) 
                             << 0x10U));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[4U] 
        = (((0xffffU & (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vout)) 
            | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vout) 
               >> 0x10U)) | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vout) 
                             << 0x10U));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[5U] 
        = (((0xffffU & (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vout)) 
            | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vout) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vout) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vout)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vout) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vout)))))) 
                             << 0x10U));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[6U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vout) 
                                        << 0x10U) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vout)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vout) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vout)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vout) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vout)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vout) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vout))))) 
                                  >> 0x20U)) << 0x10U));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[7U] 
        = (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vout) 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vout) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vout)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vout) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vout))))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf[0U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v0;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf[1U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v1;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf[2U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf[3U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf[4U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v4;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf[5U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v5;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf[6U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v6;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf[7U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v7;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf[0U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v0;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf[1U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v1;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf[2U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf[3U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf[4U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v4;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf[5U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v5;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf[6U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v6;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf[7U] 
        = vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v7;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__xoutslice 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vout;
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[0U] 
        = (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vout) 
            << 0x10U) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vout));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[1U] 
        = (((0xffffU & (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vout)) 
            | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vout) 
               >> 0x10U)) | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vout) 
                             << 0x10U));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[2U] 
        = (((0xffffU & (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vout)) 
            | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vout) 
               >> 0x10U)) | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vout) 
                             << 0x10U));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[3U] 
        = (((0xffffU & (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vout)) 
            | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vout) 
               >> 0x10U)) | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vout) 
                             << 0x10U));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[4U] 
        = (((0xffffU & (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vout)) 
            | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vout) 
               >> 0x10U)) | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vout) 
                             << 0x10U));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[5U] 
        = (((0xffffU & (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vout)) 
            | ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vout) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vout) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vout)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vout) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vout)))))) 
                             << 0x10U));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[6U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vout) 
                                        << 0x10U) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vout)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vout) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vout)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vout) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vout)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vout) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vout))))) 
                                  >> 0x20U)) << 0x10U));
    dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[7U] 
        = (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vout) 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vout) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vout)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vout) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vout))))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[0U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[1U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[2U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[3U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[4U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[5U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[6U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout[7U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[8U][0U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[8U][1U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[8U][2U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[8U][3U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[8U][4U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[8U][5U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[8U][6U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[8U][7U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__yout[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_valid 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__resetacc 
        = (0xffU & (- (IData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.resetacc))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf_mon0 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf_mon1 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf_mon2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf_mon3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf[0U] 
        = (0x3ffU == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
           [0U]);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf[1U] 
        = (0x3ffU == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
           [1U]);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf[2U] 
        = (0x3ffU == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
           [2U]);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf[3U] 
        = (0x3ffU == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
           [3U]);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf[4U] 
        = (0x3ffU == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
           [4U]);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf[5U] 
        = (0x3ffU == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
           [5U]);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf[6U] 
        = (0x3ffU == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
           [6U]);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf[7U] 
        = (0x3ffU == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
           [7U]);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_input;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[0U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[1U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[2U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[3U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[4U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[5U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[6U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout[7U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[8U][0U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[8U][1U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[8U][2U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[8U][3U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[8U][4U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[8U][5U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[8U][6U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[8U][7U] 
        = dsp_sim_toplevel__DOT__dspmod__DOT____Vcellout__rdrvelemout1__xout[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__reset 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procreset;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[0U] 
        = ((0xffffffffULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [0U]) | ((QData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1.accx)) 
                     << 0x20U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[0U] 
        = ((0xffffffff00000000ULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [0U]) | (IData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1.accy)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__accvalid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1.stbout;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[1U] 
        = ((0xffffffffULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [1U]) | ((QData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1.accx)) 
                     << 0x20U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[1U] 
        = ((0xffffffff00000000ULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [1U]) | (IData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1.accy)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__accvalid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1.stbout;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[2U] 
        = ((0xffffffffULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [2U]) | ((QData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1.accx)) 
                     << 0x20U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[2U] 
        = ((0xffffffff00000000ULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [2U]) | (IData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1.accy)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__accvalid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1.stbout;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[3U] 
        = ((0xffffffffULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [3U]) | ((QData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__genblk1__DOT__rdlo0mixacc1.accx)) 
                     << 0x20U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[3U] 
        = ((0xffffffff00000000ULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [3U]) | (IData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__genblk1__DOT__rdlo0mixacc1.accy)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__accvalid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__genblk1__DOT__rdlo0mixacc1.stbout;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[4U] 
        = ((0xffffffffULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [4U]) | ((QData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__genblk1__DOT__rdlo0mixacc1.accx)) 
                     << 0x20U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[4U] 
        = ((0xffffffff00000000ULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [4U]) | (IData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__genblk1__DOT__rdlo0mixacc1.accy)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__accvalid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__genblk1__DOT__rdlo0mixacc1.stbout;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[5U] 
        = ((0xffffffffULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [5U]) | ((QData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__genblk1__DOT__rdlo0mixacc1.accx)) 
                     << 0x20U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[5U] 
        = ((0xffffffff00000000ULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [5U]) | (IData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__genblk1__DOT__rdlo0mixacc1.accy)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__accvalid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__genblk1__DOT__rdlo0mixacc1.stbout;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[6U] 
        = ((0xffffffffULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [6U]) | ((QData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__genblk1__DOT__rdlo0mixacc1.accx)) 
                     << 0x20U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[6U] 
        = ((0xffffffff00000000ULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [6U]) | (IData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__genblk1__DOT__rdlo0mixacc1.accy)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__accvalid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__genblk1__DOT__rdlo0mixacc1.stbout;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[7U] 
        = ((0xffffffffULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [7U]) | ((QData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__genblk1__DOT__rdlo0mixacc1.accx)) 
                     << 0x20U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[7U] 
        = ((0xffffffff00000000ULL & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
            [7U]) | (IData)((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__genblk1__DOT__rdlo0mixacc1.accy)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__accvalid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__genblk1__DOT__rdlo0mixacc1.stbout;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_dacmon[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.we;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_dacmon[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.addr;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[3U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[3U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[3U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[3U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[3U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.data[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[3U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.data[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[3U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.data[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[3U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.data[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_dacmon[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.we;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_dacmon[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.addr;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[2U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[2U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[2U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[2U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[2U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.data[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[2U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.data[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[2U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.data[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[2U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.data[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_dacmon[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.we;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_dacmon[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.addr;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[1U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[1U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[1U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[1U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[1U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.data[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[1U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.data[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[1U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.data[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[1U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.data[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_dacmon[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.we;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_dacmon[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.addr;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[0U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[0U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[0U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[0U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[0U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.data[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[0U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.data[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[0U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.data[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_dacmon[0U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.data[7U];
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_h5b979107_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    // Init
    CData/*7:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<8>/*255:0*/ __Vtemp_h542a9ec9__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.tcnt;
    __Vtemp_h542a9ec9__0[1U] = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 8U));
    __Vtemp_h542a9ec9__0[2U] = (((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 8U));
    __Vtemp_h542a9ec9__0[3U] = (((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 8U));
    __Vtemp_h542a9ec9__0[4U] = (((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 8U));
    __Vtemp_h542a9ec9__0[5U] = (((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 8U));
    __Vtemp_h542a9ec9__0[6U] = (((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 8U));
    __Vtemp_h542a9ec9__0[7U] = (((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 8U) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h542a9ec9__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h542a9ec9__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h542a9ec9__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h542a9ec9__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h542a9ec9__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_h542a9ec9__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_h542a9ec9__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xffU & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
                    >> 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
                = (0xffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_cnt) 
                            + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r2;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    // Init
    CData/*7:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<8>/*255:0*/ __Vtemp_h955e3218__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.tcnt;
    __Vtemp_h955e3218__0[1U] = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 8U));
    __Vtemp_h955e3218__0[2U] = (((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 8U));
    __Vtemp_h955e3218__0[3U] = (((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 8U));
    __Vtemp_h955e3218__0[4U] = (((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 8U));
    __Vtemp_h955e3218__0[5U] = (((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 8U));
    __Vtemp_h955e3218__0[6U] = (((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 8U));
    __Vtemp_h955e3218__0[7U] = (((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 8U) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h955e3218__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h955e3218__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h955e3218__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h955e3218__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h955e3218__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_h955e3218__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_h955e3218__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xffU & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
                    >> 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
                = (0xffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_cnt) 
                            + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r2;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    // Init
    CData/*7:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<8>/*255:0*/ __Vtemp_hdd62498d__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.tcnt;
    __Vtemp_hdd62498d__0[1U] = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 8U));
    __Vtemp_hdd62498d__0[2U] = (((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 8U));
    __Vtemp_hdd62498d__0[3U] = (((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 8U));
    __Vtemp_hdd62498d__0[4U] = (((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 8U));
    __Vtemp_hdd62498d__0[5U] = (((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 8U));
    __Vtemp_hdd62498d__0[6U] = (((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 8U));
    __Vtemp_hdd62498d__0[7U] = (((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 8U) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_hdd62498d__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_hdd62498d__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_hdd62498d__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_hdd62498d__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_hdd62498d__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_hdd62498d__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_hdd62498d__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xffU & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
                    >> 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
                = (0xffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_cnt) 
                            + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r2;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    // Init
    CData/*7:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<8>/*255:0*/ __Vtemp_h9e069481__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.tcnt;
    __Vtemp_h9e069481__0[1U] = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 8U));
    __Vtemp_h9e069481__0[2U] = (((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 8U));
    __Vtemp_h9e069481__0[3U] = (((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 8U));
    __Vtemp_h9e069481__0[4U] = (((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 8U));
    __Vtemp_h9e069481__0[5U] = (((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 8U));
    __Vtemp_h9e069481__0[6U] = (((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 8U));
    __Vtemp_h9e069481__0[7U] = (((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 8U) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h9e069481__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h9e069481__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h9e069481__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h9e069481__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h9e069481__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_h9e069481__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_h9e069481__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xffU & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
                    >> 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
                = (0xffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_cnt) 
                            + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r2;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
    // Init
    CData/*7:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<8>/*255:0*/ __Vtemp_h04a980c7__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.tcnt;
    __Vtemp_h04a980c7__0[1U] = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 8U));
    __Vtemp_h04a980c7__0[2U] = (((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 8U));
    __Vtemp_h04a980c7__0[3U] = (((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 8U));
    __Vtemp_h04a980c7__0[4U] = (((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 8U));
    __Vtemp_h04a980c7__0[5U] = (((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 8U));
    __Vtemp_h04a980c7__0[6U] = (((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 8U));
    __Vtemp_h04a980c7__0[7U] = (((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 8U) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h04a980c7__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h04a980c7__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h04a980c7__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h04a980c7__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h04a980c7__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_h04a980c7__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_h04a980c7__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xffU & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
                    >> 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
                = (0xffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_cnt) 
                            + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r2;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__19\n"); );
    // Init
    CData/*7:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<8>/*255:0*/ __Vtemp_h47eeeb80__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.tcnt;
    __Vtemp_h47eeeb80__0[1U] = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 8U));
    __Vtemp_h47eeeb80__0[2U] = (((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 8U));
    __Vtemp_h47eeeb80__0[3U] = (((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 8U));
    __Vtemp_h47eeeb80__0[4U] = (((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 8U));
    __Vtemp_h47eeeb80__0[5U] = (((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 8U));
    __Vtemp_h47eeeb80__0[6U] = (((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 8U));
    __Vtemp_h47eeeb80__0[7U] = (((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 8U) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h47eeeb80__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h47eeeb80__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h47eeeb80__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h47eeeb80__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h47eeeb80__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_h47eeeb80__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_h47eeeb80__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xffU & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
                    >> 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
                = (0xffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt) 
                            + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r2;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__20\n"); );
    // Init
    CData/*7:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<8>/*255:0*/ __Vtemp_h16979afa__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.tcnt;
    __Vtemp_h16979afa__0[1U] = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 8U));
    __Vtemp_h16979afa__0[2U] = (((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 8U));
    __Vtemp_h16979afa__0[3U] = (((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 8U));
    __Vtemp_h16979afa__0[4U] = (((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 8U));
    __Vtemp_h16979afa__0[5U] = (((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 8U));
    __Vtemp_h16979afa__0[6U] = (((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 8U));
    __Vtemp_h16979afa__0[7U] = (((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 8U) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h16979afa__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h16979afa__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h16979afa__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h16979afa__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h16979afa__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_h16979afa__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_h16979afa__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xffU & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
                    >> 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
                = (0xffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt) 
                            + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r2;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__21\n"); );
    // Init
    CData/*7:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<8>/*255:0*/ __Vtemp_hd5f230ba__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.tcnt;
    __Vtemp_hd5f230ba__0[1U] = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 8U));
    __Vtemp_hd5f230ba__0[2U] = (((Vtop__ConstPool__CONST_h5b979107_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 8U));
    __Vtemp_hd5f230ba__0[3U] = (((Vtop__ConstPool__CONST_h5b979107_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 8U));
    __Vtemp_hd5f230ba__0[4U] = (((Vtop__ConstPool__CONST_h5b979107_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 8U));
    __Vtemp_hd5f230ba__0[5U] = (((Vtop__ConstPool__CONST_h5b979107_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 8U));
    __Vtemp_hd5f230ba__0[6U] = (((Vtop__ConstPool__CONST_h5b979107_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 8U));
    __Vtemp_hd5f230ba__0[7U] = (((Vtop__ConstPool__CONST_h5b979107_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x18U) | ((Vtop__ConstPool__CONST_h5b979107_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_h5b979107_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 8U) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_hd5f230ba__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_hd5f230ba__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_hd5f230ba__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_hd5f230ba__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_hd5f230ba__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_hd5f230ba__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_hd5f230ba__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xffU & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
                    >> 8U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
                = (0xffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt) 
                            + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r2;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r;
}

extern const VlWide<11>/*351:0*/ Vtop__ConstPool__CONST_hec3cede4_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    // Init
    SData/*11:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<12>/*383:0*/ __Vtemp_h5d254564__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.tcnt;
    __Vtemp_h5d254564__0[1U] = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 0xcU));
    __Vtemp_h5d254564__0[2U] = (((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 0xcU));
    __Vtemp_h5d254564__0[3U] = (((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 0xcU));
    __Vtemp_h5d254564__0[4U] = (((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 0xcU));
    __Vtemp_h5d254564__0[5U] = (((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 0xcU));
    __Vtemp_h5d254564__0[6U] = (((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 0xcU));
    __Vtemp_h5d254564__0[7U] = (((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 0xcU));
    __Vtemp_h5d254564__0[8U] = (((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                              << 0xcU));
    __Vtemp_h5d254564__0[9U] = (((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                              << 0xcU));
    __Vtemp_h5d254564__0[0xaU] = (((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                    & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                   >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                                 & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                                << 0xcU));
    __Vtemp_h5d254564__0[0xbU] = ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                   & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                  >> 0x14U);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 0xcU) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h5d254564__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h5d254564__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h5d254564__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h5d254564__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h5d254564__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_h5d254564__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_h5d254564__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] 
        = __Vtemp_h5d254564__0[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] 
        = __Vtemp_h5d254564__0[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
        = __Vtemp_h5d254564__0[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
        = __Vtemp_h5d254564__0[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xfffU & ((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                      << 4U) | (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                >> 0x1cU)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
                = (0xfffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_cnt) 
                             + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__23\n"); );
    // Init
    SData/*11:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<12>/*383:0*/ __Vtemp_hfaced8a2__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.tcnt;
    __Vtemp_hfaced8a2__0[1U] = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 0xcU));
    __Vtemp_hfaced8a2__0[2U] = (((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 0xcU));
    __Vtemp_hfaced8a2__0[3U] = (((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 0xcU));
    __Vtemp_hfaced8a2__0[4U] = (((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 0xcU));
    __Vtemp_hfaced8a2__0[5U] = (((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 0xcU));
    __Vtemp_hfaced8a2__0[6U] = (((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 0xcU));
    __Vtemp_hfaced8a2__0[7U] = (((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 0xcU));
    __Vtemp_hfaced8a2__0[8U] = (((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                              << 0xcU));
    __Vtemp_hfaced8a2__0[9U] = (((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                              << 0xcU));
    __Vtemp_hfaced8a2__0[0xaU] = (((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                    & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                   >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                                 & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                                << 0xcU));
    __Vtemp_hfaced8a2__0[0xbU] = ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                   & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                  >> 0x14U);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 0xcU) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_hfaced8a2__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_hfaced8a2__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_hfaced8a2__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_hfaced8a2__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_hfaced8a2__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_hfaced8a2__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_hfaced8a2__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] 
        = __Vtemp_hfaced8a2__0[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] 
        = __Vtemp_hfaced8a2__0[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
        = __Vtemp_hfaced8a2__0[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
        = __Vtemp_hfaced8a2__0[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xfffU & ((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                      << 4U) | (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                >> 0x1cU)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
                = (0xfffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_cnt) 
                             + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__24\n"); );
    // Init
    SData/*11:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<12>/*383:0*/ __Vtemp_h58b2b7fa__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.tcnt;
    __Vtemp_h58b2b7fa__0[1U] = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 0xcU));
    __Vtemp_h58b2b7fa__0[2U] = (((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 0xcU));
    __Vtemp_h58b2b7fa__0[3U] = (((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 0xcU));
    __Vtemp_h58b2b7fa__0[4U] = (((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 0xcU));
    __Vtemp_h58b2b7fa__0[5U] = (((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 0xcU));
    __Vtemp_h58b2b7fa__0[6U] = (((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 0xcU));
    __Vtemp_h58b2b7fa__0[7U] = (((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 0xcU));
    __Vtemp_h58b2b7fa__0[8U] = (((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                              << 0xcU));
    __Vtemp_h58b2b7fa__0[9U] = (((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                              << 0xcU));
    __Vtemp_h58b2b7fa__0[0xaU] = (((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                    & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                   >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                                 & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                                << 0xcU));
    __Vtemp_h58b2b7fa__0[0xbU] = ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                   & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                  >> 0x14U);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 0xcU) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h58b2b7fa__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h58b2b7fa__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h58b2b7fa__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h58b2b7fa__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h58b2b7fa__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_h58b2b7fa__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_h58b2b7fa__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] 
        = __Vtemp_h58b2b7fa__0[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] 
        = __Vtemp_h58b2b7fa__0[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
        = __Vtemp_h58b2b7fa__0[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
        = __Vtemp_h58b2b7fa__0[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xfffU & ((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                      << 4U) | (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                >> 0x1cU)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
                = (0xfffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_cnt) 
                             + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__25(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__25\n"); );
    // Init
    SData/*11:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<12>/*383:0*/ __Vtemp_h276e96fb__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.tcnt;
    __Vtemp_h276e96fb__0[1U] = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 0xcU));
    __Vtemp_h276e96fb__0[2U] = (((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 0xcU));
    __Vtemp_h276e96fb__0[3U] = (((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 0xcU));
    __Vtemp_h276e96fb__0[4U] = (((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 0xcU));
    __Vtemp_h276e96fb__0[5U] = (((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 0xcU));
    __Vtemp_h276e96fb__0[6U] = (((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 0xcU));
    __Vtemp_h276e96fb__0[7U] = (((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 0xcU));
    __Vtemp_h276e96fb__0[8U] = (((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                              << 0xcU));
    __Vtemp_h276e96fb__0[9U] = (((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                              << 0xcU));
    __Vtemp_h276e96fb__0[0xaU] = (((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                    & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                   >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                                 & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                                << 0xcU));
    __Vtemp_h276e96fb__0[0xbU] = ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                   & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                  >> 0x14U);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 0xcU) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h276e96fb__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h276e96fb__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h276e96fb__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h276e96fb__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h276e96fb__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_h276e96fb__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_h276e96fb__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] 
        = __Vtemp_h276e96fb__0[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] 
        = __Vtemp_h276e96fb__0[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
        = __Vtemp_h276e96fb__0[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
        = __Vtemp_h276e96fb__0[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xfffU & ((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                      << 4U) | (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                >> 0x1cU)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
                = (0xfffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_cnt) 
                             + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__26\n"); );
    // Init
    SData/*11:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<12>/*383:0*/ __Vtemp_h2874130e__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.tcnt;
    __Vtemp_h2874130e__0[1U] = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 0xcU));
    __Vtemp_h2874130e__0[2U] = (((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 0xcU));
    __Vtemp_h2874130e__0[3U] = (((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 0xcU));
    __Vtemp_h2874130e__0[4U] = (((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 0xcU));
    __Vtemp_h2874130e__0[5U] = (((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 0xcU));
    __Vtemp_h2874130e__0[6U] = (((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 0xcU));
    __Vtemp_h2874130e__0[7U] = (((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 0xcU));
    __Vtemp_h2874130e__0[8U] = (((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                              << 0xcU));
    __Vtemp_h2874130e__0[9U] = (((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                              << 0xcU));
    __Vtemp_h2874130e__0[0xaU] = (((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                    & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                   >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                                 & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                                << 0xcU));
    __Vtemp_h2874130e__0[0xbU] = ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                   & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                  >> 0x14U);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 0xcU) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h2874130e__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h2874130e__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h2874130e__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h2874130e__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h2874130e__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_h2874130e__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_h2874130e__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] 
        = __Vtemp_h2874130e__0[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] 
        = __Vtemp_h2874130e__0[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
        = __Vtemp_h2874130e__0[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
        = __Vtemp_h2874130e__0[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xfffU & ((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                      << 4U) | (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                >> 0x1cU)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
                = (0xfffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_cnt) 
                             + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__27\n"); );
    // Init
    SData/*11:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<12>/*383:0*/ __Vtemp_h0715df82__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.tcnt;
    __Vtemp_h0715df82__0[1U] = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 0xcU));
    __Vtemp_h0715df82__0[2U] = (((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 0xcU));
    __Vtemp_h0715df82__0[3U] = (((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 0xcU));
    __Vtemp_h0715df82__0[4U] = (((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 0xcU));
    __Vtemp_h0715df82__0[5U] = (((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 0xcU));
    __Vtemp_h0715df82__0[6U] = (((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 0xcU));
    __Vtemp_h0715df82__0[7U] = (((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 0xcU));
    __Vtemp_h0715df82__0[8U] = (((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                              << 0xcU));
    __Vtemp_h0715df82__0[9U] = (((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                              << 0xcU));
    __Vtemp_h0715df82__0[0xaU] = (((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                    & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                   >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                                 & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                                << 0xcU));
    __Vtemp_h0715df82__0[0xbU] = ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                   & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                  >> 0x14U);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 0xcU) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h0715df82__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h0715df82__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h0715df82__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h0715df82__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h0715df82__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_h0715df82__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_h0715df82__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] 
        = __Vtemp_h0715df82__0[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] 
        = __Vtemp_h0715df82__0[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
        = __Vtemp_h0715df82__0[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
        = __Vtemp_h0715df82__0[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xfffU & ((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                      << 4U) | (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                >> 0x1cU)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
                = (0xfffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt) 
                             + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__28\n"); );
    // Init
    SData/*11:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<12>/*383:0*/ __Vtemp_h08de4cf9__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.tcnt;
    __Vtemp_h08de4cf9__0[1U] = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 0xcU));
    __Vtemp_h08de4cf9__0[2U] = (((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 0xcU));
    __Vtemp_h08de4cf9__0[3U] = (((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 0xcU));
    __Vtemp_h08de4cf9__0[4U] = (((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 0xcU));
    __Vtemp_h08de4cf9__0[5U] = (((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 0xcU));
    __Vtemp_h08de4cf9__0[6U] = (((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 0xcU));
    __Vtemp_h08de4cf9__0[7U] = (((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 0xcU));
    __Vtemp_h08de4cf9__0[8U] = (((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                              << 0xcU));
    __Vtemp_h08de4cf9__0[9U] = (((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                              << 0xcU));
    __Vtemp_h08de4cf9__0[0xaU] = (((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                    & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                   >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                                 & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                                << 0xcU));
    __Vtemp_h08de4cf9__0[0xbU] = ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                   & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                  >> 0x14U);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 0xcU) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h08de4cf9__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h08de4cf9__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h08de4cf9__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h08de4cf9__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h08de4cf9__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_h08de4cf9__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_h08de4cf9__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] 
        = __Vtemp_h08de4cf9__0[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] 
        = __Vtemp_h08de4cf9__0[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
        = __Vtemp_h08de4cf9__0[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
        = __Vtemp_h08de4cf9__0[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xfffU & ((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                      << 4U) | (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                >> 0x1cU)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
                = (0xfffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt) 
                             + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
}
