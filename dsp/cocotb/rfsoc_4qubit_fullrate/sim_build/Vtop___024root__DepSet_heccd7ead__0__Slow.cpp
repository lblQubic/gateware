// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procreset_d = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__lastshotdone = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__done = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nshot = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procdone_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nobusy_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextshotcnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__currentshotcnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb1 = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb2 = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__resetacc = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__acqpztifwire__BRA__0__KET____DOT__stb_start_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__acqpztifwire__BRA__1__KET____DOT__stb_start_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__0__KET____DOT__stb_start_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__1__KET____DOT__stb_start_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__2__KET____DOT__stb_start_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__3__KET____DOT__stb_start_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__state = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__shotadd = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gsr = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__busy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__busy_sr = 0ULL;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__dummybusy = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] = 0U;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("gensrc/dsp_sim_toplevel.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge dsp_sim_toplevel.dspif.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[0].clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[0].clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[1].clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[1].clk)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[2].clk)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[2].clk)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[3].clk)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[3].clk)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[4].clk)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[4].clk)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[5].clk)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[5].clk)\n");
    }
    if ((0x2000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[6].clk)\n");
    }
    if ((0x4000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[6].clk)\n");
    }
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[7].clk)\n");
    }
    if ((0x10000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[7].clk)\n");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(posedge clk)\n");
    }
    if ((0x40000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[0].clk)\n");
    }
    if ((0x80000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[1].clk)\n");
    }
    if ((0x100000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[2].clk)\n");
    }
    if ((0x200000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[3].clk)\n");
    }
    if ((0x400000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[4].clk)\n");
    }
    if ((0x800000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[5].clk)\n");
    }
    if ((0x1000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[6].clk)\n");
    }
    if ((0x2000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[7].clk)\n");
    }
    if ((0x4000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @(posedge dsp_sim_toplevel.dspmod.acqpztif[1].clk)\n");
    }
    if ((0x8000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @([changed] dsp_sim_toplevel.dspmod.acqpztif[1].state)\n");
    }
    if ((0x10000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @(posedge dsp_sim_toplevel.dspmod.acqpztif[0].clk)\n");
    }
    if ((0x20000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @([changed] dsp_sim_toplevel.dspmod.acqpztif[0].state)\n");
    }
    if ((0x40000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @(posedge dsp_sim_toplevel.dspmod.dacmonpztif[4].clk)\n");
    }
    if ((0x80000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @([changed] dsp_sim_toplevel.dspmod.dacmonpztif[4].state)\n");
    }
    if ((0x100000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @(posedge dsp_sim_toplevel.dspmod.dacmonpztif[3].clk)\n");
    }
    if ((0x200000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 33 is active: @([changed] dsp_sim_toplevel.dspmod.dacmonpztif[3].state)\n");
    }
    if ((0x400000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 34 is active: @(posedge dsp_sim_toplevel.dspmod.dacmonpztif[2].clk)\n");
    }
    if ((0x800000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 35 is active: @([changed] dsp_sim_toplevel.dspmod.dacmonpztif[2].state)\n");
    }
    if ((0x1000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 36 is active: @(posedge dsp_sim_toplevel.dspmod.dacmonpztif[1].clk)\n");
    }
    if ((0x2000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 37 is active: @([changed] dsp_sim_toplevel.dspmod.dacmonpztif[1].state)\n");
    }
    if ((0x4000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 38 is active: @(posedge dsp_sim_toplevel.dspmod.dacmonpztif[0].clk)\n");
    }
    if ((0x8000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 39 is active: @([changed] dsp_sim_toplevel.dspmod.dacmonpztif[0].state)\n");
    }
    if ((0x10000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 40 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[0].proc_core.clk)\n");
    }
    if ((0x20000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 41 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[1].proc_core.clk)\n");
    }
    if ((0x40000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 42 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[2].proc_core.clk)\n");
    }
    if ((0x80000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 43 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[3].proc_core.clk)\n");
    }
    if ((0x100000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 44 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[4].proc_core.clk)\n");
    }
    if ((0x200000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 45 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[5].proc_core.clk)\n");
    }
    if ((0x400000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 46 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[6].proc_core.clk)\n");
    }
    if ((0x800000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 47 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[7].proc_core.clk)\n");
    }
    if ((0x1000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 48 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[0].clk)\n");
    }
    if ((0x2000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 49 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[1].clk)\n");
    }
    if ((0x4000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 50 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[2].clk)\n");
    }
    if ((0x8000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 51 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[3].clk)\n");
    }
    if ((0x10000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 52 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[4].clk)\n");
    }
    if ((0x20000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 53 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[5].clk)\n");
    }
    if ((0x40000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 54 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[6].clk)\n");
    }
    if ((0x80000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 55 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[7].clk)\n");
    }
    if ((0x100000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 56 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[0].qdrvelemconn.ammod.clk)\n");
    }
    if ((0x200000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 57 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[0].rdrvelemconn.ammod.clk)\n");
    }
    if ((0x400000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 58 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[1].qdrvelemconn.ammod.clk)\n");
    }
    if ((0x800000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 59 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[1].rdrvelemconn.ammod.clk)\n");
    }
    if ((0x1000000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 60 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[2].qdrvelemconn.ammod.clk)\n");
    }
    if ((0x2000000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 61 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[2].rdrvelemconn.ammod.clk)\n");
    }
    if ((0x4000000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 62 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[3].qdrvelemconn.ammod.clk)\n");
    }
    if ((0x8000000000000000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 63 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[3].rdrvelemconn.ammod.clk)\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 64 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[4].qdrvelemconn.ammod.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 65 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[4].rdrvelemconn.ammod.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 66 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[5].qdrvelemconn.ammod.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 67 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[5].rdrvelemconn.ammod.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 68 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[6].qdrvelemconn.ammod.clk)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 69 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[6].rdrvelemconn.ammod.clk)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 70 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[7].qdrvelemconn.ammod.clk)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(1U))) {
        VL_DBG_MSGF("         'act' region trigger index 71 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[7].rdrvelemconn.ammod.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge dsp_sim_toplevel.dspif.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[0].clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[0].clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[1].clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[1].clk)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[2].clk)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[2].clk)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[3].clk)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[3].clk)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[4].clk)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[4].clk)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[5].clk)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[5].clk)\n");
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[6].clk)\n");
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[6].clk)\n");
    }
    if ((0x8000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(posedge dsp_sim_toplevel.dspmod.qdrvelem[7].clk)\n");
    }
    if ((0x10000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(posedge dsp_sim_toplevel.dspmod.rdrvelem[7].clk)\n");
    }
    if ((0x20000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(posedge clk)\n");
    }
    if ((0x40000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[0].clk)\n");
    }
    if ((0x80000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[1].clk)\n");
    }
    if ((0x100000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[2].clk)\n");
    }
    if ((0x200000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[3].clk)\n");
    }
    if ((0x400000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[4].clk)\n");
    }
    if ((0x800000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[5].clk)\n");
    }
    if ((0x1000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[6].clk)\n");
    }
    if ((0x2000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @(posedge dsp_sim_toplevel.dspmod.sdif[7].clk)\n");
    }
    if ((0x4000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @(posedge dsp_sim_toplevel.dspmod.acqpztif[1].clk)\n");
    }
    if ((0x8000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @([changed] dsp_sim_toplevel.dspmod.acqpztif[1].state)\n");
    }
    if ((0x10000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @(posedge dsp_sim_toplevel.dspmod.acqpztif[0].clk)\n");
    }
    if ((0x20000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @([changed] dsp_sim_toplevel.dspmod.acqpztif[0].state)\n");
    }
    if ((0x40000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @(posedge dsp_sim_toplevel.dspmod.dacmonpztif[4].clk)\n");
    }
    if ((0x80000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @([changed] dsp_sim_toplevel.dspmod.dacmonpztif[4].state)\n");
    }
    if ((0x100000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @(posedge dsp_sim_toplevel.dspmod.dacmonpztif[3].clk)\n");
    }
    if ((0x200000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 33 is active: @([changed] dsp_sim_toplevel.dspmod.dacmonpztif[3].state)\n");
    }
    if ((0x400000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 34 is active: @(posedge dsp_sim_toplevel.dspmod.dacmonpztif[2].clk)\n");
    }
    if ((0x800000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 35 is active: @([changed] dsp_sim_toplevel.dspmod.dacmonpztif[2].state)\n");
    }
    if ((0x1000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 36 is active: @(posedge dsp_sim_toplevel.dspmod.dacmonpztif[1].clk)\n");
    }
    if ((0x2000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 37 is active: @([changed] dsp_sim_toplevel.dspmod.dacmonpztif[1].state)\n");
    }
    if ((0x4000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 38 is active: @(posedge dsp_sim_toplevel.dspmod.dacmonpztif[0].clk)\n");
    }
    if ((0x8000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 39 is active: @([changed] dsp_sim_toplevel.dspmod.dacmonpztif[0].state)\n");
    }
    if ((0x10000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 40 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[0].proc_core.clk)\n");
    }
    if ((0x20000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 41 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[1].proc_core.clk)\n");
    }
    if ((0x40000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 42 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[2].proc_core.clk)\n");
    }
    if ((0x80000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 43 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[3].proc_core.clk)\n");
    }
    if ((0x100000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 44 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[4].proc_core.clk)\n");
    }
    if ((0x200000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 45 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[5].proc_core.clk)\n");
    }
    if ((0x400000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 46 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[6].proc_core.clk)\n");
    }
    if ((0x800000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 47 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[7].proc_core.clk)\n");
    }
    if ((0x1000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 48 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[0].clk)\n");
    }
    if ((0x2000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 49 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[1].clk)\n");
    }
    if ((0x4000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 50 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[2].clk)\n");
    }
    if ((0x8000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 51 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[3].clk)\n");
    }
    if ((0x10000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 52 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[4].clk)\n");
    }
    if ((0x20000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 53 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[5].clk)\n");
    }
    if ((0x40000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 54 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[6].clk)\n");
    }
    if ((0x80000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 55 is active: @(posedge dsp_sim_toplevel.dspmod.rdloelem[7].clk)\n");
    }
    if ((0x100000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 56 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[0].qdrvelemconn.ammod.clk)\n");
    }
    if ((0x200000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 57 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[0].rdrvelemconn.ammod.clk)\n");
    }
    if ((0x400000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 58 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[1].qdrvelemconn.ammod.clk)\n");
    }
    if ((0x800000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 59 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[1].rdrvelemconn.ammod.clk)\n");
    }
    if ((0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 60 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[2].qdrvelemconn.ammod.clk)\n");
    }
    if ((0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 61 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[2].rdrvelemconn.ammod.clk)\n");
    }
    if ((0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 62 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[3].qdrvelemconn.ammod.clk)\n");
    }
    if ((0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 63 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[3].rdrvelemconn.ammod.clk)\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 64 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[4].qdrvelemconn.ammod.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 65 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[4].rdrvelemconn.ammod.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 66 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[5].qdrvelemconn.ammod.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 67 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[5].rdrvelemconn.ammod.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 68 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[6].qdrvelemconn.ammod.clk)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 69 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[6].rdrvelemconn.ammod.clk)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 70 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[7].qdrvelemconn.ammod.clk)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(1U))) {
        VL_DBG_MSGF("         'nba' region trigger index 71 is active: @(posedge dsp_sim_toplevel.dspmod.procinst[7].rdrvelemconn.ammod.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->stb_start = VL_RAND_RESET_I(1);
    vlSelf->nshot = VL_RAND_RESET_I(32);
    vlSelf->mem_write_data = VL_RAND_RESET_I(32);
    vlSelf->mem_write_addr = VL_RAND_RESET_I(16);
    vlSelf->proc_write_sel = VL_RAND_RESET_I(3);
    vlSelf->mem_write_sel = VL_RAND_RESET_I(3);
    vlSelf->mem_write_en = VL_RAND_RESET_I(1);
    vlSelf->buf_read_addr = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->adc[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dac[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->acc_read_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->acq_read_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->dsp_sim_toplevel__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__stb_start = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__nshot = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__mem_write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__mem_write_addr = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__proc_write_sel = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__mem_write_sel = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__mem_write_en = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__buf_read_addr = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__adc[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dac[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__acc_read_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__acq_read_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_qdrv_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_qdrv_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_rdrv_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_rdrv_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_rdlo_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_rdlo_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_qdrv_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_qdrv_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_rdrv_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_rdrv_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_rdlo_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_rdlo_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_qdrv_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_qdrv_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_rdrv_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_rdrv_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_rdlo_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_rdlo_wen = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procreset = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procreset_d = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__lastshotdone = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nshot = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__stbprocend = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procdone = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procdone_r = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nobusy = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nobusy_r = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextshotcnt = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__currentshotcnt = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__update_lastshotdone = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__lastshotdone_true = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_input = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_valid = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__state_dbg[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate_dbg[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin2[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin2[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout2__yin[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout2__xin[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__adc[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb1 = VL_RAND_RESET_Q(64);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb2 = VL_RAND_RESET_Q(64);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__resetacc = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_sdbuf[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__locklast_sdbuf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_sdbuf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_idle[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_done[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_prob[__Vi0] = VL_RAND_RESET_I(18);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_state[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac[__Vi0]);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__state = 0;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate = 0;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__shotadd = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__accvalid = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__accvalid = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__accvalid = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__accvalid = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__accvalid = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__accvalid = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__accvalid = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__accvalid = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__acqpztifwire__BRA__0__KET____DOT__stb_start_r = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__acqpztifwire__BRA__1__KET____DOT__stb_start_r = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__0__KET____DOT__stb_start_r = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__1__KET____DOT__stb_start_r = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__2__KET____DOT__stb_start_r = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__3__KET____DOT__stb_start_r = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xin[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yin[__Vi0]);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__l1__BRA__2__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__xin[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__yin[__Vi0]);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__xout);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__yout);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_valid = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_arm_ready = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_read_addr[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_reg = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(240, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(360, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(240, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(360, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(240, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(360, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(240, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(360, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(240, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(360, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(240, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(360, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(240, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(360, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(8);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(240, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata_r3);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata_r2);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(360, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix);
    VL_RAND_RESET_W(256, vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__write_addr = VL_RAND_RESET_I(13);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__read_addr = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(128, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__write_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_addr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__write_addr = VL_RAND_RESET_I(13);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__write_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__read_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__write_addr = VL_RAND_RESET_I(13);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__write_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__read_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__write_addr = VL_RAND_RESET_I(11);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__write_data = VL_RAND_RESET_Q(64);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__write_addr = VL_RAND_RESET_I(10);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__read_addr = VL_RAND_RESET_I(10);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__read_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__write_addr = VL_RAND_RESET_I(13);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__read_addr = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(128, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__write_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_addr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__write_addr = VL_RAND_RESET_I(13);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__write_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__read_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__write_addr = VL_RAND_RESET_I(13);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__write_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__read_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__write_addr = VL_RAND_RESET_I(11);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__write_data = VL_RAND_RESET_Q(64);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__write_addr = VL_RAND_RESET_I(10);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__read_addr = VL_RAND_RESET_I(10);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__read_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__write_addr = VL_RAND_RESET_I(13);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__read_addr = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(128, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__write_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_addr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__write_addr = VL_RAND_RESET_I(13);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__write_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__read_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__write_addr = VL_RAND_RESET_I(13);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__write_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__read_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__write_addr = VL_RAND_RESET_I(11);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__write_data = VL_RAND_RESET_Q(64);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__write_addr = VL_RAND_RESET_I(10);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__read_addr = VL_RAND_RESET_I(10);
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__read_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__write_data = VL_RAND_RESET_Q(64);
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__write_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__read_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__read_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__write_data = VL_RAND_RESET_Q(64);
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__write_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__read_addr = VL_RAND_RESET_I(12);
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__read_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v0 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v1 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v2 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v3 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v4 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v5 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v6 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf__v7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf__v7 = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspif__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__0__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__1__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__2__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__3__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__4__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__5__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__6__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__sdif__BRA__7__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____state__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET____state__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____state__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____state__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET____state__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET____state__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET____state__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__proc_core__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__proc_core__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET____clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
