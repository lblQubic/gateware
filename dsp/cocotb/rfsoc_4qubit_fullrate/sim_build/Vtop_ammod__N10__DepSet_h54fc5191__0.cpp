// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_ammod__N10.h"

VL_INLINE_OPT void Vtop_ammod__N10___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__0(Vtop_ammod__N10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__0\n"); );
    // Body
    vlSelf->cordicg__DOT__xin = vlSelf->ampx_d2;
    vlSelf->cordicg__DOT__phasein = vlSelf->phaseinit;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__0__KET____DOT__cospi;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__0__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__0__KET____DOT__envxi;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__0__KET____DOT__envyi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__1__KET____DOT__cospi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__1__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__1__KET____DOT__envxi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__1__KET____DOT__envyi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__2__KET____DOT__cospi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__2__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__2__KET____DOT__envxi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__2__KET____DOT__envyi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__3__KET____DOT__cospi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__3__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__3__KET____DOT__envxi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__3__KET____DOT__envyi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__4__KET____DOT__cospi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__4__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__4__KET____DOT__envxi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__4__KET____DOT__envyi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__5__KET____DOT__cospi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__5__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__5__KET____DOT__envxi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__5__KET____DOT__envyi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__6__KET____DOT__cospi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__6__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__6__KET____DOT__envxi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__6__KET____DOT__envyi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__7__KET____DOT__cospi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__7__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__7__KET____DOT__envxi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__7__KET____DOT__envyi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__8__KET____DOT__cospi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__8__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__8__KET____DOT__envxi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__8__KET____DOT__envyi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__9__KET____DOT__cospi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__9__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__9__KET____DOT__envxi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__9__KET____DOT__envyi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__10__KET____DOT__cospi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__10__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__10__KET____DOT__envxi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__10__KET____DOT__envyi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__11__KET____DOT__cospi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__11__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__11__KET____DOT__envxi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__11__KET____DOT__envyi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__12__KET____DOT__cospi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__12__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__12__KET____DOT__envxi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__12__KET____DOT__envyi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__13__KET____DOT__cospi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__13__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__13__KET____DOT__envxi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__13__KET____DOT__envyi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__14__KET____DOT__cospi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__14__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__14__KET____DOT__envxi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__14__KET____DOT__envyi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__15__KET____DOT__cospi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__15__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__15__KET____DOT__envxi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__15__KET____DOT__envyi;
    vlSelf->cordicg__DOT__error = vlSelf->cordicg__DOT__errorr;
    vlSelf->cordicg__DOT__xin_1 = vlSelf->cordicg__DOT__genblk2__DOT__xin_d;
    vlSelf->cordicg__DOT__yin_1 = vlSelf->cordicg__DOT__genblk2__DOT__yin_d;
    vlSelf->cordicg__DOT__shiftpi = (1U & VL_REDXOR_32(
                                                       (0x18000U 
                                                        & vlSelf->cordicg__DOT__genblk2__DOT__phasein_d)));
    vlSelf->cordicg__DOT__phasein_1 = vlSelf->cordicg__DOT__genblk2__DOT__phasein_d;
    vlSelf->cordicg__DOT__xg = vlSelf->cordicg__DOT__x
        [0xfU];
    vlSelf->cordicg__DOT__yg = vlSelf->cordicg__DOT__y
        [0xfU];
    vlSelf->cordicg__DOT__zg = vlSelf->cordicg__DOT__z
        [0xfU];
    vlSelf->cordicg__DOT__stage__BRA__0__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__1__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[1U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__2__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[2U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__3__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[3U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__4__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[4U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__5__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[5U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__6__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[6U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__7__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[7U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__8__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[8U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__9__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[9U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__10__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xaU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__11__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xbU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__12__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xcU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__13__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xdU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__14__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xeU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__15__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xfU] >> 0x10U));
    vlSelf->phtime__DOT__phasetime_w = (0x3fffffffffffffULL 
                                        & ((QData)((IData)(vlSelf->phtime__DOT__freq_r)) 
                                           * (QData)((IData)(vlSelf->phtime__DOT__tcnt_r))));
    vlSelf->cordicg__DOT__gin = vlSelf->gphaseinit;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zi_int;
    vlSelf->phasetime = vlSelf->phtime__DOT__phasetime_r3;
    vlSelf->pinidelay__DOT__dout = (0x1ffffU & ((vlSelf->pinidelay__DOT__usual__DOT__shifter[5U] 
                                                 << 7U) 
                                                | (vlSelf->pinidelay__DOT__usual__DOT__shifter[4U] 
                                                   >> 0x19U)));
    vlSelf->gphtime = (1U & ((IData)(vlSelf->phtime__DOT__gatesr) 
                             >> 4U));
    vlSelf->ampxdelay__DOT__dout = (vlSelf->ampxdelay__DOT__usual__DOT__shifter[4U] 
                                    >> 0x10U);
    vlSelf->multidelay__DOT__dout = (1U & ((IData)(vlSelf->multidelay__DOT__usual__DOT__shifter) 
                                           >> 0xcU));
    vlSelf->freqcossinpdelay__DOT__dout[0U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x190U];
    vlSelf->freqcossinpdelay__DOT__dout[1U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x191U];
    vlSelf->freqcossinpdelay__DOT__dout[2U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x192U];
    vlSelf->freqcossinpdelay__DOT__dout[3U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x193U];
    vlSelf->freqcossinpdelay__DOT__dout[4U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x194U];
    vlSelf->freqcossinpdelay__DOT__dout[5U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x195U];
    vlSelf->freqcossinpdelay__DOT__dout[6U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x196U];
    vlSelf->freqcossinpdelay__DOT__dout[7U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x197U];
    vlSelf->freqcossinpdelay__DOT__dout[8U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x198U];
    vlSelf->freqcossinpdelay__DOT__dout[9U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x199U];
    vlSelf->freqcossinpdelay__DOT__dout[0xaU] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19aU];
    vlSelf->freqcossinpdelay__DOT__dout[0xbU] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19bU];
    vlSelf->freqcossinpdelay__DOT__dout[0xcU] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19cU];
    vlSelf->freqcossinpdelay__DOT__dout[0xdU] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19dU];
    vlSelf->freqcossinpdelay__DOT__dout[0xeU] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19eU];
    vlSelf->freqcossinpdelay__DOT__dout[0xfU] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19fU];
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int;
    vlSelf->cordicg__DOT__phaseout = vlSelf->cordicg__DOT__phaseout_r;
    vlSelf->cos_w = vlSelf->cordicg__DOT__xout_r;
    vlSelf->sin_w = vlSelf->cordicg__DOT__yout_r;
    vlSelf->cordicg__DOT__reg_delay__DOT__dout = (1U 
                                                  & (vlSelf->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                                                     >> 0x13U));
    vlSelf->gateout = vlSelf->gateout_r;
    vlSelf->cosp[1U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x191U] 
                        >> 0x10U);
    vlSelf->cosp[2U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x192U] 
                        >> 0x10U);
    vlSelf->cosp[3U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x193U] 
                        >> 0x10U);
    vlSelf->cosp[4U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x194U] 
                        >> 0x10U);
    vlSelf->cosp[5U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x195U] 
                        >> 0x10U);
    vlSelf->cosp[6U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x196U] 
                        >> 0x10U);
    vlSelf->cosp[7U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x197U] 
                        >> 0x10U);
    vlSelf->cosp[8U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x198U] 
                        >> 0x10U);
    vlSelf->cosp[9U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x199U] 
                        >> 0x10U);
    vlSelf->cosp[0xaU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19aU] 
                          >> 0x10U);
    vlSelf->cosp[0xbU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19bU] 
                          >> 0x10U);
    vlSelf->cosp[0xcU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19cU] 
                          >> 0x10U);
    vlSelf->cosp[0xdU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19dU] 
                          >> 0x10U);
    vlSelf->cosp[0xeU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19eU] 
                          >> 0x10U);
    vlSelf->cosp[0xfU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19fU] 
                          >> 0x10U);
    vlSelf->sinp[1U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x191U]);
    vlSelf->sinp[2U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x192U]);
    vlSelf->sinp[3U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x193U]);
    vlSelf->sinp[4U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x194U]);
    vlSelf->sinp[5U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x195U]);
    vlSelf->sinp[6U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x196U]);
    vlSelf->sinp[7U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x197U]);
    vlSelf->sinp[8U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x198U]);
    vlSelf->sinp[9U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x199U]);
    vlSelf->sinp[0xaU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19aU]);
    vlSelf->sinp[0xbU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19bU]);
    vlSelf->sinp[0xcU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19cU]);
    vlSelf->sinp[0xdU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19dU]);
    vlSelf->sinp[0xeU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19eU]);
    vlSelf->sinp[0xfU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19fU]);
    vlSelf->multix[0U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[1U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[2U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[3U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[4U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[5U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[6U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[7U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[8U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[9U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[0xaU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->multix[0xbU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->multix[0xcU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->multix[0xdU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->multix[0xeU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->multix[0xfU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->multiy[0U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[1U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[2U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[3U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[4U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[5U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[6U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[7U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[8U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[9U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[0xaU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->multiy[0xbU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->multiy[0xcU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->multiy[0xdU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->multiy[0xeU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->multiy[0xfU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->cordicg__DOT__plusall[0U] = (1U & (vlSelf->cordicg__DOT__z
                                               [0U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[1U] = (1U & (vlSelf->cordicg__DOT__z
                                               [1U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[2U] = (1U & (vlSelf->cordicg__DOT__z
                                               [2U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[3U] = (1U & (vlSelf->cordicg__DOT__z
                                               [3U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[4U] = (1U & (vlSelf->cordicg__DOT__z
                                               [4U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[5U] = (1U & (vlSelf->cordicg__DOT__z
                                               [5U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[6U] = (1U & (vlSelf->cordicg__DOT__z
                                               [6U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[7U] = (1U & (vlSelf->cordicg__DOT__z
                                               [7U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[8U] = (1U & (vlSelf->cordicg__DOT__z
                                               [8U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[9U] = (1U & (vlSelf->cordicg__DOT__z
                                               [9U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xaU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xaU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xbU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xbU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xcU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xcU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xdU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xdU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xeU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xeU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xfU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xfU] 
                                                 >> 0x10U));
    vlSelf->multiy16x16[0U] = vlSelf->multiy16x16_r[0U];
    vlSelf->multiy16x16[1U] = vlSelf->multiy16x16_r[1U];
    vlSelf->multiy16x16[2U] = vlSelf->multiy16x16_r[2U];
    vlSelf->multiy16x16[3U] = vlSelf->multiy16x16_r[3U];
    vlSelf->multiy16x16[4U] = vlSelf->multiy16x16_r[4U];
    vlSelf->multiy16x16[5U] = vlSelf->multiy16x16_r[5U];
    vlSelf->multiy16x16[6U] = vlSelf->multiy16x16_r[6U];
    vlSelf->multiy16x16[7U] = vlSelf->multiy16x16_r[7U];
    vlSelf->multix16x16[0U] = vlSelf->multix16x16_r[0U];
    vlSelf->multix16x16[1U] = vlSelf->multix16x16_r[1U];
    vlSelf->multix16x16[2U] = vlSelf->multix16x16_r[2U];
    vlSelf->multix16x16[3U] = vlSelf->multix16x16_r[3U];
    vlSelf->multix16x16[4U] = vlSelf->multix16x16_r[4U];
    vlSelf->multix16x16[5U] = vlSelf->multix16x16_r[5U];
    vlSelf->multix16x16[6U] = vlSelf->multix16x16_r[6U];
    vlSelf->multix16x16[7U] = vlSelf->multix16x16_r[7U];
    vlSelf->ampxdelay__DOT__din = vlSelf->ampx;
    vlSelf->pinidelay__DOT__din = vlSelf->pini;
    vlSelf->phtime__DOT__tcnt = vlSelf->tcnt;
    vlSelf->phtime__DOT__gatein = vlSelf->gatein;
    vlSelf->freqcossinpdelay__DOT__din[0U] = vlSelf->freqcossinp32x16[0U];
    vlSelf->freqcossinpdelay__DOT__din[1U] = vlSelf->freqcossinp32x16[1U];
    vlSelf->freqcossinpdelay__DOT__din[2U] = vlSelf->freqcossinp32x16[2U];
    vlSelf->freqcossinpdelay__DOT__din[3U] = vlSelf->freqcossinp32x16[3U];
    vlSelf->freqcossinpdelay__DOT__din[4U] = vlSelf->freqcossinp32x16[4U];
    vlSelf->freqcossinpdelay__DOT__din[5U] = vlSelf->freqcossinp32x16[5U];
    vlSelf->freqcossinpdelay__DOT__din[6U] = vlSelf->freqcossinp32x16[6U];
    vlSelf->freqcossinpdelay__DOT__din[7U] = vlSelf->freqcossinp32x16[7U];
    vlSelf->freqcossinpdelay__DOT__din[8U] = vlSelf->freqcossinp32x16[8U];
    vlSelf->freqcossinpdelay__DOT__din[9U] = vlSelf->freqcossinp32x16[9U];
    vlSelf->freqcossinpdelay__DOT__din[0xaU] = vlSelf->freqcossinp32x16[0xaU];
    vlSelf->freqcossinpdelay__DOT__din[0xbU] = vlSelf->freqcossinp32x16[0xbU];
    vlSelf->freqcossinpdelay__DOT__din[0xcU] = vlSelf->freqcossinp32x16[0xcU];
    vlSelf->freqcossinpdelay__DOT__din[0xdU] = vlSelf->freqcossinp32x16[0xdU];
    vlSelf->freqcossinpdelay__DOT__din[0xeU] = vlSelf->freqcossinp32x16[0xeU];
    vlSelf->freqcossinpdelay__DOT__din[0xfU] = vlSelf->freqcossinp32x16[0xfU];
    vlSelf->freq32 = vlSelf->freqcossinp32x16[0U];
    vlSelf->freq = (vlSelf->freqcossinp32x16[0U] >> 5U);
    vlSelf->envx[0U] = (vlSelf->envxy32x16[0U] >> 0x10U);
    vlSelf->envx[1U] = (vlSelf->envxy32x16[1U] >> 0x10U);
    vlSelf->envx[2U] = (vlSelf->envxy32x16[2U] >> 0x10U);
    vlSelf->envx[3U] = (vlSelf->envxy32x16[3U] >> 0x10U);
    vlSelf->envx[4U] = (vlSelf->envxy32x16[4U] >> 0x10U);
    vlSelf->envx[5U] = (vlSelf->envxy32x16[5U] >> 0x10U);
    vlSelf->envx[6U] = (vlSelf->envxy32x16[6U] >> 0x10U);
    vlSelf->envx[7U] = (vlSelf->envxy32x16[7U] >> 0x10U);
    vlSelf->envx[8U] = (vlSelf->envxy32x16[8U] >> 0x10U);
    vlSelf->envx[9U] = (vlSelf->envxy32x16[9U] >> 0x10U);
    vlSelf->envx[0xaU] = (vlSelf->envxy32x16[0xaU] 
                          >> 0x10U);
    vlSelf->envx[0xbU] = (vlSelf->envxy32x16[0xbU] 
                          >> 0x10U);
    vlSelf->envx[0xcU] = (vlSelf->envxy32x16[0xcU] 
                          >> 0x10U);
    vlSelf->envx[0xdU] = (vlSelf->envxy32x16[0xdU] 
                          >> 0x10U);
    vlSelf->envx[0xeU] = (vlSelf->envxy32x16[0xeU] 
                          >> 0x10U);
    vlSelf->envx[0xfU] = (vlSelf->envxy32x16[0xfU] 
                          >> 0x10U);
    vlSelf->envy[0U] = (0xffffU & vlSelf->envxy32x16[0U]);
    vlSelf->envy[1U] = (0xffffU & vlSelf->envxy32x16[1U]);
    vlSelf->envy[2U] = (0xffffU & vlSelf->envxy32x16[2U]);
    vlSelf->envy[3U] = (0xffffU & vlSelf->envxy32x16[3U]);
    vlSelf->envy[4U] = (0xffffU & vlSelf->envxy32x16[4U]);
    vlSelf->envy[5U] = (0xffffU & vlSelf->envxy32x16[5U]);
    vlSelf->envy[6U] = (0xffffU & vlSelf->envxy32x16[6U]);
    vlSelf->envy[7U] = (0xffffU & vlSelf->envxy32x16[7U]);
    vlSelf->envy[8U] = (0xffffU & vlSelf->envxy32x16[8U]);
    vlSelf->envy[9U] = (0xffffU & vlSelf->envxy32x16[9U]);
    vlSelf->envy[0xaU] = (0xffffU & vlSelf->envxy32x16[0xaU]);
    vlSelf->envy[0xbU] = (0xffffU & vlSelf->envxy32x16[0xbU]);
    vlSelf->envy[0xcU] = (0xffffU & vlSelf->envxy32x16[0xcU]);
    vlSelf->envy[0xdU] = (0xffffU & vlSelf->envxy32x16[0xdU]);
    vlSelf->envy[0xeU] = (0xffffU & vlSelf->envxy32x16[0xeU]);
    vlSelf->envy[0xfU] = (0xffffU & vlSelf->envxy32x16[0xfU]);
    vlSelf->freqcossinpdelay__DOT__clk = vlSelf->clk;
    vlSelf->phtime__DOT__clk = vlSelf->clk;
    vlSelf->ampxdelay__DOT__clk = vlSelf->clk;
    vlSelf->pinidelay__DOT__clk = vlSelf->clk;
    vlSelf->multidelay__DOT__clk = vlSelf->clk;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->cordicg__DOT__clk = vlSelf->clk;
    vlSelf->cordicg__DOT__reg_delay__DOT__din = vlSelf->cordicg__DOT__gin;
    vlSelf->genblk2__BRA__0__KET____DOT__zr = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__1__KET____DOT__zr = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__2__KET____DOT__zr = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__3__KET____DOT__zr = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__4__KET____DOT__zr = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__5__KET____DOT__zr = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__6__KET____DOT__zr = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__7__KET____DOT__zr = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__8__KET____DOT__zr = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__9__KET____DOT__zr = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__10__KET____DOT__zr = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__11__KET____DOT__zr = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__12__KET____DOT__zr = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__13__KET____DOT__zr = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__14__KET____DOT__zr = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__15__KET____DOT__zr = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__0__KET____DOT__zi = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__1__KET____DOT__zi = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__2__KET____DOT__zi = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__3__KET____DOT__zi = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__4__KET____DOT__zi = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__5__KET____DOT__zi = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__6__KET____DOT__zi = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__7__KET____DOT__zi = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__8__KET____DOT__zi = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__9__KET____DOT__zi = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__10__KET____DOT__zi = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__11__KET____DOT__zi = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__12__KET____DOT__zi = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__13__KET____DOT__zi = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__14__KET____DOT__zi = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__15__KET____DOT__zi = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zi;
    vlSelf->phtime__DOT__phasetime = vlSelf->phasetime;
    vlSelf->pini_d = vlSelf->pinidelay__DOT__dout;
    vlSelf->phtime__DOT__gateout = vlSelf->gphtime;
    vlSelf->ampx_d = vlSelf->ampxdelay__DOT__dout;
    vlSelf->gmulti = vlSelf->multidelay__DOT__dout;
    vlSelf->freqcossinp32x16_d[0U] = vlSelf->freqcossinpdelay__DOT__dout[0U];
    vlSelf->freqcossinp32x16_d[1U] = vlSelf->freqcossinpdelay__DOT__dout[1U];
    vlSelf->freqcossinp32x16_d[2U] = vlSelf->freqcossinpdelay__DOT__dout[2U];
    vlSelf->freqcossinp32x16_d[3U] = vlSelf->freqcossinpdelay__DOT__dout[3U];
    vlSelf->freqcossinp32x16_d[4U] = vlSelf->freqcossinpdelay__DOT__dout[4U];
    vlSelf->freqcossinp32x16_d[5U] = vlSelf->freqcossinpdelay__DOT__dout[5U];
    vlSelf->freqcossinp32x16_d[6U] = vlSelf->freqcossinpdelay__DOT__dout[6U];
    vlSelf->freqcossinp32x16_d[7U] = vlSelf->freqcossinpdelay__DOT__dout[7U];
    vlSelf->freqcossinp32x16_d[8U] = vlSelf->freqcossinpdelay__DOT__dout[8U];
    vlSelf->freqcossinp32x16_d[9U] = vlSelf->freqcossinpdelay__DOT__dout[9U];
    vlSelf->freqcossinp32x16_d[0xaU] = vlSelf->freqcossinpdelay__DOT__dout[0xaU];
    vlSelf->freqcossinp32x16_d[0xbU] = vlSelf->freqcossinpdelay__DOT__dout[0xbU];
    vlSelf->freqcossinp32x16_d[0xcU] = vlSelf->freqcossinpdelay__DOT__dout[0xcU];
    vlSelf->freqcossinp32x16_d[0xdU] = vlSelf->freqcossinpdelay__DOT__dout[0xdU];
    vlSelf->freqcossinp32x16_d[0xeU] = vlSelf->freqcossinpdelay__DOT__dout[0xeU];
    vlSelf->freqcossinp32x16_d[0xfU] = vlSelf->freqcossinpdelay__DOT__dout[0xfU];
    vlSelf->genblk2__BRA__0__KET____DOT__zr1 = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__0__KET____DOT__zi1 = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__1__KET____DOT__zr1 = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__1__KET____DOT__zi1 = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__2__KET____DOT__zr1 = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__2__KET____DOT__zi1 = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__3__KET____DOT__zr1 = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__3__KET____DOT__zi1 = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__4__KET____DOT__zr1 = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__4__KET____DOT__zi1 = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__5__KET____DOT__zr1 = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__5__KET____DOT__zi1 = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__6__KET____DOT__zr1 = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__6__KET____DOT__zi1 = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__7__KET____DOT__zr1 = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__7__KET____DOT__zi1 = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__8__KET____DOT__zr1 = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__8__KET____DOT__zi1 = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__9__KET____DOT__zr1 = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__9__KET____DOT__zi1 = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__10__KET____DOT__zr1 = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__10__KET____DOT__zi1 = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__11__KET____DOT__zr1 = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__11__KET____DOT__zi1 = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__12__KET____DOT__zr1 = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__12__KET____DOT__zi1 = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__13__KET____DOT__zr1 = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__13__KET____DOT__zi1 = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__14__KET____DOT__zr1 = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__14__KET____DOT__zi1 = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__15__KET____DOT__zr1 = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__15__KET____DOT__zi1 = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi;
    vlSelf->cordicg__DOT__phaseout1 = vlSelf->cordicg__DOT__phaseout;
    vlSelf->cordicg__DOT__xout = vlSelf->cos_w;
    vlSelf->cordicg__DOT__xout1 = vlSelf->cos_w;
    vlSelf->cordicg__DOT__yout = vlSelf->sin_w;
    vlSelf->cordicg__DOT__yout1 = vlSelf->sin_w;
    vlSelf->multidelay__DOT__din = vlSelf->cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->cordicg__DOT__gout = vlSelf->cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->gcordic = vlSelf->cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->phtime__DOT__freq = vlSelf->freq;
    vlSelf->cordicg__DOT__reg_delay__DOT__clk = vlSelf->cordicg__DOT__clk;
}

VL_INLINE_OPT void Vtop_ammod__N10___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__0(Vtop_ammod__N10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__0\n"); );
    // Init
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v0;
    __Vdlyvval__cordicg__DOT__x__v0 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v0;
    __Vdlyvval__cordicg__DOT__y__v0 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v0;
    __Vdlyvval__cordicg__DOT__z__v0 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v1;
    __Vdlyvval__cordicg__DOT__x__v1 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v1;
    __Vdlyvval__cordicg__DOT__y__v1 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v1;
    __Vdlyvval__cordicg__DOT__z__v1 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v0;
    __Vdlyvval__cordicg__DOT__pluscheck__v0 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v0;
    __Vdlyvval__cordicg__DOT__pluscheck0__v0 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v2;
    __Vdlyvval__cordicg__DOT__x__v2 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v2;
    __Vdlyvval__cordicg__DOT__y__v2 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v2;
    __Vdlyvval__cordicg__DOT__z__v2 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v1;
    __Vdlyvval__cordicg__DOT__pluscheck__v1 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v1;
    __Vdlyvval__cordicg__DOT__pluscheck0__v1 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v3;
    __Vdlyvval__cordicg__DOT__x__v3 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v3;
    __Vdlyvval__cordicg__DOT__y__v3 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v3;
    __Vdlyvval__cordicg__DOT__z__v3 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v2;
    __Vdlyvval__cordicg__DOT__pluscheck__v2 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v2;
    __Vdlyvval__cordicg__DOT__pluscheck0__v2 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v4;
    __Vdlyvval__cordicg__DOT__x__v4 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v4;
    __Vdlyvval__cordicg__DOT__y__v4 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v4;
    __Vdlyvval__cordicg__DOT__z__v4 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v3;
    __Vdlyvval__cordicg__DOT__pluscheck__v3 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v3;
    __Vdlyvval__cordicg__DOT__pluscheck0__v3 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v5;
    __Vdlyvval__cordicg__DOT__x__v5 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v5;
    __Vdlyvval__cordicg__DOT__y__v5 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v5;
    __Vdlyvval__cordicg__DOT__z__v5 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v4;
    __Vdlyvval__cordicg__DOT__pluscheck__v4 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v4;
    __Vdlyvval__cordicg__DOT__pluscheck0__v4 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v6;
    __Vdlyvval__cordicg__DOT__x__v6 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v6;
    __Vdlyvval__cordicg__DOT__y__v6 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v6;
    __Vdlyvval__cordicg__DOT__z__v6 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v5;
    __Vdlyvval__cordicg__DOT__pluscheck__v5 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v5;
    __Vdlyvval__cordicg__DOT__pluscheck0__v5 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v7;
    __Vdlyvval__cordicg__DOT__x__v7 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v7;
    __Vdlyvval__cordicg__DOT__y__v7 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v7;
    __Vdlyvval__cordicg__DOT__z__v7 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v6;
    __Vdlyvval__cordicg__DOT__pluscheck__v6 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v6;
    __Vdlyvval__cordicg__DOT__pluscheck0__v6 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v8;
    __Vdlyvval__cordicg__DOT__x__v8 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v8;
    __Vdlyvval__cordicg__DOT__y__v8 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v8;
    __Vdlyvval__cordicg__DOT__z__v8 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v7;
    __Vdlyvval__cordicg__DOT__pluscheck__v7 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v7;
    __Vdlyvval__cordicg__DOT__pluscheck0__v7 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v9;
    __Vdlyvval__cordicg__DOT__x__v9 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v9;
    __Vdlyvval__cordicg__DOT__y__v9 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v9;
    __Vdlyvval__cordicg__DOT__z__v9 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v8;
    __Vdlyvval__cordicg__DOT__pluscheck__v8 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v8;
    __Vdlyvval__cordicg__DOT__pluscheck0__v8 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v10;
    __Vdlyvval__cordicg__DOT__x__v10 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v10;
    __Vdlyvval__cordicg__DOT__y__v10 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v10;
    __Vdlyvval__cordicg__DOT__z__v10 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v9;
    __Vdlyvval__cordicg__DOT__pluscheck__v9 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v9;
    __Vdlyvval__cordicg__DOT__pluscheck0__v9 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v11;
    __Vdlyvval__cordicg__DOT__x__v11 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v11;
    __Vdlyvval__cordicg__DOT__y__v11 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v11;
    __Vdlyvval__cordicg__DOT__z__v11 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v10;
    __Vdlyvval__cordicg__DOT__pluscheck__v10 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v10;
    __Vdlyvval__cordicg__DOT__pluscheck0__v10 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v12;
    __Vdlyvval__cordicg__DOT__x__v12 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v12;
    __Vdlyvval__cordicg__DOT__y__v12 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v12;
    __Vdlyvval__cordicg__DOT__z__v12 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v11;
    __Vdlyvval__cordicg__DOT__pluscheck__v11 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v11;
    __Vdlyvval__cordicg__DOT__pluscheck0__v11 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v13;
    __Vdlyvval__cordicg__DOT__x__v13 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v13;
    __Vdlyvval__cordicg__DOT__y__v13 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v13;
    __Vdlyvval__cordicg__DOT__z__v13 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v12;
    __Vdlyvval__cordicg__DOT__pluscheck__v12 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v12;
    __Vdlyvval__cordicg__DOT__pluscheck0__v12 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v14;
    __Vdlyvval__cordicg__DOT__x__v14 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v14;
    __Vdlyvval__cordicg__DOT__y__v14 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v14;
    __Vdlyvval__cordicg__DOT__z__v14 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v13;
    __Vdlyvval__cordicg__DOT__pluscheck__v13 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v13;
    __Vdlyvval__cordicg__DOT__pluscheck0__v13 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v15;
    __Vdlyvval__cordicg__DOT__x__v15 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v15;
    __Vdlyvval__cordicg__DOT__y__v15 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v15;
    __Vdlyvval__cordicg__DOT__z__v15 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v14;
    __Vdlyvval__cordicg__DOT__pluscheck__v14 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v14;
    __Vdlyvval__cordicg__DOT__pluscheck0__v14 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__x__v16;
    __Vdlyvval__cordicg__DOT__x__v16 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__y__v16;
    __Vdlyvval__cordicg__DOT__y__v16 = 0;
    IData/*16:0*/ __Vdlyvval__cordicg__DOT__z__v16;
    __Vdlyvval__cordicg__DOT__z__v16 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck__v15;
    __Vdlyvval__cordicg__DOT__pluscheck__v15 = 0;
    CData/*0:0*/ __Vdlyvval__cordicg__DOT__pluscheck0__v15;
    __Vdlyvval__cordicg__DOT__pluscheck0__v15 = 0;
    VlWide<6>/*191:0*/ __Vtemp_h711f6bf1__0;
    VlWide<5>/*159:0*/ __Vtemp_ha6985b49__0;
    VlWide<416>/*13311:0*/ __Vtemp_h853d8e40__0;
    VlWide<400>/*12799:0*/ __Vtemp_h6e9e0a7a__0;
    // Body
    __Vtemp_h711f6bf1__0[1U] = ((vlSelf->pinidelay__DOT__usual__DOT__shifter[0U] 
                                 >> 0xfU) | (vlSelf->pinidelay__DOT__usual__DOT__shifter[1U] 
                                             << 0x11U));
    __Vtemp_h711f6bf1__0[2U] = ((vlSelf->pinidelay__DOT__usual__DOT__shifter[1U] 
                                 >> 0xfU) | (vlSelf->pinidelay__DOT__usual__DOT__shifter[2U] 
                                             << 0x11U));
    __Vtemp_h711f6bf1__0[3U] = ((vlSelf->pinidelay__DOT__usual__DOT__shifter[2U] 
                                 >> 0xfU) | (vlSelf->pinidelay__DOT__usual__DOT__shifter[3U] 
                                             << 0x11U));
    __Vtemp_h711f6bf1__0[4U] = ((vlSelf->pinidelay__DOT__usual__DOT__shifter[3U] 
                                 >> 0xfU) | (vlSelf->pinidelay__DOT__usual__DOT__shifter[4U] 
                                             << 0x11U));
    __Vtemp_h711f6bf1__0[5U] = (0x3ffU & (vlSelf->pinidelay__DOT__usual__DOT__shifter[4U] 
                                          >> 0xfU));
    vlSelf->pinidelay__DOT__usual__DOT__shifter[0U] 
        = ((vlSelf->pinidelay__DOT__usual__DOT__shifter[0U] 
            << 0x11U) | vlSelf->pini);
    vlSelf->pinidelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h711f6bf1__0[1U];
    vlSelf->pinidelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h711f6bf1__0[2U];
    vlSelf->pinidelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h711f6bf1__0[3U];
    vlSelf->pinidelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h711f6bf1__0[4U];
    vlSelf->pinidelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h711f6bf1__0[5U];
    __Vtemp_ha6985b49__0[1U] = ((vlSelf->ampxdelay__DOT__usual__DOT__shifter[0U] 
                                 >> 0x10U) | (vlSelf->ampxdelay__DOT__usual__DOT__shifter[1U] 
                                              << 0x10U));
    __Vtemp_ha6985b49__0[2U] = ((vlSelf->ampxdelay__DOT__usual__DOT__shifter[1U] 
                                 >> 0x10U) | (vlSelf->ampxdelay__DOT__usual__DOT__shifter[2U] 
                                              << 0x10U));
    __Vtemp_ha6985b49__0[3U] = ((vlSelf->ampxdelay__DOT__usual__DOT__shifter[2U] 
                                 >> 0x10U) | (vlSelf->ampxdelay__DOT__usual__DOT__shifter[3U] 
                                              << 0x10U));
    __Vtemp_ha6985b49__0[4U] = ((vlSelf->ampxdelay__DOT__usual__DOT__shifter[3U] 
                                 >> 0x10U) | (vlSelf->ampxdelay__DOT__usual__DOT__shifter[4U] 
                                              << 0x10U));
    vlSelf->ampxdelay__DOT__usual__DOT__shifter[0U] 
        = ((vlSelf->ampxdelay__DOT__usual__DOT__shifter[0U] 
            << 0x10U) | (IData)(vlSelf->ampx));
    vlSelf->ampxdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_ha6985b49__0[1U];
    vlSelf->ampxdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_ha6985b49__0[2U];
    vlSelf->ampxdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_ha6985b49__0[3U];
    vlSelf->ampxdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_ha6985b49__0[4U];
    vlSelf->phtime__DOT__gatesr = ((0xfeU & ((IData)(vlSelf->phtime__DOT__gatesr) 
                                             << 1U)) 
                                   | (IData)(vlSelf->gatein));
    vlSelf->multidelay__DOT__usual__DOT__shifter = 
        ((0x1ffeU & ((IData)(vlSelf->multidelay__DOT__usual__DOT__shifter) 
                     << 1U)) | (IData)(vlSelf->cordicg__DOT__reg_delay__DOT__dout));
    vlSelf->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
        = ((0xffffeU & (vlSelf->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                        << 1U)) | (IData)(vlSelf->gphaseinit));
    if (vlSelf->cordicg__DOT__shiftpi) {
        __Vdlyvval__cordicg__DOT__y__v0 = (0x1ffffU 
                                           & (- VL_EXTENDS_II(17,16, (IData)(vlSelf->cordicg__DOT__yin_1))));
        __Vdlyvval__cordicg__DOT__x__v0 = (0x1ffffU 
                                           & (- VL_EXTENDS_II(17,16, (IData)(vlSelf->cordicg__DOT__xin_1))));
        __Vdlyvval__cordicg__DOT__z__v0 = ((0x10000U 
                                            & ((~ (vlSelf->cordicg__DOT__phasein_1 
                                                   >> 0x10U)) 
                                               << 0x10U)) 
                                           | (0xffffU 
                                              & vlSelf->cordicg__DOT__phasein_1));
    } else {
        __Vdlyvval__cordicg__DOT__y__v0 = (0x1ffffU 
                                           & VL_EXTENDS_II(17,16, (IData)(vlSelf->cordicg__DOT__yin_1)));
        __Vdlyvval__cordicg__DOT__x__v0 = (0x1ffffU 
                                           & VL_EXTENDS_II(17,16, (IData)(vlSelf->cordicg__DOT__xin_1)));
        __Vdlyvval__cordicg__DOT__z__v0 = vlSelf->cordicg__DOT__phasein_1;
    }
    if (vlSelf->cordicg__DOT__plusall[0U]) {
        __Vdlyvval__cordicg__DOT__pluscheck0__v0 = 1U;
        __Vdlyvval__cordicg__DOT__pluscheck0__v1 = 
            vlSelf->cordicg__DOT__plusall[1U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v2 = 
            vlSelf->cordicg__DOT__plusall[2U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v3 = 
            vlSelf->cordicg__DOT__plusall[3U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v4 = 
            vlSelf->cordicg__DOT__plusall[4U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v5 = 
            vlSelf->cordicg__DOT__plusall[5U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v6 = 
            vlSelf->cordicg__DOT__plusall[6U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v7 = 
            vlSelf->cordicg__DOT__plusall[7U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v8 = 
            vlSelf->cordicg__DOT__plusall[8U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v9 = 
            vlSelf->cordicg__DOT__plusall[9U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v10 = 
            vlSelf->cordicg__DOT__plusall[0xaU];
        __Vdlyvval__cordicg__DOT__pluscheck0__v11 = 
            vlSelf->cordicg__DOT__plusall[0xbU];
        __Vdlyvval__cordicg__DOT__pluscheck0__v12 = 
            vlSelf->cordicg__DOT__plusall[0xcU];
        __Vdlyvval__cordicg__DOT__pluscheck0__v13 = 
            vlSelf->cordicg__DOT__plusall[0xdU];
        __Vdlyvval__cordicg__DOT__pluscheck0__v14 = 
            vlSelf->cordicg__DOT__plusall[0xeU];
        __Vdlyvval__cordicg__DOT__pluscheck0__v15 = 
            vlSelf->cordicg__DOT__plusall[0xfU];
        __Vdlyvval__cordicg__DOT__pluscheck__v0 = 1U;
        __Vdlyvval__cordicg__DOT__pluscheck__v1 = vlSelf->cordicg__DOT__plusall
            [1U];
        __Vdlyvval__cordicg__DOT__pluscheck__v2 = vlSelf->cordicg__DOT__plusall
            [2U];
        __Vdlyvval__cordicg__DOT__pluscheck__v3 = vlSelf->cordicg__DOT__plusall
            [3U];
        __Vdlyvval__cordicg__DOT__pluscheck__v4 = vlSelf->cordicg__DOT__plusall
            [4U];
        __Vdlyvval__cordicg__DOT__pluscheck__v5 = vlSelf->cordicg__DOT__plusall
            [5U];
        __Vdlyvval__cordicg__DOT__pluscheck__v6 = vlSelf->cordicg__DOT__plusall
            [6U];
        __Vdlyvval__cordicg__DOT__pluscheck__v7 = vlSelf->cordicg__DOT__plusall
            [7U];
        __Vdlyvval__cordicg__DOT__pluscheck__v8 = vlSelf->cordicg__DOT__plusall
            [8U];
        __Vdlyvval__cordicg__DOT__pluscheck__v9 = vlSelf->cordicg__DOT__plusall
            [9U];
        __Vdlyvval__cordicg__DOT__pluscheck__v10 = 
            vlSelf->cordicg__DOT__plusall[0xaU];
        __Vdlyvval__cordicg__DOT__pluscheck__v11 = 
            vlSelf->cordicg__DOT__plusall[0xbU];
        __Vdlyvval__cordicg__DOT__pluscheck__v12 = 
            vlSelf->cordicg__DOT__plusall[0xcU];
        __Vdlyvval__cordicg__DOT__pluscheck__v13 = 
            vlSelf->cordicg__DOT__plusall[0xdU];
        __Vdlyvval__cordicg__DOT__pluscheck__v14 = 
            vlSelf->cordicg__DOT__plusall[0xeU];
        __Vdlyvval__cordicg__DOT__pluscheck__v15 = 
            vlSelf->cordicg__DOT__plusall[0xfU];
        __Vdlyvval__cordicg__DOT__x__v1 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [0U] 
                                              + vlSelf->cordicg__DOT__y
                                              [0U]));
        __Vdlyvval__cordicg__DOT__y__v1 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [0U] 
                                              - vlSelf->cordicg__DOT__x
                                              [0U]));
        __Vdlyvval__cordicg__DOT__z__v1 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [0U] 
                                              + vlSelf->cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__pluscheck0__v0 = 0U;
        __Vdlyvval__cordicg__DOT__pluscheck0__v1 = 
            vlSelf->cordicg__DOT__plusall[1U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v2 = 
            vlSelf->cordicg__DOT__plusall[2U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v3 = 
            vlSelf->cordicg__DOT__plusall[3U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v4 = 
            vlSelf->cordicg__DOT__plusall[4U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v5 = 
            vlSelf->cordicg__DOT__plusall[5U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v6 = 
            vlSelf->cordicg__DOT__plusall[6U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v7 = 
            vlSelf->cordicg__DOT__plusall[7U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v8 = 
            vlSelf->cordicg__DOT__plusall[8U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v9 = 
            vlSelf->cordicg__DOT__plusall[9U];
        __Vdlyvval__cordicg__DOT__pluscheck0__v10 = 
            vlSelf->cordicg__DOT__plusall[0xaU];
        __Vdlyvval__cordicg__DOT__pluscheck0__v11 = 
            vlSelf->cordicg__DOT__plusall[0xbU];
        __Vdlyvval__cordicg__DOT__pluscheck0__v12 = 
            vlSelf->cordicg__DOT__plusall[0xcU];
        __Vdlyvval__cordicg__DOT__pluscheck0__v13 = 
            vlSelf->cordicg__DOT__plusall[0xdU];
        __Vdlyvval__cordicg__DOT__pluscheck0__v14 = 
            vlSelf->cordicg__DOT__plusall[0xeU];
        __Vdlyvval__cordicg__DOT__pluscheck0__v15 = 
            vlSelf->cordicg__DOT__plusall[0xfU];
        __Vdlyvval__cordicg__DOT__pluscheck__v0 = 0U;
        __Vdlyvval__cordicg__DOT__pluscheck__v1 = vlSelf->cordicg__DOT__plusall
            [1U];
        __Vdlyvval__cordicg__DOT__pluscheck__v2 = vlSelf->cordicg__DOT__plusall
            [2U];
        __Vdlyvval__cordicg__DOT__pluscheck__v3 = vlSelf->cordicg__DOT__plusall
            [3U];
        __Vdlyvval__cordicg__DOT__pluscheck__v4 = vlSelf->cordicg__DOT__plusall
            [4U];
        __Vdlyvval__cordicg__DOT__pluscheck__v5 = vlSelf->cordicg__DOT__plusall
            [5U];
        __Vdlyvval__cordicg__DOT__pluscheck__v6 = vlSelf->cordicg__DOT__plusall
            [6U];
        __Vdlyvval__cordicg__DOT__pluscheck__v7 = vlSelf->cordicg__DOT__plusall
            [7U];
        __Vdlyvval__cordicg__DOT__pluscheck__v8 = vlSelf->cordicg__DOT__plusall
            [8U];
        __Vdlyvval__cordicg__DOT__pluscheck__v9 = vlSelf->cordicg__DOT__plusall
            [9U];
        __Vdlyvval__cordicg__DOT__pluscheck__v10 = 
            vlSelf->cordicg__DOT__plusall[0xaU];
        __Vdlyvval__cordicg__DOT__pluscheck__v11 = 
            vlSelf->cordicg__DOT__plusall[0xbU];
        __Vdlyvval__cordicg__DOT__pluscheck__v12 = 
            vlSelf->cordicg__DOT__plusall[0xcU];
        __Vdlyvval__cordicg__DOT__pluscheck__v13 = 
            vlSelf->cordicg__DOT__plusall[0xdU];
        __Vdlyvval__cordicg__DOT__pluscheck__v14 = 
            vlSelf->cordicg__DOT__plusall[0xeU];
        __Vdlyvval__cordicg__DOT__pluscheck__v15 = 
            vlSelf->cordicg__DOT__plusall[0xfU];
        __Vdlyvval__cordicg__DOT__x__v1 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [0U] 
                                              - vlSelf->cordicg__DOT__y
                                              [0U]));
        __Vdlyvval__cordicg__DOT__y__v1 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [0U] 
                                              + vlSelf->cordicg__DOT__x
                                              [0U]));
        __Vdlyvval__cordicg__DOT__z__v1 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [0U] 
                                              - vlSelf->cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[1U]) {
        __Vdlyvval__cordicg__DOT__x__v2 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [1U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [1U], 1U)));
        __Vdlyvval__cordicg__DOT__y__v2 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [1U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [1U], 1U)));
        __Vdlyvval__cordicg__DOT__z__v2 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [1U] 
                                              + vlSelf->cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v2 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [1U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [1U], 1U)));
        __Vdlyvval__cordicg__DOT__y__v2 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [1U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [1U], 1U)));
        __Vdlyvval__cordicg__DOT__z__v2 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [1U] 
                                              - vlSelf->cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[2U]) {
        __Vdlyvval__cordicg__DOT__x__v3 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [2U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [2U], 2U)));
        __Vdlyvval__cordicg__DOT__y__v3 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [2U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [2U], 2U)));
        __Vdlyvval__cordicg__DOT__z__v3 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [2U] 
                                              + vlSelf->cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v3 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [2U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [2U], 2U)));
        __Vdlyvval__cordicg__DOT__y__v3 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [2U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [2U], 2U)));
        __Vdlyvval__cordicg__DOT__z__v3 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [2U] 
                                              - vlSelf->cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[3U]) {
        __Vdlyvval__cordicg__DOT__x__v4 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [3U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [3U], 3U)));
        __Vdlyvval__cordicg__DOT__y__v4 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [3U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [3U], 3U)));
        __Vdlyvval__cordicg__DOT__z__v4 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [3U] 
                                              + vlSelf->cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v4 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [3U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [3U], 3U)));
        __Vdlyvval__cordicg__DOT__y__v4 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [3U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [3U], 3U)));
        __Vdlyvval__cordicg__DOT__z__v4 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [3U] 
                                              - vlSelf->cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[4U]) {
        __Vdlyvval__cordicg__DOT__x__v5 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [4U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [4U], 4U)));
        __Vdlyvval__cordicg__DOT__y__v5 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [4U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [4U], 4U)));
        __Vdlyvval__cordicg__DOT__z__v5 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [4U] 
                                              + vlSelf->cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v5 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [4U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [4U], 4U)));
        __Vdlyvval__cordicg__DOT__y__v5 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [4U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [4U], 4U)));
        __Vdlyvval__cordicg__DOT__z__v5 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [4U] 
                                              - vlSelf->cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[5U]) {
        __Vdlyvval__cordicg__DOT__x__v6 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [5U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [5U], 5U)));
        __Vdlyvval__cordicg__DOT__y__v6 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [5U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [5U], 5U)));
        __Vdlyvval__cordicg__DOT__z__v6 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [5U] 
                                              + vlSelf->cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v6 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [5U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [5U], 5U)));
        __Vdlyvval__cordicg__DOT__y__v6 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [5U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [5U], 5U)));
        __Vdlyvval__cordicg__DOT__z__v6 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [5U] 
                                              - vlSelf->cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[6U]) {
        __Vdlyvval__cordicg__DOT__x__v7 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [6U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [6U], 6U)));
        __Vdlyvval__cordicg__DOT__y__v7 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [6U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [6U], 6U)));
        __Vdlyvval__cordicg__DOT__z__v7 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [6U] 
                                              + vlSelf->cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v7 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [6U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [6U], 6U)));
        __Vdlyvval__cordicg__DOT__y__v7 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [6U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [6U], 6U)));
        __Vdlyvval__cordicg__DOT__z__v7 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [6U] 
                                              - vlSelf->cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[7U]) {
        __Vdlyvval__cordicg__DOT__x__v8 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [7U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [7U], 7U)));
        __Vdlyvval__cordicg__DOT__y__v8 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [7U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [7U], 7U)));
        __Vdlyvval__cordicg__DOT__z__v8 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [7U] 
                                              + vlSelf->cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v8 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [7U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [7U], 7U)));
        __Vdlyvval__cordicg__DOT__y__v8 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [7U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [7U], 7U)));
        __Vdlyvval__cordicg__DOT__z__v8 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [7U] 
                                              - vlSelf->cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[8U]) {
        __Vdlyvval__cordicg__DOT__x__v9 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [8U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [8U], 8U)));
        __Vdlyvval__cordicg__DOT__y__v9 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [8U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [8U], 8U)));
        __Vdlyvval__cordicg__DOT__z__v9 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [8U] 
                                              + vlSelf->cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v9 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__x
                                              [8U] 
                                              - VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__y
                                                               [8U], 8U)));
        __Vdlyvval__cordicg__DOT__y__v9 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__y
                                              [8U] 
                                              + VL_SHIFTRS_III(17,17,32, 
                                                               vlSelf->cordicg__DOT__x
                                                               [8U], 8U)));
        __Vdlyvval__cordicg__DOT__z__v9 = (0x1ffffU 
                                           & (vlSelf->cordicg__DOT__z
                                              [8U] 
                                              - vlSelf->cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[9U]) {
        __Vdlyvval__cordicg__DOT__x__v10 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [9U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [9U], 9U)));
        __Vdlyvval__cordicg__DOT__y__v10 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [9U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [9U], 9U)));
        __Vdlyvval__cordicg__DOT__z__v10 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [9U] 
                                               + vlSelf->cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v10 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [9U] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [9U], 9U)));
        __Vdlyvval__cordicg__DOT__y__v10 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [9U] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [9U], 9U)));
        __Vdlyvval__cordicg__DOT__z__v10 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [9U] 
                                               - vlSelf->cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[0xaU]) {
        __Vdlyvval__cordicg__DOT__x__v11 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [0xaU] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [0xaU], 0xaU)));
        __Vdlyvval__cordicg__DOT__y__v11 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [0xaU] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [0xaU], 0xaU)));
        __Vdlyvval__cordicg__DOT__z__v11 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [0xaU] 
                                               + vlSelf->cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v11 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [0xaU] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [0xaU], 0xaU)));
        __Vdlyvval__cordicg__DOT__y__v11 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [0xaU] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [0xaU], 0xaU)));
        __Vdlyvval__cordicg__DOT__z__v11 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [0xaU] 
                                               - vlSelf->cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[0xbU]) {
        __Vdlyvval__cordicg__DOT__x__v12 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [0xbU] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [0xbU], 0xbU)));
        __Vdlyvval__cordicg__DOT__y__v12 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [0xbU] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [0xbU], 0xbU)));
        __Vdlyvval__cordicg__DOT__z__v12 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [0xbU] 
                                               + vlSelf->cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v12 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [0xbU] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [0xbU], 0xbU)));
        __Vdlyvval__cordicg__DOT__y__v12 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [0xbU] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [0xbU], 0xbU)));
        __Vdlyvval__cordicg__DOT__z__v12 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [0xbU] 
                                               - vlSelf->cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[0xcU]) {
        __Vdlyvval__cordicg__DOT__x__v13 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [0xcU] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [0xcU], 0xcU)));
        __Vdlyvval__cordicg__DOT__y__v13 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [0xcU] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [0xcU], 0xcU)));
        __Vdlyvval__cordicg__DOT__z__v13 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [0xcU] 
                                               + vlSelf->cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v13 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [0xcU] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [0xcU], 0xcU)));
        __Vdlyvval__cordicg__DOT__y__v13 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [0xcU] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [0xcU], 0xcU)));
        __Vdlyvval__cordicg__DOT__z__v13 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [0xcU] 
                                               - vlSelf->cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[0xdU]) {
        __Vdlyvval__cordicg__DOT__x__v14 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [0xdU] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [0xdU], 0xdU)));
        __Vdlyvval__cordicg__DOT__y__v14 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [0xdU] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [0xdU], 0xdU)));
        __Vdlyvval__cordicg__DOT__z__v14 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [0xdU] 
                                               + vlSelf->cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v14 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [0xdU] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [0xdU], 0xdU)));
        __Vdlyvval__cordicg__DOT__y__v14 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [0xdU] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [0xdU], 0xdU)));
        __Vdlyvval__cordicg__DOT__z__v14 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [0xdU] 
                                               - vlSelf->cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[0xeU]) {
        __Vdlyvval__cordicg__DOT__x__v15 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [0xeU] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [0xeU], 0xeU)));
        __Vdlyvval__cordicg__DOT__y__v15 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [0xeU] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [0xeU], 0xeU)));
        __Vdlyvval__cordicg__DOT__z__v15 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [0xeU] 
                                               + vlSelf->cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v15 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [0xeU] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [0xeU], 0xeU)));
        __Vdlyvval__cordicg__DOT__y__v15 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [0xeU] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [0xeU], 0xeU)));
        __Vdlyvval__cordicg__DOT__z__v15 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [0xeU] 
                                               - vlSelf->cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    }
    if (vlSelf->cordicg__DOT__plusall[0xfU]) {
        __Vdlyvval__cordicg__DOT__x__v16 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [0xfU] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [0xfU], 0xfU)));
        __Vdlyvval__cordicg__DOT__y__v16 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [0xfU] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [0xfU], 0xfU)));
        __Vdlyvval__cordicg__DOT__z__v16 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [0xfU] 
                                               + vlSelf->cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    } else {
        __Vdlyvval__cordicg__DOT__x__v16 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__x
                                               [0xfU] 
                                               - VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__y
                                                                [0xfU], 0xfU)));
        __Vdlyvval__cordicg__DOT__y__v16 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__y
                                               [0xfU] 
                                               + VL_SHIFTRS_III(17,17,32, 
                                                                vlSelf->cordicg__DOT__x
                                                                [0xfU], 0xfU)));
        __Vdlyvval__cordicg__DOT__z__v16 = (0x1ffffU 
                                            & (vlSelf->cordicg__DOT__z
                                               [0xfU] 
                                               - vlSelf->cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    }
    VL_SEL_WWII(12800,13312, __Vtemp_h6e9e0a7a__0, vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter, 0U, 0x3200U);
    VL_CONCAT_WWW(13312,12800,512, __Vtemp_h853d8e40__0, __Vtemp_h6e9e0a7a__0, vlSelf->freqcossinp32x16);
    VL_ASSIGN_W(13312,vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter, __Vtemp_h853d8e40__0);
    vlSelf->cordicg__DOT__genblk2__DOT__yin_d = 0U;
    vlSelf->phtime__DOT__tcnt_r = vlSelf->tcnt;
    vlSelf->phtime__DOT__freq_r = vlSelf->freq;
    vlSelf->gateout_r = vlSelf->multidelay__DOT__dout;
    vlSelf->cordicg__DOT__genblk2__DOT__xin_d = vlSelf->ampx_d2;
    vlSelf->cordicg__DOT__phaseout_r = vlSelf->cordicg__DOT__zg1;
    vlSelf->cordicg__DOT__genblk2__DOT__phasein_d = vlSelf->phaseinit;
    vlSelf->phtime__DOT__phasetime_r3 = vlSelf->phtime__DOT__phasetime_r2;
    vlSelf->cordicg__DOT__stage__BRA__15__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0xfU] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [0xfU], 0xfU)));
    vlSelf->cordicg__DOT__stage__BRA__15__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0xfU] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [0xfU], 0xfU)));
    vlSelf->cordicg__DOT__stage__BRA__15__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0xfU] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [0xfU], 0xfU)));
    vlSelf->cordicg__DOT__stage__BRA__15__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0xfU] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [0xfU], 0xfU)));
    vlSelf->cordicg__DOT__stage__BRA__14__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0xeU] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [0xeU], 0xeU)));
    vlSelf->cordicg__DOT__stage__BRA__14__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0xeU] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [0xeU], 0xeU)));
    vlSelf->cordicg__DOT__stage__BRA__14__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0xeU] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [0xeU], 0xeU)));
    vlSelf->cordicg__DOT__stage__BRA__14__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0xeU] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [0xeU], 0xeU)));
    vlSelf->cordicg__DOT__stage__BRA__13__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0xdU] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [0xdU], 0xdU)));
    vlSelf->cordicg__DOT__stage__BRA__13__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0xdU] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [0xdU], 0xdU)));
    vlSelf->cordicg__DOT__stage__BRA__13__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0xdU] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [0xdU], 0xdU)));
    vlSelf->cordicg__DOT__stage__BRA__13__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0xdU] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [0xdU], 0xdU)));
    vlSelf->cordicg__DOT__stage__BRA__12__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0xcU] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [0xcU], 0xcU)));
    vlSelf->cordicg__DOT__stage__BRA__12__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0xcU] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [0xcU], 0xcU)));
    vlSelf->cordicg__DOT__stage__BRA__12__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0xcU] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [0xcU], 0xcU)));
    vlSelf->cordicg__DOT__stage__BRA__12__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0xcU] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [0xcU], 0xcU)));
    vlSelf->cordicg__DOT__stage__BRA__11__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0xbU] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [0xbU], 0xbU)));
    vlSelf->cordicg__DOT__stage__BRA__11__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0xbU] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [0xbU], 0xbU)));
    vlSelf->cordicg__DOT__stage__BRA__11__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0xbU] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [0xbU], 0xbU)));
    vlSelf->cordicg__DOT__stage__BRA__11__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0xbU] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [0xbU], 0xbU)));
    vlSelf->cordicg__DOT__stage__BRA__10__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0xaU] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [0xaU], 0xaU)));
    vlSelf->cordicg__DOT__stage__BRA__10__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0xaU] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [0xaU], 0xaU)));
    vlSelf->cordicg__DOT__stage__BRA__10__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0xaU] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [0xaU], 0xaU)));
    vlSelf->cordicg__DOT__stage__BRA__10__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0xaU] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [0xaU], 0xaU)));
    vlSelf->cordicg__DOT__stage__BRA__9__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[9U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [9U], 9U)));
    vlSelf->cordicg__DOT__stage__BRA__9__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[9U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [9U], 9U)));
    vlSelf->cordicg__DOT__stage__BRA__9__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[9U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [9U], 9U)));
    vlSelf->cordicg__DOT__stage__BRA__9__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[9U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [9U], 9U)));
    vlSelf->cordicg__DOT__stage__BRA__8__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[8U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [8U], 8U)));
    vlSelf->cordicg__DOT__stage__BRA__8__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[8U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [8U], 8U)));
    vlSelf->cordicg__DOT__stage__BRA__8__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[8U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [8U], 8U)));
    vlSelf->cordicg__DOT__stage__BRA__8__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[8U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [8U], 8U)));
    vlSelf->cordicg__DOT__stage__BRA__7__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[7U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [7U], 7U)));
    vlSelf->cordicg__DOT__stage__BRA__7__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[7U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [7U], 7U)));
    vlSelf->cordicg__DOT__stage__BRA__7__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[7U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [7U], 7U)));
    vlSelf->cordicg__DOT__stage__BRA__7__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[7U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [7U], 7U)));
    vlSelf->cordicg__DOT__stage__BRA__6__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[6U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [6U], 6U)));
    vlSelf->cordicg__DOT__stage__BRA__6__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[6U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [6U], 6U)));
    vlSelf->cordicg__DOT__stage__BRA__6__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[6U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [6U], 6U)));
    vlSelf->cordicg__DOT__stage__BRA__6__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[6U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [6U], 6U)));
    vlSelf->cordicg__DOT__stage__BRA__5__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[5U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [5U], 5U)));
    vlSelf->cordicg__DOT__stage__BRA__5__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[5U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [5U], 5U)));
    vlSelf->cordicg__DOT__stage__BRA__5__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[5U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [5U], 5U)));
    vlSelf->cordicg__DOT__stage__BRA__5__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[5U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [5U], 5U)));
    vlSelf->cordicg__DOT__stage__BRA__4__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[4U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [4U], 4U)));
    vlSelf->cordicg__DOT__stage__BRA__4__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[4U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [4U], 4U)));
    vlSelf->cordicg__DOT__stage__BRA__4__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[4U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [4U], 4U)));
    vlSelf->cordicg__DOT__stage__BRA__4__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[4U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [4U], 4U)));
    vlSelf->cordicg__DOT__stage__BRA__3__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[3U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [3U], 3U)));
    vlSelf->cordicg__DOT__stage__BRA__3__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[3U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [3U], 3U)));
    vlSelf->cordicg__DOT__stage__BRA__3__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[3U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [3U], 3U)));
    vlSelf->cordicg__DOT__stage__BRA__3__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[3U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [3U], 3U)));
    vlSelf->cordicg__DOT__stage__BRA__2__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[2U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [2U], 2U)));
    vlSelf->cordicg__DOT__stage__BRA__2__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[2U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [2U], 2U)));
    vlSelf->cordicg__DOT__stage__BRA__2__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[2U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [2U], 2U)));
    vlSelf->cordicg__DOT__stage__BRA__2__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[2U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [2U], 2U)));
    vlSelf->cordicg__DOT__stage__BRA__1__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[1U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [1U], 1U)));
    vlSelf->cordicg__DOT__stage__BRA__1__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[1U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__x
                                        [1U], 1U)));
    vlSelf->cordicg__DOT__stage__BRA__1__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[1U] 
                       - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [1U], 1U)));
    vlSelf->cordicg__DOT__stage__BRA__1__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[1U] 
                       + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__y
                                        [1U], 1U)));
    vlSelf->cordicg__DOT__stage__BRA__0__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0U] 
                       + vlSelf->cordicg__DOT__x[0U]));
    vlSelf->cordicg__DOT__stage__BRA__0__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__y[0U] 
                       - vlSelf->cordicg__DOT__x[0U]));
    vlSelf->cordicg__DOT__stage__BRA__0__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0U] 
                       - vlSelf->cordicg__DOT__y[0U]));
    vlSelf->cordicg__DOT__stage__BRA__0__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__x[0U] 
                       + vlSelf->cordicg__DOT__y[0U]));
    vlSelf->cordicg__DOT__stage__BRA__15__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0xfU] 
                       - vlSelf->cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__15__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0xfU] 
                       + vlSelf->cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__14__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0xeU] 
                       - vlSelf->cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__14__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0xeU] 
                       + vlSelf->cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__13__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0xdU] 
                       - vlSelf->cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__13__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0xdU] 
                       + vlSelf->cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__12__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0xcU] 
                       - vlSelf->cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__12__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0xcU] 
                       + vlSelf->cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__11__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0xbU] 
                       - vlSelf->cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__11__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0xbU] 
                       + vlSelf->cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__10__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0xaU] 
                       - vlSelf->cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__10__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0xaU] 
                       + vlSelf->cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__9__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[9U] 
                       - vlSelf->cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__9__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[9U] 
                       + vlSelf->cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__8__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[8U] 
                       - vlSelf->cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__8__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[8U] 
                       + vlSelf->cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__7__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[7U] 
                       - vlSelf->cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__7__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[7U] 
                       + vlSelf->cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__6__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[6U] 
                       - vlSelf->cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__6__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[6U] 
                       + vlSelf->cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__5__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[5U] 
                       - vlSelf->cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__5__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[5U] 
                       + vlSelf->cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__4__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[4U] 
                       - vlSelf->cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__4__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[4U] 
                       + vlSelf->cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__3__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[3U] 
                       - vlSelf->cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__3__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[3U] 
                       + vlSelf->cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__2__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[2U] 
                       - vlSelf->cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__2__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[2U] 
                       + vlSelf->cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__1__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[1U] 
                       - vlSelf->cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__1__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[1U] 
                       + vlSelf->cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__0__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0U] 
                       - vlSelf->cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    vlSelf->cordicg__DOT__stage__BRA__0__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->cordicg__DOT__z[0U] 
                       + vlSelf->cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    vlSelf->cordicg__DOT__errorr = (1U & (((IData)(vlSelf->cordicg__DOT__genblk5__DOT__xdummy) 
                                           ^ ((IData)(vlSelf->cordicg__DOT__xout_r) 
                                              >> 0xfU)) 
                                          | ((IData)(vlSelf->cordicg__DOT__genblk5__DOT__ydummy) 
                                             ^ ((IData)(vlSelf->sin_w) 
                                                >> 0xfU))));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
                             + vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
                             + vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2));
    vlSelf->multiy16x16_r[0U] = (IData)((((QData)((IData)(
                                                          ((vlSelf->multiy
                                                            [2U] 
                                                            << 0x10U) 
                                                           | vlSelf->multiy
                                                           [1U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelf->multiy
                                                           [0U]))));
    vlSelf->multiy16x16_r[1U] = ((0xffff0000U & vlSelf->multiy16x16_r[1U]) 
                                 | (IData)(((((QData)((IData)(
                                                              ((vlSelf->multiy
                                                                [2U] 
                                                                << 0x10U) 
                                                               | vlSelf->multiy
                                                               [1U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelf->multiy
                                                               [0U]))) 
                                            >> 0x20U)));
    vlSelf->multiy16x16_r[1U] = ((0xffffU & vlSelf->multiy16x16_r[1U]) 
                                 | ((IData)((((QData)((IData)(
                                                              ((vlSelf->multiy
                                                                [5U] 
                                                                << 0x10U) 
                                                               | vlSelf->multiy
                                                               [4U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelf->multiy
                                                               [3U])))) 
                                    << 0x10U));
    vlSelf->multiy16x16_r[2U] = (((IData)((((QData)((IData)(
                                                            ((vlSelf->multiy
                                                              [5U] 
                                                              << 0x10U) 
                                                             | vlSelf->multiy
                                                             [4U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelf->multiy
                                                             [3U])))) 
                                  >> 0x10U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelf->multiy
                                                                            [5U] 
                                                                            << 0x10U) 
                                                                           | vlSelf->multiy
                                                                           [4U]))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->multiy
                                                                           [3U]))) 
                                                        >> 0x20U)) 
                                               << 0x10U));
    vlSelf->multiy16x16_r[3U] = (IData)((((QData)((IData)(
                                                          ((vlSelf->multiy
                                                            [8U] 
                                                            << 0x10U) 
                                                           | vlSelf->multiy
                                                           [7U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelf->multiy
                                                           [6U]))));
    vlSelf->multiy16x16_r[4U] = ((0xffff0000U & vlSelf->multiy16x16_r[4U]) 
                                 | (IData)(((((QData)((IData)(
                                                              ((vlSelf->multiy
                                                                [8U] 
                                                                << 0x10U) 
                                                               | vlSelf->multiy
                                                               [7U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelf->multiy
                                                               [6U]))) 
                                            >> 0x20U)));
    vlSelf->multiy16x16_r[4U] = ((0xffffU & vlSelf->multiy16x16_r[4U]) 
                                 | ((IData)((((QData)((IData)(
                                                              ((vlSelf->multiy
                                                                [0xbU] 
                                                                << 0x10U) 
                                                               | vlSelf->multiy
                                                               [0xaU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelf->multiy
                                                               [9U])))) 
                                    << 0x10U));
    vlSelf->multiy16x16_r[5U] = (((IData)((((QData)((IData)(
                                                            ((vlSelf->multiy
                                                              [0xbU] 
                                                              << 0x10U) 
                                                             | vlSelf->multiy
                                                             [0xaU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelf->multiy
                                                             [9U])))) 
                                  >> 0x10U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelf->multiy
                                                                            [0xbU] 
                                                                            << 0x10U) 
                                                                           | vlSelf->multiy
                                                                           [0xaU]))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->multiy
                                                                           [9U]))) 
                                                        >> 0x20U)) 
                                               << 0x10U));
    vlSelf->multiy16x16_r[6U] = (IData)((((QData)((IData)(
                                                          ((vlSelf->multiy
                                                            [0xeU] 
                                                            << 0x10U) 
                                                           | vlSelf->multiy
                                                           [0xdU]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelf->multiy
                                                           [0xcU]))));
    vlSelf->multiy16x16_r[7U] = ((0xffff0000U & vlSelf->multiy16x16_r[7U]) 
                                 | (IData)(((((QData)((IData)(
                                                              ((vlSelf->multiy
                                                                [0xeU] 
                                                                << 0x10U) 
                                                               | vlSelf->multiy
                                                               [0xdU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelf->multiy
                                                               [0xcU]))) 
                                            >> 0x20U)));
    vlSelf->multiy16x16_r[7U] = ((0xffffU & vlSelf->multiy16x16_r[7U]) 
                                 | (vlSelf->multiy[0xfU] 
                                    << 0x10U));
    vlSelf->multix16x16_r[0U] = (IData)((((QData)((IData)(
                                                          ((vlSelf->multix
                                                            [2U] 
                                                            << 0x10U) 
                                                           | vlSelf->multix
                                                           [1U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelf->multix
                                                           [0U]))));
    vlSelf->multix16x16_r[1U] = ((0xffff0000U & vlSelf->multix16x16_r[1U]) 
                                 | (IData)(((((QData)((IData)(
                                                              ((vlSelf->multix
                                                                [2U] 
                                                                << 0x10U) 
                                                               | vlSelf->multix
                                                               [1U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelf->multix
                                                               [0U]))) 
                                            >> 0x20U)));
    vlSelf->multix16x16_r[1U] = ((0xffffU & vlSelf->multix16x16_r[1U]) 
                                 | ((IData)((((QData)((IData)(
                                                              ((vlSelf->multix
                                                                [5U] 
                                                                << 0x10U) 
                                                               | vlSelf->multix
                                                               [4U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelf->multix
                                                               [3U])))) 
                                    << 0x10U));
    vlSelf->multix16x16_r[2U] = (((IData)((((QData)((IData)(
                                                            ((vlSelf->multix
                                                              [5U] 
                                                              << 0x10U) 
                                                             | vlSelf->multix
                                                             [4U]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelf->multix
                                                             [3U])))) 
                                  >> 0x10U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelf->multix
                                                                            [5U] 
                                                                            << 0x10U) 
                                                                           | vlSelf->multix
                                                                           [4U]))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->multix
                                                                           [3U]))) 
                                                        >> 0x20U)) 
                                               << 0x10U));
    vlSelf->multix16x16_r[3U] = (IData)((((QData)((IData)(
                                                          ((vlSelf->multix
                                                            [8U] 
                                                            << 0x10U) 
                                                           | vlSelf->multix
                                                           [7U]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelf->multix
                                                           [6U]))));
    vlSelf->multix16x16_r[4U] = ((0xffff0000U & vlSelf->multix16x16_r[4U]) 
                                 | (IData)(((((QData)((IData)(
                                                              ((vlSelf->multix
                                                                [8U] 
                                                                << 0x10U) 
                                                               | vlSelf->multix
                                                               [7U]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelf->multix
                                                               [6U]))) 
                                            >> 0x20U)));
    vlSelf->multix16x16_r[4U] = ((0xffffU & vlSelf->multix16x16_r[4U]) 
                                 | ((IData)((((QData)((IData)(
                                                              ((vlSelf->multix
                                                                [0xbU] 
                                                                << 0x10U) 
                                                               | vlSelf->multix
                                                               [0xaU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelf->multix
                                                               [9U])))) 
                                    << 0x10U));
    vlSelf->multix16x16_r[5U] = (((IData)((((QData)((IData)(
                                                            ((vlSelf->multix
                                                              [0xbU] 
                                                              << 0x10U) 
                                                             | vlSelf->multix
                                                             [0xaU]))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             vlSelf->multix
                                                             [9U])))) 
                                  >> 0x10U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelf->multix
                                                                            [0xbU] 
                                                                            << 0x10U) 
                                                                           | vlSelf->multix
                                                                           [0xaU]))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->multix
                                                                           [9U]))) 
                                                        >> 0x20U)) 
                                               << 0x10U));
    vlSelf->multix16x16_r[6U] = (IData)((((QData)((IData)(
                                                          ((vlSelf->multix
                                                            [0xeU] 
                                                            << 0x10U) 
                                                           | vlSelf->multix
                                                           [0xdU]))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           vlSelf->multix
                                                           [0xcU]))));
    vlSelf->multix16x16_r[7U] = ((0xffff0000U & vlSelf->multix16x16_r[7U]) 
                                 | (IData)(((((QData)((IData)(
                                                              ((vlSelf->multix
                                                                [0xeU] 
                                                                << 0x10U) 
                                                               | vlSelf->multix
                                                               [0xdU]))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               vlSelf->multix
                                                               [0xcU]))) 
                                            >> 0x20U)));
    vlSelf->multix16x16_r[7U] = ((0xffffU & vlSelf->multix16x16_r[7U]) 
                                 | (vlSelf->multix[0xfU] 
                                    << 0x10U));
    vlSelf->cordicg__DOT__pluscheck0[1U] = __Vdlyvval__cordicg__DOT__pluscheck0__v0;
    vlSelf->cordicg__DOT__pluscheck0[2U] = __Vdlyvval__cordicg__DOT__pluscheck0__v1;
    vlSelf->cordicg__DOT__pluscheck0[3U] = __Vdlyvval__cordicg__DOT__pluscheck0__v2;
    vlSelf->cordicg__DOT__pluscheck0[4U] = __Vdlyvval__cordicg__DOT__pluscheck0__v3;
    vlSelf->cordicg__DOT__pluscheck0[5U] = __Vdlyvval__cordicg__DOT__pluscheck0__v4;
    vlSelf->cordicg__DOT__pluscheck0[6U] = __Vdlyvval__cordicg__DOT__pluscheck0__v5;
    vlSelf->cordicg__DOT__pluscheck0[7U] = __Vdlyvval__cordicg__DOT__pluscheck0__v6;
    vlSelf->cordicg__DOT__pluscheck0[8U] = __Vdlyvval__cordicg__DOT__pluscheck0__v7;
    vlSelf->cordicg__DOT__pluscheck0[9U] = __Vdlyvval__cordicg__DOT__pluscheck0__v8;
    vlSelf->cordicg__DOT__pluscheck0[0xaU] = __Vdlyvval__cordicg__DOT__pluscheck0__v9;
    vlSelf->cordicg__DOT__pluscheck0[0xbU] = __Vdlyvval__cordicg__DOT__pluscheck0__v10;
    vlSelf->cordicg__DOT__pluscheck0[0xcU] = __Vdlyvval__cordicg__DOT__pluscheck0__v11;
    vlSelf->cordicg__DOT__pluscheck0[0xdU] = __Vdlyvval__cordicg__DOT__pluscheck0__v12;
    vlSelf->cordicg__DOT__pluscheck0[0xeU] = __Vdlyvval__cordicg__DOT__pluscheck0__v13;
    vlSelf->cordicg__DOT__pluscheck0[0xfU] = __Vdlyvval__cordicg__DOT__pluscheck0__v14;
    vlSelf->cordicg__DOT__pluscheck0[0x10U] = __Vdlyvval__cordicg__DOT__pluscheck0__v15;
    vlSelf->cordicg__DOT__pluscheck[1U] = __Vdlyvval__cordicg__DOT__pluscheck__v0;
    vlSelf->cordicg__DOT__pluscheck[2U] = __Vdlyvval__cordicg__DOT__pluscheck__v1;
    vlSelf->cordicg__DOT__pluscheck[3U] = __Vdlyvval__cordicg__DOT__pluscheck__v2;
    vlSelf->cordicg__DOT__pluscheck[4U] = __Vdlyvval__cordicg__DOT__pluscheck__v3;
    vlSelf->cordicg__DOT__pluscheck[5U] = __Vdlyvval__cordicg__DOT__pluscheck__v4;
    vlSelf->cordicg__DOT__pluscheck[6U] = __Vdlyvval__cordicg__DOT__pluscheck__v5;
    vlSelf->cordicg__DOT__pluscheck[7U] = __Vdlyvval__cordicg__DOT__pluscheck__v6;
    vlSelf->cordicg__DOT__pluscheck[8U] = __Vdlyvval__cordicg__DOT__pluscheck__v7;
    vlSelf->cordicg__DOT__pluscheck[9U] = __Vdlyvval__cordicg__DOT__pluscheck__v8;
    vlSelf->cordicg__DOT__pluscheck[0xaU] = __Vdlyvval__cordicg__DOT__pluscheck__v9;
    vlSelf->cordicg__DOT__pluscheck[0xbU] = __Vdlyvval__cordicg__DOT__pluscheck__v10;
    vlSelf->cordicg__DOT__pluscheck[0xcU] = __Vdlyvval__cordicg__DOT__pluscheck__v11;
    vlSelf->cordicg__DOT__pluscheck[0xdU] = __Vdlyvval__cordicg__DOT__pluscheck__v12;
    vlSelf->cordicg__DOT__pluscheck[0xeU] = __Vdlyvval__cordicg__DOT__pluscheck__v13;
    vlSelf->cordicg__DOT__pluscheck[0xfU] = __Vdlyvval__cordicg__DOT__pluscheck__v14;
    vlSelf->cordicg__DOT__pluscheck[0x10U] = __Vdlyvval__cordicg__DOT__pluscheck__v15;
    vlSelf->cordicg__DOT__x[0U] = __Vdlyvval__cordicg__DOT__x__v0;
    vlSelf->cordicg__DOT__x[1U] = __Vdlyvval__cordicg__DOT__x__v1;
    vlSelf->cordicg__DOT__x[2U] = __Vdlyvval__cordicg__DOT__x__v2;
    vlSelf->cordicg__DOT__x[3U] = __Vdlyvval__cordicg__DOT__x__v3;
    vlSelf->cordicg__DOT__x[4U] = __Vdlyvval__cordicg__DOT__x__v4;
    vlSelf->cordicg__DOT__x[5U] = __Vdlyvval__cordicg__DOT__x__v5;
    vlSelf->cordicg__DOT__x[6U] = __Vdlyvval__cordicg__DOT__x__v6;
    vlSelf->cordicg__DOT__x[7U] = __Vdlyvval__cordicg__DOT__x__v7;
    vlSelf->cordicg__DOT__x[8U] = __Vdlyvval__cordicg__DOT__x__v8;
    vlSelf->cordicg__DOT__x[9U] = __Vdlyvval__cordicg__DOT__x__v9;
    vlSelf->cordicg__DOT__x[0xaU] = __Vdlyvval__cordicg__DOT__x__v10;
    vlSelf->cordicg__DOT__x[0xbU] = __Vdlyvval__cordicg__DOT__x__v11;
    vlSelf->cordicg__DOT__x[0xcU] = __Vdlyvval__cordicg__DOT__x__v12;
    vlSelf->cordicg__DOT__x[0xdU] = __Vdlyvval__cordicg__DOT__x__v13;
    vlSelf->cordicg__DOT__x[0xeU] = __Vdlyvval__cordicg__DOT__x__v14;
    vlSelf->cordicg__DOT__x[0xfU] = __Vdlyvval__cordicg__DOT__x__v15;
    vlSelf->cordicg__DOT__x[0x10U] = __Vdlyvval__cordicg__DOT__x__v16;
    vlSelf->cordicg__DOT__y[0U] = __Vdlyvval__cordicg__DOT__y__v0;
    vlSelf->cordicg__DOT__y[1U] = __Vdlyvval__cordicg__DOT__y__v1;
    vlSelf->cordicg__DOT__y[2U] = __Vdlyvval__cordicg__DOT__y__v2;
    vlSelf->cordicg__DOT__y[3U] = __Vdlyvval__cordicg__DOT__y__v3;
    vlSelf->cordicg__DOT__y[4U] = __Vdlyvval__cordicg__DOT__y__v4;
    vlSelf->cordicg__DOT__y[5U] = __Vdlyvval__cordicg__DOT__y__v5;
    vlSelf->cordicg__DOT__y[6U] = __Vdlyvval__cordicg__DOT__y__v6;
    vlSelf->cordicg__DOT__y[7U] = __Vdlyvval__cordicg__DOT__y__v7;
    vlSelf->cordicg__DOT__y[8U] = __Vdlyvval__cordicg__DOT__y__v8;
    vlSelf->cordicg__DOT__y[9U] = __Vdlyvval__cordicg__DOT__y__v9;
    vlSelf->cordicg__DOT__y[0xaU] = __Vdlyvval__cordicg__DOT__y__v10;
    vlSelf->cordicg__DOT__y[0xbU] = __Vdlyvval__cordicg__DOT__y__v11;
    vlSelf->cordicg__DOT__y[0xcU] = __Vdlyvval__cordicg__DOT__y__v12;
    vlSelf->cordicg__DOT__y[0xdU] = __Vdlyvval__cordicg__DOT__y__v13;
    vlSelf->cordicg__DOT__y[0xeU] = __Vdlyvval__cordicg__DOT__y__v14;
    vlSelf->cordicg__DOT__y[0xfU] = __Vdlyvval__cordicg__DOT__y__v15;
    vlSelf->cordicg__DOT__y[0x10U] = __Vdlyvval__cordicg__DOT__y__v16;
    vlSelf->cordicg__DOT__z[0U] = __Vdlyvval__cordicg__DOT__z__v0;
    vlSelf->cordicg__DOT__z[1U] = __Vdlyvval__cordicg__DOT__z__v1;
    vlSelf->cordicg__DOT__z[2U] = __Vdlyvval__cordicg__DOT__z__v2;
    vlSelf->cordicg__DOT__z[3U] = __Vdlyvval__cordicg__DOT__z__v3;
    vlSelf->cordicg__DOT__z[4U] = __Vdlyvval__cordicg__DOT__z__v4;
    vlSelf->cordicg__DOT__z[5U] = __Vdlyvval__cordicg__DOT__z__v5;
    vlSelf->cordicg__DOT__z[6U] = __Vdlyvval__cordicg__DOT__z__v6;
    vlSelf->cordicg__DOT__z[7U] = __Vdlyvval__cordicg__DOT__z__v7;
    vlSelf->cordicg__DOT__z[8U] = __Vdlyvval__cordicg__DOT__z__v8;
    vlSelf->cordicg__DOT__z[9U] = __Vdlyvval__cordicg__DOT__z__v9;
    vlSelf->cordicg__DOT__z[0xaU] = __Vdlyvval__cordicg__DOT__z__v10;
    vlSelf->cordicg__DOT__z[0xbU] = __Vdlyvval__cordicg__DOT__z__v11;
    vlSelf->cordicg__DOT__z[0xcU] = __Vdlyvval__cordicg__DOT__z__v12;
    vlSelf->cordicg__DOT__z[0xdU] = __Vdlyvval__cordicg__DOT__z__v13;
    vlSelf->cordicg__DOT__z[0xeU] = __Vdlyvval__cordicg__DOT__z__v14;
    vlSelf->cordicg__DOT__z[0xfU] = __Vdlyvval__cordicg__DOT__z__v15;
    vlSelf->cordicg__DOT__z[0x10U] = __Vdlyvval__cordicg__DOT__z__v16;
    vlSelf->multidelay__DOT__dout = (1U & ((IData)(vlSelf->multidelay__DOT__usual__DOT__shifter) 
                                           >> 0xcU));
    vlSelf->cordicg__DOT__reg_delay__DOT__dout = (1U 
                                                  & (vlSelf->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                                                     >> 0x13U));
    if (vlSelf->gphtime) {
        vlSelf->gphaseinit = 1U;
        vlSelf->freqcossinpdelay__DOT__dout[0U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x190U];
        vlSelf->freqcossinpdelay__DOT__dout[1U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x191U];
        vlSelf->freqcossinpdelay__DOT__dout[2U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x192U];
        vlSelf->freqcossinpdelay__DOT__dout[3U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x193U];
        vlSelf->freqcossinpdelay__DOT__dout[4U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x194U];
        vlSelf->freqcossinpdelay__DOT__dout[5U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x195U];
        vlSelf->freqcossinpdelay__DOT__dout[6U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x196U];
        vlSelf->freqcossinpdelay__DOT__dout[7U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x197U];
        vlSelf->freqcossinpdelay__DOT__dout[8U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x198U];
        vlSelf->freqcossinpdelay__DOT__dout[9U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x199U];
        vlSelf->freqcossinpdelay__DOT__dout[0xaU] = 
            vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19aU];
        vlSelf->freqcossinpdelay__DOT__dout[0xbU] = 
            vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19bU];
        vlSelf->freqcossinpdelay__DOT__dout[0xcU] = 
            vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19cU];
        vlSelf->freqcossinpdelay__DOT__dout[0xdU] = 
            vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19dU];
        vlSelf->freqcossinpdelay__DOT__dout[0xeU] = 
            vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19eU];
        vlSelf->freqcossinpdelay__DOT__dout[0xfU] = 
            vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19fU];
        vlSelf->cordicg__DOT__yin_1 = vlSelf->cordicg__DOT__genblk2__DOT__yin_d;
        vlSelf->gateout = vlSelf->gateout_r;
        vlSelf->cordicg__DOT__xin_1 = vlSelf->cordicg__DOT__genblk2__DOT__xin_d;
        vlSelf->ampx_d2 = (0xffffU & (IData)(vlSelf->ampxdelay__DOT__dout));
    } else {
        vlSelf->gphaseinit = 0U;
        vlSelf->freqcossinpdelay__DOT__dout[0U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x190U];
        vlSelf->freqcossinpdelay__DOT__dout[1U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x191U];
        vlSelf->freqcossinpdelay__DOT__dout[2U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x192U];
        vlSelf->freqcossinpdelay__DOT__dout[3U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x193U];
        vlSelf->freqcossinpdelay__DOT__dout[4U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x194U];
        vlSelf->freqcossinpdelay__DOT__dout[5U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x195U];
        vlSelf->freqcossinpdelay__DOT__dout[6U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x196U];
        vlSelf->freqcossinpdelay__DOT__dout[7U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x197U];
        vlSelf->freqcossinpdelay__DOT__dout[8U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x198U];
        vlSelf->freqcossinpdelay__DOT__dout[9U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x199U];
        vlSelf->freqcossinpdelay__DOT__dout[0xaU] = 
            vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19aU];
        vlSelf->freqcossinpdelay__DOT__dout[0xbU] = 
            vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19bU];
        vlSelf->freqcossinpdelay__DOT__dout[0xcU] = 
            vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19cU];
        vlSelf->freqcossinpdelay__DOT__dout[0xdU] = 
            vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19dU];
        vlSelf->freqcossinpdelay__DOT__dout[0xeU] = 
            vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19eU];
        vlSelf->freqcossinpdelay__DOT__dout[0xfU] = 
            vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19fU];
        vlSelf->cordicg__DOT__yin_1 = vlSelf->cordicg__DOT__genblk2__DOT__yin_d;
        vlSelf->gateout = vlSelf->gateout_r;
        vlSelf->cordicg__DOT__xin_1 = vlSelf->cordicg__DOT__genblk2__DOT__xin_d;
        vlSelf->ampx_d2 = 0U;
    }
    vlSelf->cordicg__DOT__phaseout = vlSelf->cordicg__DOT__phaseout_r;
    vlSelf->cordicg__DOT__zg1 = vlSelf->cordicg__DOT__zg0;
    vlSelf->cordicg__DOT__shiftpi = (1U & VL_REDXOR_32(
                                                       (0x18000U 
                                                        & vlSelf->cordicg__DOT__genblk2__DOT__phasein_d)));
    vlSelf->cordicg__DOT__phasein_1 = vlSelf->cordicg__DOT__genblk2__DOT__phasein_d;
    vlSelf->phaseinit = (0x1ffffU & ((vlSelf->phasetime 
                                      >> 0xaU) + vlSelf->pinidelay__DOT__dout));
    vlSelf->phtime__DOT__phasetime_r2 = vlSelf->phtime__DOT__phasetime_r1;
    vlSelf->cordicg__DOT__stage__BRA__0__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__1__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[1U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__2__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[2U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__3__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[3U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__4__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[4U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__5__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[5U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__6__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[6U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__7__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[7U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__8__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[8U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__9__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[9U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__10__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xaU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__11__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xbU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__12__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xcU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__13__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xdU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__14__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xeU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__15__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xfU] >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0U] = (1U & (vlSelf->cordicg__DOT__z
                                               [0U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[1U] = (1U & (vlSelf->cordicg__DOT__z
                                               [1U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[2U] = (1U & (vlSelf->cordicg__DOT__z
                                               [2U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[3U] = (1U & (vlSelf->cordicg__DOT__z
                                               [3U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[4U] = (1U & (vlSelf->cordicg__DOT__z
                                               [4U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[5U] = (1U & (vlSelf->cordicg__DOT__z
                                               [5U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[6U] = (1U & (vlSelf->cordicg__DOT__z
                                               [6U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[7U] = (1U & (vlSelf->cordicg__DOT__z
                                               [7U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[8U] = (1U & (vlSelf->cordicg__DOT__z
                                               [8U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[9U] = (1U & (vlSelf->cordicg__DOT__z
                                               [9U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xaU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xaU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xbU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xbU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xcU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xcU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xdU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xdU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xeU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xeU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xfU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xfU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__error = vlSelf->cordicg__DOT__errorr;
    vlSelf->cordicg__DOT__genblk5__DOT__ydummy = (1U 
                                                  & ((vlSelf->cordicg__DOT__ysum3 
                                                      - vlSelf->cordicg__DOT__ysum2_d) 
                                                     >> 0x10U));
    vlSelf->cordicg__DOT__yout_r = (0xffffU & (vlSelf->cordicg__DOT__ysum3 
                                               - vlSelf->cordicg__DOT__ysum2_d));
    vlSelf->cordicg__DOT__genblk5__DOT__xdummy = (1U 
                                                  & ((vlSelf->cordicg__DOT__xsum3 
                                                      - vlSelf->cordicg__DOT__xsum2_d) 
                                                     >> 0x10U));
    vlSelf->cordicg__DOT__xout_r = (0xffffU & (vlSelf->cordicg__DOT__xsum3 
                                               - vlSelf->cordicg__DOT__xsum2_d));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[0xfU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[0xeU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[0xdU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[0xcU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[0xbU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[0xaU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[9U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[8U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[7U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[6U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[5U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[4U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[3U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[2U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[1U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    vlSelf->multix[0U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[0xfU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[0xeU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[0xdU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[0xcU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[0xbU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[0xaU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[9U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[8U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[7U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[6U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[5U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[4U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[3U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[2U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[1U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    vlSelf->multiy[0U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    vlSelf->multiy16x16[0U] = vlSelf->multiy16x16_r[0U];
    vlSelf->multiy16x16[1U] = vlSelf->multiy16x16_r[1U];
    vlSelf->multiy16x16[2U] = vlSelf->multiy16x16_r[2U];
    vlSelf->multiy16x16[3U] = vlSelf->multiy16x16_r[3U];
    vlSelf->multiy16x16[4U] = vlSelf->multiy16x16_r[4U];
    vlSelf->multiy16x16[5U] = vlSelf->multiy16x16_r[5U];
    vlSelf->multiy16x16[6U] = vlSelf->multiy16x16_r[6U];
    vlSelf->multiy16x16[7U] = vlSelf->multiy16x16_r[7U];
    vlSelf->multix16x16[0U] = vlSelf->multix16x16_r[0U];
    vlSelf->multix16x16[1U] = vlSelf->multix16x16_r[1U];
    vlSelf->multix16x16[2U] = vlSelf->multix16x16_r[2U];
    vlSelf->multix16x16[3U] = vlSelf->multix16x16_r[3U];
    vlSelf->multix16x16[4U] = vlSelf->multix16x16_r[4U];
    vlSelf->multix16x16[5U] = vlSelf->multix16x16_r[5U];
    vlSelf->multix16x16[6U] = vlSelf->multix16x16_r[6U];
    vlSelf->multix16x16[7U] = vlSelf->multix16x16_r[7U];
    vlSelf->gmulti = vlSelf->multidelay__DOT__dout;
    vlSelf->multidelay__DOT__din = vlSelf->cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->cordicg__DOT__gout = vlSelf->cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->gcordic = vlSelf->cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->freqcossinp32x16_d[0U] = vlSelf->freqcossinpdelay__DOT__dout[0U];
    vlSelf->freqcossinp32x16_d[1U] = vlSelf->freqcossinpdelay__DOT__dout[1U];
    vlSelf->freqcossinp32x16_d[2U] = vlSelf->freqcossinpdelay__DOT__dout[2U];
    vlSelf->freqcossinp32x16_d[3U] = vlSelf->freqcossinpdelay__DOT__dout[3U];
    vlSelf->freqcossinp32x16_d[4U] = vlSelf->freqcossinpdelay__DOT__dout[4U];
    vlSelf->freqcossinp32x16_d[5U] = vlSelf->freqcossinpdelay__DOT__dout[5U];
    vlSelf->freqcossinp32x16_d[6U] = vlSelf->freqcossinpdelay__DOT__dout[6U];
    vlSelf->freqcossinp32x16_d[7U] = vlSelf->freqcossinpdelay__DOT__dout[7U];
    vlSelf->freqcossinp32x16_d[8U] = vlSelf->freqcossinpdelay__DOT__dout[8U];
    vlSelf->freqcossinp32x16_d[9U] = vlSelf->freqcossinpdelay__DOT__dout[9U];
    vlSelf->freqcossinp32x16_d[0xaU] = vlSelf->freqcossinpdelay__DOT__dout[0xaU];
    vlSelf->freqcossinp32x16_d[0xbU] = vlSelf->freqcossinpdelay__DOT__dout[0xbU];
    vlSelf->freqcossinp32x16_d[0xcU] = vlSelf->freqcossinpdelay__DOT__dout[0xcU];
    vlSelf->freqcossinp32x16_d[0xdU] = vlSelf->freqcossinpdelay__DOT__dout[0xdU];
    vlSelf->freqcossinp32x16_d[0xeU] = vlSelf->freqcossinpdelay__DOT__dout[0xeU];
    vlSelf->freqcossinp32x16_d[0xfU] = vlSelf->freqcossinpdelay__DOT__dout[0xfU];
    vlSelf->ampxdelay__DOT__dout = (vlSelf->ampxdelay__DOT__usual__DOT__shifter[4U] 
                                    >> 0x10U);
    vlSelf->gphtime = (1U & ((IData)(vlSelf->phtime__DOT__gatesr) 
                             >> 4U));
    vlSelf->cordicg__DOT__phaseout1 = vlSelf->cordicg__DOT__phaseout;
    vlSelf->phasetime = vlSelf->phtime__DOT__phasetime_r3;
    vlSelf->pinidelay__DOT__dout = (0x1ffffU & ((vlSelf->pinidelay__DOT__usual__DOT__shifter[5U] 
                                                 << 7U) 
                                                | (vlSelf->pinidelay__DOT__usual__DOT__shifter[4U] 
                                                   >> 0x19U)));
    vlSelf->genblk2__BRA__15__KET____DOT__zr = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__14__KET____DOT__zr = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__13__KET____DOT__zr = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__12__KET____DOT__zr = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__11__KET____DOT__zr = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__10__KET____DOT__zr = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__9__KET____DOT__zr = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__8__KET____DOT__zr = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__7__KET____DOT__zr = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__6__KET____DOT__zr = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__5__KET____DOT__zr = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__4__KET____DOT__zr = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__3__KET____DOT__zr = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__2__KET____DOT__zr = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__1__KET____DOT__zr = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__0__KET____DOT__zr = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__15__KET____DOT__zi = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__14__KET____DOT__zi = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__13__KET____DOT__zi = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__12__KET____DOT__zi = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__11__KET____DOT__zi = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__10__KET____DOT__zi = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__9__KET____DOT__zi = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__8__KET____DOT__zi = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__7__KET____DOT__zi = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__6__KET____DOT__zi = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__5__KET____DOT__zi = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__4__KET____DOT__zi = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__3__KET____DOT__zi = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__2__KET____DOT__zi = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__1__KET____DOT__zi = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__0__KET____DOT__zi = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    vlSelf->cordicg__DOT__gin = vlSelf->gphaseinit;
    vlSelf->ampx_d = vlSelf->ampxdelay__DOT__dout;
    vlSelf->phtime__DOT__gateout = vlSelf->gphtime;
    vlSelf->cordicg__DOT__xin = vlSelf->ampx_d2;
    vlSelf->cordicg__DOT__zg0 = vlSelf->cordicg__DOT__zg;
    vlSelf->phtime__DOT__phasetime = vlSelf->phasetime;
    vlSelf->pini_d = vlSelf->pinidelay__DOT__dout;
    vlSelf->cordicg__DOT__phasein = vlSelf->phaseinit;
    vlSelf->phtime__DOT__phasetime_r1 = vlSelf->phtime__DOT__phasetime_r0;
    vlSelf->cordicg__DOT__ysum2_d = vlSelf->cordicg__DOT__ysum2;
    vlSelf->cordicg__DOT__ysum3 = (0x1ffffU & (vlSelf->cordicg__DOT__ysum0 
                                               - vlSelf->cordicg__DOT__ysum1));
    vlSelf->cordicg__DOT__xsum2_d = vlSelf->cordicg__DOT__xsum2;
    vlSelf->cordicg__DOT__xsum3 = (0x1ffffU & (vlSelf->cordicg__DOT__xsum0 
                                               - vlSelf->cordicg__DOT__xsum1));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xr4 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xr3;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__mult0;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xi4 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xi3;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__common 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__mult0;
    vlSelf->cordicg__DOT__reg_delay__DOT__din = vlSelf->cordicg__DOT__gin;
    vlSelf->cordicg__DOT__zg = vlSelf->cordicg__DOT__z
        [0xfU];
    vlSelf->phtime__DOT__phasetime_r0 = (0x7ffffffU 
                                         & (IData)(vlSelf->phtime__DOT__phasetime_w));
    vlSelf->cordicg__DOT__ysum2 = (0x1ffffU & (VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__yg, 0xcU) 
                                               - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__yg, 0xeU)));
    vlSelf->cordicg__DOT__ysum0 = (0x1ffffU & (VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__yg, 1U) 
                                               + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__yg, 3U)));
    vlSelf->cordicg__DOT__ysum1 = (0x1ffffU & (VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__yg, 6U) 
                                               + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__yg, 9U)));
    vlSelf->cordicg__DOT__xsum2 = (0x1ffffU & (VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__xg, 0xcU) 
                                               - VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__xg, 0xeU)));
    vlSelf->cordicg__DOT__xsum0 = (0x1ffffU & (VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__xg, 1U) 
                                               + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__xg, 3U)));
    vlSelf->cordicg__DOT__xsum1 = (0x1ffffU & (VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__xg, 6U) 
                                               + VL_SHIFTRS_III(17,17,32, vlSelf->cordicg__DOT__xg, 9U)));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xr3 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xr2;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yr3 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yr2;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yi3 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yi2;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xi3 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xi2;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->phtime__DOT__phasetime_w = (0x3fffffffffffffULL 
                                        & ((QData)((IData)(vlSelf->phtime__DOT__freq_r)) 
                                           * (QData)((IData)(vlSelf->phtime__DOT__tcnt_r))));
    vlSelf->cordicg__DOT__yg = vlSelf->cordicg__DOT__y
        [0xfU];
    vlSelf->cordicg__DOT__xg = vlSelf->cordicg__DOT__x
        [0xfU];
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xr2 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xr1;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yr2 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yr1;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xi2 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xi1;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yi2 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yi1;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xi1))));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__15__KET____DOT__envxi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__15__KET____DOT__envyi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__14__KET____DOT__envxi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__14__KET____DOT__envyi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__13__KET____DOT__envxi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__13__KET____DOT__envyi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__12__KET____DOT__envxi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__12__KET____DOT__envyi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__11__KET____DOT__envxi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__11__KET____DOT__envyi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__10__KET____DOT__envxi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__10__KET____DOT__envyi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__9__KET____DOT__envxi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__9__KET____DOT__envyi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__8__KET____DOT__envxi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__8__KET____DOT__envyi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__7__KET____DOT__envxi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__7__KET____DOT__envyi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__6__KET____DOT__envxi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__6__KET____DOT__envyi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__5__KET____DOT__envxi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__5__KET____DOT__envyi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__4__KET____DOT__envxi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__4__KET____DOT__envyi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__3__KET____DOT__envxi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__3__KET____DOT__envyi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__2__KET____DOT__envxi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__2__KET____DOT__envyi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__1__KET____DOT__envxi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__1__KET____DOT__envyi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yr1 
        = vlSelf->genblk2__BRA__0__KET____DOT__envxi;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yi1 
        = vlSelf->genblk2__BRA__0__KET____DOT__envyi;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__15__KET____DOT__envxi = vlSelf->envx
        [0xfU];
    vlSelf->genblk2__BRA__15__KET____DOT__envyi = vlSelf->envy
        [0xfU];
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__14__KET____DOT__envxi = vlSelf->envx
        [0xeU];
    vlSelf->genblk2__BRA__14__KET____DOT__envyi = vlSelf->envy
        [0xeU];
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__13__KET____DOT__envxi = vlSelf->envx
        [0xdU];
    vlSelf->genblk2__BRA__13__KET____DOT__envyi = vlSelf->envy
        [0xdU];
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__12__KET____DOT__envxi = vlSelf->envx
        [0xcU];
    vlSelf->genblk2__BRA__12__KET____DOT__envyi = vlSelf->envy
        [0xcU];
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__11__KET____DOT__envxi = vlSelf->envx
        [0xbU];
    vlSelf->genblk2__BRA__11__KET____DOT__envyi = vlSelf->envy
        [0xbU];
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__10__KET____DOT__envxi = vlSelf->envx
        [0xaU];
    vlSelf->genblk2__BRA__10__KET____DOT__envyi = vlSelf->envy
        [0xaU];
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__9__KET____DOT__envxi = vlSelf->envx
        [9U];
    vlSelf->genblk2__BRA__9__KET____DOT__envyi = vlSelf->envy
        [9U];
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__8__KET____DOT__envxi = vlSelf->envx
        [8U];
    vlSelf->genblk2__BRA__8__KET____DOT__envyi = vlSelf->envy
        [8U];
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__7__KET____DOT__envxi = vlSelf->envx
        [7U];
    vlSelf->genblk2__BRA__7__KET____DOT__envyi = vlSelf->envy
        [7U];
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__6__KET____DOT__envxi = vlSelf->envx
        [6U];
    vlSelf->genblk2__BRA__6__KET____DOT__envyi = vlSelf->envy
        [6U];
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__5__KET____DOT__envxi = vlSelf->envx
        [5U];
    vlSelf->genblk2__BRA__5__KET____DOT__envyi = vlSelf->envy
        [5U];
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__4__KET____DOT__envxi = vlSelf->envx
        [4U];
    vlSelf->genblk2__BRA__4__KET____DOT__envyi = vlSelf->envy
        [4U];
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__3__KET____DOT__envxi = vlSelf->envx
        [3U];
    vlSelf->genblk2__BRA__3__KET____DOT__envyi = vlSelf->envy
        [3U];
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__2__KET____DOT__envxi = vlSelf->envx
        [2U];
    vlSelf->genblk2__BRA__2__KET____DOT__envyi = vlSelf->envy
        [2U];
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__1__KET____DOT__envxi = vlSelf->envx
        [1U];
    vlSelf->genblk2__BRA__1__KET____DOT__envyi = vlSelf->envy
        [1U];
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__0__KET____DOT__envxi = vlSelf->envx
        [0U];
    vlSelf->genblk2__BRA__0__KET____DOT__envyi = vlSelf->envy
        [0U];
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__15__KET____DOT__envxi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__15__KET____DOT__envyi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__14__KET____DOT__envxi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__14__KET____DOT__envyi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__13__KET____DOT__envxi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__13__KET____DOT__envyi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__12__KET____DOT__envxi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__12__KET____DOT__envyi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__11__KET____DOT__envxi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__11__KET____DOT__envyi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__10__KET____DOT__envxi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__10__KET____DOT__envyi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__9__KET____DOT__envxi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__9__KET____DOT__envyi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__8__KET____DOT__envxi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__8__KET____DOT__envyi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__7__KET____DOT__envxi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__7__KET____DOT__envyi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__6__KET____DOT__envxi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__6__KET____DOT__envyi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__5__KET____DOT__envxi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__5__KET____DOT__envyi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__4__KET____DOT__envxi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__4__KET____DOT__envyi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__3__KET____DOT__envxi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__3__KET____DOT__envyi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__2__KET____DOT__envxi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__2__KET____DOT__envyi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__1__KET____DOT__envxi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__1__KET____DOT__envyi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__0__KET____DOT__envxi;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__0__KET____DOT__envyi;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk2__BRA__15__KET____DOT__zr1 = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__15__KET____DOT__zi1 = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__14__KET____DOT__zr1 = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__14__KET____DOT__zi1 = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__13__KET____DOT__zr1 = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__13__KET____DOT__zi1 = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__12__KET____DOT__zr1 = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__12__KET____DOT__zi1 = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__11__KET____DOT__zr1 = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__11__KET____DOT__zi1 = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__10__KET____DOT__zr1 = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__10__KET____DOT__zi1 = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__9__KET____DOT__zr1 = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__9__KET____DOT__zi1 = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__8__KET____DOT__zr1 = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__8__KET____DOT__zi1 = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__7__KET____DOT__zr1 = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__7__KET____DOT__zi1 = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__6__KET____DOT__zr1 = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__6__KET____DOT__zi1 = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__5__KET____DOT__zr1 = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__5__KET____DOT__zi1 = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__4__KET____DOT__zr1 = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__4__KET____DOT__zi1 = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__3__KET____DOT__zr1 = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__3__KET____DOT__zi1 = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__2__KET____DOT__zr1 = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__2__KET____DOT__zi1 = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__1__KET____DOT__zr1 = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__1__KET____DOT__zi1 = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__0__KET____DOT__zr1 = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__0__KET____DOT__zi1 = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__15__KET____DOT__cospi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__15__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__14__KET____DOT__cospi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__14__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__13__KET____DOT__cospi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__13__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__12__KET____DOT__cospi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__12__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__11__KET____DOT__cospi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__11__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__10__KET____DOT__cospi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__10__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__9__KET____DOT__cospi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__9__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__8__KET____DOT__cospi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__8__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__7__KET____DOT__cospi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__7__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__6__KET____DOT__cospi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__6__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__5__KET____DOT__cospi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__5__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__4__KET____DOT__cospi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__4__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__3__KET____DOT__cospi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__3__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__2__KET____DOT__cospi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__2__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__1__KET____DOT__cospi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__1__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xr1 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xi1 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk2__BRA__0__KET____DOT__cospi;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk2__BRA__0__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__15__KET____DOT__cospi = vlSelf->cosp
        [0xfU];
    vlSelf->genblk2__BRA__15__KET____DOT__sinpi = vlSelf->sinp
        [0xfU];
    vlSelf->genblk2__BRA__14__KET____DOT__cospi = vlSelf->cosp
        [0xeU];
    vlSelf->genblk2__BRA__14__KET____DOT__sinpi = vlSelf->sinp
        [0xeU];
    vlSelf->genblk2__BRA__13__KET____DOT__cospi = vlSelf->cosp
        [0xdU];
    vlSelf->genblk2__BRA__13__KET____DOT__sinpi = vlSelf->sinp
        [0xdU];
    vlSelf->genblk2__BRA__12__KET____DOT__cospi = vlSelf->cosp
        [0xcU];
    vlSelf->genblk2__BRA__12__KET____DOT__sinpi = vlSelf->sinp
        [0xcU];
    vlSelf->genblk2__BRA__11__KET____DOT__cospi = vlSelf->cosp
        [0xbU];
    vlSelf->genblk2__BRA__11__KET____DOT__sinpi = vlSelf->sinp
        [0xbU];
    vlSelf->genblk2__BRA__10__KET____DOT__cospi = vlSelf->cosp
        [0xaU];
    vlSelf->genblk2__BRA__10__KET____DOT__sinpi = vlSelf->sinp
        [0xaU];
    vlSelf->genblk2__BRA__9__KET____DOT__cospi = vlSelf->cosp
        [9U];
    vlSelf->genblk2__BRA__9__KET____DOT__sinpi = vlSelf->sinp
        [9U];
    vlSelf->genblk2__BRA__8__KET____DOT__cospi = vlSelf->cosp
        [8U];
    vlSelf->genblk2__BRA__8__KET____DOT__sinpi = vlSelf->sinp
        [8U];
    vlSelf->genblk2__BRA__7__KET____DOT__cospi = vlSelf->cosp
        [7U];
    vlSelf->genblk2__BRA__7__KET____DOT__sinpi = vlSelf->sinp
        [7U];
    vlSelf->genblk2__BRA__6__KET____DOT__cospi = vlSelf->cosp
        [6U];
    vlSelf->genblk2__BRA__6__KET____DOT__sinpi = vlSelf->sinp
        [6U];
    vlSelf->genblk2__BRA__5__KET____DOT__cospi = vlSelf->cosp
        [5U];
    vlSelf->genblk2__BRA__5__KET____DOT__sinpi = vlSelf->sinp
        [5U];
    vlSelf->genblk2__BRA__4__KET____DOT__cospi = vlSelf->cosp
        [4U];
    vlSelf->genblk2__BRA__4__KET____DOT__sinpi = vlSelf->sinp
        [4U];
    vlSelf->genblk2__BRA__3__KET____DOT__cospi = vlSelf->cosp
        [3U];
    vlSelf->genblk2__BRA__3__KET____DOT__sinpi = vlSelf->sinp
        [3U];
    vlSelf->genblk2__BRA__2__KET____DOT__cospi = vlSelf->cosp
        [2U];
    vlSelf->genblk2__BRA__2__KET____DOT__sinpi = vlSelf->sinp
        [2U];
    vlSelf->genblk2__BRA__1__KET____DOT__cospi = vlSelf->cosp
        [1U];
    vlSelf->genblk2__BRA__1__KET____DOT__sinpi = vlSelf->sinp
        [1U];
    vlSelf->cos = vlSelf->cos_w;
    vlSelf->sin = vlSelf->sin_w;
    vlSelf->genblk2__BRA__0__KET____DOT__cospi = vlSelf->cosp
        [0U];
    vlSelf->genblk2__BRA__0__KET____DOT__sinpi = vlSelf->sinp
        [0U];
    vlSelf->cos_w = vlSelf->cordicg__DOT__xout_r;
    vlSelf->sin_w = vlSelf->cordicg__DOT__yout_r;
    vlSelf->cosp[1U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x191U] 
                        >> 0x10U);
    vlSelf->cosp[2U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x192U] 
                        >> 0x10U);
    vlSelf->cosp[3U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x193U] 
                        >> 0x10U);
    vlSelf->cosp[4U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x194U] 
                        >> 0x10U);
    vlSelf->cosp[5U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x195U] 
                        >> 0x10U);
    vlSelf->cosp[6U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x196U] 
                        >> 0x10U);
    vlSelf->cosp[7U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x197U] 
                        >> 0x10U);
    vlSelf->cosp[8U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x198U] 
                        >> 0x10U);
    vlSelf->cosp[9U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x199U] 
                        >> 0x10U);
    vlSelf->cosp[0xaU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19aU] 
                          >> 0x10U);
    vlSelf->cosp[0xbU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19bU] 
                          >> 0x10U);
    vlSelf->cosp[0xcU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19cU] 
                          >> 0x10U);
    vlSelf->cosp[0xdU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19dU] 
                          >> 0x10U);
    vlSelf->cosp[0xeU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19eU] 
                          >> 0x10U);
    vlSelf->cosp[0xfU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19fU] 
                          >> 0x10U);
    vlSelf->sinp[1U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x191U]);
    vlSelf->sinp[2U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x192U]);
    vlSelf->sinp[3U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x193U]);
    vlSelf->sinp[4U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x194U]);
    vlSelf->sinp[5U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x195U]);
    vlSelf->sinp[6U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x196U]);
    vlSelf->sinp[7U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x197U]);
    vlSelf->sinp[8U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x198U]);
    vlSelf->sinp[9U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x199U]);
    vlSelf->sinp[0xaU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19aU]);
    vlSelf->sinp[0xbU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19bU]);
    vlSelf->sinp[0xcU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19cU]);
    vlSelf->sinp[0xdU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19dU]);
    vlSelf->sinp[0xeU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19eU]);
    vlSelf->sinp[0xfU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19fU]);
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__15__KET____DOT__cospi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__15__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__14__KET____DOT__cospi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__14__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__13__KET____DOT__cospi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__13__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__12__KET____DOT__cospi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__12__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__11__KET____DOT__cospi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__11__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__10__KET____DOT__cospi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__10__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__9__KET____DOT__cospi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__9__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__8__KET____DOT__cospi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__8__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__7__KET____DOT__cospi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__7__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__6__KET____DOT__cospi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__6__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__5__KET____DOT__cospi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__5__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__4__KET____DOT__cospi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__4__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__3__KET____DOT__cospi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__3__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__2__KET____DOT__cospi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__2__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__1__KET____DOT__cospi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__1__KET____DOT__sinpi;
    vlSelf->cordicg__DOT__xout = vlSelf->cos_w;
    vlSelf->cordicg__DOT__xout1 = vlSelf->cos_w;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->cordicg__DOT__yout = vlSelf->sin_w;
    vlSelf->cordicg__DOT__yout1 = vlSelf->sin_w;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__0__KET____DOT__cospi;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__0__KET____DOT__sinpi;
}

VL_INLINE_OPT void Vtop_ammod__N10___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__1(Vtop_ammod__N10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__1\n"); );
    // Body
    vlSelf->phtime__DOT__tcnt = vlSelf->tcnt;
    vlSelf->freqcossinpdelay__DOT__din[0U] = vlSelf->freqcossinp32x16[0U];
    vlSelf->freqcossinpdelay__DOT__din[1U] = vlSelf->freqcossinp32x16[1U];
    vlSelf->freqcossinpdelay__DOT__din[2U] = vlSelf->freqcossinp32x16[2U];
    vlSelf->freqcossinpdelay__DOT__din[3U] = vlSelf->freqcossinp32x16[3U];
    vlSelf->freqcossinpdelay__DOT__din[4U] = vlSelf->freqcossinp32x16[4U];
    vlSelf->freqcossinpdelay__DOT__din[5U] = vlSelf->freqcossinp32x16[5U];
    vlSelf->freqcossinpdelay__DOT__din[6U] = vlSelf->freqcossinp32x16[6U];
    vlSelf->freqcossinpdelay__DOT__din[7U] = vlSelf->freqcossinp32x16[7U];
    vlSelf->freqcossinpdelay__DOT__din[8U] = vlSelf->freqcossinp32x16[8U];
    vlSelf->freqcossinpdelay__DOT__din[9U] = vlSelf->freqcossinp32x16[9U];
    vlSelf->freqcossinpdelay__DOT__din[0xaU] = vlSelf->freqcossinp32x16[0xaU];
    vlSelf->freqcossinpdelay__DOT__din[0xbU] = vlSelf->freqcossinp32x16[0xbU];
    vlSelf->freqcossinpdelay__DOT__din[0xcU] = vlSelf->freqcossinp32x16[0xcU];
    vlSelf->freqcossinpdelay__DOT__din[0xdU] = vlSelf->freqcossinp32x16[0xdU];
    vlSelf->freqcossinpdelay__DOT__din[0xeU] = vlSelf->freqcossinp32x16[0xeU];
    vlSelf->freqcossinpdelay__DOT__din[0xfU] = vlSelf->freqcossinp32x16[0xfU];
    vlSelf->freq32 = vlSelf->freqcossinp32x16[0U];
    vlSelf->freq = (vlSelf->freqcossinp32x16[0U] >> 5U);
    vlSelf->envx[0U] = (vlSelf->envxy32x16[0U] >> 0x10U);
    vlSelf->envx[1U] = (vlSelf->envxy32x16[1U] >> 0x10U);
    vlSelf->envx[2U] = (vlSelf->envxy32x16[2U] >> 0x10U);
    vlSelf->envx[3U] = (vlSelf->envxy32x16[3U] >> 0x10U);
    vlSelf->envx[4U] = (vlSelf->envxy32x16[4U] >> 0x10U);
    vlSelf->envx[5U] = (vlSelf->envxy32x16[5U] >> 0x10U);
    vlSelf->envx[6U] = (vlSelf->envxy32x16[6U] >> 0x10U);
    vlSelf->envx[7U] = (vlSelf->envxy32x16[7U] >> 0x10U);
    vlSelf->envx[8U] = (vlSelf->envxy32x16[8U] >> 0x10U);
    vlSelf->envx[9U] = (vlSelf->envxy32x16[9U] >> 0x10U);
    vlSelf->envx[0xaU] = (vlSelf->envxy32x16[0xaU] 
                          >> 0x10U);
    vlSelf->envx[0xbU] = (vlSelf->envxy32x16[0xbU] 
                          >> 0x10U);
    vlSelf->envx[0xcU] = (vlSelf->envxy32x16[0xcU] 
                          >> 0x10U);
    vlSelf->envx[0xdU] = (vlSelf->envxy32x16[0xdU] 
                          >> 0x10U);
    vlSelf->envx[0xeU] = (vlSelf->envxy32x16[0xeU] 
                          >> 0x10U);
    vlSelf->envx[0xfU] = (vlSelf->envxy32x16[0xfU] 
                          >> 0x10U);
    vlSelf->envy[0U] = (0xffffU & vlSelf->envxy32x16[0U]);
    vlSelf->envy[1U] = (0xffffU & vlSelf->envxy32x16[1U]);
    vlSelf->envy[2U] = (0xffffU & vlSelf->envxy32x16[2U]);
    vlSelf->envy[3U] = (0xffffU & vlSelf->envxy32x16[3U]);
    vlSelf->envy[4U] = (0xffffU & vlSelf->envxy32x16[4U]);
    vlSelf->envy[5U] = (0xffffU & vlSelf->envxy32x16[5U]);
    vlSelf->envy[6U] = (0xffffU & vlSelf->envxy32x16[6U]);
    vlSelf->envy[7U] = (0xffffU & vlSelf->envxy32x16[7U]);
    vlSelf->envy[8U] = (0xffffU & vlSelf->envxy32x16[8U]);
    vlSelf->envy[9U] = (0xffffU & vlSelf->envxy32x16[9U]);
    vlSelf->envy[0xaU] = (0xffffU & vlSelf->envxy32x16[0xaU]);
    vlSelf->envy[0xbU] = (0xffffU & vlSelf->envxy32x16[0xbU]);
    vlSelf->envy[0xcU] = (0xffffU & vlSelf->envxy32x16[0xcU]);
    vlSelf->envy[0xdU] = (0xffffU & vlSelf->envxy32x16[0xdU]);
    vlSelf->envy[0xeU] = (0xffffU & vlSelf->envxy32x16[0xeU]);
    vlSelf->envy[0xfU] = (0xffffU & vlSelf->envxy32x16[0xfU]);
    vlSelf->phtime__DOT__gatein = vlSelf->gatein;
    vlSelf->phtime__DOT__freq = vlSelf->freq;
}

VL_INLINE_OPT void Vtop_ammod__N10___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__2(Vtop_ammod__N10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__2\n"); );
    // Body
    vlSelf->pinidelay__DOT__din = vlSelf->pini;
    vlSelf->ampxdelay__DOT__din = vlSelf->ampx;
}

VL_INLINE_OPT void Vtop_ammod__N10___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__0(Vtop_ammod__N10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__0\n"); );
    // Body
    vlSelf->cordicg__DOT__xin = vlSelf->ampx_d2;
    vlSelf->cordicg__DOT__phasein = vlSelf->phaseinit;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__0__KET____DOT__cospi;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__0__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__0__KET____DOT__envxi;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__0__KET____DOT__envyi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__1__KET____DOT__cospi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__1__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__1__KET____DOT__envxi;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__1__KET____DOT__envyi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__2__KET____DOT__cospi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__2__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__2__KET____DOT__envxi;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__2__KET____DOT__envyi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__3__KET____DOT__cospi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__3__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__3__KET____DOT__envxi;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__3__KET____DOT__envyi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__4__KET____DOT__cospi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__4__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__4__KET____DOT__envxi;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__4__KET____DOT__envyi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__5__KET____DOT__cospi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__5__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__5__KET____DOT__envxi;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__5__KET____DOT__envyi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__6__KET____DOT__cospi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__6__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__6__KET____DOT__envxi;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__6__KET____DOT__envyi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__7__KET____DOT__cospi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__7__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__7__KET____DOT__envxi;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__7__KET____DOT__envyi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__8__KET____DOT__cospi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__8__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__8__KET____DOT__envxi;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__8__KET____DOT__envyi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__9__KET____DOT__cospi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__9__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__9__KET____DOT__envxi;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__9__KET____DOT__envyi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__10__KET____DOT__cospi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__10__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__10__KET____DOT__envxi;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__10__KET____DOT__envyi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__11__KET____DOT__cospi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__11__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__11__KET____DOT__envxi;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__11__KET____DOT__envyi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__12__KET____DOT__cospi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__12__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__12__KET____DOT__envxi;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__12__KET____DOT__envyi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__13__KET____DOT__cospi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__13__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__13__KET____DOT__envxi;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__13__KET____DOT__envyi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__14__KET____DOT__cospi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__14__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__14__KET____DOT__envxi;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__14__KET____DOT__envyi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xr 
        = vlSelf->cos;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__xi 
        = vlSelf->sin;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk2__BRA__15__KET____DOT__cospi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk2__BRA__15__KET____DOT__sinpi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yr 
        = vlSelf->genblk2__BRA__15__KET____DOT__envxi;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__yi 
        = vlSelf->genblk2__BRA__15__KET____DOT__envyi;
    vlSelf->cordicg__DOT__error = vlSelf->cordicg__DOT__errorr;
    vlSelf->cordicg__DOT__xin_1 = vlSelf->cordicg__DOT__genblk2__DOT__xin_d;
    vlSelf->cordicg__DOT__yin_1 = vlSelf->cordicg__DOT__genblk2__DOT__yin_d;
    vlSelf->cordicg__DOT__shiftpi = (1U & VL_REDXOR_32(
                                                       (0x18000U 
                                                        & vlSelf->cordicg__DOT__genblk2__DOT__phasein_d)));
    vlSelf->cordicg__DOT__phasein_1 = vlSelf->cordicg__DOT__genblk2__DOT__phasein_d;
    vlSelf->cordicg__DOT__xg = vlSelf->cordicg__DOT__x
        [0xfU];
    vlSelf->cordicg__DOT__yg = vlSelf->cordicg__DOT__y
        [0xfU];
    vlSelf->cordicg__DOT__zg = vlSelf->cordicg__DOT__z
        [0xfU];
    vlSelf->cordicg__DOT__stage__BRA__0__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__1__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[1U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__2__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[2U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__3__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[3U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__4__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[4U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__5__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[5U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__6__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[6U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__7__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[7U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__8__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[8U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__9__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[9U] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__10__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xaU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__11__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xbU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__12__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xcU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__13__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xdU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__14__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xeU] >> 0x10U));
    vlSelf->cordicg__DOT__stage__BRA__15__KET____DOT__plus 
        = (1U & (vlSelf->cordicg__DOT__z[0xfU] >> 0x10U));
    vlSelf->phtime__DOT__phasetime_w = (0x3fffffffffffffULL 
                                        & ((QData)((IData)(vlSelf->phtime__DOT__freq_r)) 
                                           * (QData)((IData)(vlSelf->phtime__DOT__tcnt_r))));
    vlSelf->cordicg__DOT__gin = vlSelf->gphaseinit;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zr 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zr_int;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zi_int;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zi 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zi_int;
    vlSelf->phasetime = vlSelf->phtime__DOT__phasetime_r3;
    vlSelf->pinidelay__DOT__dout = (0x1ffffU & ((vlSelf->pinidelay__DOT__usual__DOT__shifter[5U] 
                                                 << 7U) 
                                                | (vlSelf->pinidelay__DOT__usual__DOT__shifter[4U] 
                                                   >> 0x19U)));
    vlSelf->gphtime = (1U & ((IData)(vlSelf->phtime__DOT__gatesr) 
                             >> 4U));
    vlSelf->ampxdelay__DOT__dout = (vlSelf->ampxdelay__DOT__usual__DOT__shifter[4U] 
                                    >> 0x10U);
    vlSelf->multidelay__DOT__dout = (1U & ((IData)(vlSelf->multidelay__DOT__usual__DOT__shifter) 
                                           >> 0xcU));
    vlSelf->freqcossinpdelay__DOT__dout[0U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x190U];
    vlSelf->freqcossinpdelay__DOT__dout[1U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x191U];
    vlSelf->freqcossinpdelay__DOT__dout[2U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x192U];
    vlSelf->freqcossinpdelay__DOT__dout[3U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x193U];
    vlSelf->freqcossinpdelay__DOT__dout[4U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x194U];
    vlSelf->freqcossinpdelay__DOT__dout[5U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x195U];
    vlSelf->freqcossinpdelay__DOT__dout[6U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x196U];
    vlSelf->freqcossinpdelay__DOT__dout[7U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x197U];
    vlSelf->freqcossinpdelay__DOT__dout[8U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x198U];
    vlSelf->freqcossinpdelay__DOT__dout[9U] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x199U];
    vlSelf->freqcossinpdelay__DOT__dout[0xaU] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19aU];
    vlSelf->freqcossinpdelay__DOT__dout[0xbU] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19bU];
    vlSelf->freqcossinpdelay__DOT__dout[0xcU] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19cU];
    vlSelf->freqcossinpdelay__DOT__dout[0xdU] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19dU];
    vlSelf->freqcossinpdelay__DOT__dout[0xeU] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19eU];
    vlSelf->freqcossinpdelay__DOT__dout[0xfU] = vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19fU];
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int;
    vlSelf->cordicg__DOT__phaseout = vlSelf->cordicg__DOT__phaseout_r;
    vlSelf->gateout = vlSelf->gateout_r;
    vlSelf->cos_w = vlSelf->cordicg__DOT__xout_r;
    vlSelf->sin_w = vlSelf->cordicg__DOT__yout_r;
    vlSelf->cordicg__DOT__reg_delay__DOT__dout = (1U 
                                                  & (vlSelf->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                                                     >> 0x13U));
    vlSelf->cosp[1U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x191U] 
                        >> 0x10U);
    vlSelf->cosp[2U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x192U] 
                        >> 0x10U);
    vlSelf->cosp[3U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x193U] 
                        >> 0x10U);
    vlSelf->cosp[4U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x194U] 
                        >> 0x10U);
    vlSelf->cosp[5U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x195U] 
                        >> 0x10U);
    vlSelf->cosp[6U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x196U] 
                        >> 0x10U);
    vlSelf->cosp[7U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x197U] 
                        >> 0x10U);
    vlSelf->cosp[8U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x198U] 
                        >> 0x10U);
    vlSelf->cosp[9U] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x199U] 
                        >> 0x10U);
    vlSelf->cosp[0xaU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19aU] 
                          >> 0x10U);
    vlSelf->cosp[0xbU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19bU] 
                          >> 0x10U);
    vlSelf->cosp[0xcU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19cU] 
                          >> 0x10U);
    vlSelf->cosp[0xdU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19dU] 
                          >> 0x10U);
    vlSelf->cosp[0xeU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19eU] 
                          >> 0x10U);
    vlSelf->cosp[0xfU] = (vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19fU] 
                          >> 0x10U);
    vlSelf->sinp[1U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x191U]);
    vlSelf->sinp[2U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x192U]);
    vlSelf->sinp[3U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x193U]);
    vlSelf->sinp[4U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x194U]);
    vlSelf->sinp[5U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x195U]);
    vlSelf->sinp[6U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x196U]);
    vlSelf->sinp[7U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x197U]);
    vlSelf->sinp[8U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x198U]);
    vlSelf->sinp[9U] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x199U]);
    vlSelf->sinp[0xaU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19aU]);
    vlSelf->sinp[0xbU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19bU]);
    vlSelf->sinp[0xcU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19cU]);
    vlSelf->sinp[0xdU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19dU]);
    vlSelf->sinp[0xeU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19eU]);
    vlSelf->sinp[0xfU] = (0xffffU & vlSelf->freqcossinpdelay__DOT__usual__DOT__shifter[0x19fU]);
    vlSelf->multix[0U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[1U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[2U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[3U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[4U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[5U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[6U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[7U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[8U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[9U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zr_int 
                                             >> 0xfU)));
    vlSelf->multix[0xaU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->multix[0xbU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->multix[0xcU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->multix[0xdU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->multix[0xeU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->multix[0xfU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zr_int 
                                               >> 0xfU)));
    vlSelf->multiy[0U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[1U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[2U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[3U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[4U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[5U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[6U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[7U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[8U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[9U] = (0xffffU & (IData)((vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zi_int 
                                             >> 0xfU)));
    vlSelf->multiy[0xaU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->multiy[0xbU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->multiy[0xcU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->multiy[0xdU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->multiy[0xeU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->multiy[0xfU] = (0xffffU & (IData)((vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zi_int 
                                               >> 0xfU)));
    vlSelf->cordicg__DOT__plusall[0U] = (1U & (vlSelf->cordicg__DOT__z
                                               [0U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[1U] = (1U & (vlSelf->cordicg__DOT__z
                                               [1U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[2U] = (1U & (vlSelf->cordicg__DOT__z
                                               [2U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[3U] = (1U & (vlSelf->cordicg__DOT__z
                                               [3U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[4U] = (1U & (vlSelf->cordicg__DOT__z
                                               [4U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[5U] = (1U & (vlSelf->cordicg__DOT__z
                                               [5U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[6U] = (1U & (vlSelf->cordicg__DOT__z
                                               [6U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[7U] = (1U & (vlSelf->cordicg__DOT__z
                                               [7U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[8U] = (1U & (vlSelf->cordicg__DOT__z
                                               [8U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[9U] = (1U & (vlSelf->cordicg__DOT__z
                                               [9U] 
                                               >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xaU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xaU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xbU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xbU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xcU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xcU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xdU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xdU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xeU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xeU] 
                                                 >> 0x10U));
    vlSelf->cordicg__DOT__plusall[0xfU] = (1U & (vlSelf->cordicg__DOT__z
                                                 [0xfU] 
                                                 >> 0x10U));
    vlSelf->multix16x16[0U] = vlSelf->multix16x16_r[0U];
    vlSelf->multix16x16[1U] = vlSelf->multix16x16_r[1U];
    vlSelf->multix16x16[2U] = vlSelf->multix16x16_r[2U];
    vlSelf->multix16x16[3U] = vlSelf->multix16x16_r[3U];
    vlSelf->multix16x16[4U] = vlSelf->multix16x16_r[4U];
    vlSelf->multix16x16[5U] = vlSelf->multix16x16_r[5U];
    vlSelf->multix16x16[6U] = vlSelf->multix16x16_r[6U];
    vlSelf->multix16x16[7U] = vlSelf->multix16x16_r[7U];
    vlSelf->multiy16x16[0U] = vlSelf->multiy16x16_r[0U];
    vlSelf->multiy16x16[1U] = vlSelf->multiy16x16_r[1U];
    vlSelf->multiy16x16[2U] = vlSelf->multiy16x16_r[2U];
    vlSelf->multiy16x16[3U] = vlSelf->multiy16x16_r[3U];
    vlSelf->multiy16x16[4U] = vlSelf->multiy16x16_r[4U];
    vlSelf->multiy16x16[5U] = vlSelf->multiy16x16_r[5U];
    vlSelf->multiy16x16[6U] = vlSelf->multiy16x16_r[6U];
    vlSelf->multiy16x16[7U] = vlSelf->multiy16x16_r[7U];
    vlSelf->ampxdelay__DOT__din = vlSelf->ampx;
    vlSelf->pinidelay__DOT__din = vlSelf->pini;
    vlSelf->phtime__DOT__tcnt = vlSelf->tcnt;
    vlSelf->phtime__DOT__gatein = vlSelf->gatein;
    vlSelf->freqcossinpdelay__DOT__din[0U] = vlSelf->freqcossinp32x16[0U];
    vlSelf->freqcossinpdelay__DOT__din[1U] = vlSelf->freqcossinp32x16[1U];
    vlSelf->freqcossinpdelay__DOT__din[2U] = vlSelf->freqcossinp32x16[2U];
    vlSelf->freqcossinpdelay__DOT__din[3U] = vlSelf->freqcossinp32x16[3U];
    vlSelf->freqcossinpdelay__DOT__din[4U] = vlSelf->freqcossinp32x16[4U];
    vlSelf->freqcossinpdelay__DOT__din[5U] = vlSelf->freqcossinp32x16[5U];
    vlSelf->freqcossinpdelay__DOT__din[6U] = vlSelf->freqcossinp32x16[6U];
    vlSelf->freqcossinpdelay__DOT__din[7U] = vlSelf->freqcossinp32x16[7U];
    vlSelf->freqcossinpdelay__DOT__din[8U] = vlSelf->freqcossinp32x16[8U];
    vlSelf->freqcossinpdelay__DOT__din[9U] = vlSelf->freqcossinp32x16[9U];
    vlSelf->freqcossinpdelay__DOT__din[0xaU] = vlSelf->freqcossinp32x16[0xaU];
    vlSelf->freqcossinpdelay__DOT__din[0xbU] = vlSelf->freqcossinp32x16[0xbU];
    vlSelf->freqcossinpdelay__DOT__din[0xcU] = vlSelf->freqcossinp32x16[0xcU];
    vlSelf->freqcossinpdelay__DOT__din[0xdU] = vlSelf->freqcossinp32x16[0xdU];
    vlSelf->freqcossinpdelay__DOT__din[0xeU] = vlSelf->freqcossinp32x16[0xeU];
    vlSelf->freqcossinpdelay__DOT__din[0xfU] = vlSelf->freqcossinp32x16[0xfU];
    vlSelf->freq32 = vlSelf->freqcossinp32x16[0U];
    vlSelf->freq = (vlSelf->freqcossinp32x16[0U] >> 5U);
    vlSelf->envx[0U] = (vlSelf->envxy32x16[0U] >> 0x10U);
    vlSelf->envx[1U] = (vlSelf->envxy32x16[1U] >> 0x10U);
    vlSelf->envx[2U] = (vlSelf->envxy32x16[2U] >> 0x10U);
    vlSelf->envx[3U] = (vlSelf->envxy32x16[3U] >> 0x10U);
    vlSelf->envx[4U] = (vlSelf->envxy32x16[4U] >> 0x10U);
    vlSelf->envx[5U] = (vlSelf->envxy32x16[5U] >> 0x10U);
    vlSelf->envx[6U] = (vlSelf->envxy32x16[6U] >> 0x10U);
    vlSelf->envx[7U] = (vlSelf->envxy32x16[7U] >> 0x10U);
    vlSelf->envx[8U] = (vlSelf->envxy32x16[8U] >> 0x10U);
    vlSelf->envx[9U] = (vlSelf->envxy32x16[9U] >> 0x10U);
    vlSelf->envx[0xaU] = (vlSelf->envxy32x16[0xaU] 
                          >> 0x10U);
    vlSelf->envx[0xbU] = (vlSelf->envxy32x16[0xbU] 
                          >> 0x10U);
    vlSelf->envx[0xcU] = (vlSelf->envxy32x16[0xcU] 
                          >> 0x10U);
    vlSelf->envx[0xdU] = (vlSelf->envxy32x16[0xdU] 
                          >> 0x10U);
    vlSelf->envx[0xeU] = (vlSelf->envxy32x16[0xeU] 
                          >> 0x10U);
    vlSelf->envx[0xfU] = (vlSelf->envxy32x16[0xfU] 
                          >> 0x10U);
    vlSelf->envy[0U] = (0xffffU & vlSelf->envxy32x16[0U]);
    vlSelf->envy[1U] = (0xffffU & vlSelf->envxy32x16[1U]);
    vlSelf->envy[2U] = (0xffffU & vlSelf->envxy32x16[2U]);
    vlSelf->envy[3U] = (0xffffU & vlSelf->envxy32x16[3U]);
    vlSelf->envy[4U] = (0xffffU & vlSelf->envxy32x16[4U]);
    vlSelf->envy[5U] = (0xffffU & vlSelf->envxy32x16[5U]);
    vlSelf->envy[6U] = (0xffffU & vlSelf->envxy32x16[6U]);
    vlSelf->envy[7U] = (0xffffU & vlSelf->envxy32x16[7U]);
    vlSelf->envy[8U] = (0xffffU & vlSelf->envxy32x16[8U]);
    vlSelf->envy[9U] = (0xffffU & vlSelf->envxy32x16[9U]);
    vlSelf->envy[0xaU] = (0xffffU & vlSelf->envxy32x16[0xaU]);
    vlSelf->envy[0xbU] = (0xffffU & vlSelf->envxy32x16[0xbU]);
    vlSelf->envy[0xcU] = (0xffffU & vlSelf->envxy32x16[0xcU]);
    vlSelf->envy[0xdU] = (0xffffU & vlSelf->envxy32x16[0xdU]);
    vlSelf->envy[0xeU] = (0xffffU & vlSelf->envxy32x16[0xeU]);
    vlSelf->envy[0xfU] = (0xffffU & vlSelf->envxy32x16[0xfU]);
    vlSelf->freqcossinpdelay__DOT__clk = vlSelf->clk;
    vlSelf->phtime__DOT__clk = vlSelf->clk;
    vlSelf->ampxdelay__DOT__clk = vlSelf->clk;
    vlSelf->pinidelay__DOT__clk = vlSelf->clk;
    vlSelf->multidelay__DOT__clk = vlSelf->clk;
    vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__clk 
        = vlSelf->clk;
    vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__clk 
        = vlSelf->clk;
    vlSelf->cordicg__DOT__clk = vlSelf->clk;
    vlSelf->cordicg__DOT__reg_delay__DOT__din = vlSelf->cordicg__DOT__gin;
    vlSelf->genblk2__BRA__0__KET____DOT__zr = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__1__KET____DOT__zr = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__2__KET____DOT__zr = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__3__KET____DOT__zr = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__4__KET____DOT__zr = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__5__KET____DOT__zr = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__6__KET____DOT__zr = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__7__KET____DOT__zr = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__8__KET____DOT__zr = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__9__KET____DOT__zr = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__10__KET____DOT__zr = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__11__KET____DOT__zr = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__12__KET____DOT__zr = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__13__KET____DOT__zr = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__14__KET____DOT__zr = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__15__KET____DOT__zr = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zr;
    vlSelf->genblk2__BRA__0__KET____DOT__zi = vlSelf->genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__1__KET____DOT__zi = vlSelf->genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__2__KET____DOT__zi = vlSelf->genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__3__KET____DOT__zi = vlSelf->genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__4__KET____DOT__zi = vlSelf->genblk2__BRA__4__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__5__KET____DOT__zi = vlSelf->genblk2__BRA__5__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__6__KET____DOT__zi = vlSelf->genblk2__BRA__6__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__7__KET____DOT__zi = vlSelf->genblk2__BRA__7__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__8__KET____DOT__zi = vlSelf->genblk2__BRA__8__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__9__KET____DOT__zi = vlSelf->genblk2__BRA__9__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__10__KET____DOT__zi = vlSelf->genblk2__BRA__10__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__11__KET____DOT__zi = vlSelf->genblk2__BRA__11__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__12__KET____DOT__zi = vlSelf->genblk2__BRA__12__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__13__KET____DOT__zi = vlSelf->genblk2__BRA__13__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__14__KET____DOT__zi = vlSelf->genblk2__BRA__14__KET____DOT__mult2__DOT__zi;
    vlSelf->genblk2__BRA__15__KET____DOT__zi = vlSelf->genblk2__BRA__15__KET____DOT__mult2__DOT__zi;
    vlSelf->phtime__DOT__phasetime = vlSelf->phasetime;
    vlSelf->pini_d = vlSelf->pinidelay__DOT__dout;
    vlSelf->phtime__DOT__gateout = vlSelf->gphtime;
    vlSelf->ampx_d = vlSelf->ampxdelay__DOT__dout;
    vlSelf->gmulti = vlSelf->multidelay__DOT__dout;
    vlSelf->freqcossinp32x16_d[0U] = vlSelf->freqcossinpdelay__DOT__dout[0U];
    vlSelf->freqcossinp32x16_d[1U] = vlSelf->freqcossinpdelay__DOT__dout[1U];
    vlSelf->freqcossinp32x16_d[2U] = vlSelf->freqcossinpdelay__DOT__dout[2U];
    vlSelf->freqcossinp32x16_d[3U] = vlSelf->freqcossinpdelay__DOT__dout[3U];
    vlSelf->freqcossinp32x16_d[4U] = vlSelf->freqcossinpdelay__DOT__dout[4U];
    vlSelf->freqcossinp32x16_d[5U] = vlSelf->freqcossinpdelay__DOT__dout[5U];
    vlSelf->freqcossinp32x16_d[6U] = vlSelf->freqcossinpdelay__DOT__dout[6U];
    vlSelf->freqcossinp32x16_d[7U] = vlSelf->freqcossinpdelay__DOT__dout[7U];
    vlSelf->freqcossinp32x16_d[8U] = vlSelf->freqcossinpdelay__DOT__dout[8U];
    vlSelf->freqcossinp32x16_d[9U] = vlSelf->freqcossinpdelay__DOT__dout[9U];
    vlSelf->freqcossinp32x16_d[0xaU] = vlSelf->freqcossinpdelay__DOT__dout[0xaU];
    vlSelf->freqcossinp32x16_d[0xbU] = vlSelf->freqcossinpdelay__DOT__dout[0xbU];
    vlSelf->freqcossinp32x16_d[0xcU] = vlSelf->freqcossinpdelay__DOT__dout[0xcU];
    vlSelf->freqcossinp32x16_d[0xdU] = vlSelf->freqcossinpdelay__DOT__dout[0xdU];
    vlSelf->freqcossinp32x16_d[0xeU] = vlSelf->freqcossinpdelay__DOT__dout[0xeU];
    vlSelf->freqcossinp32x16_d[0xfU] = vlSelf->freqcossinpdelay__DOT__dout[0xfU];
    vlSelf->genblk2__BRA__0__KET____DOT__zr1 = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__0__KET____DOT__zi1 = vlSelf->genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__1__KET____DOT__zr1 = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__1__KET____DOT__zi1 = vlSelf->genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__2__KET____DOT__zr1 = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__2__KET____DOT__zi1 = vlSelf->genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__3__KET____DOT__zr1 = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__3__KET____DOT__zi1 = vlSelf->genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__4__KET____DOT__zr1 = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__4__KET____DOT__zi1 = vlSelf->genblk2__BRA__4__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__5__KET____DOT__zr1 = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__5__KET____DOT__zi1 = vlSelf->genblk2__BRA__5__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__6__KET____DOT__zr1 = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__6__KET____DOT__zi1 = vlSelf->genblk2__BRA__6__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__7__KET____DOT__zr1 = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__7__KET____DOT__zi1 = vlSelf->genblk2__BRA__7__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__8__KET____DOT__zr1 = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__8__KET____DOT__zi1 = vlSelf->genblk2__BRA__8__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__9__KET____DOT__zr1 = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__9__KET____DOT__zi1 = vlSelf->genblk2__BRA__9__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__10__KET____DOT__zr1 = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__10__KET____DOT__zi1 = vlSelf->genblk2__BRA__10__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__11__KET____DOT__zr1 = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__11__KET____DOT__zi1 = vlSelf->genblk2__BRA__11__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__12__KET____DOT__zr1 = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__12__KET____DOT__zi1 = vlSelf->genblk2__BRA__12__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__13__KET____DOT__zr1 = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__13__KET____DOT__zi1 = vlSelf->genblk2__BRA__13__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__14__KET____DOT__zr1 = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__14__KET____DOT__zi1 = vlSelf->genblk2__BRA__14__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk2__BRA__15__KET____DOT__zr1 = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk2__BRA__15__KET____DOT__zi1 = vlSelf->genblk2__BRA__15__KET____DOT__mult1__DOT__zi;
    vlSelf->cordicg__DOT__phaseout1 = vlSelf->cordicg__DOT__phaseout;
    vlSelf->cordicg__DOT__xout = vlSelf->cos_w;
    vlSelf->cordicg__DOT__xout1 = vlSelf->cos_w;
    vlSelf->cordicg__DOT__yout = vlSelf->sin_w;
    vlSelf->cordicg__DOT__yout1 = vlSelf->sin_w;
    vlSelf->multidelay__DOT__din = vlSelf->cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->cordicg__DOT__gout = vlSelf->cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->gcordic = vlSelf->cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->phtime__DOT__freq = vlSelf->freq;
    vlSelf->cordicg__DOT__reg_delay__DOT__clk = vlSelf->cordicg__DOT__clk;
}
