// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_elementconn__pi3.h"

VL_INLINE_OPT void Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn__1(Vtop_elementconn__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn__1\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.prepbusy 
        = (0U != vlSelf->busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.valid 
        = vlSelf->ammod__DOT__gateout_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.multix 
        = vlSelf->ammod__DOT__multix16x16_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.multiy 
        = vlSelf->ammod__DOT__multiy16x16_r;
    vlSelf->ammod__DOT__tcnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.tcnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.valid;
    vlSelf->ammod__DOT__phtime__DOT__tcnt = vlSelf->ammod__DOT__tcnt;
}

VL_INLINE_OPT void Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn__2(Vtop_elementconn__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn__2\n"); );
    // Body
    vlSelf->ammod__DOT__pini = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.pini;
    vlSelf->ammod__DOT__ampx = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.ampx;
    vlSelf->ammod__DOT__pinidelay__DOT__din = vlSelf->ammod__DOT__pini;
    vlSelf->ammod__DOT__ampxdelay__DOT__din = vlSelf->ammod__DOT__ampx;
}

VL_INLINE_OPT void Vtop_elementconn__pi3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn__0(Vtop_elementconn__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn__0\n"); );
    // Body
    vlSelf->lastenv = ((IData)(vlSelf->envaddr_cnt) 
                       == (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.envstart) 
                            + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.envlength)) 
                           - (IData)(1U)));
}

