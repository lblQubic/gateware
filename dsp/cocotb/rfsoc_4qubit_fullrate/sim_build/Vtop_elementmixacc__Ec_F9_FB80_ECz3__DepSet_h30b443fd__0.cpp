// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_elementmixacc__Ec_F9_FB80_ECz3.h"

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Init
    QData/*32:0*/ __Vdlyvval__multixi__v0;
    __Vdlyvval__multixi__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v0;
    __Vdlyvval__multiyi__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v0;
    __Vdlyvval__sumxslice__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v0;
    __Vdlyvval__sumyslice__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v1;
    __Vdlyvval__multixi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v1;
    __Vdlyvval__multiyi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v2;
    __Vdlyvval__multixi__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v2;
    __Vdlyvval__multiyi__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v1;
    __Vdlyvval__sumxslice__v1 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v1;
    __Vdlyvval__sumyslice__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v3;
    __Vdlyvval__multixi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v3;
    __Vdlyvval__multiyi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v4;
    __Vdlyvval__multixi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v4;
    __Vdlyvval__multiyi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v5;
    __Vdlyvval__multixi__v5 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v5;
    __Vdlyvval__multiyi__v5 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v2;
    __Vdlyvval__sumxslice__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v2;
    __Vdlyvval__sumyslice__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v6;
    __Vdlyvval__multixi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v6;
    __Vdlyvval__multiyi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v7;
    __Vdlyvval__multixi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v7;
    __Vdlyvval__multiyi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v8;
    __Vdlyvval__multixi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v8;
    __Vdlyvval__multiyi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v9;
    __Vdlyvval__multixi__v9 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v9;
    __Vdlyvval__multiyi__v9 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v3;
    __Vdlyvval__sumxslice__v3 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v3;
    __Vdlyvval__sumyslice__v3 = 0;
    SData/*15:0*/ __Vdly__gatesr;
    __Vdly__gatesr = 0;
    QData/*49:0*/ __Vdly__accsumx;
    __Vdly__accsumx = 0;
    QData/*49:0*/ __Vdly__accsumy;
    __Vdly__accsumy = 0;
    // Body
    __Vdly__gatesr = vlSelf->gatesr;
    __Vdly__accsumy = vlSelf->accsumy;
    __Vdly__accsumx = vlSelf->accsumx;
    __Vdlyvval__sumyslice__v3 = vlSelf->sumyslice[2U];
    __Vdlyvval__sumxslice__v3 = vlSelf->sumxslice[2U];
    __Vdlyvval__sumyslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__sumxslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__multiyi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r;
    __Vdlyvval__multixi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multixi_r;
    __Vdlyvval__sumyslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumyslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__sumxslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumxslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__multiyi__v2 = vlSelf->multiyi[1U][0U];
    __Vdlyvval__multiyi__v4 = vlSelf->multiyi[2U][0U];
    __Vdlyvval__multiyi__v5 = vlSelf->multiyi[2U][1U];
    __Vdlyvval__multiyi__v7 = vlSelf->multiyi[3U][0U];
    __Vdlyvval__multiyi__v8 = vlSelf->multiyi[3U][1U];
    __Vdlyvval__multiyi__v9 = vlSelf->multiyi[3U][2U];
    __Vdlyvval__multixi__v2 = vlSelf->multixi[1U][0U];
    __Vdlyvval__multixi__v4 = vlSelf->multixi[2U][0U];
    __Vdlyvval__multixi__v5 = vlSelf->multixi[2U][1U];
    __Vdlyvval__multixi__v7 = vlSelf->multixi[3U][0U];
    __Vdlyvval__multixi__v8 = vlSelf->multixi[3U][1U];
    __Vdlyvval__multixi__v9 = vlSelf->multixi[3U][2U];
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexj = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 0U;
    vlSelf->gatesrdummy = (1U & ((IData)(vlSelf->gatesr) 
                                 >> 0xfU));
    __Vdly__gatesr = ((0xfffeU & ((IData)(vlSelf->gatesr) 
                                  << 1U)) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.valid_r));
    if (vlSelf->newacc) {
        __Vdly__accsumx = 0ULL;
        __Vdly__accsumy = 0ULL;
    } else {
        __Vdly__accsumx = (0x3ffffffffffffULL & (vlSelf->accsumx 
                                                 + vlSelf->sumxslicelast));
        __Vdly__accsumy = (0x3ffffffffffffULL & (vlSelf->accsumy 
                                                 + vlSelf->sumyslicelast));
    }
    if (vlSelf->stbout) {
        vlSelf->accx_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumx 
                                     >> (IData)(vlSelf->shift))));
        vlSelf->accy_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumy 
                                     >> (IData)(vlSelf->shift))));
    }
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1));
    vlSelf->sumyslice[0U] = __Vdlyvval__sumyslice__v0;
    vlSelf->sumyslice[1U] = __Vdlyvval__sumyslice__v1;
    vlSelf->sumyslice[2U] = __Vdlyvval__sumyslice__v2;
    vlSelf->sumyslice[3U] = __Vdlyvval__sumyslice__v3;
    vlSelf->sumxslice[0U] = __Vdlyvval__sumxslice__v0;
    vlSelf->sumxslice[1U] = __Vdlyvval__sumxslice__v1;
    vlSelf->sumxslice[2U] = __Vdlyvval__sumxslice__v2;
    vlSelf->sumxslice[3U] = __Vdlyvval__sumxslice__v3;
    vlSelf->multiyi[0U][0U] = __Vdlyvval__multiyi__v0;
    vlSelf->multiyi[1U][0U] = __Vdlyvval__multiyi__v1;
    vlSelf->multiyi[1U][1U] = __Vdlyvval__multiyi__v2;
    vlSelf->multiyi[2U][0U] = __Vdlyvval__multiyi__v3;
    vlSelf->multiyi[2U][1U] = __Vdlyvval__multiyi__v4;
    vlSelf->multiyi[2U][2U] = __Vdlyvval__multiyi__v5;
    vlSelf->multiyi[3U][0U] = __Vdlyvval__multiyi__v6;
    vlSelf->multiyi[3U][1U] = __Vdlyvval__multiyi__v7;
    vlSelf->multiyi[3U][2U] = __Vdlyvval__multiyi__v8;
    vlSelf->multiyi[3U][3U] = __Vdlyvval__multiyi__v9;
    vlSelf->multixi[0U][0U] = __Vdlyvval__multixi__v0;
    vlSelf->multixi[1U][0U] = __Vdlyvval__multixi__v1;
    vlSelf->multixi[1U][1U] = __Vdlyvval__multixi__v2;
    vlSelf->multixi[2U][0U] = __Vdlyvval__multixi__v3;
    vlSelf->multixi[2U][1U] = __Vdlyvval__multixi__v4;
    vlSelf->multixi[2U][2U] = __Vdlyvval__multixi__v5;
    vlSelf->multixi[3U][0U] = __Vdlyvval__multixi__v6;
    vlSelf->multixi[3U][1U] = __Vdlyvval__multixi__v7;
    vlSelf->multixi[3U][2U] = __Vdlyvval__multixi__v8;
    vlSelf->multixi[3U][3U] = __Vdlyvval__multixi__v9;
    vlSelf->accsumx = __Vdly__accsumx;
    vlSelf->accsumy = __Vdly__accsumy;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->newacc = (1U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xaU)));
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->gatesr = __Vdly__gatesr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__0__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(vlSelf->adcy_r));
    vlSelf->genblk1__BRA__0__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(vlSelf->adcx_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multix_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multiy_r));
    vlSelf->genblk1__BRA__1__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multix_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multiy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multix_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multiy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multix_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multiy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->adcy_r = vlSelf->adcy;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->adcx_r = vlSelf->adcx;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__1(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__1\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Init
    QData/*32:0*/ __Vdlyvval__multixi__v0;
    __Vdlyvval__multixi__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v0;
    __Vdlyvval__multiyi__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v0;
    __Vdlyvval__sumxslice__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v0;
    __Vdlyvval__sumyslice__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v1;
    __Vdlyvval__multixi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v1;
    __Vdlyvval__multiyi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v2;
    __Vdlyvval__multixi__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v2;
    __Vdlyvval__multiyi__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v1;
    __Vdlyvval__sumxslice__v1 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v1;
    __Vdlyvval__sumyslice__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v3;
    __Vdlyvval__multixi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v3;
    __Vdlyvval__multiyi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v4;
    __Vdlyvval__multixi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v4;
    __Vdlyvval__multiyi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v5;
    __Vdlyvval__multixi__v5 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v5;
    __Vdlyvval__multiyi__v5 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v2;
    __Vdlyvval__sumxslice__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v2;
    __Vdlyvval__sumyslice__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v6;
    __Vdlyvval__multixi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v6;
    __Vdlyvval__multiyi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v7;
    __Vdlyvval__multixi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v7;
    __Vdlyvval__multiyi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v8;
    __Vdlyvval__multixi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v8;
    __Vdlyvval__multiyi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v9;
    __Vdlyvval__multixi__v9 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v9;
    __Vdlyvval__multiyi__v9 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v3;
    __Vdlyvval__sumxslice__v3 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v3;
    __Vdlyvval__sumyslice__v3 = 0;
    SData/*15:0*/ __Vdly__gatesr;
    __Vdly__gatesr = 0;
    QData/*49:0*/ __Vdly__accsumx;
    __Vdly__accsumx = 0;
    QData/*49:0*/ __Vdly__accsumy;
    __Vdly__accsumy = 0;
    // Body
    __Vdly__gatesr = vlSelf->gatesr;
    __Vdly__accsumy = vlSelf->accsumy;
    __Vdly__accsumx = vlSelf->accsumx;
    __Vdlyvval__sumyslice__v3 = vlSelf->sumyslice[2U];
    __Vdlyvval__sumxslice__v3 = vlSelf->sumxslice[2U];
    __Vdlyvval__sumyslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__sumxslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__multiyi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r;
    __Vdlyvval__multixi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multixi_r;
    __Vdlyvval__sumyslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumyslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__sumxslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumxslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__multiyi__v2 = vlSelf->multiyi[1U][0U];
    __Vdlyvval__multiyi__v4 = vlSelf->multiyi[2U][0U];
    __Vdlyvval__multiyi__v5 = vlSelf->multiyi[2U][1U];
    __Vdlyvval__multiyi__v7 = vlSelf->multiyi[3U][0U];
    __Vdlyvval__multiyi__v8 = vlSelf->multiyi[3U][1U];
    __Vdlyvval__multiyi__v9 = vlSelf->multiyi[3U][2U];
    __Vdlyvval__multixi__v2 = vlSelf->multixi[1U][0U];
    __Vdlyvval__multixi__v4 = vlSelf->multixi[2U][0U];
    __Vdlyvval__multixi__v5 = vlSelf->multixi[2U][1U];
    __Vdlyvval__multixi__v7 = vlSelf->multixi[3U][0U];
    __Vdlyvval__multixi__v8 = vlSelf->multixi[3U][1U];
    __Vdlyvval__multixi__v9 = vlSelf->multixi[3U][2U];
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexj = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 0U;
    vlSelf->gatesrdummy = (1U & ((IData)(vlSelf->gatesr) 
                                 >> 0xfU));
    __Vdly__gatesr = ((0xfffeU & ((IData)(vlSelf->gatesr) 
                                  << 1U)) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.valid_r));
    if (vlSelf->newacc) {
        __Vdly__accsumx = 0ULL;
        __Vdly__accsumy = 0ULL;
    } else {
        __Vdly__accsumx = (0x3ffffffffffffULL & (vlSelf->accsumx 
                                                 + vlSelf->sumxslicelast));
        __Vdly__accsumy = (0x3ffffffffffffULL & (vlSelf->accsumy 
                                                 + vlSelf->sumyslicelast));
    }
    if (vlSelf->stbout) {
        vlSelf->accx_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumx 
                                     >> (IData)(vlSelf->shift))));
        vlSelf->accy_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumy 
                                     >> (IData)(vlSelf->shift))));
    }
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1));
    vlSelf->sumyslice[0U] = __Vdlyvval__sumyslice__v0;
    vlSelf->sumyslice[1U] = __Vdlyvval__sumyslice__v1;
    vlSelf->sumyslice[2U] = __Vdlyvval__sumyslice__v2;
    vlSelf->sumyslice[3U] = __Vdlyvval__sumyslice__v3;
    vlSelf->sumxslice[0U] = __Vdlyvval__sumxslice__v0;
    vlSelf->sumxslice[1U] = __Vdlyvval__sumxslice__v1;
    vlSelf->sumxslice[2U] = __Vdlyvval__sumxslice__v2;
    vlSelf->sumxslice[3U] = __Vdlyvval__sumxslice__v3;
    vlSelf->multiyi[0U][0U] = __Vdlyvval__multiyi__v0;
    vlSelf->multiyi[1U][0U] = __Vdlyvval__multiyi__v1;
    vlSelf->multiyi[1U][1U] = __Vdlyvval__multiyi__v2;
    vlSelf->multiyi[2U][0U] = __Vdlyvval__multiyi__v3;
    vlSelf->multiyi[2U][1U] = __Vdlyvval__multiyi__v4;
    vlSelf->multiyi[2U][2U] = __Vdlyvval__multiyi__v5;
    vlSelf->multiyi[3U][0U] = __Vdlyvval__multiyi__v6;
    vlSelf->multiyi[3U][1U] = __Vdlyvval__multiyi__v7;
    vlSelf->multiyi[3U][2U] = __Vdlyvval__multiyi__v8;
    vlSelf->multiyi[3U][3U] = __Vdlyvval__multiyi__v9;
    vlSelf->multixi[0U][0U] = __Vdlyvval__multixi__v0;
    vlSelf->multixi[1U][0U] = __Vdlyvval__multixi__v1;
    vlSelf->multixi[1U][1U] = __Vdlyvval__multixi__v2;
    vlSelf->multixi[2U][0U] = __Vdlyvval__multixi__v3;
    vlSelf->multixi[2U][1U] = __Vdlyvval__multixi__v4;
    vlSelf->multixi[2U][2U] = __Vdlyvval__multixi__v5;
    vlSelf->multixi[3U][0U] = __Vdlyvval__multixi__v6;
    vlSelf->multixi[3U][1U] = __Vdlyvval__multixi__v7;
    vlSelf->multixi[3U][2U] = __Vdlyvval__multixi__v8;
    vlSelf->multixi[3U][3U] = __Vdlyvval__multixi__v9;
    vlSelf->accsumx = __Vdly__accsumx;
    vlSelf->accsumy = __Vdly__accsumy;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->newacc = (1U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xaU)));
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->gatesr = __Vdly__gatesr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__0__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(vlSelf->adcy_r));
    vlSelf->genblk1__BRA__0__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(vlSelf->adcx_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multix_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multiy_r));
    vlSelf->genblk1__BRA__1__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multix_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multiy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multix_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multiy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multix_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multiy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->adcy_r = vlSelf->adcy;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->adcx_r = vlSelf->adcx;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__1(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__1\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Init
    QData/*32:0*/ __Vdlyvval__multixi__v0;
    __Vdlyvval__multixi__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v0;
    __Vdlyvval__multiyi__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v0;
    __Vdlyvval__sumxslice__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v0;
    __Vdlyvval__sumyslice__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v1;
    __Vdlyvval__multixi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v1;
    __Vdlyvval__multiyi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v2;
    __Vdlyvval__multixi__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v2;
    __Vdlyvval__multiyi__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v1;
    __Vdlyvval__sumxslice__v1 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v1;
    __Vdlyvval__sumyslice__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v3;
    __Vdlyvval__multixi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v3;
    __Vdlyvval__multiyi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v4;
    __Vdlyvval__multixi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v4;
    __Vdlyvval__multiyi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v5;
    __Vdlyvval__multixi__v5 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v5;
    __Vdlyvval__multiyi__v5 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v2;
    __Vdlyvval__sumxslice__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v2;
    __Vdlyvval__sumyslice__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v6;
    __Vdlyvval__multixi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v6;
    __Vdlyvval__multiyi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v7;
    __Vdlyvval__multixi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v7;
    __Vdlyvval__multiyi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v8;
    __Vdlyvval__multixi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v8;
    __Vdlyvval__multiyi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v9;
    __Vdlyvval__multixi__v9 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v9;
    __Vdlyvval__multiyi__v9 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v3;
    __Vdlyvval__sumxslice__v3 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v3;
    __Vdlyvval__sumyslice__v3 = 0;
    SData/*15:0*/ __Vdly__gatesr;
    __Vdly__gatesr = 0;
    QData/*49:0*/ __Vdly__accsumx;
    __Vdly__accsumx = 0;
    QData/*49:0*/ __Vdly__accsumy;
    __Vdly__accsumy = 0;
    // Body
    __Vdly__gatesr = vlSelf->gatesr;
    __Vdly__accsumy = vlSelf->accsumy;
    __Vdly__accsumx = vlSelf->accsumx;
    __Vdlyvval__sumyslice__v3 = vlSelf->sumyslice[2U];
    __Vdlyvval__sumxslice__v3 = vlSelf->sumxslice[2U];
    __Vdlyvval__sumyslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__sumxslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__multiyi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r;
    __Vdlyvval__multixi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multixi_r;
    __Vdlyvval__sumyslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumyslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__sumxslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumxslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__multiyi__v2 = vlSelf->multiyi[1U][0U];
    __Vdlyvval__multiyi__v4 = vlSelf->multiyi[2U][0U];
    __Vdlyvval__multiyi__v5 = vlSelf->multiyi[2U][1U];
    __Vdlyvval__multiyi__v7 = vlSelf->multiyi[3U][0U];
    __Vdlyvval__multiyi__v8 = vlSelf->multiyi[3U][1U];
    __Vdlyvval__multiyi__v9 = vlSelf->multiyi[3U][2U];
    __Vdlyvval__multixi__v2 = vlSelf->multixi[1U][0U];
    __Vdlyvval__multixi__v4 = vlSelf->multixi[2U][0U];
    __Vdlyvval__multixi__v5 = vlSelf->multixi[2U][1U];
    __Vdlyvval__multixi__v7 = vlSelf->multixi[3U][0U];
    __Vdlyvval__multixi__v8 = vlSelf->multixi[3U][1U];
    __Vdlyvval__multixi__v9 = vlSelf->multixi[3U][2U];
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexj = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 0U;
    vlSelf->gatesrdummy = (1U & ((IData)(vlSelf->gatesr) 
                                 >> 0xfU));
    __Vdly__gatesr = ((0xfffeU & ((IData)(vlSelf->gatesr) 
                                  << 1U)) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.valid_r));
    if (vlSelf->newacc) {
        __Vdly__accsumx = 0ULL;
        __Vdly__accsumy = 0ULL;
    } else {
        __Vdly__accsumx = (0x3ffffffffffffULL & (vlSelf->accsumx 
                                                 + vlSelf->sumxslicelast));
        __Vdly__accsumy = (0x3ffffffffffffULL & (vlSelf->accsumy 
                                                 + vlSelf->sumyslicelast));
    }
    if (vlSelf->stbout) {
        vlSelf->accx_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumx 
                                     >> (IData)(vlSelf->shift))));
        vlSelf->accy_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumy 
                                     >> (IData)(vlSelf->shift))));
    }
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1));
    vlSelf->sumyslice[0U] = __Vdlyvval__sumyslice__v0;
    vlSelf->sumyslice[1U] = __Vdlyvval__sumyslice__v1;
    vlSelf->sumyslice[2U] = __Vdlyvval__sumyslice__v2;
    vlSelf->sumyslice[3U] = __Vdlyvval__sumyslice__v3;
    vlSelf->sumxslice[0U] = __Vdlyvval__sumxslice__v0;
    vlSelf->sumxslice[1U] = __Vdlyvval__sumxslice__v1;
    vlSelf->sumxslice[2U] = __Vdlyvval__sumxslice__v2;
    vlSelf->sumxslice[3U] = __Vdlyvval__sumxslice__v3;
    vlSelf->multiyi[0U][0U] = __Vdlyvval__multiyi__v0;
    vlSelf->multiyi[1U][0U] = __Vdlyvval__multiyi__v1;
    vlSelf->multiyi[1U][1U] = __Vdlyvval__multiyi__v2;
    vlSelf->multiyi[2U][0U] = __Vdlyvval__multiyi__v3;
    vlSelf->multiyi[2U][1U] = __Vdlyvval__multiyi__v4;
    vlSelf->multiyi[2U][2U] = __Vdlyvval__multiyi__v5;
    vlSelf->multiyi[3U][0U] = __Vdlyvval__multiyi__v6;
    vlSelf->multiyi[3U][1U] = __Vdlyvval__multiyi__v7;
    vlSelf->multiyi[3U][2U] = __Vdlyvval__multiyi__v8;
    vlSelf->multiyi[3U][3U] = __Vdlyvval__multiyi__v9;
    vlSelf->multixi[0U][0U] = __Vdlyvval__multixi__v0;
    vlSelf->multixi[1U][0U] = __Vdlyvval__multixi__v1;
    vlSelf->multixi[1U][1U] = __Vdlyvval__multixi__v2;
    vlSelf->multixi[2U][0U] = __Vdlyvval__multixi__v3;
    vlSelf->multixi[2U][1U] = __Vdlyvval__multixi__v4;
    vlSelf->multixi[2U][2U] = __Vdlyvval__multixi__v5;
    vlSelf->multixi[3U][0U] = __Vdlyvval__multixi__v6;
    vlSelf->multixi[3U][1U] = __Vdlyvval__multixi__v7;
    vlSelf->multixi[3U][2U] = __Vdlyvval__multixi__v8;
    vlSelf->multixi[3U][3U] = __Vdlyvval__multixi__v9;
    vlSelf->accsumx = __Vdly__accsumx;
    vlSelf->accsumy = __Vdly__accsumy;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->newacc = (1U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xaU)));
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->gatesr = __Vdly__gatesr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__0__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(vlSelf->adcy_r));
    vlSelf->genblk1__BRA__0__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(vlSelf->adcx_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multix_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multiy_r));
    vlSelf->genblk1__BRA__1__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multix_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multiy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multix_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multiy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multix_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multiy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->adcy_r = vlSelf->adcy;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->adcx_r = vlSelf->adcx;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__1(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__1\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.clk;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.clk;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.clk;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.clk;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Init
    QData/*32:0*/ __Vdlyvval__multixi__v0;
    __Vdlyvval__multixi__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v0;
    __Vdlyvval__multiyi__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v0;
    __Vdlyvval__sumxslice__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v0;
    __Vdlyvval__sumyslice__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v1;
    __Vdlyvval__multixi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v1;
    __Vdlyvval__multiyi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v2;
    __Vdlyvval__multixi__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v2;
    __Vdlyvval__multiyi__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v1;
    __Vdlyvval__sumxslice__v1 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v1;
    __Vdlyvval__sumyslice__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v3;
    __Vdlyvval__multixi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v3;
    __Vdlyvval__multiyi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v4;
    __Vdlyvval__multixi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v4;
    __Vdlyvval__multiyi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v5;
    __Vdlyvval__multixi__v5 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v5;
    __Vdlyvval__multiyi__v5 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v2;
    __Vdlyvval__sumxslice__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v2;
    __Vdlyvval__sumyslice__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v6;
    __Vdlyvval__multixi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v6;
    __Vdlyvval__multiyi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v7;
    __Vdlyvval__multixi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v7;
    __Vdlyvval__multiyi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v8;
    __Vdlyvval__multixi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v8;
    __Vdlyvval__multiyi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v9;
    __Vdlyvval__multixi__v9 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v9;
    __Vdlyvval__multiyi__v9 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v3;
    __Vdlyvval__sumxslice__v3 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v3;
    __Vdlyvval__sumyslice__v3 = 0;
    SData/*15:0*/ __Vdly__gatesr;
    __Vdly__gatesr = 0;
    QData/*49:0*/ __Vdly__accsumx;
    __Vdly__accsumx = 0;
    QData/*49:0*/ __Vdly__accsumy;
    __Vdly__accsumy = 0;
    // Body
    __Vdly__gatesr = vlSelf->gatesr;
    __Vdly__accsumy = vlSelf->accsumy;
    __Vdly__accsumx = vlSelf->accsumx;
    __Vdlyvval__sumyslice__v3 = vlSelf->sumyslice[2U];
    __Vdlyvval__sumxslice__v3 = vlSelf->sumxslice[2U];
    __Vdlyvval__sumyslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__sumxslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__multiyi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r;
    __Vdlyvval__multixi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multixi_r;
    __Vdlyvval__sumyslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumyslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__sumxslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumxslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__multiyi__v2 = vlSelf->multiyi[1U][0U];
    __Vdlyvval__multiyi__v4 = vlSelf->multiyi[2U][0U];
    __Vdlyvval__multiyi__v5 = vlSelf->multiyi[2U][1U];
    __Vdlyvval__multiyi__v7 = vlSelf->multiyi[3U][0U];
    __Vdlyvval__multiyi__v8 = vlSelf->multiyi[3U][1U];
    __Vdlyvval__multiyi__v9 = vlSelf->multiyi[3U][2U];
    __Vdlyvval__multixi__v2 = vlSelf->multixi[1U][0U];
    __Vdlyvval__multixi__v4 = vlSelf->multixi[2U][0U];
    __Vdlyvval__multixi__v5 = vlSelf->multixi[2U][1U];
    __Vdlyvval__multixi__v7 = vlSelf->multixi[3U][0U];
    __Vdlyvval__multixi__v8 = vlSelf->multixi[3U][1U];
    __Vdlyvval__multixi__v9 = vlSelf->multixi[3U][2U];
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexj = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 0U;
    vlSelf->gatesrdummy = (1U & ((IData)(vlSelf->gatesr) 
                                 >> 0xfU));
    __Vdly__gatesr = ((0xfffeU & ((IData)(vlSelf->gatesr) 
                                  << 1U)) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.valid_r));
    if (vlSelf->newacc) {
        __Vdly__accsumx = 0ULL;
        __Vdly__accsumy = 0ULL;
    } else {
        __Vdly__accsumx = (0x3ffffffffffffULL & (vlSelf->accsumx 
                                                 + vlSelf->sumxslicelast));
        __Vdly__accsumy = (0x3ffffffffffffULL & (vlSelf->accsumy 
                                                 + vlSelf->sumyslicelast));
    }
    if (vlSelf->stbout) {
        vlSelf->accx_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumx 
                                     >> (IData)(vlSelf->shift))));
        vlSelf->accy_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumy 
                                     >> (IData)(vlSelf->shift))));
    }
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1));
    vlSelf->sumyslice[0U] = __Vdlyvval__sumyslice__v0;
    vlSelf->sumyslice[1U] = __Vdlyvval__sumyslice__v1;
    vlSelf->sumyslice[2U] = __Vdlyvval__sumyslice__v2;
    vlSelf->sumyslice[3U] = __Vdlyvval__sumyslice__v3;
    vlSelf->sumxslice[0U] = __Vdlyvval__sumxslice__v0;
    vlSelf->sumxslice[1U] = __Vdlyvval__sumxslice__v1;
    vlSelf->sumxslice[2U] = __Vdlyvval__sumxslice__v2;
    vlSelf->sumxslice[3U] = __Vdlyvval__sumxslice__v3;
    vlSelf->multiyi[0U][0U] = __Vdlyvval__multiyi__v0;
    vlSelf->multiyi[1U][0U] = __Vdlyvval__multiyi__v1;
    vlSelf->multiyi[1U][1U] = __Vdlyvval__multiyi__v2;
    vlSelf->multiyi[2U][0U] = __Vdlyvval__multiyi__v3;
    vlSelf->multiyi[2U][1U] = __Vdlyvval__multiyi__v4;
    vlSelf->multiyi[2U][2U] = __Vdlyvval__multiyi__v5;
    vlSelf->multiyi[3U][0U] = __Vdlyvval__multiyi__v6;
    vlSelf->multiyi[3U][1U] = __Vdlyvval__multiyi__v7;
    vlSelf->multiyi[3U][2U] = __Vdlyvval__multiyi__v8;
    vlSelf->multiyi[3U][3U] = __Vdlyvval__multiyi__v9;
    vlSelf->multixi[0U][0U] = __Vdlyvval__multixi__v0;
    vlSelf->multixi[1U][0U] = __Vdlyvval__multixi__v1;
    vlSelf->multixi[1U][1U] = __Vdlyvval__multixi__v2;
    vlSelf->multixi[2U][0U] = __Vdlyvval__multixi__v3;
    vlSelf->multixi[2U][1U] = __Vdlyvval__multixi__v4;
    vlSelf->multixi[2U][2U] = __Vdlyvval__multixi__v5;
    vlSelf->multixi[3U][0U] = __Vdlyvval__multixi__v6;
    vlSelf->multixi[3U][1U] = __Vdlyvval__multixi__v7;
    vlSelf->multixi[3U][2U] = __Vdlyvval__multixi__v8;
    vlSelf->multixi[3U][3U] = __Vdlyvval__multixi__v9;
    vlSelf->accsumx = __Vdly__accsumx;
    vlSelf->accsumy = __Vdly__accsumy;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->newacc = (1U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xaU)));
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->gatesr = __Vdly__gatesr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__0__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(vlSelf->adcy_r));
    vlSelf->genblk1__BRA__0__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(vlSelf->adcx_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.multix_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.multiy_r));
    vlSelf->genblk1__BRA__1__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.multix_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.multiy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.multix_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.multiy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.multix_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.multiy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->adcy_r = vlSelf->adcy;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->adcx_r = vlSelf->adcx;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__genblk1__DOT__rdlo0mixacc1__1(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__genblk1__DOT__rdlo0mixacc1__1\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.clk;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.clk;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.clk;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.clk;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Init
    QData/*32:0*/ __Vdlyvval__multixi__v0;
    __Vdlyvval__multixi__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v0;
    __Vdlyvval__multiyi__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v0;
    __Vdlyvval__sumxslice__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v0;
    __Vdlyvval__sumyslice__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v1;
    __Vdlyvval__multixi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v1;
    __Vdlyvval__multiyi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v2;
    __Vdlyvval__multixi__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v2;
    __Vdlyvval__multiyi__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v1;
    __Vdlyvval__sumxslice__v1 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v1;
    __Vdlyvval__sumyslice__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v3;
    __Vdlyvval__multixi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v3;
    __Vdlyvval__multiyi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v4;
    __Vdlyvval__multixi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v4;
    __Vdlyvval__multiyi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v5;
    __Vdlyvval__multixi__v5 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v5;
    __Vdlyvval__multiyi__v5 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v2;
    __Vdlyvval__sumxslice__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v2;
    __Vdlyvval__sumyslice__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v6;
    __Vdlyvval__multixi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v6;
    __Vdlyvval__multiyi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v7;
    __Vdlyvval__multixi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v7;
    __Vdlyvval__multiyi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v8;
    __Vdlyvval__multixi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v8;
    __Vdlyvval__multiyi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v9;
    __Vdlyvval__multixi__v9 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v9;
    __Vdlyvval__multiyi__v9 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v3;
    __Vdlyvval__sumxslice__v3 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v3;
    __Vdlyvval__sumyslice__v3 = 0;
    SData/*15:0*/ __Vdly__gatesr;
    __Vdly__gatesr = 0;
    QData/*49:0*/ __Vdly__accsumx;
    __Vdly__accsumx = 0;
    QData/*49:0*/ __Vdly__accsumy;
    __Vdly__accsumy = 0;
    // Body
    __Vdly__gatesr = vlSelf->gatesr;
    __Vdly__accsumy = vlSelf->accsumy;
    __Vdly__accsumx = vlSelf->accsumx;
    __Vdlyvval__sumyslice__v3 = vlSelf->sumyslice[2U];
    __Vdlyvval__sumxslice__v3 = vlSelf->sumxslice[2U];
    __Vdlyvval__sumyslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__sumxslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__multiyi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r;
    __Vdlyvval__multixi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multixi_r;
    __Vdlyvval__sumyslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumyslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__sumxslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumxslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__multiyi__v2 = vlSelf->multiyi[1U][0U];
    __Vdlyvval__multiyi__v4 = vlSelf->multiyi[2U][0U];
    __Vdlyvval__multiyi__v5 = vlSelf->multiyi[2U][1U];
    __Vdlyvval__multiyi__v7 = vlSelf->multiyi[3U][0U];
    __Vdlyvval__multiyi__v8 = vlSelf->multiyi[3U][1U];
    __Vdlyvval__multiyi__v9 = vlSelf->multiyi[3U][2U];
    __Vdlyvval__multixi__v2 = vlSelf->multixi[1U][0U];
    __Vdlyvval__multixi__v4 = vlSelf->multixi[2U][0U];
    __Vdlyvval__multixi__v5 = vlSelf->multixi[2U][1U];
    __Vdlyvval__multixi__v7 = vlSelf->multixi[3U][0U];
    __Vdlyvval__multixi__v8 = vlSelf->multixi[3U][1U];
    __Vdlyvval__multixi__v9 = vlSelf->multixi[3U][2U];
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexj = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 0U;
    vlSelf->gatesrdummy = (1U & ((IData)(vlSelf->gatesr) 
                                 >> 0xfU));
    __Vdly__gatesr = ((0xfffeU & ((IData)(vlSelf->gatesr) 
                                  << 1U)) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.valid_r));
    if (vlSelf->newacc) {
        __Vdly__accsumx = 0ULL;
        __Vdly__accsumy = 0ULL;
    } else {
        __Vdly__accsumx = (0x3ffffffffffffULL & (vlSelf->accsumx 
                                                 + vlSelf->sumxslicelast));
        __Vdly__accsumy = (0x3ffffffffffffULL & (vlSelf->accsumy 
                                                 + vlSelf->sumyslicelast));
    }
    if (vlSelf->stbout) {
        vlSelf->accx_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumx 
                                     >> (IData)(vlSelf->shift))));
        vlSelf->accy_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumy 
                                     >> (IData)(vlSelf->shift))));
    }
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1));
    vlSelf->sumyslice[0U] = __Vdlyvval__sumyslice__v0;
    vlSelf->sumyslice[1U] = __Vdlyvval__sumyslice__v1;
    vlSelf->sumyslice[2U] = __Vdlyvval__sumyslice__v2;
    vlSelf->sumyslice[3U] = __Vdlyvval__sumyslice__v3;
    vlSelf->sumxslice[0U] = __Vdlyvval__sumxslice__v0;
    vlSelf->sumxslice[1U] = __Vdlyvval__sumxslice__v1;
    vlSelf->sumxslice[2U] = __Vdlyvval__sumxslice__v2;
    vlSelf->sumxslice[3U] = __Vdlyvval__sumxslice__v3;
    vlSelf->multiyi[0U][0U] = __Vdlyvval__multiyi__v0;
    vlSelf->multiyi[1U][0U] = __Vdlyvval__multiyi__v1;
    vlSelf->multiyi[1U][1U] = __Vdlyvval__multiyi__v2;
    vlSelf->multiyi[2U][0U] = __Vdlyvval__multiyi__v3;
    vlSelf->multiyi[2U][1U] = __Vdlyvval__multiyi__v4;
    vlSelf->multiyi[2U][2U] = __Vdlyvval__multiyi__v5;
    vlSelf->multiyi[3U][0U] = __Vdlyvval__multiyi__v6;
    vlSelf->multiyi[3U][1U] = __Vdlyvval__multiyi__v7;
    vlSelf->multiyi[3U][2U] = __Vdlyvval__multiyi__v8;
    vlSelf->multiyi[3U][3U] = __Vdlyvval__multiyi__v9;
    vlSelf->multixi[0U][0U] = __Vdlyvval__multixi__v0;
    vlSelf->multixi[1U][0U] = __Vdlyvval__multixi__v1;
    vlSelf->multixi[1U][1U] = __Vdlyvval__multixi__v2;
    vlSelf->multixi[2U][0U] = __Vdlyvval__multixi__v3;
    vlSelf->multixi[2U][1U] = __Vdlyvval__multixi__v4;
    vlSelf->multixi[2U][2U] = __Vdlyvval__multixi__v5;
    vlSelf->multixi[3U][0U] = __Vdlyvval__multixi__v6;
    vlSelf->multixi[3U][1U] = __Vdlyvval__multixi__v7;
    vlSelf->multixi[3U][2U] = __Vdlyvval__multixi__v8;
    vlSelf->multixi[3U][3U] = __Vdlyvval__multixi__v9;
    vlSelf->accsumx = __Vdly__accsumx;
    vlSelf->accsumy = __Vdly__accsumy;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->newacc = (1U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xaU)));
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->gatesr = __Vdly__gatesr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__0__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(vlSelf->adcy_r));
    vlSelf->genblk1__BRA__0__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(vlSelf->adcx_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.multix_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.multiy_r));
    vlSelf->genblk1__BRA__1__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.multix_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.multiy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.multix_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.multiy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.multix_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.multiy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->adcy_r = vlSelf->adcy;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->adcx_r = vlSelf->adcx;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__genblk1__DOT__rdlo0mixacc1__1(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__genblk1__DOT__rdlo0mixacc1__1\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.clk;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.clk;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.clk;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.clk;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Init
    QData/*32:0*/ __Vdlyvval__multixi__v0;
    __Vdlyvval__multixi__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v0;
    __Vdlyvval__multiyi__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v0;
    __Vdlyvval__sumxslice__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v0;
    __Vdlyvval__sumyslice__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v1;
    __Vdlyvval__multixi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v1;
    __Vdlyvval__multiyi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v2;
    __Vdlyvval__multixi__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v2;
    __Vdlyvval__multiyi__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v1;
    __Vdlyvval__sumxslice__v1 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v1;
    __Vdlyvval__sumyslice__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v3;
    __Vdlyvval__multixi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v3;
    __Vdlyvval__multiyi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v4;
    __Vdlyvval__multixi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v4;
    __Vdlyvval__multiyi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v5;
    __Vdlyvval__multixi__v5 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v5;
    __Vdlyvval__multiyi__v5 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v2;
    __Vdlyvval__sumxslice__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v2;
    __Vdlyvval__sumyslice__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v6;
    __Vdlyvval__multixi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v6;
    __Vdlyvval__multiyi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v7;
    __Vdlyvval__multixi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v7;
    __Vdlyvval__multiyi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v8;
    __Vdlyvval__multixi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v8;
    __Vdlyvval__multiyi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v9;
    __Vdlyvval__multixi__v9 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v9;
    __Vdlyvval__multiyi__v9 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v3;
    __Vdlyvval__sumxslice__v3 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v3;
    __Vdlyvval__sumyslice__v3 = 0;
    SData/*15:0*/ __Vdly__gatesr;
    __Vdly__gatesr = 0;
    QData/*49:0*/ __Vdly__accsumx;
    __Vdly__accsumx = 0;
    QData/*49:0*/ __Vdly__accsumy;
    __Vdly__accsumy = 0;
    // Body
    __Vdly__gatesr = vlSelf->gatesr;
    __Vdly__accsumy = vlSelf->accsumy;
    __Vdly__accsumx = vlSelf->accsumx;
    __Vdlyvval__sumyslice__v3 = vlSelf->sumyslice[2U];
    __Vdlyvval__sumxslice__v3 = vlSelf->sumxslice[2U];
    __Vdlyvval__sumyslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__sumxslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__multiyi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r;
    __Vdlyvval__multixi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multixi_r;
    __Vdlyvval__sumyslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumyslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__sumxslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumxslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__multiyi__v2 = vlSelf->multiyi[1U][0U];
    __Vdlyvval__multiyi__v4 = vlSelf->multiyi[2U][0U];
    __Vdlyvval__multiyi__v5 = vlSelf->multiyi[2U][1U];
    __Vdlyvval__multiyi__v7 = vlSelf->multiyi[3U][0U];
    __Vdlyvval__multiyi__v8 = vlSelf->multiyi[3U][1U];
    __Vdlyvval__multiyi__v9 = vlSelf->multiyi[3U][2U];
    __Vdlyvval__multixi__v2 = vlSelf->multixi[1U][0U];
    __Vdlyvval__multixi__v4 = vlSelf->multixi[2U][0U];
    __Vdlyvval__multixi__v5 = vlSelf->multixi[2U][1U];
    __Vdlyvval__multixi__v7 = vlSelf->multixi[3U][0U];
    __Vdlyvval__multixi__v8 = vlSelf->multixi[3U][1U];
    __Vdlyvval__multixi__v9 = vlSelf->multixi[3U][2U];
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexj = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 0U;
    vlSelf->gatesrdummy = (1U & ((IData)(vlSelf->gatesr) 
                                 >> 0xfU));
    __Vdly__gatesr = ((0xfffeU & ((IData)(vlSelf->gatesr) 
                                  << 1U)) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.valid_r));
    if (vlSelf->newacc) {
        __Vdly__accsumx = 0ULL;
        __Vdly__accsumy = 0ULL;
    } else {
        __Vdly__accsumx = (0x3ffffffffffffULL & (vlSelf->accsumx 
                                                 + vlSelf->sumxslicelast));
        __Vdly__accsumy = (0x3ffffffffffffULL & (vlSelf->accsumy 
                                                 + vlSelf->sumyslicelast));
    }
    if (vlSelf->stbout) {
        vlSelf->accx_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumx 
                                     >> (IData)(vlSelf->shift))));
        vlSelf->accy_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumy 
                                     >> (IData)(vlSelf->shift))));
    }
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1));
    vlSelf->sumyslice[0U] = __Vdlyvval__sumyslice__v0;
    vlSelf->sumyslice[1U] = __Vdlyvval__sumyslice__v1;
    vlSelf->sumyslice[2U] = __Vdlyvval__sumyslice__v2;
    vlSelf->sumyslice[3U] = __Vdlyvval__sumyslice__v3;
    vlSelf->sumxslice[0U] = __Vdlyvval__sumxslice__v0;
    vlSelf->sumxslice[1U] = __Vdlyvval__sumxslice__v1;
    vlSelf->sumxslice[2U] = __Vdlyvval__sumxslice__v2;
    vlSelf->sumxslice[3U] = __Vdlyvval__sumxslice__v3;
    vlSelf->multiyi[0U][0U] = __Vdlyvval__multiyi__v0;
    vlSelf->multiyi[1U][0U] = __Vdlyvval__multiyi__v1;
    vlSelf->multiyi[1U][1U] = __Vdlyvval__multiyi__v2;
    vlSelf->multiyi[2U][0U] = __Vdlyvval__multiyi__v3;
    vlSelf->multiyi[2U][1U] = __Vdlyvval__multiyi__v4;
    vlSelf->multiyi[2U][2U] = __Vdlyvval__multiyi__v5;
    vlSelf->multiyi[3U][0U] = __Vdlyvval__multiyi__v6;
    vlSelf->multiyi[3U][1U] = __Vdlyvval__multiyi__v7;
    vlSelf->multiyi[3U][2U] = __Vdlyvval__multiyi__v8;
    vlSelf->multiyi[3U][3U] = __Vdlyvval__multiyi__v9;
    vlSelf->multixi[0U][0U] = __Vdlyvval__multixi__v0;
    vlSelf->multixi[1U][0U] = __Vdlyvval__multixi__v1;
    vlSelf->multixi[1U][1U] = __Vdlyvval__multixi__v2;
    vlSelf->multixi[2U][0U] = __Vdlyvval__multixi__v3;
    vlSelf->multixi[2U][1U] = __Vdlyvval__multixi__v4;
    vlSelf->multixi[2U][2U] = __Vdlyvval__multixi__v5;
    vlSelf->multixi[3U][0U] = __Vdlyvval__multixi__v6;
    vlSelf->multixi[3U][1U] = __Vdlyvval__multixi__v7;
    vlSelf->multixi[3U][2U] = __Vdlyvval__multixi__v8;
    vlSelf->multixi[3U][3U] = __Vdlyvval__multixi__v9;
    vlSelf->accsumx = __Vdly__accsumx;
    vlSelf->accsumy = __Vdly__accsumy;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->newacc = (1U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xaU)));
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->gatesr = __Vdly__gatesr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__0__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(vlSelf->adcy_r));
    vlSelf->genblk1__BRA__0__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(vlSelf->adcx_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.multix_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.multiy_r));
    vlSelf->genblk1__BRA__1__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.multix_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.multiy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.multix_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.multiy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.multix_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.multiy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->adcy_r = vlSelf->adcy;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->adcx_r = vlSelf->adcx;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__genblk1__DOT__rdlo0mixacc1__1(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__genblk1__DOT__rdlo0mixacc1__1\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.clk;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.clk;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.clk;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.clk;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Init
    QData/*32:0*/ __Vdlyvval__multixi__v0;
    __Vdlyvval__multixi__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v0;
    __Vdlyvval__multiyi__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v0;
    __Vdlyvval__sumxslice__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v0;
    __Vdlyvval__sumyslice__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v1;
    __Vdlyvval__multixi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v1;
    __Vdlyvval__multiyi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v2;
    __Vdlyvval__multixi__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v2;
    __Vdlyvval__multiyi__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v1;
    __Vdlyvval__sumxslice__v1 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v1;
    __Vdlyvval__sumyslice__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v3;
    __Vdlyvval__multixi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v3;
    __Vdlyvval__multiyi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v4;
    __Vdlyvval__multixi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v4;
    __Vdlyvval__multiyi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v5;
    __Vdlyvval__multixi__v5 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v5;
    __Vdlyvval__multiyi__v5 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v2;
    __Vdlyvval__sumxslice__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v2;
    __Vdlyvval__sumyslice__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v6;
    __Vdlyvval__multixi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v6;
    __Vdlyvval__multiyi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v7;
    __Vdlyvval__multixi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v7;
    __Vdlyvval__multiyi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v8;
    __Vdlyvval__multixi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v8;
    __Vdlyvval__multiyi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v9;
    __Vdlyvval__multixi__v9 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v9;
    __Vdlyvval__multiyi__v9 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v3;
    __Vdlyvval__sumxslice__v3 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v3;
    __Vdlyvval__sumyslice__v3 = 0;
    SData/*15:0*/ __Vdly__gatesr;
    __Vdly__gatesr = 0;
    QData/*49:0*/ __Vdly__accsumx;
    __Vdly__accsumx = 0;
    QData/*49:0*/ __Vdly__accsumy;
    __Vdly__accsumy = 0;
    // Body
    __Vdly__gatesr = vlSelf->gatesr;
    __Vdly__accsumy = vlSelf->accsumy;
    __Vdly__accsumx = vlSelf->accsumx;
    __Vdlyvval__sumyslice__v3 = vlSelf->sumyslice[2U];
    __Vdlyvval__sumxslice__v3 = vlSelf->sumxslice[2U];
    __Vdlyvval__sumyslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__sumxslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__multiyi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r;
    __Vdlyvval__multixi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multixi_r;
    __Vdlyvval__sumyslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumyslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__sumxslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumxslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__multiyi__v2 = vlSelf->multiyi[1U][0U];
    __Vdlyvval__multiyi__v4 = vlSelf->multiyi[2U][0U];
    __Vdlyvval__multiyi__v5 = vlSelf->multiyi[2U][1U];
    __Vdlyvval__multiyi__v7 = vlSelf->multiyi[3U][0U];
    __Vdlyvval__multiyi__v8 = vlSelf->multiyi[3U][1U];
    __Vdlyvval__multiyi__v9 = vlSelf->multiyi[3U][2U];
    __Vdlyvval__multixi__v2 = vlSelf->multixi[1U][0U];
    __Vdlyvval__multixi__v4 = vlSelf->multixi[2U][0U];
    __Vdlyvval__multixi__v5 = vlSelf->multixi[2U][1U];
    __Vdlyvval__multixi__v7 = vlSelf->multixi[3U][0U];
    __Vdlyvval__multixi__v8 = vlSelf->multixi[3U][1U];
    __Vdlyvval__multixi__v9 = vlSelf->multixi[3U][2U];
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexj = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 0U;
    vlSelf->gatesrdummy = (1U & ((IData)(vlSelf->gatesr) 
                                 >> 0xfU));
    __Vdly__gatesr = ((0xfffeU & ((IData)(vlSelf->gatesr) 
                                  << 1U)) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.valid_r));
    if (vlSelf->newacc) {
        __Vdly__accsumx = 0ULL;
        __Vdly__accsumy = 0ULL;
    } else {
        __Vdly__accsumx = (0x3ffffffffffffULL & (vlSelf->accsumx 
                                                 + vlSelf->sumxslicelast));
        __Vdly__accsumy = (0x3ffffffffffffULL & (vlSelf->accsumy 
                                                 + vlSelf->sumyslicelast));
    }
    if (vlSelf->stbout) {
        vlSelf->accx_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumx 
                                     >> (IData)(vlSelf->shift))));
        vlSelf->accy_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumy 
                                     >> (IData)(vlSelf->shift))));
    }
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1));
    vlSelf->sumyslice[0U] = __Vdlyvval__sumyslice__v0;
    vlSelf->sumyslice[1U] = __Vdlyvval__sumyslice__v1;
    vlSelf->sumyslice[2U] = __Vdlyvval__sumyslice__v2;
    vlSelf->sumyslice[3U] = __Vdlyvval__sumyslice__v3;
    vlSelf->sumxslice[0U] = __Vdlyvval__sumxslice__v0;
    vlSelf->sumxslice[1U] = __Vdlyvval__sumxslice__v1;
    vlSelf->sumxslice[2U] = __Vdlyvval__sumxslice__v2;
    vlSelf->sumxslice[3U] = __Vdlyvval__sumxslice__v3;
    vlSelf->multiyi[0U][0U] = __Vdlyvval__multiyi__v0;
    vlSelf->multiyi[1U][0U] = __Vdlyvval__multiyi__v1;
    vlSelf->multiyi[1U][1U] = __Vdlyvval__multiyi__v2;
    vlSelf->multiyi[2U][0U] = __Vdlyvval__multiyi__v3;
    vlSelf->multiyi[2U][1U] = __Vdlyvval__multiyi__v4;
    vlSelf->multiyi[2U][2U] = __Vdlyvval__multiyi__v5;
    vlSelf->multiyi[3U][0U] = __Vdlyvval__multiyi__v6;
    vlSelf->multiyi[3U][1U] = __Vdlyvval__multiyi__v7;
    vlSelf->multiyi[3U][2U] = __Vdlyvval__multiyi__v8;
    vlSelf->multiyi[3U][3U] = __Vdlyvval__multiyi__v9;
    vlSelf->multixi[0U][0U] = __Vdlyvval__multixi__v0;
    vlSelf->multixi[1U][0U] = __Vdlyvval__multixi__v1;
    vlSelf->multixi[1U][1U] = __Vdlyvval__multixi__v2;
    vlSelf->multixi[2U][0U] = __Vdlyvval__multixi__v3;
    vlSelf->multixi[2U][1U] = __Vdlyvval__multixi__v4;
    vlSelf->multixi[2U][2U] = __Vdlyvval__multixi__v5;
    vlSelf->multixi[3U][0U] = __Vdlyvval__multixi__v6;
    vlSelf->multixi[3U][1U] = __Vdlyvval__multixi__v7;
    vlSelf->multixi[3U][2U] = __Vdlyvval__multixi__v8;
    vlSelf->multixi[3U][3U] = __Vdlyvval__multixi__v9;
    vlSelf->accsumx = __Vdly__accsumx;
    vlSelf->accsumy = __Vdly__accsumy;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->newacc = (1U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xaU)));
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->gatesr = __Vdly__gatesr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__0__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(vlSelf->adcy_r));
    vlSelf->genblk1__BRA__0__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(vlSelf->adcx_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.multix_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.multiy_r));
    vlSelf->genblk1__BRA__1__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.multix_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.multiy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.multix_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.multiy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.multix_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.multiy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->adcy_r = vlSelf->adcy;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->adcx_r = vlSelf->adcx;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__genblk1__DOT__rdlo0mixacc1__1(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__genblk1__DOT__rdlo0mixacc1__1\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__6__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.clk;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.clk;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.clk;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.clk;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__genblk1__DOT__rdlo0mixacc1__0(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__genblk1__DOT__rdlo0mixacc1__0\n"); );
    // Init
    QData/*32:0*/ __Vdlyvval__multixi__v0;
    __Vdlyvval__multixi__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v0;
    __Vdlyvval__multiyi__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v0;
    __Vdlyvval__sumxslice__v0 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v0;
    __Vdlyvval__sumyslice__v0 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v1;
    __Vdlyvval__multixi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v1;
    __Vdlyvval__multiyi__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v2;
    __Vdlyvval__multixi__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v2;
    __Vdlyvval__multiyi__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v1;
    __Vdlyvval__sumxslice__v1 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v1;
    __Vdlyvval__sumyslice__v1 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v3;
    __Vdlyvval__multixi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v3;
    __Vdlyvval__multiyi__v3 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v4;
    __Vdlyvval__multixi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v4;
    __Vdlyvval__multiyi__v4 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v5;
    __Vdlyvval__multixi__v5 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v5;
    __Vdlyvval__multiyi__v5 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v2;
    __Vdlyvval__sumxslice__v2 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v2;
    __Vdlyvval__sumyslice__v2 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v6;
    __Vdlyvval__multixi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v6;
    __Vdlyvval__multiyi__v6 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v7;
    __Vdlyvval__multixi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v7;
    __Vdlyvval__multiyi__v7 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v8;
    __Vdlyvval__multixi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v8;
    __Vdlyvval__multiyi__v8 = 0;
    QData/*32:0*/ __Vdlyvval__multixi__v9;
    __Vdlyvval__multixi__v9 = 0;
    QData/*32:0*/ __Vdlyvval__multiyi__v9;
    __Vdlyvval__multiyi__v9 = 0;
    QData/*33:0*/ __Vdlyvval__sumxslice__v3;
    __Vdlyvval__sumxslice__v3 = 0;
    QData/*33:0*/ __Vdlyvval__sumyslice__v3;
    __Vdlyvval__sumyslice__v3 = 0;
    SData/*15:0*/ __Vdly__gatesr;
    __Vdly__gatesr = 0;
    QData/*49:0*/ __Vdly__accsumx;
    __Vdly__accsumx = 0;
    QData/*49:0*/ __Vdly__accsumy;
    __Vdly__accsumy = 0;
    // Body
    __Vdly__gatesr = vlSelf->gatesr;
    __Vdly__accsumy = vlSelf->accsumy;
    __Vdly__accsumx = vlSelf->accsumx;
    __Vdlyvval__sumyslice__v3 = vlSelf->sumyslice[2U];
    __Vdlyvval__sumxslice__v3 = vlSelf->sumxslice[2U];
    __Vdlyvval__sumyslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__sumxslice__v0 = (0x3ffffffffULL & (
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [1U]
                                                                 [0U]) 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [0U]
                                                                 [0U])));
    __Vdlyvval__multiyi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r;
    __Vdlyvval__multiyi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r;
    __Vdlyvval__multixi__v0 = vlSelf->genblk1__BRA__0__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v1 = vlSelf->genblk1__BRA__1__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v3 = vlSelf->genblk1__BRA__2__KET____DOT__multixi_r;
    __Vdlyvval__multixi__v6 = vlSelf->genblk1__BRA__3__KET____DOT__multixi_r;
    __Vdlyvval__sumyslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumyslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumyslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multiyi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__sumxslice__v1 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [0U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [2U]
                                                                 [1U])));
    __Vdlyvval__sumxslice__v2 = (0x3ffffffffULL & (
                                                   vlSelf->sumxslice
                                                   [1U] 
                                                   + 
                                                   VL_EXTENDS_QQ(34,33, 
                                                                 vlSelf->multixi
                                                                 [3U]
                                                                 [2U])));
    __Vdlyvval__multiyi__v2 = vlSelf->multiyi[1U][0U];
    __Vdlyvval__multiyi__v4 = vlSelf->multiyi[2U][0U];
    __Vdlyvval__multiyi__v5 = vlSelf->multiyi[2U][1U];
    __Vdlyvval__multiyi__v7 = vlSelf->multiyi[3U][0U];
    __Vdlyvval__multiyi__v8 = vlSelf->multiyi[3U][1U];
    __Vdlyvval__multiyi__v9 = vlSelf->multiyi[3U][2U];
    __Vdlyvval__multixi__v2 = vlSelf->multixi[1U][0U];
    __Vdlyvval__multixi__v4 = vlSelf->multixi[2U][0U];
    __Vdlyvval__multixi__v5 = vlSelf->multixi[2U][1U];
    __Vdlyvval__multixi__v7 = vlSelf->multixi[3U][0U];
    __Vdlyvval__multixi__v8 = vlSelf->multixi[3U][1U];
    __Vdlyvval__multixi__v9 = vlSelf->multixi[3U][2U];
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexj = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 3U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 2U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 1U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = 0U;
    vlSelf->genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = 0U;
    vlSelf->gatesrdummy = (1U & ((IData)(vlSelf->gatesr) 
                                 >> 0xfU));
    __Vdly__gatesr = ((0xfffeU & ((IData)(vlSelf->gatesr) 
                                  << 1U)) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.valid_r));
    if (vlSelf->newacc) {
        __Vdly__accsumx = 0ULL;
        __Vdly__accsumy = 0ULL;
    } else {
        __Vdly__accsumx = (0x3ffffffffffffULL & (vlSelf->accsumx 
                                                 + vlSelf->sumxslicelast));
        __Vdly__accsumy = (0x3ffffffffffffULL & (vlSelf->accsumy 
                                                 + vlSelf->sumyslicelast));
    }
    if (vlSelf->stbout) {
        vlSelf->accx_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumx 
                                     >> (IData)(vlSelf->shift))));
        vlSelf->accy_r = (IData)((0x3ffffffffffffULL 
                                  & (vlSelf->accsumy 
                                     >> (IData)(vlSelf->shift))));
    }
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
                             + vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1));
    vlSelf->sumyslice[0U] = __Vdlyvval__sumyslice__v0;
    vlSelf->sumyslice[1U] = __Vdlyvval__sumyslice__v1;
    vlSelf->sumyslice[2U] = __Vdlyvval__sumyslice__v2;
    vlSelf->sumyslice[3U] = __Vdlyvval__sumyslice__v3;
    vlSelf->sumxslice[0U] = __Vdlyvval__sumxslice__v0;
    vlSelf->sumxslice[1U] = __Vdlyvval__sumxslice__v1;
    vlSelf->sumxslice[2U] = __Vdlyvval__sumxslice__v2;
    vlSelf->sumxslice[3U] = __Vdlyvval__sumxslice__v3;
    vlSelf->multiyi[0U][0U] = __Vdlyvval__multiyi__v0;
    vlSelf->multiyi[1U][0U] = __Vdlyvval__multiyi__v1;
    vlSelf->multiyi[1U][1U] = __Vdlyvval__multiyi__v2;
    vlSelf->multiyi[2U][0U] = __Vdlyvval__multiyi__v3;
    vlSelf->multiyi[2U][1U] = __Vdlyvval__multiyi__v4;
    vlSelf->multiyi[2U][2U] = __Vdlyvval__multiyi__v5;
    vlSelf->multiyi[3U][0U] = __Vdlyvval__multiyi__v6;
    vlSelf->multiyi[3U][1U] = __Vdlyvval__multiyi__v7;
    vlSelf->multiyi[3U][2U] = __Vdlyvval__multiyi__v8;
    vlSelf->multiyi[3U][3U] = __Vdlyvval__multiyi__v9;
    vlSelf->multixi[0U][0U] = __Vdlyvval__multixi__v0;
    vlSelf->multixi[1U][0U] = __Vdlyvval__multixi__v1;
    vlSelf->multixi[1U][1U] = __Vdlyvval__multixi__v2;
    vlSelf->multixi[2U][0U] = __Vdlyvval__multixi__v3;
    vlSelf->multixi[2U][1U] = __Vdlyvval__multixi__v4;
    vlSelf->multixi[2U][2U] = __Vdlyvval__multixi__v5;
    vlSelf->multixi[3U][0U] = __Vdlyvval__multixi__v6;
    vlSelf->multixi[3U][1U] = __Vdlyvval__multixi__v7;
    vlSelf->multixi[3U][2U] = __Vdlyvval__multixi__v8;
    vlSelf->multixi[3U][3U] = __Vdlyvval__multixi__v9;
    vlSelf->accsumx = __Vdly__accsumx;
    vlSelf->accsumy = __Vdly__accsumy;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_r 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->sumyslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumyslice
                                                                [3U]));
    vlSelf->sumxslicelast = (0x3ffffffffffffULL & VL_EXTENDS_QQ(50,34, 
                                                                vlSelf->sumxslice
                                                                [3U]));
    vlSelf->newacc = (1U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xaU)));
    vlSelf->accx = vlSelf->accx_r;
    vlSelf->accy = vlSelf->accy_r;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int;
    vlSelf->gatesr = __Vdly__gatesr;
    vlSelf->genblk1__BRA__0__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__1__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__2__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__3__KET____DOT__multiyi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zi;
    vlSelf->genblk1__BRA__0__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__1__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__2__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__zr;
    vlSelf->genblk1__BRA__3__KET____DOT__multixi_w 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__zr;
    vlSelf->gateout = (1U & ((IData)(vlSelf->gatesr) 
                             >> 0xeU));
    vlSelf->stbout = (2U == (3U & ((IData)(vlSelf->gatesr) 
                                   >> 0xeU)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__common 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr4 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,17, vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi3 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1))));
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi2 
        = vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi1 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__0__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(vlSelf->adcy_r));
    vlSelf->genblk1__BRA__0__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(vlSelf->adcx_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.multix_r));
    vlSelf->genblk1__BRA__0__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.multiy_r));
    vlSelf->genblk1__BRA__1__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.multix_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__1__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.multiy_r 
                                                             >> 0x10U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.multix_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__2__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.multiy_r 
                                                             >> 0x20U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__adcxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->adcx_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloxi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.multix_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__3__KET____DOT__dloyi = (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.multiy_r 
                                                             >> 0x30U)));
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__0__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__0__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__0__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__1__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__1__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__1__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcyi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__2__KET____DOT__adcxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__2__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__2__KET____DOT__dloyi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xi 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcyi;
    vlSelf->adcy_r = vlSelf->adcy;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__xr 
        = vlSelf->genblk1__BRA__3__KET____DOT__adcxi;
    vlSelf->adcx_r = vlSelf->adcx;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yr 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloxi;
    vlSelf->genblk1__BRA__3__KET____DOT__mult1__DOT__yi 
        = vlSelf->genblk1__BRA__3__KET____DOT__dloyi;
}

VL_INLINE_OPT void Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__genblk1__DOT__rdlo0mixacc1__1(Vtop_elementmixacc__Ec_F9_FB80_ECz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementmixacc__Ec_F9_FB80_ECz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__genblk1__DOT__rdlo0mixacc1__1\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__7__KET__.postprobusy 
        = (0U != (IData)(vlSelf->gatesr));
}