VL_INLINE_OPT void Vtop_elementconn__pi3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn__0(Vtop_elementconn__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.prepbusy 
        = (0U != vlSelf->busy_sr);
    vlSelf->envaddrdelay__DOT__din = vlSelf->envaddr_r;
    vlSelf->ammod__DOT__envxy32x16[0U] = vlSelf->envdata_r3[0U];
    vlSelf->ammod__DOT__envxy32x16[1U] = vlSelf->envdata_r3[1U];
    vlSelf->ammod__DOT__envxy32x16[2U] = vlSelf->envdata_r3[2U];
    vlSelf->ammod__DOT__envxy32x16[3U] = vlSelf->envdata_r3[3U];
    vlSelf->ammod__DOT__cordicg__DOT__xin = vlSelf->ammod__DOT__ampx_d2;
    vlSelf->ammod__DOT__cordicg__DOT__phasein = vlSelf->ammod__DOT__phaseinit;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    vlSelf->ammod__DOT__freq32 = vlSelf->freqdata_r2[0U];
    vlSelf->ammod__DOT__gateout = vlSelf->ammod__DOT__gateout_r;
    vlSelf->ammod__DOT__multiy16x16 = vlSelf->ammod__DOT__multiy16x16_r;
    vlSelf->ammod__DOT__multix16x16 = vlSelf->ammod__DOT__multix16x16_r;
    vlSelf->ammod__DOT__cordicg__DOT__error = vlSelf->ammod__DOT__cordicg__DOT__errorr;
    vlSelf->ammod__DOT__cordicg__DOT__xin_1 = vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__xin_d;
    vlSelf->ammod__DOT__cordicg__DOT__yin_1 = vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__yin_d;
    vlSelf->ammod__DOT__cordicg__DOT__shiftpi = (1U 
                                                 & VL_REDXOR_32(
                                                                (0x18000U 
                                                                 & vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__phasein_d)));
    vlSelf->ammod__DOT__cordicg__DOT__phasein_1 = vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__phasein_d;
    vlSelf->ammod__DOT__cordicg__DOT__xg = vlSelf->ammod__DOT__cordicg__DOT__x
        [0xfU];
    vlSelf->ammod__DOT__cordicg__DOT__yg = vlSelf->ammod__DOT__cordicg__DOT__y
        [0xfU];
    vlSelf->ammod__DOT__cordicg__DOT__zg = vlSelf->ammod__DOT__cordicg__DOT__z
        [0xfU];
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [1U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [2U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [3U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [4U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [5U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [6U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [7U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [8U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [9U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xaU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xbU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xcU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xdU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xeU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xfU] >> 0x10U));
    vlSelf->ammod__DOT__phtime__DOT__phasetime_w = 
        (0x3fffffffffffffULL & ((QData)((IData)(vlSelf->ammod__DOT__phtime__DOT__freq_r)) 
                                * (QData)((IData)(vlSelf->ammod__DOT__phtime__DOT__tcnt_r))));
    vlSelf->lastenv = ((IData)(vlSelf->envaddr_cnt) 
                       == (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.envstart) 
                            + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.envlength)) 
                           - (IData)(1U)));
    vlSelf->ammod__DOT__cosp[1U] = (vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x65U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__cosp[2U] = (vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x66U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__cosp[3U] = (vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x67U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__sinp[1U] = (0xffffU & vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x65U]);
    vlSelf->ammod__DOT__sinp[2U] = (0xffffU & vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x66U]);
    vlSelf->ammod__DOT__sinp[3U] = (0xffffU & vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x67U]);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.valid 
        = vlSelf->ammod__DOT__gateout_r;
    vlSelf->ammod__DOT__gatein = (1U & (IData)((vlSelf->busy_sr 
                                                >> 3U)));
    vlSelf->ammod__DOT__tcnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.tcnt;
    vlSelf->ammod__DOT__freqcossinp32x16[0U] = vlSelf->freqdata_r2[0U];
    vlSelf->ammod__DOT__freqcossinp32x16[1U] = vlSelf->freqdata_r2[1U];
    vlSelf->ammod__DOT__freqcossinp32x16[2U] = vlSelf->freqdata_r2[2U];
    vlSelf->ammod__DOT__freqcossinp32x16[3U] = vlSelf->freqdata_r2[3U];
    vlSelf->ammod__DOT__pini = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.pini;
    vlSelf->ammod__DOT__ampx = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.ampx;
    vlSelf->ammod__DOT__cordicg__DOT__gin = vlSelf->ammod__DOT__gphaseinit;
    vlSelf->ammod__DOT__freq = (vlSelf->freqdata_r2[0U] 
                                >> 5U);
    vlSelf->ammod__DOT__envx[0U] = (vlSelf->envdata_r3[0U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envx[1U] = (vlSelf->envdata_r3[1U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envx[2U] = (vlSelf->envdata_r3[2U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envx[3U] = (vlSelf->envdata_r3[3U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envy[0U] = (0xffffU & vlSelf->envdata_r3[0U]);
    vlSelf->ammod__DOT__envy[1U] = (0xffffU & vlSelf->envdata_r3[1U]);
    vlSelf->ammod__DOT__envy[2U] = (0xffffU & vlSelf->envdata_r3[2U]);
    vlSelf->ammod__DOT__envy[3U] = (0xffffU & vlSelf->envdata_r3[3U]);
    vlSelf->ammod__DOT__multix[0U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__multix[1U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__multix[2U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__multix[3U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__multiy[0U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__multiy[1U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__multiy[2U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__multiy[3U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__phasetime = vlSelf->ammod__DOT__phtime__DOT__phasetime_r3;
    vlSelf->ammod__DOT__pinidelay__DOT__dout = (0x1ffffU 
                                                & ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[5U] 
                                                    << 7U) 
                                                   | (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[4U] 
                                                      >> 0x19U)));
    vlSelf->ammod__DOT__gphtime = (1U & ((IData)(vlSelf->ammod__DOT__phtime__DOT__gatesr) 
                                         >> 4U));
    vlSelf->ammod__DOT__ampxdelay__DOT__dout = (vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[4U] 
                                                >> 0x10U);
    vlSelf->ammod__DOT__multidelay__DOT__dout = (1U 
                                                 & ((IData)(vlSelf->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                                                    >> 0xcU));
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[0U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x64U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[1U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x65U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[2U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x66U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[3U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x67U];
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__cordicg__DOT__phaseout = vlSelf->ammod__DOT__cordicg__DOT__phaseout_r;
    vlSelf->ammod__DOT__cos_w = vlSelf->ammod__DOT__cordicg__DOT__xout_r;
    vlSelf->ammod__DOT__sin_w = vlSelf->ammod__DOT__cordicg__DOT__yout_r;
    vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                 >> 0x13U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[0U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[1U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[1U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[2U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[2U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[3U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[3U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[4U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[4U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[5U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[5U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[6U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[6U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[7U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[7U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[8U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[8U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[9U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[9U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xaU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xaU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xbU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xbU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xcU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xcU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xdU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xdU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xeU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xeU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xfU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xfU] >> 0x10U));
    vlSelf->freqaddr = vlSelf->freqaddr_r;
    vlSelf->envaddr = (0xfffU & ((vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                                  << 4U) | (vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                            >> 0x1cU)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.multiy 
        = vlSelf->ammod__DOT__multiy16x16_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.multix 
        = vlSelf->ammod__DOT__multix16x16_r;
    vlSelf->envaddrdelay__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.clk;
    vlSelf->ammod__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.valid;
    vlSelf->ammod__DOT__phtime__DOT__gatein = vlSelf->ammod__DOT__gatein;
    vlSelf->ammod__DOT__phtime__DOT__tcnt = vlSelf->ammod__DOT__tcnt;
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[0U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[0U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[1U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[1U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[2U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[2U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[3U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[3U];
    vlSelf->ammod__DOT__pinidelay__DOT__din = vlSelf->ammod__DOT__pini;
    vlSelf->ammod__DOT__ampxdelay__DOT__din = vlSelf->ammod__DOT__ampx;
    vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__din 
        = vlSelf->ammod__DOT__cordicg__DOT__gin;
    vlSelf->ammod__DOT__phtime__DOT__freq = vlSelf->ammod__DOT__freq;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__phtime__DOT__phasetime = vlSelf->ammod__DOT__phasetime;
    vlSelf->ammod__DOT__pini_d = vlSelf->ammod__DOT__pinidelay__DOT__dout;
    vlSelf->ammod__DOT__phtime__DOT__gateout = vlSelf->ammod__DOT__gphtime;
    vlSelf->ammod__DOT__ampx_d = vlSelf->ammod__DOT__ampxdelay__DOT__dout;
    vlSelf->ammod__DOT__gmulti = vlSelf->ammod__DOT__multidelay__DOT__dout;
    vlSelf->ammod__DOT__freqcossinp32x16_d[0U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[0U];
    vlSelf->ammod__DOT__freqcossinp32x16_d[1U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[1U];
    vlSelf->ammod__DOT__freqcossinp32x16_d[2U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[2U];
    vlSelf->ammod__DOT__freqcossinp32x16_d[3U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[3U];
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__cordicg__DOT__phaseout1 = vlSelf->ammod__DOT__cordicg__DOT__phaseout;
    vlSelf->ammod__DOT__cordicg__DOT__xout = vlSelf->ammod__DOT__cos_w;
    vlSelf->ammod__DOT__cordicg__DOT__xout1 = vlSelf->ammod__DOT__cos_w;
    vlSelf->ammod__DOT__cordicg__DOT__yout = vlSelf->ammod__DOT__sin_w;
    vlSelf->ammod__DOT__cordicg__DOT__yout1 = vlSelf->ammod__DOT__sin_w;
    vlSelf->ammod__DOT__multidelay__DOT__din = vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->ammod__DOT__cordicg__DOT__gout = vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->ammod__DOT__gcordic = vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->envaddrdelay__DOT__dout = vlSelf->envaddr;
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__phtime__DOT__clk = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__ampxdelay__DOT__clk = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__pinidelay__DOT__clk = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__multidelay__DOT__clk = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__cordicg__DOT__clk = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__clk 
        = vlSelf->ammod__DOT__cordicg__DOT__clk;
}

extern const VlWide<11>/*351:0*/ Vtop__ConstPool__CONST_hec3cede4_0;

VL_INLINE_OPT void Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn__0(Vtop_elementconn__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn__0\n"); );
    // Init
    SData/*11:0*/ __Vdly__envaddr_cnt;
    __Vdly__envaddr_cnt = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v0;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v0 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v0;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v0 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v0;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v0 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v1;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v1 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v1;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v1 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v1;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v1 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v2;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v2 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v2;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v2 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v2;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v2 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v3;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v3 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v3;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v3 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v3;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v3 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v4;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v4 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v4;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v4 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v4;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v4 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v5;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v5 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v5;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v5 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v5;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v5 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v6;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v6 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v6;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v6 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v6;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v6 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v7;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v7 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v7;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v7 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v7;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v7 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v8;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v8 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v8;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v8 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v8;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v8 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v9;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v9 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v9;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v9 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v9;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v9 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v10;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v10 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v10;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v10 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v10;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v10 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v11;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v11 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v11;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v11 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v11;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v11 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v12;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v12 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v12;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v12 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v12;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v12 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v13;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v13 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v13;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v13 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v13;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v13 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v14;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v14 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v14;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v14 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v14;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v14 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v15;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v15 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v15;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v15 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v15;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v15 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v16;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v16 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v16;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v16 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v16;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v16 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15 = 0;
    VlWide<6>/*191:0*/ __Vtemp_h5d9ac07e__0;
    VlWide<5>/*159:0*/ __Vtemp_h1769c6dd__0;
    VlWide<104>/*3327:0*/ __Vtemp_h75aade2d__0;
    VlWide<100>/*3199:0*/ __Vtemp_h736c1f01__0;
    VlWide<12>/*383:0*/ __Vtemp_hf4a07a80__0;
    // Body
    __Vdly__envaddr_cnt = vlSelf->envaddr_cnt;
    vlSelf->ammod__DOT__multidelay__DOT__usual__DOT__shifter 
        = ((0x1ffeU & ((IData)(vlSelf->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                       << 1U)) | (IData)(vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout));
    vlSelf->ammod__DOT__phtime__DOT__gatesr = ((0xfeU 
                                                & ((IData)(vlSelf->ammod__DOT__phtime__DOT__gatesr) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->busy_sr 
                                                             >> 3U))));
    vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
        = ((0xffffeU & (vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                        << 1U)) | (IData)(vlSelf->ammod__DOT__gphaseinit));
    if (vlSelf->ammod__DOT__cordicg__DOT__shiftpi) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v0 
            = (0x1ffffU & (- VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__cordicg__DOT__yin_1))));
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v0 
            = (0x1ffffU & (- VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__cordicg__DOT__xin_1))));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v0 
            = ((0x10000U & ((~ (vlSelf->ammod__DOT__cordicg__DOT__phasein_1 
                                >> 0x10U)) << 0x10U)) 
               | (0xffffU & vlSelf->ammod__DOT__cordicg__DOT__phasein_1));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v0 
            = (0x1ffffU & VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__cordicg__DOT__yin_1)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v0 
            = (0x1ffffU & VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__cordicg__DOT__xin_1)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v0 
            = vlSelf->ammod__DOT__cordicg__DOT__phasein_1;
    }
    __Vtemp_h5d9ac07e__0[1U] = ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
                                 >> 0xfU) | (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
                                             << 0x11U));
    __Vtemp_h5d9ac07e__0[2U] = ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
                                 >> 0xfU) | (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
                                             << 0x11U));
    __Vtemp_h5d9ac07e__0[3U] = ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
                                 >> 0xfU) | (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
                                             << 0x11U));
    __Vtemp_h5d9ac07e__0[4U] = ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
                                 >> 0xfU) | (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[4U] 
                                             << 0x11U));
    __Vtemp_h5d9ac07e__0[5U] = (0x3ffU & (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[4U] 
                                          >> 0xfU));
    vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
        = ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
            << 0x11U) | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.pini);
    vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h5d9ac07e__0[1U];
    vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h5d9ac07e__0[2U];
    vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h5d9ac07e__0[3U];
    vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h5d9ac07e__0[4U];
    vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h5d9ac07e__0[5U];
    __Vtemp_h1769c6dd__0[1U] = ((vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
                                 >> 0x10U) | (vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
                                              << 0x10U));
    __Vtemp_h1769c6dd__0[2U] = ((vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
                                 >> 0x10U) | (vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
                                              << 0x10U));
    __Vtemp_h1769c6dd__0[3U] = ((vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
                                 >> 0x10U) | (vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U] 
                                              << 0x10U));
    __Vtemp_h1769c6dd__0[4U] = ((vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U] 
                                 >> 0x10U) | (vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[4U] 
                                              << 0x10U));
    vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
        = ((vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
            << 0x10U) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.ampx));
    vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h1769c6dd__0[1U];
    vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h1769c6dd__0[2U];
    vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h1769c6dd__0[3U];
    vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h1769c6dd__0[4U];
    VL_SEL_WWII(3200,3328, __Vtemp_h736c1f01__0, vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter, 0U, 0xc80U);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp_h75aade2d__0, __Vtemp_h736c1f01__0, vlSelf->freqdata_r2);
    VL_ASSIGN_W(3328,vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter, __Vtemp_h75aade2d__0);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [1U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [2U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [3U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [4U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [5U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [6U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [7U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [8U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [9U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xaU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xbU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xcU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xdU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xeU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xfU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [1U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [2U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [3U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [4U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [5U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [6U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [7U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [8U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [9U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xaU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xbU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xcU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xdU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xeU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xfU];
    __Vtemp_hf4a07a80__0[1U] = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[2U] = (((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[3U] = (((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[4U] = (((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[5U] = (((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[6U] = (((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[7U] = (((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[8U] = (((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[9U] = (((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[0xaU] = (((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                    & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                   >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                                 & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                                << 0xcU));
    __Vtemp_hf4a07a80__0[0xbU] = ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                   & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                  >> 0x14U);
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
             & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 0xcU) | (IData)(vlSelf->envaddr_r));
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_hf4a07a80__0[1U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_hf4a07a80__0[2U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_hf4a07a80__0[3U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_hf4a07a80__0[4U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_hf4a07a80__0[5U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_hf4a07a80__0[6U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_hf4a07a80__0[7U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[8U] 
        = __Vtemp_hf4a07a80__0[8U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[9U] 
        = __Vtemp_hf4a07a80__0[9U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
        = __Vtemp_hf4a07a80__0[0xaU];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
        = __Vtemp_hf4a07a80__0[0xbU];
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v1 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0U] + vlSelf->ammod__DOT__cordicg__DOT__y
                           [0U]));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v1 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0U] - vlSelf->ammod__DOT__cordicg__DOT__x
                           [0U]));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v1 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v1 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0U] - vlSelf->ammod__DOT__cordicg__DOT__y
                           [0U]));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v1 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0U] + vlSelf->ammod__DOT__cordicg__DOT__x
                           [0U]));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v1 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[1U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v2 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [1U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [1U], 1U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v2 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [1U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [1U], 1U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v2 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [1U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v2 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [1U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [1U], 1U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v2 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [1U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [1U], 1U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v2 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [1U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[2U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v3 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [2U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [2U], 2U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v3 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [2U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [2U], 2U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v3 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [2U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v3 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [2U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [2U], 2U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v3 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [2U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [2U], 2U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v3 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [2U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[3U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v4 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [3U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [3U], 3U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v4 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [3U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [3U], 3U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v4 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [3U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v4 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [3U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [3U], 3U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v4 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [3U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [3U], 3U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v4 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [3U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[4U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v5 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [4U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [4U], 4U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v5 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [4U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [4U], 4U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v5 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [4U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v5 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [4U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [4U], 4U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v5 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [4U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [4U], 4U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v5 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [4U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[5U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v6 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [5U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [5U], 5U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v6 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [5U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [5U], 5U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v6 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [5U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v6 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [5U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [5U], 5U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v6 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [5U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [5U], 5U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v6 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [5U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[6U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v7 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [6U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [6U], 6U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v7 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [6U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [6U], 6U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v7 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [6U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v7 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [6U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [6U], 6U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v7 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [6U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [6U], 6U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v7 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [6U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[7U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v8 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [7U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [7U], 7U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v8 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [7U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [7U], 7U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v8 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [7U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v8 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [7U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [7U], 7U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v8 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [7U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [7U], 7U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v8 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [7U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[8U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v9 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [8U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [8U], 8U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v9 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [8U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [8U], 8U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v9 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [8U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v9 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [8U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [8U], 8U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v9 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [8U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [8U], 8U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v9 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [8U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[9U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v10 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [9U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [9U], 9U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v10 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [9U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [9U], 9U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v10 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [9U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v10 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [9U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [9U], 9U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v10 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [9U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [9U], 9U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v10 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [9U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0xaU]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v11 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xaU], 0xaU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v11 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xaU], 0xaU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v11 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xaU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v11 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xaU], 0xaU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v11 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xaU], 0xaU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v11 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xaU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0xbU]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v12 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xbU], 0xbU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v12 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xbU], 0xbU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v12 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xbU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v12 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xbU], 0xbU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v12 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xbU], 0xbU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v12 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xbU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0xcU]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v13 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xcU], 0xcU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v13 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xcU], 0xcU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v13 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xcU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v13 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xcU], 0xcU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v13 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xcU], 0xcU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v13 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xcU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0xdU]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v14 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xdU], 0xdU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v14 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xdU], 0xdU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v14 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xdU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v14 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xdU], 0xdU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v14 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xdU], 0xdU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v14 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xdU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0xeU]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v15 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xeU], 0xeU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v15 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xeU], 0xeU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v15 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xeU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v15 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xeU], 0xeU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v15 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xeU], 0xeU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v15 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xeU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0xfU]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v16 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xfU], 0xfU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v16 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xfU], 0xfU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v16 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xfU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v16 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xfU], 0xfU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v16 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xfU], 0xfU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v16 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xfU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    }
    vlSelf->envaddr_r3 = vlSelf->envaddr_r2;
    vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__yin_d = 0U;
    vlSelf->ammod__DOT__phtime__DOT__freq_r = vlSelf->ammod__DOT__freq;
    vlSelf->ammod__DOT__phtime__DOT__tcnt_r = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.tcnt;
    vlSelf->ammod__DOT__gateout_r = vlSelf->ammod__DOT__multidelay__DOT__dout;
    vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__xin_d 
        = vlSelf->ammod__DOT__ampx_d2;
    vlSelf->ammod__DOT__cordicg__DOT__phaseout_r = vlSelf->ammod__DOT__cordicg__DOT__zg1;
    vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__phasein_d 
        = vlSelf->ammod__DOT__phaseinit;
    vlSelf->ammod__DOT__phtime__DOT__phasetime_r3 = vlSelf->ammod__DOT__phtime__DOT__phasetime_r2;
    vlSelf->envdata_r3[0U] = vlSelf->envdata_r2[0U];
    vlSelf->envdata_r3[1U] = vlSelf->envdata_r2[1U];
    vlSelf->envdata_r3[2U] = vlSelf->envdata_r2[2U];
    vlSelf->envdata_r3[3U] = vlSelf->envdata_r2[3U];
    vlSelf->freqaddr_r4 = vlSelf->freqaddr_r3;
    vlSelf->ammod__DOT__multiy16x16_r = ((0xffff000000000000ULL 
                                          & vlSelf->ammod__DOT__multiy16x16_r) 
                                         | (((QData)((IData)(
                                                             ((vlSelf->ammod__DOT__multiy
                                                               [2U] 
                                                               << 0x10U) 
                                                              | vlSelf->ammod__DOT__multiy
                                                              [1U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelf->ammod__DOT__multiy
                                                              [0U]))));
    vlSelf->ammod__DOT__multiy16x16_r = ((0xffffffffffffULL 
                                          & vlSelf->ammod__DOT__multiy16x16_r) 
                                         | ((QData)((IData)(
                                                            vlSelf->ammod__DOT__multiy
                                                            [3U])) 
                                            << 0x30U));
    vlSelf->ammod__DOT__multix16x16_r = ((0xffff000000000000ULL 
                                          & vlSelf->ammod__DOT__multix16x16_r) 
                                         | (((QData)((IData)(
                                                             ((vlSelf->ammod__DOT__multix
                                                               [2U] 
                                                               << 0x10U) 
                                                              | vlSelf->ammod__DOT__multix
                                                              [1U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelf->ammod__DOT__multix
                                                              [0U]))));
    vlSelf->ammod__DOT__multix16x16_r = ((0xffffffffffffULL 
                                          & vlSelf->ammod__DOT__multix16x16_r) 
                                         | ((QData)((IData)(
                                                            vlSelf->ammod__DOT__multix
                                                            [3U])) 
                                            << 0x30U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xfU], 0xfU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xfU], 0xfU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xfU], 0xfU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xfU], 0xfU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xeU], 0xeU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xeU], 0xeU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xeU], 0xeU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xeU], 0xeU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xdU], 0xdU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xdU], 0xdU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xdU], 0xdU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xdU], 0xdU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xcU], 0xcU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xcU], 0xcU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xcU], 0xcU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xcU], 0xcU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xbU], 0xbU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xbU], 0xbU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xbU], 0xbU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xbU], 0xbU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xaU], 0xaU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xaU], 0xaU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xaU], 0xaU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xaU], 0xaU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [9U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [9U], 9U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [9U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [9U], 9U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [9U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [9U], 9U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [9U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [9U], 9U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [8U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [8U], 8U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [8U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [8U], 8U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [8U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [8U], 8U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [8U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [8U], 8U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [7U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [7U], 7U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [7U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [7U], 7U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [7U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [7U], 7U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [7U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [7U], 7U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [6U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [6U], 6U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [6U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [6U], 6U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [6U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [6U], 6U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [6U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [6U], 6U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [5U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [5U], 5U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [5U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [5U], 5U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [5U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [5U], 5U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [5U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [5U], 5U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [4U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [4U], 4U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [4U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [4U], 4U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [4U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [4U], 4U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [4U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [4U], 4U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [3U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [3U], 3U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [3U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [3U], 3U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [3U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [3U], 3U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [3U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [3U], 3U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [2U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [2U], 2U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [2U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [2U], 2U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [2U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [2U], 2U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [2U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [2U], 2U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [1U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [1U], 1U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [1U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [1U], 1U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [1U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [1U], 1U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [1U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [1U], 1U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0U] + vlSelf->ammod__DOT__cordicg__DOT__x
                       [0U]));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0U] - vlSelf->ammod__DOT__cordicg__DOT__x
                       [0U]));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0U] - vlSelf->ammod__DOT__cordicg__DOT__y
                       [0U]));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0U] + vlSelf->ammod__DOT__cordicg__DOT__y
                       [0U]));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xfU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xfU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xeU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xeU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xdU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xdU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xcU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xcU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xbU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xbU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xaU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xaU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [9U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [9U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [8U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [8U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [7U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [7U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [6U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [6U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [5U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [5U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [4U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [4U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [3U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [3U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [2U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [2U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [1U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [1U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__errorr = (1U 
                                                & (((IData)(vlSelf->ammod__DOT__cordicg__DOT__genblk5__DOT__xdummy) 
                                                    ^ 
                                                    ((IData)(vlSelf->ammod__DOT__cordicg__DOT__xout_r) 
                                                     >> 0xfU)) 
                                                   | ((IData)(vlSelf->ammod__DOT__cordicg__DOT__genblk5__DOT__ydummy) 
                                                      ^ 
                                                      ((IData)(vlSelf->ammod__DOT__sin_w) 
                                                       >> 0xfU))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2));
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[1U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[2U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[3U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[4U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[5U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[6U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[7U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[8U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[9U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0xaU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0xbU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0xcU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0xdU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0xeU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0xfU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0x10U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[1U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[2U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[3U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[4U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[5U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[6U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[7U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[8U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[9U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0xaU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0xbU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0xcU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0xdU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0xeU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0xfU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0x10U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15;
    vlSelf->ammod__DOT__cordicg__DOT__x[0U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v0;
    vlSelf->ammod__DOT__cordicg__DOT__x[1U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v1;
    vlSelf->ammod__DOT__cordicg__DOT__x[2U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v2;
    vlSelf->ammod__DOT__cordicg__DOT__x[3U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v3;
    vlSelf->ammod__DOT__cordicg__DOT__x[4U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v4;
    vlSelf->ammod__DOT__cordicg__DOT__x[5U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v5;
    vlSelf->ammod__DOT__cordicg__DOT__x[6U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v6;
    vlSelf->ammod__DOT__cordicg__DOT__x[7U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v7;
    vlSelf->ammod__DOT__cordicg__DOT__x[8U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v8;
    vlSelf->ammod__DOT__cordicg__DOT__x[9U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v9;
    vlSelf->ammod__DOT__cordicg__DOT__x[0xaU] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v10;
    vlSelf->ammod__DOT__cordicg__DOT__x[0xbU] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v11;
    vlSelf->ammod__DOT__cordicg__DOT__x[0xcU] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v12;
    vlSelf->ammod__DOT__cordicg__DOT__x[0xdU] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v13;
    vlSelf->ammod__DOT__cordicg__DOT__x[0xeU] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v14;
    vlSelf->ammod__DOT__cordicg__DOT__x[0xfU] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v15;
    vlSelf->ammod__DOT__cordicg__DOT__x[0x10U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v16;
    vlSelf->ammod__DOT__cordicg__DOT__y[0U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v0;
    vlSelf->ammod__DOT__cordicg__DOT__y[1U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v1;
    vlSelf->ammod__DOT__cordicg__DOT__y[2U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v2;
    vlSelf->ammod__DOT__cordicg__DOT__y[3U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v3;
    vlSelf->ammod__DOT__cordicg__DOT__y[4U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v4;
    vlSelf->ammod__DOT__cordicg__DOT__y[5U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v5;
    vlSelf->ammod__DOT__cordicg__DOT__y[6U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v6;
    vlSelf->ammod__DOT__cordicg__DOT__y[7U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v7;
    vlSelf->ammod__DOT__cordicg__DOT__y[8U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v8;
    vlSelf->ammod__DOT__cordicg__DOT__y[9U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v9;
    vlSelf->ammod__DOT__cordicg__DOT__y[0xaU] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v10;
    vlSelf->ammod__DOT__cordicg__DOT__y[0xbU] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v11;
    vlSelf->ammod__DOT__cordicg__DOT__y[0xcU] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v12;
    vlSelf->ammod__DOT__cordicg__DOT__y[0xdU] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v13;
    vlSelf->ammod__DOT__cordicg__DOT__y[0xeU] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v14;
    vlSelf->ammod__DOT__cordicg__DOT__y[0xfU] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v15;
    vlSelf->ammod__DOT__cordicg__DOT__y[0x10U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v16;
    vlSelf->ammod__DOT__cordicg__DOT__z[0U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v0;
    vlSelf->ammod__DOT__cordicg__DOT__z[1U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v1;
    vlSelf->ammod__DOT__cordicg__DOT__z[2U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v2;
    vlSelf->ammod__DOT__cordicg__DOT__z[3U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v3;
    vlSelf->ammod__DOT__cordicg__DOT__z[4U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v4;
    vlSelf->ammod__DOT__cordicg__DOT__z[5U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v5;
    vlSelf->ammod__DOT__cordicg__DOT__z[6U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v6;
    vlSelf->ammod__DOT__cordicg__DOT__z[7U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v7;
    vlSelf->ammod__DOT__cordicg__DOT__z[8U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v8;
    vlSelf->ammod__DOT__cordicg__DOT__z[9U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v9;
    vlSelf->ammod__DOT__cordicg__DOT__z[0xaU] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v10;
    vlSelf->ammod__DOT__cordicg__DOT__z[0xbU] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v11;
    vlSelf->ammod__DOT__cordicg__DOT__z[0xcU] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v12;
    vlSelf->ammod__DOT__cordicg__DOT__z[0xdU] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v13;
    vlSelf->ammod__DOT__cordicg__DOT__z[0xeU] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v14;
    vlSelf->ammod__DOT__cordicg__DOT__z[0xfU] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v15;
    vlSelf->ammod__DOT__cordicg__DOT__z[0x10U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v16;
    vlSelf->ammod__DOT__multidelay__DOT__dout = (1U 
                                                 & ((IData)(vlSelf->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                                                    >> 0xcU));
    vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                 >> 0x13U));
    vlSelf->ammod__DOT__gphaseinit = vlSelf->ammod__DOT__gphtime;
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[0U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x64U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[1U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x65U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[2U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x66U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[3U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x67U];
    vlSelf->freqdata_r2[0U] = vlSelf->freqdata_r[0U];
    vlSelf->freqdata_r2[1U] = vlSelf->freqdata_r[1U];
    vlSelf->freqdata_r2[2U] = vlSelf->freqdata_r[2U];
    vlSelf->freqdata_r2[3U] = vlSelf->freqdata_r[3U];
    vlSelf->envaddr = (0xfffU & ((vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                                  << 4U) | (vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                            >> 0x1cU)));
    vlSelf->dummybusy = (1U & (IData)((vlSelf->busy_sr 
                                       >> 0x29U)));
    vlSelf->envaddr_r = vlSelf->envaddr_cnt;
    vlSelf->busy_sr = ((0x3fffffffffeULL & (vlSelf->busy_sr 
                                            << 1U)) 
                       | (QData)((IData)(vlSelf->busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.cmdstb) {
        __Vdly__envaddr_cnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.envstart;
        vlSelf->busy = 1U;
    } else {
        if (vlSelf->busy) {
            __Vdly__envaddr_cnt = (0xfffU & ((IData)(vlSelf->envaddr_cnt) 
                                             + (0U 
                                                != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.envlength))));
        }
        if (vlSelf->lastenv) {
            vlSelf->busy = 0U;
        }
    }
    vlSelf->ammod__DOT__cordicg__DOT__yin_1 = vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__yin_d;
    vlSelf->ammod__DOT__gateout = vlSelf->ammod__DOT__gateout_r;
    vlSelf->ammod__DOT__cordicg__DOT__xin_1 = vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__xin_d;
    vlSelf->ammod__DOT__ampx_d2 = ((IData)(vlSelf->ammod__DOT__gphtime)
                                    ? (0xffffU & (IData)(vlSelf->ammod__DOT__ampxdelay__DOT__dout))
                                    : 0U);
    vlSelf->ammod__DOT__cordicg__DOT__phaseout = vlSelf->ammod__DOT__cordicg__DOT__phaseout_r;
    vlSelf->ammod__DOT__cordicg__DOT__zg1 = vlSelf->ammod__DOT__cordicg__DOT__zg0;
    vlSelf->ammod__DOT__cordicg__DOT__shiftpi = (1U 
                                                 & VL_REDXOR_32(
                                                                (0x18000U 
                                                                 & vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__phasein_d)));
    vlSelf->ammod__DOT__cordicg__DOT__phasein_1 = vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__phasein_d;
    vlSelf->ammod__DOT__phaseinit = (0x1ffffU & ((vlSelf->ammod__DOT__phasetime 
                                                  >> 0xaU) 
                                                 + vlSelf->ammod__DOT__pinidelay__DOT__dout));
    vlSelf->ammod__DOT__phtime__DOT__phasetime_r2 = vlSelf->ammod__DOT__phtime__DOT__phasetime_r1;
    vlSelf->envdata_r2[0U] = vlSelf->envdata_r;
    vlSelf->envdata_r2[1U] = vlSelf->envdata_r;
    vlSelf->envdata_r2[2U] = vlSelf->envdata_r;
    vlSelf->envdata_r2[3U] = vlSelf->envdata_r;
    vlSelf->ammod__DOT__envxy32x16[0U] = vlSelf->envdata_r3[0U];
    vlSelf->ammod__DOT__envxy32x16[1U] = vlSelf->envdata_r3[1U];
    vlSelf->ammod__DOT__envxy32x16[2U] = vlSelf->envdata_r3[2U];
    vlSelf->ammod__DOT__envxy32x16[3U] = vlSelf->envdata_r3[3U];
    vlSelf->freqaddr_r3 = vlSelf->freqaddr_r2;
    vlSelf->ammod__DOT__multiy16x16 = vlSelf->ammod__DOT__multiy16x16_r;
    vlSelf->ammod__DOT__multix16x16 = vlSelf->ammod__DOT__multix16x16_r;
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [1U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [2U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [3U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [4U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [5U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [6U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [7U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [8U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [9U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xaU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xbU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xcU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xdU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xeU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xfU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[0U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[1U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[1U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[2U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[2U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[3U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[3U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[4U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[4U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[5U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[5U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[6U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[6U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[7U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[7U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[8U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[8U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[9U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[9U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xaU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xaU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xbU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xbU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xcU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xcU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xdU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xdU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xeU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xeU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xfU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xfU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__error = vlSelf->ammod__DOT__cordicg__DOT__errorr;
    vlSelf->ammod__DOT__cordicg__DOT__genblk5__DOT__ydummy 
        = (1U & ((vlSelf->ammod__DOT__cordicg__DOT__ysum3 
                  - vlSelf->ammod__DOT__cordicg__DOT__ysum2_d) 
                 >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__yout_r = (0xffffU 
                                                & (vlSelf->ammod__DOT__cordicg__DOT__ysum3 
                                                   - vlSelf->ammod__DOT__cordicg__DOT__ysum2_d));
    vlSelf->ammod__DOT__cordicg__DOT__genblk5__DOT__xdummy 
        = (1U & ((vlSelf->ammod__DOT__cordicg__DOT__xsum3 
                  - vlSelf->ammod__DOT__cordicg__DOT__xsum2_d) 
                 >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__xout_r = (0xffffU 
                                                & (vlSelf->ammod__DOT__cordicg__DOT__xsum3 
                                                   - vlSelf->ammod__DOT__cordicg__DOT__xsum2_d));
    vlSelf->ammod__DOT__multix[3U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multix[2U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multix[1U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multix[0U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multiy[3U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multiy[2U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multiy[1U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multiy[0U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__gmulti = vlSelf->ammod__DOT__multidelay__DOT__dout;
    vlSelf->ammod__DOT__multidelay__DOT__din = vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->ammod__DOT__cordicg__DOT__gout = vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->ammod__DOT__gcordic = vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->ammod__DOT__freqcossinp32x16_d[0U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[0U];
    vlSelf->ammod__DOT__freqcossinp32x16_d[1U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[1U];
    vlSelf->ammod__DOT__freqcossinp32x16_d[2U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[2U];
    vlSelf->ammod__DOT__freqcossinp32x16_d[3U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[3U];
    vlSelf->envaddrdelay__DOT__dout = vlSelf->envaddr;
    vlSelf->envaddr_cnt = __Vdly__envaddr_cnt;
    vlSelf->ammod__DOT__ampxdelay__DOT__dout = (vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[4U] 
                                                >> 0x10U);
    vlSelf->ammod__DOT__gphtime = (1U & ((IData)(vlSelf->ammod__DOT__phtime__DOT__gatesr) 
                                         >> 4U));
    vlSelf->ammod__DOT__cordicg__DOT__phaseout1 = vlSelf->ammod__DOT__cordicg__DOT__phaseout;
    vlSelf->ammod__DOT__phasetime = vlSelf->ammod__DOT__phtime__DOT__phasetime_r3;
    vlSelf->ammod__DOT__pinidelay__DOT__dout = (0x1ffffU 
                                                & ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[5U] 
                                                    << 7U) 
                                                   | (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[4U] 
                                                      >> 0x19U)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__cordicg__DOT__gin = vlSelf->ammod__DOT__gphaseinit;
    vlSelf->freqdata_r[0U] = vlSelf->freqdata[0U];
    vlSelf->freqdata_r[1U] = vlSelf->freqdata[1U];
    vlSelf->freqdata_r[2U] = vlSelf->freqdata[2U];
    vlSelf->freqdata_r[3U] = vlSelf->freqdata[3U];
    vlSelf->ammod__DOT__freq32 = vlSelf->freqdata_r2[0U];
    vlSelf->ammod__DOT__freqcossinp32x16[0U] = vlSelf->freqdata_r2[0U];
    vlSelf->ammod__DOT__freqcossinp32x16[1U] = vlSelf->freqdata_r2[1U];
    vlSelf->ammod__DOT__freqcossinp32x16[2U] = vlSelf->freqdata_r2[2U];
    vlSelf->ammod__DOT__freqcossinp32x16[3U] = vlSelf->freqdata_r2[3U];
    vlSelf->ammod__DOT__freq = (vlSelf->freqdata_r2[0U] 
                                >> 5U);
    vlSelf->envaddrdelay__DOT__din = vlSelf->envaddr_r;
    vlSelf->ammod__DOT__gatein = (1U & (IData)((vlSelf->busy_sr 
                                                >> 3U)));
    vlSelf->ammod__DOT__ampx_d = vlSelf->ammod__DOT__ampxdelay__DOT__dout;
    vlSelf->ammod__DOT__phtime__DOT__gateout = vlSelf->ammod__DOT__gphtime;
    vlSelf->ammod__DOT__cordicg__DOT__xin = vlSelf->ammod__DOT__ampx_d2;
    vlSelf->ammod__DOT__cordicg__DOT__zg0 = vlSelf->ammod__DOT__cordicg__DOT__zg;
    vlSelf->ammod__DOT__phtime__DOT__phasetime = vlSelf->ammod__DOT__phasetime;
    vlSelf->ammod__DOT__pini_d = vlSelf->ammod__DOT__pinidelay__DOT__dout;
    vlSelf->ammod__DOT__cordicg__DOT__phasein = vlSelf->ammod__DOT__phaseinit;
    vlSelf->ammod__DOT__phtime__DOT__phasetime_r1 = vlSelf->ammod__DOT__phtime__DOT__phasetime_r0;
    vlSelf->envdata_r = vlSelf->envdata;
    vlSelf->freqaddr_r2 = vlSelf->freqaddr_r;
    vlSelf->ammod__DOT__cordicg__DOT__ysum2_d = vlSelf->ammod__DOT__cordicg__DOT__ysum2;
    vlSelf->ammod__DOT__cordicg__DOT__ysum3 = (0x1ffffU 
                                               & (vlSelf->ammod__DOT__cordicg__DOT__ysum0 
                                                  - vlSelf->ammod__DOT__cordicg__DOT__ysum1));
    vlSelf->ammod__DOT__cordicg__DOT__xsum2_d = vlSelf->ammod__DOT__cordicg__DOT__xsum2;
    vlSelf->ammod__DOT__cordicg__DOT__xsum3 = (0x1ffffU 
                                               & (vlSelf->ammod__DOT__cordicg__DOT__xsum0 
                                                  - vlSelf->ammod__DOT__cordicg__DOT__xsum1));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__mult0;
    vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__din 
        = vlSelf->ammod__DOT__cordicg__DOT__gin;
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[0U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[0U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[1U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[1U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[2U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[2U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[3U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[3U];
    vlSelf->ammod__DOT__phtime__DOT__freq = vlSelf->ammod__DOT__freq;
    vlSelf->ammod__DOT__phtime__DOT__gatein = vlSelf->ammod__DOT__gatein;
    vlSelf->ammod__DOT__cordicg__DOT__zg = vlSelf->ammod__DOT__cordicg__DOT__z
        [0xfU];
    vlSelf->ammod__DOT__phtime__DOT__phasetime_r0 = 
        (0x7ffffffU & (IData)(vlSelf->ammod__DOT__phtime__DOT__phasetime_w));
    vlSelf->freqaddr_r = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.freqaddr;
    vlSelf->ammod__DOT__cordicg__DOT__ysum2 = (0x1ffffU 
                                               & (VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__yg, 0xcU) 
                                                  - 
                                                  VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__yg, 0xeU)));
    vlSelf->ammod__DOT__cordicg__DOT__ysum0 = (0x1ffffU 
                                               & (VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__yg, 1U) 
                                                  + 
                                                  VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__yg, 3U)));
    vlSelf->ammod__DOT__cordicg__DOT__ysum1 = (0x1ffffU 
                                               & (VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__yg, 6U) 
                                                  + 
                                                  VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__yg, 9U)));
    vlSelf->ammod__DOT__cordicg__DOT__xsum2 = (0x1ffffU 
                                               & (VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__xg, 0xcU) 
                                                  - 
                                                  VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__xg, 0xeU)));
    vlSelf->ammod__DOT__cordicg__DOT__xsum0 = (0x1ffffU 
                                               & (VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__xg, 1U) 
                                                  + 
                                                  VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__xg, 3U)));
    vlSelf->ammod__DOT__cordicg__DOT__xsum1 = (0x1ffffU 
                                               & (VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__xg, 6U) 
                                                  + 
                                                  VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__xg, 9U)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->ammod__DOT__phtime__DOT__phasetime_w = 
        (0x3fffffffffffffULL & ((QData)((IData)(vlSelf->ammod__DOT__phtime__DOT__freq_r)) 
                                * (QData)((IData)(vlSelf->ammod__DOT__phtime__DOT__tcnt_r))));
    vlSelf->ammod__DOT__cordicg__DOT__yg = vlSelf->ammod__DOT__cordicg__DOT__y
        [0xfU];
    vlSelf->ammod__DOT__cordicg__DOT__xg = vlSelf->ammod__DOT__cordicg__DOT__x
        [0xfU];
    vlSelf->freqaddr = vlSelf->freqaddr_r;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi 
        = vlSelf->ammod__DOT__envx[3U];
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi 
        = vlSelf->ammod__DOT__envy[3U];
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi 
        = vlSelf->ammod__DOT__envx[2U];
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi 
        = vlSelf->ammod__DOT__envy[2U];
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi 
        = vlSelf->ammod__DOT__envx[1U];
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi 
        = vlSelf->ammod__DOT__envy[1U];
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi 
        = vlSelf->ammod__DOT__envx[0U];
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi 
        = vlSelf->ammod__DOT__envy[0U];
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2));
    vlSelf->ammod__DOT__envx[0U] = (vlSelf->envdata_r3[0U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envx[1U] = (vlSelf->envdata_r3[1U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envx[2U] = (vlSelf->envdata_r3[2U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envx[3U] = (vlSelf->envdata_r3[3U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envy[0U] = (0xffffU & vlSelf->envdata_r3[0U]);
    vlSelf->ammod__DOT__envy[1U] = (0xffffU & vlSelf->envdata_r3[1U]);
    vlSelf->ammod__DOT__envy[2U] = (0xffffU & vlSelf->envdata_r3[2U]);
    vlSelf->ammod__DOT__envy[3U] = (0xffffU & vlSelf->envdata_r3[3U]);
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi 
        = vlSelf->ammod__DOT__cosp[3U];
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi 
        = vlSelf->ammod__DOT__sinp[3U];
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi 
        = vlSelf->ammod__DOT__cosp[2U];
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi 
        = vlSelf->ammod__DOT__sinp[2U];
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi 
        = vlSelf->ammod__DOT__cosp[1U];
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi 
        = vlSelf->ammod__DOT__sinp[1U];
    vlSelf->ammod__DOT__cos = vlSelf->ammod__DOT__cos_w;
    vlSelf->ammod__DOT__sin = vlSelf->ammod__DOT__sin_w;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi 
        = vlSelf->ammod__DOT__cosp[0U];
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi 
        = vlSelf->ammod__DOT__sinp[0U];
    vlSelf->ammod__DOT__cos_w = vlSelf->ammod__DOT__cordicg__DOT__xout_r;
    vlSelf->ammod__DOT__sin_w = vlSelf->ammod__DOT__cordicg__DOT__yout_r;
    vlSelf->ammod__DOT__cosp[1U] = (vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x65U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__cosp[2U] = (vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x66U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__cosp[3U] = (vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x67U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__sinp[1U] = (0xffffU & vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x65U]);
    vlSelf->ammod__DOT__sinp[2U] = (0xffffU & vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x66U]);
    vlSelf->ammod__DOT__sinp[3U] = (0xffffU & vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x67U]);
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    vlSelf->ammod__DOT__cordicg__DOT__xout = vlSelf->ammod__DOT__cos_w;
    vlSelf->ammod__DOT__cordicg__DOT__xout1 = vlSelf->ammod__DOT__cos_w;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__cordicg__DOT__yout = vlSelf->ammod__DOT__sin_w;
    vlSelf->ammod__DOT__cordicg__DOT__yout1 = vlSelf->ammod__DOT__sin_w;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
}

VL_INLINE_OPT void Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn__1(Vtop_elementconn__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn__1\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.prepbusy 
        = (0U != vlSelf->busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.valid 
        = vlSelf->ammod__DOT__gateout_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.multix 
        = vlSelf->ammod__DOT__multix16x16_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.multiy 
        = vlSelf->ammod__DOT__multiy16x16_r;
    vlSelf->ammod__DOT__tcnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.tcnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.valid;
    vlSelf->ammod__DOT__phtime__DOT__tcnt = vlSelf->ammod__DOT__tcnt;
}

VL_INLINE_OPT void Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn__2(Vtop_elementconn__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn__2\n"); );
    // Body
    vlSelf->ammod__DOT__pini = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.pini;
    vlSelf->ammod__DOT__ampx = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.ampx;
    vlSelf->ammod__DOT__pinidelay__DOT__din = vlSelf->ammod__DOT__pini;
    vlSelf->ammod__DOT__ampxdelay__DOT__din = vlSelf->ammod__DOT__ampx;
}

VL_INLINE_OPT void Vtop_elementconn__pi3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn__0(Vtop_elementconn__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn__0\n"); );
    // Body
    vlSelf->lastenv = ((IData)(vlSelf->envaddr_cnt) 
                       == (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.envstart) 
                            + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.envlength)) 
                           - (IData)(1U)));
}

VL_INLINE_OPT void Vtop_elementconn__pi3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn__0(Vtop_elementconn__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.prepbusy 
        = (0U != vlSelf->busy_sr);
    vlSelf->envaddrdelay__DOT__din = vlSelf->envaddr_r;
    vlSelf->ammod__DOT__envxy32x16[0U] = vlSelf->envdata_r3[0U];
    vlSelf->ammod__DOT__envxy32x16[1U] = vlSelf->envdata_r3[1U];
    vlSelf->ammod__DOT__envxy32x16[2U] = vlSelf->envdata_r3[2U];
    vlSelf->ammod__DOT__envxy32x16[3U] = vlSelf->envdata_r3[3U];
    vlSelf->ammod__DOT__cordicg__DOT__xin = vlSelf->ammod__DOT__ampx_d2;
    vlSelf->ammod__DOT__cordicg__DOT__phasein = vlSelf->ammod__DOT__phaseinit;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    vlSelf->ammod__DOT__freq32 = vlSelf->freqdata_r2[0U];
    vlSelf->ammod__DOT__gateout = vlSelf->ammod__DOT__gateout_r;
    vlSelf->ammod__DOT__multiy16x16 = vlSelf->ammod__DOT__multiy16x16_r;
    vlSelf->ammod__DOT__multix16x16 = vlSelf->ammod__DOT__multix16x16_r;
    vlSelf->ammod__DOT__cordicg__DOT__error = vlSelf->ammod__DOT__cordicg__DOT__errorr;
    vlSelf->ammod__DOT__cordicg__DOT__xin_1 = vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__xin_d;
    vlSelf->ammod__DOT__cordicg__DOT__yin_1 = vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__yin_d;
    vlSelf->ammod__DOT__cordicg__DOT__shiftpi = (1U 
                                                 & VL_REDXOR_32(
                                                                (0x18000U 
                                                                 & vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__phasein_d)));
    vlSelf->ammod__DOT__cordicg__DOT__phasein_1 = vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__phasein_d;
    vlSelf->ammod__DOT__cordicg__DOT__xg = vlSelf->ammod__DOT__cordicg__DOT__x
        [0xfU];
    vlSelf->ammod__DOT__cordicg__DOT__yg = vlSelf->ammod__DOT__cordicg__DOT__y
        [0xfU];
    vlSelf->ammod__DOT__cordicg__DOT__zg = vlSelf->ammod__DOT__cordicg__DOT__z
        [0xfU];
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [1U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [2U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [3U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [4U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [5U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [6U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [7U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [8U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [9U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xaU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xbU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xcU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xdU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xeU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xfU] >> 0x10U));
    vlSelf->ammod__DOT__phtime__DOT__phasetime_w = 
        (0x3fffffffffffffULL & ((QData)((IData)(vlSelf->ammod__DOT__phtime__DOT__freq_r)) 
                                * (QData)((IData)(vlSelf->ammod__DOT__phtime__DOT__tcnt_r))));
    vlSelf->lastenv = ((IData)(vlSelf->envaddr_cnt) 
                       == (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.envstart) 
                            + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.envlength)) 
                           - (IData)(1U)));
    vlSelf->ammod__DOT__cosp[1U] = (vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x65U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__cosp[2U] = (vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x66U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__cosp[3U] = (vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x67U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__sinp[1U] = (0xffffU & vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x65U]);
    vlSelf->ammod__DOT__sinp[2U] = (0xffffU & vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x66U]);
    vlSelf->ammod__DOT__sinp[3U] = (0xffffU & vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x67U]);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.valid 
        = vlSelf->ammod__DOT__gateout_r;
    vlSelf->ammod__DOT__gatein = (1U & (IData)((vlSelf->busy_sr 
                                                >> 3U)));
    vlSelf->ammod__DOT__tcnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.tcnt;
    vlSelf->ammod__DOT__freqcossinp32x16[0U] = vlSelf->freqdata_r2[0U];
    vlSelf->ammod__DOT__freqcossinp32x16[1U] = vlSelf->freqdata_r2[1U];
    vlSelf->ammod__DOT__freqcossinp32x16[2U] = vlSelf->freqdata_r2[2U];
    vlSelf->ammod__DOT__freqcossinp32x16[3U] = vlSelf->freqdata_r2[3U];
    vlSelf->ammod__DOT__pini = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.pini;
    vlSelf->ammod__DOT__ampx = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.ampx;
    vlSelf->ammod__DOT__cordicg__DOT__gin = vlSelf->ammod__DOT__gphaseinit;
    vlSelf->ammod__DOT__freq = (vlSelf->freqdata_r2[0U] 
                                >> 5U);
    vlSelf->ammod__DOT__envx[0U] = (vlSelf->envdata_r3[0U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envx[1U] = (vlSelf->envdata_r3[1U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envx[2U] = (vlSelf->envdata_r3[2U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envx[3U] = (vlSelf->envdata_r3[3U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envy[0U] = (0xffffU & vlSelf->envdata_r3[0U]);
    vlSelf->ammod__DOT__envy[1U] = (0xffffU & vlSelf->envdata_r3[1U]);
    vlSelf->ammod__DOT__envy[2U] = (0xffffU & vlSelf->envdata_r3[2U]);
    vlSelf->ammod__DOT__envy[3U] = (0xffffU & vlSelf->envdata_r3[3U]);
    vlSelf->ammod__DOT__multix[0U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__multix[1U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__multix[2U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__multix[3U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__multiy[0U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__multiy[1U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__multiy[2U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__multiy[3U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__phasetime = vlSelf->ammod__DOT__phtime__DOT__phasetime_r3;
    vlSelf->ammod__DOT__pinidelay__DOT__dout = (0x1ffffU 
                                                & ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[5U] 
                                                    << 7U) 
                                                   | (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[4U] 
                                                      >> 0x19U)));
    vlSelf->ammod__DOT__gphtime = (1U & ((IData)(vlSelf->ammod__DOT__phtime__DOT__gatesr) 
                                         >> 4U));
    vlSelf->ammod__DOT__ampxdelay__DOT__dout = (vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[4U] 
                                                >> 0x10U);
    vlSelf->ammod__DOT__multidelay__DOT__dout = (1U 
                                                 & ((IData)(vlSelf->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                                                    >> 0xcU));
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[0U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x64U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[1U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x65U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[2U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x66U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[3U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x67U];
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__cordicg__DOT__phaseout = vlSelf->ammod__DOT__cordicg__DOT__phaseout_r;
    vlSelf->ammod__DOT__cos_w = vlSelf->ammod__DOT__cordicg__DOT__xout_r;
    vlSelf->ammod__DOT__sin_w = vlSelf->ammod__DOT__cordicg__DOT__yout_r;
    vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                 >> 0x13U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[0U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[1U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[1U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[2U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[2U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[3U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[3U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[4U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[4U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[5U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[5U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[6U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[6U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[7U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[7U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[8U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[8U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[9U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[9U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xaU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xaU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xbU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xbU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xcU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xcU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xdU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xdU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xeU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xeU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xfU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xfU] >> 0x10U));
    vlSelf->freqaddr = vlSelf->freqaddr_r;
    vlSelf->envaddr = (0xfffU & ((vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                                  << 4U) | (vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                            >> 0x1cU)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.multiy 
        = vlSelf->ammod__DOT__multiy16x16_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.multix 
        = vlSelf->ammod__DOT__multix16x16_r;
    vlSelf->envaddrdelay__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.clk;
    vlSelf->ammod__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.valid;
    vlSelf->ammod__DOT__phtime__DOT__gatein = vlSelf->ammod__DOT__gatein;
    vlSelf->ammod__DOT__phtime__DOT__tcnt = vlSelf->ammod__DOT__tcnt;
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[0U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[0U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[1U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[1U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[2U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[2U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[3U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[3U];
    vlSelf->ammod__DOT__pinidelay__DOT__din = vlSelf->ammod__DOT__pini;
    vlSelf->ammod__DOT__ampxdelay__DOT__din = vlSelf->ammod__DOT__ampx;
    vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__din 
        = vlSelf->ammod__DOT__cordicg__DOT__gin;
    vlSelf->ammod__DOT__phtime__DOT__freq = vlSelf->ammod__DOT__freq;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__phtime__DOT__phasetime = vlSelf->ammod__DOT__phasetime;
    vlSelf->ammod__DOT__pini_d = vlSelf->ammod__DOT__pinidelay__DOT__dout;
    vlSelf->ammod__DOT__phtime__DOT__gateout = vlSelf->ammod__DOT__gphtime;
    vlSelf->ammod__DOT__ampx_d = vlSelf->ammod__DOT__ampxdelay__DOT__dout;
    vlSelf->ammod__DOT__gmulti = vlSelf->ammod__DOT__multidelay__DOT__dout;
    vlSelf->ammod__DOT__freqcossinp32x16_d[0U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[0U];
    vlSelf->ammod__DOT__freqcossinp32x16_d[1U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[1U];
    vlSelf->ammod__DOT__freqcossinp32x16_d[2U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[2U];
    vlSelf->ammod__DOT__freqcossinp32x16_d[3U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[3U];
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__cordicg__DOT__phaseout1 = vlSelf->ammod__DOT__cordicg__DOT__phaseout;
    vlSelf->ammod__DOT__cordicg__DOT__xout = vlSelf->ammod__DOT__cos_w;
    vlSelf->ammod__DOT__cordicg__DOT__xout1 = vlSelf->ammod__DOT__cos_w;
    vlSelf->ammod__DOT__cordicg__DOT__yout = vlSelf->ammod__DOT__sin_w;
    vlSelf->ammod__DOT__cordicg__DOT__yout1 = vlSelf->ammod__DOT__sin_w;
    vlSelf->ammod__DOT__multidelay__DOT__din = vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->ammod__DOT__cordicg__DOT__gout = vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->ammod__DOT__gcordic = vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->envaddrdelay__DOT__dout = vlSelf->envaddr;
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__phtime__DOT__clk = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__ampxdelay__DOT__clk = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__pinidelay__DOT__clk = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__multidelay__DOT__clk = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__clk 
        = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__cordicg__DOT__clk = vlSelf->ammod__DOT__clk;
    vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__clk 
        = vlSelf->ammod__DOT__cordicg__DOT__clk;
}

VL_INLINE_OPT void Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn__0(Vtop_elementconn__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn__0\n"); );
    // Init
    SData/*11:0*/ __Vdly__envaddr_cnt;
    __Vdly__envaddr_cnt = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v0;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v0 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v0;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v0 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v0;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v0 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v1;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v1 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v1;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v1 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v1;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v1 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v2;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v2 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v2;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v2 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v2;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v2 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v3;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v3 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v3;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v3 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v3;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v3 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v4;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v4 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v4;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v4 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v4;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v4 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v5;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v5 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v5;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v5 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v5;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v5 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v6;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v6 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v6;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v6 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v6;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v6 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v7;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v7 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v7;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v7 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v7;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v7 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v8;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v8 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v8;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v8 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v8;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v8 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v9;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v9 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v9;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v9 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v9;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v9 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v10;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v10 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v10;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v10 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v10;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v10 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v11;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v11 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v11;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v11 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v11;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v11 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v12;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v12 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v12;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v12 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v12;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v12 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v13;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v13 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v13;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v13 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v13;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v13 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v14;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v14 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v14;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v14 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v14;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v14 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v15;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v15 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v15;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v15 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v15;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v15 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__x__v16;
    __Vdlyvval__ammod__DOT__cordicg__DOT__x__v16 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__y__v16;
    __Vdlyvval__ammod__DOT__cordicg__DOT__y__v16 = 0;
    IData/*16:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__z__v16;
    __Vdlyvval__ammod__DOT__cordicg__DOT__z__v16 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15 = 0;
    CData/*0:0*/ __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15;
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15 = 0;
    VlWide<6>/*191:0*/ __Vtemp_h7c741929__0;
    VlWide<5>/*159:0*/ __Vtemp_hab5744ba__0;
    VlWide<104>/*3327:0*/ __Vtemp_h75aade2d__0;
    VlWide<100>/*3199:0*/ __Vtemp_h736c1f01__0;
    VlWide<12>/*383:0*/ __Vtemp_hf4a07a80__0;
    // Body
    __Vdly__envaddr_cnt = vlSelf->envaddr_cnt;
    vlSelf->ammod__DOT__multidelay__DOT__usual__DOT__shifter 
        = ((0x1ffeU & ((IData)(vlSelf->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                       << 1U)) | (IData)(vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout));
    vlSelf->ammod__DOT__phtime__DOT__gatesr = ((0xfeU 
                                                & ((IData)(vlSelf->ammod__DOT__phtime__DOT__gatesr) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->busy_sr 
                                                             >> 3U))));
    vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
        = ((0xffffeU & (vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                        << 1U)) | (IData)(vlSelf->ammod__DOT__gphaseinit));
    if (vlSelf->ammod__DOT__cordicg__DOT__shiftpi) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v0 
            = (0x1ffffU & (- VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__cordicg__DOT__yin_1))));
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v0 
            = (0x1ffffU & (- VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__cordicg__DOT__xin_1))));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v0 
            = ((0x10000U & ((~ (vlSelf->ammod__DOT__cordicg__DOT__phasein_1 
                                >> 0x10U)) << 0x10U)) 
               | (0xffffU & vlSelf->ammod__DOT__cordicg__DOT__phasein_1));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v0 
            = (0x1ffffU & VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__cordicg__DOT__yin_1)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v0 
            = (0x1ffffU & VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__cordicg__DOT__xin_1)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v0 
            = vlSelf->ammod__DOT__cordicg__DOT__phasein_1;
    }
    __Vtemp_h7c741929__0[1U] = ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
                                 >> 0xfU) | (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
                                             << 0x11U));
    __Vtemp_h7c741929__0[2U] = ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
                                 >> 0xfU) | (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
                                             << 0x11U));
    __Vtemp_h7c741929__0[3U] = ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
                                 >> 0xfU) | (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
                                             << 0x11U));
    __Vtemp_h7c741929__0[4U] = ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
                                 >> 0xfU) | (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[4U] 
                                             << 0x11U));
    __Vtemp_h7c741929__0[5U] = (0x3ffU & (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[4U] 
                                          >> 0xfU));
    vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
        = ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
            << 0x11U) | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.pini);
    vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h7c741929__0[1U];
    vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h7c741929__0[2U];
    vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h7c741929__0[3U];
    vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h7c741929__0[4U];
    vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h7c741929__0[5U];
    __Vtemp_hab5744ba__0[1U] = ((vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
                                 >> 0x10U) | (vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
                                              << 0x10U));
    __Vtemp_hab5744ba__0[2U] = ((vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
                                 >> 0x10U) | (vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
                                              << 0x10U));
    __Vtemp_hab5744ba__0[3U] = ((vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
                                 >> 0x10U) | (vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U] 
                                              << 0x10U));
    __Vtemp_hab5744ba__0[4U] = ((vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U] 
                                 >> 0x10U) | (vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[4U] 
                                              << 0x10U));
    vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
        = ((vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
            << 0x10U) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.ampx));
    vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_hab5744ba__0[1U];
    vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_hab5744ba__0[2U];
    vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_hab5744ba__0[3U];
    vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_hab5744ba__0[4U];
    VL_SEL_WWII(3200,3328, __Vtemp_h736c1f01__0, vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter, 0U, 0xc80U);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp_h75aade2d__0, __Vtemp_h736c1f01__0, vlSelf->freqdata_r2);
    VL_ASSIGN_W(3328,vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter, __Vtemp_h75aade2d__0);
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [1U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [2U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [3U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [4U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [5U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [6U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [7U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [8U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [9U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xaU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xbU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xcU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xdU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xeU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xfU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [1U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [2U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [3U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [4U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [5U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [6U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [7U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [8U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [9U];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xaU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xbU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xcU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xdU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xeU];
    __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15 
        = vlSelf->ammod__DOT__cordicg__DOT__plusall
        [0xfU];
    __Vtemp_hf4a07a80__0[1U] = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[2U] = (((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[3U] = (((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[4U] = (((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[5U] = (((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[6U] = (((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[7U] = (((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[8U] = (((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[9U] = (((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                  & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                               & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                              << 0xcU));
    __Vtemp_hf4a07a80__0[0xaU] = (((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                    & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                   >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                                 & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                                << 0xcU));
    __Vtemp_hf4a07a80__0[0xbU] = ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                   & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                  >> 0x14U);
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
             & vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 0xcU) | (IData)(vlSelf->envaddr_r));
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_hf4a07a80__0[1U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_hf4a07a80__0[2U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_hf4a07a80__0[3U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_hf4a07a80__0[4U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_hf4a07a80__0[5U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_hf4a07a80__0[6U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_hf4a07a80__0[7U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[8U] 
        = __Vtemp_hf4a07a80__0[8U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[9U] 
        = __Vtemp_hf4a07a80__0[9U];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
        = __Vtemp_hf4a07a80__0[0xaU];
    vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
        = __Vtemp_hf4a07a80__0[0xbU];
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v1 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0U] + vlSelf->ammod__DOT__cordicg__DOT__y
                           [0U]));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v1 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0U] - vlSelf->ammod__DOT__cordicg__DOT__x
                           [0U]));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v1 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v1 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0U] - vlSelf->ammod__DOT__cordicg__DOT__y
                           [0U]));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v1 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0U] + vlSelf->ammod__DOT__cordicg__DOT__x
                           [0U]));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v1 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[1U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v2 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [1U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [1U], 1U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v2 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [1U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [1U], 1U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v2 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [1U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v2 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [1U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [1U], 1U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v2 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [1U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [1U], 1U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v2 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [1U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[2U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v3 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [2U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [2U], 2U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v3 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [2U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [2U], 2U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v3 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [2U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v3 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [2U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [2U], 2U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v3 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [2U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [2U], 2U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v3 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [2U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[3U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v4 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [3U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [3U], 3U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v4 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [3U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [3U], 3U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v4 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [3U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v4 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [3U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [3U], 3U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v4 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [3U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [3U], 3U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v4 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [3U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[4U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v5 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [4U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [4U], 4U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v5 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [4U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [4U], 4U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v5 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [4U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v5 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [4U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [4U], 4U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v5 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [4U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [4U], 4U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v5 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [4U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[5U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v6 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [5U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [5U], 5U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v6 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [5U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [5U], 5U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v6 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [5U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v6 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [5U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [5U], 5U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v6 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [5U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [5U], 5U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v6 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [5U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[6U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v7 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [6U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [6U], 6U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v7 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [6U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [6U], 6U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v7 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [6U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v7 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [6U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [6U], 6U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v7 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [6U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [6U], 6U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v7 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [6U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[7U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v8 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [7U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [7U], 7U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v8 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [7U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [7U], 7U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v8 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [7U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v8 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [7U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [7U], 7U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v8 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [7U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [7U], 7U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v8 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [7U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[8U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v9 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [8U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [8U], 8U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v9 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [8U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [8U], 8U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v9 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [8U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v9 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [8U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [8U], 8U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v9 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [8U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [8U], 8U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v9 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [8U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[9U]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v10 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [9U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [9U], 9U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v10 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [9U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [9U], 9U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v10 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [9U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v10 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [9U] - VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__y
                                                 [9U], 9U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v10 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [9U] + VL_SHIFTRS_III(17,17,32, 
                                                 vlSelf->ammod__DOT__cordicg__DOT__x
                                                 [9U], 9U)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v10 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [9U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0xaU]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v11 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xaU], 0xaU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v11 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xaU], 0xaU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v11 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xaU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v11 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xaU], 0xaU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v11 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xaU], 0xaU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v11 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xaU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0xbU]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v12 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xbU], 0xbU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v12 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xbU], 0xbU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v12 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xbU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v12 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xbU], 0xbU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v12 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xbU], 0xbU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v12 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xbU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0xcU]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v13 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xcU], 0xcU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v13 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xcU], 0xcU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v13 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xcU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v13 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xcU], 0xcU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v13 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xcU], 0xcU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v13 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xcU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0xdU]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v14 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xdU], 0xdU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v14 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xdU], 0xdU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v14 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xdU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v14 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xdU], 0xdU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v14 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xdU], 0xdU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v14 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xdU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0xeU]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v15 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xeU], 0xeU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v15 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xeU], 0xeU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v15 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xeU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v15 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xeU], 0xeU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v15 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xeU], 0xeU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v15 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xeU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    }
    if (vlSelf->ammod__DOT__cordicg__DOT__plusall[0xfU]) {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v16 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xfU], 0xfU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v16 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xfU], 0xfU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v16 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xfU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    } else {
        __Vdlyvval__ammod__DOT__cordicg__DOT__x__v16 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                           [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__y
                                                   [0xfU], 0xfU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__y__v16 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                           [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                                   vlSelf->ammod__DOT__cordicg__DOT__x
                                                   [0xfU], 0xfU)));
        __Vdlyvval__ammod__DOT__cordicg__DOT__z__v16 
            = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                           [0xfU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    }
    vlSelf->envaddr_r3 = vlSelf->envaddr_r2;
    vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__yin_d = 0U;
    vlSelf->ammod__DOT__phtime__DOT__freq_r = vlSelf->ammod__DOT__freq;
    vlSelf->ammod__DOT__phtime__DOT__tcnt_r = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.tcnt;
    vlSelf->ammod__DOT__gateout_r = vlSelf->ammod__DOT__multidelay__DOT__dout;
    vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__xin_d 
        = vlSelf->ammod__DOT__ampx_d2;
    vlSelf->ammod__DOT__cordicg__DOT__phaseout_r = vlSelf->ammod__DOT__cordicg__DOT__zg1;
    vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__phasein_d 
        = vlSelf->ammod__DOT__phaseinit;
    vlSelf->ammod__DOT__phtime__DOT__phasetime_r3 = vlSelf->ammod__DOT__phtime__DOT__phasetime_r2;
    vlSelf->envdata_r3[0U] = vlSelf->envdata_r2[0U];
    vlSelf->envdata_r3[1U] = vlSelf->envdata_r2[1U];
    vlSelf->envdata_r3[2U] = vlSelf->envdata_r2[2U];
    vlSelf->envdata_r3[3U] = vlSelf->envdata_r2[3U];
    vlSelf->freqaddr_r4 = vlSelf->freqaddr_r3;
    vlSelf->ammod__DOT__multiy16x16_r = ((0xffff000000000000ULL 
                                          & vlSelf->ammod__DOT__multiy16x16_r) 
                                         | (((QData)((IData)(
                                                             ((vlSelf->ammod__DOT__multiy
                                                               [2U] 
                                                               << 0x10U) 
                                                              | vlSelf->ammod__DOT__multiy
                                                              [1U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelf->ammod__DOT__multiy
                                                              [0U]))));
    vlSelf->ammod__DOT__multiy16x16_r = ((0xffffffffffffULL 
                                          & vlSelf->ammod__DOT__multiy16x16_r) 
                                         | ((QData)((IData)(
                                                            vlSelf->ammod__DOT__multiy
                                                            [3U])) 
                                            << 0x30U));
    vlSelf->ammod__DOT__multix16x16_r = ((0xffff000000000000ULL 
                                          & vlSelf->ammod__DOT__multix16x16_r) 
                                         | (((QData)((IData)(
                                                             ((vlSelf->ammod__DOT__multix
                                                               [2U] 
                                                               << 0x10U) 
                                                              | vlSelf->ammod__DOT__multix
                                                              [1U]))) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              vlSelf->ammod__DOT__multix
                                                              [0U]))));
    vlSelf->ammod__DOT__multix16x16_r = ((0xffffffffffffULL 
                                          & vlSelf->ammod__DOT__multix16x16_r) 
                                         | ((QData)((IData)(
                                                            vlSelf->ammod__DOT__multix
                                                            [3U])) 
                                            << 0x30U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xfU], 0xfU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xfU], 0xfU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xfU], 0xfU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xfU], 0xfU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xeU], 0xeU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xeU], 0xeU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xeU], 0xeU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xeU], 0xeU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xdU], 0xdU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xdU], 0xdU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xdU], 0xdU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xdU], 0xdU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xcU], 0xcU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xcU], 0xcU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xcU], 0xcU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xcU], 0xcU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xbU], 0xbU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xbU], 0xbU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xbU], 0xbU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xbU], 0xbU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xaU], 0xaU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__x
                                               [0xaU], 0xaU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xaU], 0xaU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                               vlSelf->ammod__DOT__cordicg__DOT__y
                                               [0xaU], 0xaU)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [9U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [9U], 9U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [9U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [9U], 9U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [9U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [9U], 9U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [9U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [9U], 9U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [8U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [8U], 8U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [8U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [8U], 8U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [8U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [8U], 8U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [8U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [8U], 8U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [7U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [7U], 7U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [7U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [7U], 7U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [7U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [7U], 7U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [7U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [7U], 7U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [6U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [6U], 6U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [6U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [6U], 6U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [6U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [6U], 6U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [6U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [6U], 6U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [5U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [5U], 5U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [5U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [5U], 5U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [5U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [5U], 5U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [5U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [5U], 5U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [4U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [4U], 4U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [4U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [4U], 4U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [4U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [4U], 4U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [4U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [4U], 4U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [3U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [3U], 3U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [3U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [3U], 3U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [3U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [3U], 3U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [3U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [3U], 3U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [2U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [2U], 2U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [2U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [2U], 2U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [2U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [2U], 2U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [2U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [2U], 2U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [1U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [1U], 1U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [1U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__x
                                             [1U], 1U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [1U] - VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [1U], 1U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [1U] + VL_SHIFTRS_III(17,17,32, 
                                             vlSelf->ammod__DOT__cordicg__DOT__y
                                             [1U], 1U)));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0U] + vlSelf->ammod__DOT__cordicg__DOT__x
                       [0U]));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__y
                       [0U] - vlSelf->ammod__DOT__cordicg__DOT__x
                       [0U]));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0U] - vlSelf->ammod__DOT__cordicg__DOT__y
                       [0U]));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__x
                       [0U] + vlSelf->ammod__DOT__cordicg__DOT__y
                       [0U]));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xfU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xfU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xeU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xeU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xdU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xdU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xcU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xcU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xbU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xbU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xaU] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0xaU] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [9U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [9U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [8U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [8U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [7U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [7U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [6U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [6U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [5U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [5U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [4U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [4U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [3U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [3U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [2U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [2U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [1U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [1U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zminus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0U] - vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zplus 
        = (0x1ffffU & (vlSelf->ammod__DOT__cordicg__DOT__z
                       [0U] + vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    vlSelf->ammod__DOT__cordicg__DOT__errorr = (1U 
                                                & (((IData)(vlSelf->ammod__DOT__cordicg__DOT__genblk5__DOT__xdummy) 
                                                    ^ 
                                                    ((IData)(vlSelf->ammod__DOT__cordicg__DOT__xout_r) 
                                                     >> 0xfU)) 
                                                   | ((IData)(vlSelf->ammod__DOT__cordicg__DOT__genblk5__DOT__ydummy) 
                                                      ^ 
                                                      ((IData)(vlSelf->ammod__DOT__sin_w) 
                                                       >> 0xfU))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2));
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[1U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[2U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[3U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[4U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[5U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[6U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[7U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[8U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[9U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0xaU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0xbU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0xcU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0xdU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0xeU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0xfU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck0[0x10U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[1U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[2U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[3U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[4U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[5U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[6U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[7U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[8U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[9U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0xaU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0xbU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0xcU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0xdU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0xeU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0xfU] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14;
    vlSelf->ammod__DOT__cordicg__DOT__pluscheck[0x10U] 
        = __Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15;
    vlSelf->ammod__DOT__cordicg__DOT__x[0U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v0;
    vlSelf->ammod__DOT__cordicg__DOT__x[1U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v1;
    vlSelf->ammod__DOT__cordicg__DOT__x[2U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v2;
    vlSelf->ammod__DOT__cordicg__DOT__x[3U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v3;
    vlSelf->ammod__DOT__cordicg__DOT__x[4U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v4;
    vlSelf->ammod__DOT__cordicg__DOT__x[5U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v5;
    vlSelf->ammod__DOT__cordicg__DOT__x[6U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v6;
    vlSelf->ammod__DOT__cordicg__DOT__x[7U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v7;
    vlSelf->ammod__DOT__cordicg__DOT__x[8U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v8;
    vlSelf->ammod__DOT__cordicg__DOT__x[9U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v9;
    vlSelf->ammod__DOT__cordicg__DOT__x[0xaU] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v10;
    vlSelf->ammod__DOT__cordicg__DOT__x[0xbU] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v11;
    vlSelf->ammod__DOT__cordicg__DOT__x[0xcU] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v12;
    vlSelf->ammod__DOT__cordicg__DOT__x[0xdU] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v13;
    vlSelf->ammod__DOT__cordicg__DOT__x[0xeU] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v14;
    vlSelf->ammod__DOT__cordicg__DOT__x[0xfU] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v15;
    vlSelf->ammod__DOT__cordicg__DOT__x[0x10U] = __Vdlyvval__ammod__DOT__cordicg__DOT__x__v16;
    vlSelf->ammod__DOT__cordicg__DOT__y[0U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v0;
    vlSelf->ammod__DOT__cordicg__DOT__y[1U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v1;
    vlSelf->ammod__DOT__cordicg__DOT__y[2U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v2;
    vlSelf->ammod__DOT__cordicg__DOT__y[3U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v3;
    vlSelf->ammod__DOT__cordicg__DOT__y[4U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v4;
    vlSelf->ammod__DOT__cordicg__DOT__y[5U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v5;
    vlSelf->ammod__DOT__cordicg__DOT__y[6U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v6;
    vlSelf->ammod__DOT__cordicg__DOT__y[7U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v7;
    vlSelf->ammod__DOT__cordicg__DOT__y[8U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v8;
    vlSelf->ammod__DOT__cordicg__DOT__y[9U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v9;
    vlSelf->ammod__DOT__cordicg__DOT__y[0xaU] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v10;
    vlSelf->ammod__DOT__cordicg__DOT__y[0xbU] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v11;
    vlSelf->ammod__DOT__cordicg__DOT__y[0xcU] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v12;
    vlSelf->ammod__DOT__cordicg__DOT__y[0xdU] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v13;
    vlSelf->ammod__DOT__cordicg__DOT__y[0xeU] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v14;
    vlSelf->ammod__DOT__cordicg__DOT__y[0xfU] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v15;
    vlSelf->ammod__DOT__cordicg__DOT__y[0x10U] = __Vdlyvval__ammod__DOT__cordicg__DOT__y__v16;
    vlSelf->ammod__DOT__cordicg__DOT__z[0U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v0;
    vlSelf->ammod__DOT__cordicg__DOT__z[1U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v1;
    vlSelf->ammod__DOT__cordicg__DOT__z[2U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v2;
    vlSelf->ammod__DOT__cordicg__DOT__z[3U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v3;
    vlSelf->ammod__DOT__cordicg__DOT__z[4U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v4;
    vlSelf->ammod__DOT__cordicg__DOT__z[5U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v5;
    vlSelf->ammod__DOT__cordicg__DOT__z[6U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v6;
    vlSelf->ammod__DOT__cordicg__DOT__z[7U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v7;
    vlSelf->ammod__DOT__cordicg__DOT__z[8U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v8;
    vlSelf->ammod__DOT__cordicg__DOT__z[9U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v9;
    vlSelf->ammod__DOT__cordicg__DOT__z[0xaU] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v10;
    vlSelf->ammod__DOT__cordicg__DOT__z[0xbU] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v11;
    vlSelf->ammod__DOT__cordicg__DOT__z[0xcU] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v12;
    vlSelf->ammod__DOT__cordicg__DOT__z[0xdU] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v13;
    vlSelf->ammod__DOT__cordicg__DOT__z[0xeU] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v14;
    vlSelf->ammod__DOT__cordicg__DOT__z[0xfU] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v15;
    vlSelf->ammod__DOT__cordicg__DOT__z[0x10U] = __Vdlyvval__ammod__DOT__cordicg__DOT__z__v16;
    vlSelf->ammod__DOT__multidelay__DOT__dout = (1U 
                                                 & ((IData)(vlSelf->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                                                    >> 0xcU));
    vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                 >> 0x13U));
    vlSelf->ammod__DOT__gphaseinit = vlSelf->ammod__DOT__gphtime;
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[0U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x64U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[1U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x65U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[2U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x66U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[3U] 
        = vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x67U];
    vlSelf->freqdata_r2[0U] = vlSelf->freqdata_r[0U];
    vlSelf->freqdata_r2[1U] = vlSelf->freqdata_r[1U];
    vlSelf->freqdata_r2[2U] = vlSelf->freqdata_r[2U];
    vlSelf->freqdata_r2[3U] = vlSelf->freqdata_r[3U];
    vlSelf->envaddr = (0xfffU & ((vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                                  << 4U) | (vlSelf->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                            >> 0x1cU)));
    vlSelf->dummybusy = (1U & (IData)((vlSelf->busy_sr 
                                       >> 0x29U)));
    vlSelf->envaddr_r = vlSelf->envaddr_cnt;
    vlSelf->busy_sr = ((0x3fffffffffeULL & (vlSelf->busy_sr 
                                            << 1U)) 
                       | (QData)((IData)(vlSelf->busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.cmdstb) {
        __Vdly__envaddr_cnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.envstart;
        vlSelf->busy = 1U;
    } else {
        if (vlSelf->busy) {
            __Vdly__envaddr_cnt = (0xfffU & ((IData)(vlSelf->envaddr_cnt) 
                                             + (0U 
                                                != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.envlength))));
        }
        if (vlSelf->lastenv) {
            vlSelf->busy = 0U;
        }
    }
    vlSelf->ammod__DOT__cordicg__DOT__yin_1 = vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__yin_d;
    vlSelf->ammod__DOT__gateout = vlSelf->ammod__DOT__gateout_r;
    vlSelf->ammod__DOT__cordicg__DOT__xin_1 = vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__xin_d;
    vlSelf->ammod__DOT__ampx_d2 = ((IData)(vlSelf->ammod__DOT__gphtime)
                                    ? (0xffffU & (IData)(vlSelf->ammod__DOT__ampxdelay__DOT__dout))
                                    : 0U);
    vlSelf->ammod__DOT__cordicg__DOT__phaseout = vlSelf->ammod__DOT__cordicg__DOT__phaseout_r;
    vlSelf->ammod__DOT__cordicg__DOT__zg1 = vlSelf->ammod__DOT__cordicg__DOT__zg0;
    vlSelf->ammod__DOT__cordicg__DOT__shiftpi = (1U 
                                                 & VL_REDXOR_32(
                                                                (0x18000U 
                                                                 & vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__phasein_d)));
    vlSelf->ammod__DOT__cordicg__DOT__phasein_1 = vlSelf->ammod__DOT__cordicg__DOT__genblk2__DOT__phasein_d;
    vlSelf->ammod__DOT__phaseinit = (0x1ffffU & ((vlSelf->ammod__DOT__phasetime 
                                                  >> 0xaU) 
                                                 + vlSelf->ammod__DOT__pinidelay__DOT__dout));
    vlSelf->ammod__DOT__phtime__DOT__phasetime_r2 = vlSelf->ammod__DOT__phtime__DOT__phasetime_r1;
    vlSelf->envdata_r2[0U] = vlSelf->envdata_r;
    vlSelf->envdata_r2[1U] = vlSelf->envdata_r;
    vlSelf->envdata_r2[2U] = vlSelf->envdata_r;
    vlSelf->envdata_r2[3U] = vlSelf->envdata_r;
    vlSelf->ammod__DOT__envxy32x16[0U] = vlSelf->envdata_r3[0U];
    vlSelf->ammod__DOT__envxy32x16[1U] = vlSelf->envdata_r3[1U];
    vlSelf->ammod__DOT__envxy32x16[2U] = vlSelf->envdata_r3[2U];
    vlSelf->ammod__DOT__envxy32x16[3U] = vlSelf->envdata_r3[3U];
    vlSelf->freqaddr_r3 = vlSelf->freqaddr_r2;
    vlSelf->ammod__DOT__multiy16x16 = vlSelf->ammod__DOT__multiy16x16_r;
    vlSelf->ammod__DOT__multix16x16 = vlSelf->ammod__DOT__multix16x16_r;
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [1U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [2U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [3U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [4U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [5U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [6U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [7U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [8U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [9U] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xaU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xbU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xcU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xdU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xeU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__plus 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xfU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[0U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[1U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[1U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[2U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[2U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[3U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[3U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[4U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[4U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[5U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[5U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[6U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[6U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[7U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[7U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[8U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[8U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[9U] = 
        (1U & (vlSelf->ammod__DOT__cordicg__DOT__z[9U] 
               >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xaU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xaU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xbU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xbU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xcU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xcU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xdU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xdU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xeU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xeU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__plusall[0xfU] 
        = (1U & (vlSelf->ammod__DOT__cordicg__DOT__z
                 [0xfU] >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__error = vlSelf->ammod__DOT__cordicg__DOT__errorr;
    vlSelf->ammod__DOT__cordicg__DOT__genblk5__DOT__ydummy 
        = (1U & ((vlSelf->ammod__DOT__cordicg__DOT__ysum3 
                  - vlSelf->ammod__DOT__cordicg__DOT__ysum2_d) 
                 >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__yout_r = (0xffffU 
                                                & (vlSelf->ammod__DOT__cordicg__DOT__ysum3 
                                                   - vlSelf->ammod__DOT__cordicg__DOT__ysum2_d));
    vlSelf->ammod__DOT__cordicg__DOT__genblk5__DOT__xdummy 
        = (1U & ((vlSelf->ammod__DOT__cordicg__DOT__xsum3 
                  - vlSelf->ammod__DOT__cordicg__DOT__xsum2_d) 
                 >> 0x10U));
    vlSelf->ammod__DOT__cordicg__DOT__xout_r = (0xffffU 
                                                & (vlSelf->ammod__DOT__cordicg__DOT__xsum3 
                                                   - vlSelf->ammod__DOT__cordicg__DOT__xsum2_d));
    vlSelf->ammod__DOT__multix[3U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multix[2U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multix[1U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multix[0U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multiy[3U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multiy[2U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multiy[1U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__multiy[0U] = (0xffffU & (IData)(
                                                        (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
                                                         >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    vlSelf->ammod__DOT__gmulti = vlSelf->ammod__DOT__multidelay__DOT__dout;
    vlSelf->ammod__DOT__multidelay__DOT__din = vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->ammod__DOT__cordicg__DOT__gout = vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->ammod__DOT__gcordic = vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    vlSelf->ammod__DOT__freqcossinp32x16_d[0U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[0U];
    vlSelf->ammod__DOT__freqcossinp32x16_d[1U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[1U];
    vlSelf->ammod__DOT__freqcossinp32x16_d[2U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[2U];
    vlSelf->ammod__DOT__freqcossinp32x16_d[3U] = vlSelf->ammod__DOT__freqcossinpdelay__DOT__dout[3U];
    vlSelf->envaddrdelay__DOT__dout = vlSelf->envaddr;
    vlSelf->envaddr_cnt = __Vdly__envaddr_cnt;
    vlSelf->ammod__DOT__ampxdelay__DOT__dout = (vlSelf->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[4U] 
                                                >> 0x10U);
    vlSelf->ammod__DOT__gphtime = (1U & ((IData)(vlSelf->ammod__DOT__phtime__DOT__gatesr) 
                                         >> 4U));
    vlSelf->ammod__DOT__cordicg__DOT__phaseout1 = vlSelf->ammod__DOT__cordicg__DOT__phaseout;
    vlSelf->ammod__DOT__phasetime = vlSelf->ammod__DOT__phtime__DOT__phasetime_r3;
    vlSelf->ammod__DOT__pinidelay__DOT__dout = (0x1ffffU 
                                                & ((vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[5U] 
                                                    << 7U) 
                                                   | (vlSelf->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[4U] 
                                                      >> 0x19U)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    vlSelf->ammod__DOT__cordicg__DOT__gin = vlSelf->ammod__DOT__gphaseinit;
    vlSelf->freqdata_r[0U] = vlSelf->freqdata[0U];
    vlSelf->freqdata_r[1U] = vlSelf->freqdata[1U];
    vlSelf->freqdata_r[2U] = vlSelf->freqdata[2U];
    vlSelf->freqdata_r[3U] = vlSelf->freqdata[3U];
    vlSelf->ammod__DOT__freq32 = vlSelf->freqdata_r2[0U];
    vlSelf->ammod__DOT__freqcossinp32x16[0U] = vlSelf->freqdata_r2[0U];
    vlSelf->ammod__DOT__freqcossinp32x16[1U] = vlSelf->freqdata_r2[1U];
    vlSelf->ammod__DOT__freqcossinp32x16[2U] = vlSelf->freqdata_r2[2U];
    vlSelf->ammod__DOT__freqcossinp32x16[3U] = vlSelf->freqdata_r2[3U];
    vlSelf->ammod__DOT__freq = (vlSelf->freqdata_r2[0U] 
                                >> 5U);
    vlSelf->envaddrdelay__DOT__din = vlSelf->envaddr_r;
    vlSelf->ammod__DOT__gatein = (1U & (IData)((vlSelf->busy_sr 
                                                >> 3U)));
    vlSelf->ammod__DOT__ampx_d = vlSelf->ammod__DOT__ampxdelay__DOT__dout;
    vlSelf->ammod__DOT__phtime__DOT__gateout = vlSelf->ammod__DOT__gphtime;
    vlSelf->ammod__DOT__cordicg__DOT__xin = vlSelf->ammod__DOT__ampx_d2;
    vlSelf->ammod__DOT__cordicg__DOT__zg0 = vlSelf->ammod__DOT__cordicg__DOT__zg;
    vlSelf->ammod__DOT__phtime__DOT__phasetime = vlSelf->ammod__DOT__phasetime;
    vlSelf->ammod__DOT__pini_d = vlSelf->ammod__DOT__pinidelay__DOT__dout;
    vlSelf->ammod__DOT__cordicg__DOT__phasein = vlSelf->ammod__DOT__phaseinit;
    vlSelf->ammod__DOT__phtime__DOT__phasetime_r1 = vlSelf->ammod__DOT__phtime__DOT__phasetime_r0;
    vlSelf->envdata_r = vlSelf->envdata;
    vlSelf->freqaddr_r2 = vlSelf->freqaddr_r;
    vlSelf->ammod__DOT__cordicg__DOT__ysum2_d = vlSelf->ammod__DOT__cordicg__DOT__ysum2;
    vlSelf->ammod__DOT__cordicg__DOT__ysum3 = (0x1ffffU 
                                               & (vlSelf->ammod__DOT__cordicg__DOT__ysum0 
                                                  - vlSelf->ammod__DOT__cordicg__DOT__ysum1));
    vlSelf->ammod__DOT__cordicg__DOT__xsum2_d = vlSelf->ammod__DOT__cordicg__DOT__xsum2;
    vlSelf->ammod__DOT__cordicg__DOT__xsum3 = (0x1ffffU 
                                               & (vlSelf->ammod__DOT__cordicg__DOT__xsum0 
                                                  - vlSelf->ammod__DOT__cordicg__DOT__xsum1));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__mult0;
    vlSelf->ammod__DOT__cordicg__DOT__reg_delay__DOT__din 
        = vlSelf->ammod__DOT__cordicg__DOT__gin;
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[0U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[0U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[1U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[1U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[2U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[2U];
    vlSelf->ammod__DOT__freqcossinpdelay__DOT__din[3U] 
        = vlSelf->ammod__DOT__freqcossinp32x16[3U];
    vlSelf->ammod__DOT__phtime__DOT__freq = vlSelf->ammod__DOT__freq;
    vlSelf->ammod__DOT__phtime__DOT__gatein = vlSelf->ammod__DOT__gatein;
    vlSelf->ammod__DOT__cordicg__DOT__zg = vlSelf->ammod__DOT__cordicg__DOT__z
        [0xfU];
    vlSelf->ammod__DOT__phtime__DOT__phasetime_r0 = 
        (0x7ffffffU & (IData)(vlSelf->ammod__DOT__phtime__DOT__phasetime_w));
    vlSelf->freqaddr_r = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.freqaddr;
    vlSelf->ammod__DOT__cordicg__DOT__ysum2 = (0x1ffffU 
                                               & (VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__yg, 0xcU) 
                                                  - 
                                                  VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__yg, 0xeU)));
    vlSelf->ammod__DOT__cordicg__DOT__ysum0 = (0x1ffffU 
                                               & (VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__yg, 1U) 
                                                  + 
                                                  VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__yg, 3U)));
    vlSelf->ammod__DOT__cordicg__DOT__ysum1 = (0x1ffffU 
                                               & (VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__yg, 6U) 
                                                  + 
                                                  VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__yg, 9U)));
    vlSelf->ammod__DOT__cordicg__DOT__xsum2 = (0x1ffffU 
                                               & (VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__xg, 0xcU) 
                                                  - 
                                                  VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__xg, 0xeU)));
    vlSelf->ammod__DOT__cordicg__DOT__xsum0 = (0x1ffffU 
                                               & (VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__xg, 1U) 
                                                  + 
                                                  VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__xg, 3U)));
    vlSelf->ammod__DOT__cordicg__DOT__xsum1 = (0x1ffffU 
                                               & (VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__xg, 6U) 
                                                  + 
                                                  VL_SHIFTRS_III(17,17,32, vlSelf->ammod__DOT__cordicg__DOT__xg, 9U)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2)))));
    vlSelf->ammod__DOT__phtime__DOT__phasetime_w = 
        (0x3fffffffffffffULL & ((QData)((IData)(vlSelf->ammod__DOT__phtime__DOT__freq_r)) 
                                * (QData)((IData)(vlSelf->ammod__DOT__phtime__DOT__tcnt_r))));
    vlSelf->ammod__DOT__cordicg__DOT__yg = vlSelf->ammod__DOT__cordicg__DOT__y
        [0xfU];
    vlSelf->ammod__DOT__cordicg__DOT__xg = vlSelf->ammod__DOT__cordicg__DOT__x
        [0xfU];
    vlSelf->freqaddr = vlSelf->freqaddr_r;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi 
        = vlSelf->ammod__DOT__envx[3U];
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi 
        = vlSelf->ammod__DOT__envy[3U];
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi 
        = vlSelf->ammod__DOT__envx[2U];
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi 
        = vlSelf->ammod__DOT__envy[2U];
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi 
        = vlSelf->ammod__DOT__envx[1U];
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi 
        = vlSelf->ammod__DOT__envy[1U];
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi 
        = vlSelf->ammod__DOT__envx[0U];
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi 
        = vlSelf->ammod__DOT__envy[0U];
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
                             + vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
                             + vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2));
    vlSelf->ammod__DOT__envx[0U] = (vlSelf->envdata_r3[0U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envx[1U] = (vlSelf->envdata_r3[1U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envx[2U] = (vlSelf->envdata_r3[2U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envx[3U] = (vlSelf->envdata_r3[3U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__envy[0U] = (0xffffU & vlSelf->envdata_r3[0U]);
    vlSelf->ammod__DOT__envy[1U] = (0xffffU & vlSelf->envdata_r3[1U]);
    vlSelf->ammod__DOT__envy[2U] = (0xffffU & vlSelf->envdata_r3[2U]);
    vlSelf->ammod__DOT__envy[3U] = (0xffffU & vlSelf->envdata_r3[3U]);
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
                              >> 0xfU)));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr4 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr3;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__mult0;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi4 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi3;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr2;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1))));
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr1;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi1;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi1 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi 
        = vlSelf->ammod__DOT__cosp[3U];
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi 
        = vlSelf->ammod__DOT__sinp[3U];
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi 
        = vlSelf->ammod__DOT__cosp[2U];
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi 
        = vlSelf->ammod__DOT__sinp[2U];
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi 
        = vlSelf->ammod__DOT__cosp[1U];
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi 
        = vlSelf->ammod__DOT__sinp[1U];
    vlSelf->ammod__DOT__cos = vlSelf->ammod__DOT__cos_w;
    vlSelf->ammod__DOT__sin = vlSelf->ammod__DOT__sin_w;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi 
        = vlSelf->ammod__DOT__cosp[0U];
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi 
        = vlSelf->ammod__DOT__sinp[0U];
    vlSelf->ammod__DOT__cos_w = vlSelf->ammod__DOT__cordicg__DOT__xout_r;
    vlSelf->ammod__DOT__sin_w = vlSelf->ammod__DOT__cordicg__DOT__yout_r;
    vlSelf->ammod__DOT__cosp[1U] = (vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x65U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__cosp[2U] = (vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x66U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__cosp[3U] = (vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x67U] 
                                    >> 0x10U);
    vlSelf->ammod__DOT__sinp[1U] = (0xffffU & vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x65U]);
    vlSelf->ammod__DOT__sinp[2U] = (0xffffU & vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x66U]);
    vlSelf->ammod__DOT__sinp[3U] = (0xffffU & vlSelf->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x67U]);
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    vlSelf->ammod__DOT__cordicg__DOT__xout = vlSelf->ammod__DOT__cos_w;
    vlSelf->ammod__DOT__cordicg__DOT__xout1 = vlSelf->ammod__DOT__cos_w;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->ammod__DOT__cos;
    vlSelf->ammod__DOT__cordicg__DOT__yout = vlSelf->ammod__DOT__sin_w;
    vlSelf->ammod__DOT__cordicg__DOT__yout1 = vlSelf->ammod__DOT__sin_w;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->ammod__DOT__sin;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
}

VL_INLINE_OPT void Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn__1(Vtop_elementconn__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn__1\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.prepbusy 
        = (0U != vlSelf->busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.valid 
        = vlSelf->ammod__DOT__gateout_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.multix 
        = vlSelf->ammod__DOT__multix16x16_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.multiy 
        = vlSelf->ammod__DOT__multiy16x16_r;
    vlSelf->ammod__DOT__tcnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.tcnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.valid;
    vlSelf->ammod__DOT__phtime__DOT__tcnt = vlSelf->ammod__DOT__tcnt;
}

VL_INLINE_OPT void Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn__2(Vtop_elementconn__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn__2\n"); );
    // Body
    vlSelf->ammod__DOT__pini = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.pini;
    vlSelf->ammod__DOT__ampx = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.ampx;
    vlSelf->ammod__DOT__pinidelay__DOT__din = vlSelf->ammod__DOT__pini;
    vlSelf->ammod__DOT__ampxdelay__DOT__din = vlSelf->ammod__DOT__ampx;
}

VL_INLINE_OPT void Vtop_elementconn__pi3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn__0(Vtop_elementconn__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn__0\n"); );
    // Body
    vlSelf->lastenv = ((IData)(vlSelf->envaddr_cnt) 
                       == (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.envstart) 
                            + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.envlength)) 
                           - (IData)(1U)));
}
