// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_elementconn__pi3.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_elementconn__pi3::_combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__9\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->envaddrdelay__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk;
    this->ammod__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk;
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
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__clk 
        = this->ammod__DOT__cordicg__DOT__clk;
}

VL_INLINE_OPT void Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__14(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__14\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp4[4];
    WData/*127:0*/ __Vtemp8[4];
    WData/*383:0*/ __Vtemp11[12];
    WData/*3199:0*/ __Vtemp15[100];
    IData/*31:0*/ __Vilp;
    // Body
    this->__Vdly__envaddr_cnt = this->envaddr_cnt;
    this->envaddr_r3 = this->envaddr_r2;
    this->ammod__DOT__cordicg__DOT__genblk3__DOT__yin_d = 0U;
    this->ammod__DOT__phtime__DOT__freq_r = this->ammod__DOT__freq;
    this->ammod__DOT__phtime__DOT__tcnt_r = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.tcnt;
    this->ammod__DOT__cordicg__DOT__genblk3__DOT__xin_d 
        = this->ammod__DOT__ampx_d2;
    this->ammod__DOT__cordicg__DOT__phaseout_r = this->ammod__DOT__cordicg__DOT__zg1;
    this->ammod__DOT__cordicg__DOT__genblk3__DOT__phasein_d 
        = this->ammod__DOT__phaseinit;
    this->ammod__DOT__multidelay__DOT__usual__DOT__shifter 
        = ((0x1ffeU & ((IData)(this->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                       << 1U)) | (IData)(this->ammod__DOT__gcordic));
    this->ammod__DOT__phtime__DOT__phasetime_r3 = this->ammod__DOT__phtime__DOT__phasetime_r2;
    this->ammod__DOT__gateout_r = this->ammod__DOT__gmulti;
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v0 
        = (0x1ffffU & ((IData)(this->ammod__DOT__cordicg__DOT__shiftpi)
                        ? (- VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__cordicg__DOT__yin_1)))
                        : VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__cordicg__DOT__yin_1))));
    this->ammod__DOT__phtime__DOT__gatesr = ((0xfeU 
                                              & ((IData)(this->ammod__DOT__phtime__DOT__gatesr) 
                                                 << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (this->busy_sr 
                                                           >> 3U))));
    __Vtemp4[1U] = ((0x1ffffU & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
                                 >> 0xfU)) | (0xfffe0000U 
                                              & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
                                                 << 0x11U)));
    __Vtemp4[2U] = ((0x1ffffU & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
                                 >> 0xfU)) | (0xfffe0000U 
                                              & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
                                                 << 0x11U)));
    __Vtemp4[3U] = ((0x1ffffU & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
                                 >> 0xfU)) | (0x7e0000U 
                                              & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
                                                 << 0x11U)));
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
        = ((0xfffe0000U & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
                           << 0x11U)) | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.pini);
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp4[1U];
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp4[2U];
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp4[3U];
    __Vtemp8[1U] = ((0xffffU & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
                                >> 0x10U)) | (0xffff0000U 
                                              & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
                                                 << 0x10U)));
    __Vtemp8[2U] = ((0xffffU & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
                                >> 0x10U)) | (0xffff0000U 
                                              & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
                                                 << 0x10U)));
    __Vtemp8[3U] = (0xffffU & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
                               >> 0x10U));
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
        = ((0xffff0000U & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
                           << 0x10U)) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.ampx));
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp8[1U];
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp8[2U];
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp8[3U];
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xfU], 0xfU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xfU], 0xfU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xfU], 0xfU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xfU], 0xfU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xeU], 0xeU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xeU], 0xeU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xeU], 0xeU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xeU], 0xeU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xdU], 0xdU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xdU], 0xdU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xdU], 0xdU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xdU], 0xdU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xcU], 0xcU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xcU], 0xcU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xcU], 0xcU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xcU], 0xcU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xbU], 0xbU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xbU], 0xbU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xbU], 0xbU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xbU], 0xbU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xaU], 0xaU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xaU], 0xaU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xaU], 0xaU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xaU], 0xaU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [9U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [9U], 9U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [9U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [9U], 9U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [9U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [9U], 9U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [9U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [9U], 9U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [8U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [8U], 8U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [8U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [8U], 8U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [8U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [8U], 8U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [8U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [8U], 8U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [7U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [7U], 7U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [7U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [7U], 7U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [7U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [7U], 7U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [7U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [7U], 7U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [6U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [6U], 6U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [6U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [6U], 6U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [6U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [6U], 6U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [6U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [6U], 6U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [5U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [5U], 5U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [5U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [5U], 5U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [5U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [5U], 5U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [5U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [5U], 5U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [4U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [4U], 4U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [4U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [4U], 4U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [4U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [4U], 4U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [4U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [4U], 4U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [3U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [3U], 3U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [3U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [3U], 3U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [3U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [3U], 3U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [3U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [3U], 3U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [2U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [2U], 2U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [2U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [2U], 2U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [2U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [2U], 2U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [2U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [2U], 2U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [1U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [1U], 1U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [1U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [1U], 1U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [1U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [1U], 1U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [1U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [1U], 1U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0U] + this->ammod__DOT__cordicg__DOT__y
                       [0U]));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0U] - this->ammod__DOT__cordicg__DOT__y
                       [0U]));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0U] - this->ammod__DOT__cordicg__DOT__x
                       [0U]));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0U] + this->ammod__DOT__cordicg__DOT__x
                       [0U]));
    this->envdata_r3[0U] = this->envdata_r2[0U];
    this->envdata_r3[1U] = this->envdata_r2[1U];
    this->envdata_r3[2U] = this->envdata_r2[2U];
    this->envdata_r3[3U] = this->envdata_r2[3U];
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
        = ((0xffffeU & (this->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                        << 1U)) | (IData)(this->ammod__DOT__gphaseinit));
    this->freqaddr_r4 = this->freqaddr_r3;
    this->ammod__DOT__cordicg__DOT__errorr = (1U & 
                                              (((IData)(this->ammod__DOT__cordicg__DOT__genblk6__DOT__xdummy) 
                                                ^ ((IData)(this->ammod__DOT__cordicg__DOT__xout_r) 
                                                   >> 0xfU)) 
                                               | ((IData)(this->ammod__DOT__cordicg__DOT__genblk6__DOT__ydummy) 
                                                  ^ 
                                                  ((IData)(this->ammod__DOT__cordicg__DOT__yout) 
                                                   >> 0xfU))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xfU] - this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xfU] + this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xeU] - this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xeU] + this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xdU] - this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xdU] + this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xcU] - this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xcU] + this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xbU] - this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xbU] + this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xaU] - this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xaU] + this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [9U] - this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [9U] + this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [8U] - this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [8U] + this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [7U] - this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [7U] + this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [6U] - this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [6U] + this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [5U] - this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [5U] + this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [4U] - this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [4U] + this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [3U] - this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [3U] + this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [2U] - this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [2U] + this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [1U] - this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [1U] + this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0U] - this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0U] + this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1));
    __Vtemp11[1U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[0U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[1U] 
                                                 << 0xcU)));
    __Vtemp11[2U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[1U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[2U] 
                                                 << 0xcU)));
    __Vtemp11[3U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[2U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[3U] 
                                                 << 0xcU)));
    __Vtemp11[4U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[3U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[4U] 
                                                 << 0xcU)));
    __Vtemp11[5U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[4U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[5U] 
                                                 << 0xcU)));
    __Vtemp11[6U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[5U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[6U] 
                                                 << 0xcU)));
    __Vtemp11[7U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[6U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[7U] 
                                                 << 0xcU)));
    __Vtemp11[8U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[7U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[8U] 
                                                 << 0xcU)));
    __Vtemp11[9U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[8U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[9U] 
                                                 << 0xcU)));
    __Vtemp11[0xaU] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[9U] 
                                  >> 0x14U)) | (0xfffff000U 
                                                & (this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                                   << 0xcU)));
    __Vtemp11[0xbU] = (0xffU & (this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                >> 0x14U));
    this->envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = ((0xfffff000U & (this->envaddrdelay__DOT__usual__DOT__shifter[0U] 
                           << 0xcU)) | (IData)(this->envaddr_r));
    this->envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp11[1U];
    this->envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp11[2U];
    this->envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp11[3U];
    this->envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp11[4U];
    this->envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp11[5U];
    this->envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp11[6U];
    this->envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp11[7U];
    this->envaddrdelay__DOT__usual__DOT__shifter[8U] 
        = __Vtemp11[8U];
    this->envaddrdelay__DOT__usual__DOT__shifter[9U] 
        = __Vtemp11[9U];
    this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
        = __Vtemp11[0xaU];
    this->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
        = __Vtemp11[0xbU];
    __Vtemp15[4U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0U];
    __Vtemp15[5U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[1U];
    __Vtemp15[6U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[2U];
    __Vtemp15[7U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[3U];
    __Vtemp15[8U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[4U];
    __Vtemp15[9U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[5U];
    __Vtemp15[0xaU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[6U];
    __Vtemp15[0xbU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[7U];
    __Vtemp15[0xcU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[8U];
    __Vtemp15[0xdU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[9U];
    __Vtemp15[0xeU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xaU];
    __Vtemp15[0xfU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xbU];
    __Vtemp15[0x10U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xcU];
    __Vtemp15[0x11U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xdU];
    __Vtemp15[0x12U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xeU];
    __Vtemp15[0x13U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xfU];
    __Vtemp15[0x14U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x10U];
    __Vtemp15[0x15U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x11U];
    __Vtemp15[0x16U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x12U];
    __Vtemp15[0x17U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x13U];
    __Vtemp15[0x18U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x14U];
    __Vtemp15[0x19U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x15U];
    __Vtemp15[0x1aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x16U];
    __Vtemp15[0x1bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x17U];
    __Vtemp15[0x1cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x18U];
    __Vtemp15[0x1dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x19U];
    __Vtemp15[0x1eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1aU];
    __Vtemp15[0x1fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1bU];
    __Vtemp15[0x20U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1cU];
    __Vtemp15[0x21U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1dU];
    __Vtemp15[0x22U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1eU];
    __Vtemp15[0x23U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1fU];
    __Vtemp15[0x24U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x20U];
    __Vtemp15[0x25U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x21U];
    __Vtemp15[0x26U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x22U];
    __Vtemp15[0x27U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x23U];
    __Vtemp15[0x28U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x24U];
    __Vtemp15[0x29U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x25U];
    __Vtemp15[0x2aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x26U];
    __Vtemp15[0x2bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x27U];
    __Vtemp15[0x2cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x28U];
    __Vtemp15[0x2dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x29U];
    __Vtemp15[0x2eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2aU];
    __Vtemp15[0x2fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2bU];
    __Vtemp15[0x30U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2cU];
    __Vtemp15[0x31U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2dU];
    __Vtemp15[0x32U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2eU];
    __Vtemp15[0x33U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2fU];
    __Vtemp15[0x34U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x30U];
    __Vtemp15[0x35U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x31U];
    __Vtemp15[0x36U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x32U];
    __Vtemp15[0x37U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x33U];
    __Vtemp15[0x38U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x34U];
    __Vtemp15[0x39U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x35U];
    __Vtemp15[0x3aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x36U];
    __Vtemp15[0x3bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x37U];
    __Vtemp15[0x3cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x38U];
    __Vtemp15[0x3dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x39U];
    __Vtemp15[0x3eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3aU];
    __Vtemp15[0x3fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3bU];
    __Vtemp15[0x40U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3cU];
    __Vtemp15[0x41U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3dU];
    __Vtemp15[0x42U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3eU];
    __Vtemp15[0x43U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3fU];
    __Vtemp15[0x44U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x40U];
    __Vtemp15[0x45U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x41U];
    __Vtemp15[0x46U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x42U];
    __Vtemp15[0x47U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x43U];
    __Vtemp15[0x48U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x44U];
    __Vtemp15[0x49U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x45U];
    __Vtemp15[0x4aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x46U];
    __Vtemp15[0x4bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x47U];
    __Vtemp15[0x4cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x48U];
    __Vtemp15[0x4dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x49U];
    __Vtemp15[0x4eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4aU];
    __Vtemp15[0x4fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4bU];
    __Vtemp15[0x50U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4cU];
    __Vtemp15[0x51U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4dU];
    __Vtemp15[0x52U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4eU];
    __Vtemp15[0x53U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4fU];
    __Vtemp15[0x54U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x50U];
    __Vtemp15[0x55U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x51U];
    __Vtemp15[0x56U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x52U];
    __Vtemp15[0x57U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x53U];
    __Vtemp15[0x58U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x54U];
    __Vtemp15[0x59U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x55U];
    __Vtemp15[0x5aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x56U];
    __Vtemp15[0x5bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x57U];
    __Vtemp15[0x5cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x58U];
    __Vtemp15[0x5dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x59U];
    __Vtemp15[0x5eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5aU];
    __Vtemp15[0x5fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5bU];
    __Vtemp15[0x60U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5cU];
    __Vtemp15[0x61U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5dU];
    __Vtemp15[0x62U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5eU];
    __Vtemp15[0x63U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5fU];
    this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0U] 
        = this->freqdata_r2[0U];
    this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[1U] 
        = this->freqdata_r2[1U];
    this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[2U] 
        = this->freqdata_r2[2U];
    this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[3U] 
        = this->freqdata_r2[3U];
    __Vilp = 4U;
    while ((__Vilp <= 0x63U)) {
        this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[__Vilp] 
            = __Vtemp15[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    this->ammod__DOT__multiy16x16_r = ((0xffffffffffff0000ULL 
                                        & this->ammod__DOT__multiy16x16_r) 
                                       | (IData)((IData)(
                                                         this->ammod__DOT__multiy
                                                         [0U])));
    this->ammod__DOT__multiy16x16_r = ((0xffffffff0000ffffULL 
                                        & this->ammod__DOT__multiy16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multiy
                                                          [1U])) 
                                          << 0x10U));
    this->ammod__DOT__multiy16x16_r = ((0xffff0000ffffffffULL 
                                        & this->ammod__DOT__multiy16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multiy
                                                          [2U])) 
                                          << 0x20U));
    this->ammod__DOT__multiy16x16_r = ((0xffffffffffffULL 
                                        & this->ammod__DOT__multiy16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multiy
                                                          [3U])) 
                                          << 0x30U));
    this->ammod__DOT__multix16x16_r = ((0xffffffffffff0000ULL 
                                        & this->ammod__DOT__multix16x16_r) 
                                       | (IData)((IData)(
                                                         this->ammod__DOT__multix
                                                         [0U])));
    this->ammod__DOT__multix16x16_r = ((0xffffffff0000ffffULL 
                                        & this->ammod__DOT__multix16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multix
                                                          [1U])) 
                                          << 0x10U));
    this->ammod__DOT__multix16x16_r = ((0xffff0000ffffffffULL 
                                        & this->ammod__DOT__multix16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multix
                                                          [2U])) 
                                          << 0x20U));
    this->ammod__DOT__multix16x16_r = ((0xffffffffffffULL 
                                        & this->ammod__DOT__multix16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multix
                                                          [3U])) 
                                          << 0x30U));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0 
        = this->ammod__DOT__cordicg__DOT__plusall[0U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1 
        = this->ammod__DOT__cordicg__DOT__plusall[1U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2 
        = this->ammod__DOT__cordicg__DOT__plusall[2U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3 
        = this->ammod__DOT__cordicg__DOT__plusall[3U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4 
        = this->ammod__DOT__cordicg__DOT__plusall[4U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5 
        = this->ammod__DOT__cordicg__DOT__plusall[5U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6 
        = this->ammod__DOT__cordicg__DOT__plusall[6U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7 
        = this->ammod__DOT__cordicg__DOT__plusall[7U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8 
        = this->ammod__DOT__cordicg__DOT__plusall[8U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9 
        = this->ammod__DOT__cordicg__DOT__plusall[9U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10 
        = this->ammod__DOT__cordicg__DOT__plusall[0xaU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11 
        = this->ammod__DOT__cordicg__DOT__plusall[0xbU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12 
        = this->ammod__DOT__cordicg__DOT__plusall[0xcU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13 
        = this->ammod__DOT__cordicg__DOT__plusall[0xdU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14 
        = this->ammod__DOT__cordicg__DOT__plusall[0xeU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15 
        = this->ammod__DOT__cordicg__DOT__plusall[0xfU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0 
        = this->ammod__DOT__cordicg__DOT__plusall[0U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1 
        = this->ammod__DOT__cordicg__DOT__plusall[1U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2 
        = this->ammod__DOT__cordicg__DOT__plusall[2U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3 
        = this->ammod__DOT__cordicg__DOT__plusall[3U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4 
        = this->ammod__DOT__cordicg__DOT__plusall[4U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5 
        = this->ammod__DOT__cordicg__DOT__plusall[5U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6 
        = this->ammod__DOT__cordicg__DOT__plusall[6U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7 
        = this->ammod__DOT__cordicg__DOT__plusall[7U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8 
        = this->ammod__DOT__cordicg__DOT__plusall[8U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9 
        = this->ammod__DOT__cordicg__DOT__plusall[9U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10 
        = this->ammod__DOT__cordicg__DOT__plusall[0xaU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11 
        = this->ammod__DOT__cordicg__DOT__plusall[0xbU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12 
        = this->ammod__DOT__cordicg__DOT__plusall[0xcU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13 
        = this->ammod__DOT__cordicg__DOT__plusall[0xdU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14 
        = this->ammod__DOT__cordicg__DOT__plusall[0xeU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15 
        = this->ammod__DOT__cordicg__DOT__plusall[0xfU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v0 
        = (0x1ffffU & ((IData)(this->ammod__DOT__cordicg__DOT__shiftpi)
                        ? (- VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__cordicg__DOT__xin_1)))
                        : VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__cordicg__DOT__xin_1))));
    if (this->ammod__DOT__cordicg__DOT__plusall[0U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v1 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0U] + this->ammod__DOT__cordicg__DOT__y
                           [0U]));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v1 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0U] - this->ammod__DOT__cordicg__DOT__x
                           [0U]));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v1 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0U] - this->ammod__DOT__cordicg__DOT__y
                           [0U]));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v1 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0U] + this->ammod__DOT__cordicg__DOT__x
                           [0U]));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[1U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v2 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [1U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [1U], 1U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v2 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [1U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [1U], 1U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v2 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [1U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [1U], 1U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v2 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [1U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [1U], 1U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[2U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v3 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [2U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [2U], 2U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v3 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [2U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [2U], 2U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v3 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [2U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [2U], 2U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v3 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [2U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [2U], 2U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[3U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v4 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [3U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [3U], 3U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v4 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [3U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [3U], 3U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v4 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [3U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [3U], 3U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v4 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [3U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [3U], 3U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[4U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v5 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [4U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [4U], 4U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v5 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [4U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [4U], 4U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v5 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [4U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [4U], 4U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v5 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [4U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [4U], 4U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[5U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v6 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [5U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [5U], 5U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v6 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [5U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [5U], 5U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v6 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [5U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [5U], 5U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v6 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [5U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [5U], 5U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[6U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v7 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [6U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [6U], 6U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v7 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [6U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [6U], 6U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v7 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [6U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [6U], 6U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v7 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [6U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [6U], 6U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[7U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v8 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [7U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [7U], 7U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v8 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [7U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [7U], 7U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v8 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [7U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [7U], 7U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v8 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [7U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [7U], 7U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[8U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v9 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [8U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [8U], 8U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v9 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [8U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [8U], 8U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v9 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [8U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [8U], 8U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v9 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [8U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [8U], 8U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[9U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v10 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [9U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [9U], 9U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v10 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [9U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [9U], 9U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v10 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [9U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [9U], 9U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v10 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [9U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [9U], 9U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xaU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v11 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xaU], 0xaU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v11 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xaU], 0xaU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v11 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xaU], 0xaU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v11 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xaU], 0xaU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xbU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v12 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xbU], 0xbU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v12 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xbU], 0xbU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v12 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xbU], 0xbU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v12 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xbU], 0xbU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xcU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v13 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xcU], 0xcU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v13 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xcU], 0xcU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v13 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xcU], 0xcU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v13 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xcU], 0xcU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xdU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v14 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xdU], 0xdU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v14 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xdU], 0xdU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v14 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xdU], 0xdU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v14 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xdU], 0xdU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xeU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v15 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xeU], 0xeU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v15 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xeU], 0xeU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v15 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xeU], 0xeU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v15 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xeU], 0xeU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xfU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v16 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xfU], 0xfU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v16 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xfU], 0xfU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v16 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xfU], 0xfU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v16 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xfU], 0xfU)));
    }
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v0 
        = ((IData)(this->ammod__DOT__cordicg__DOT__shiftpi)
            ? ((0x10000U & ((~ (this->ammod__DOT__cordicg__DOT__phasein_1 
                                >> 0x10U)) << 0x10U)) 
               | (0xffffU & this->ammod__DOT__cordicg__DOT__phasein_1))
            : this->ammod__DOT__cordicg__DOT__phasein_1);
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v1 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0U] ? (this->ammod__DOT__cordicg__DOT__z
                               [0U] + this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0U] - this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v2 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [1U] ? (this->ammod__DOT__cordicg__DOT__z
                               [1U] + this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [1U] - this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v3 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [2U] ? (this->ammod__DOT__cordicg__DOT__z
                               [2U] + this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [2U] - this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v4 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [3U] ? (this->ammod__DOT__cordicg__DOT__z
                               [3U] + this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [3U] - this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v5 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [4U] ? (this->ammod__DOT__cordicg__DOT__z
                               [4U] + this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [4U] - this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v6 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [5U] ? (this->ammod__DOT__cordicg__DOT__z
                               [5U] + this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [5U] - this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v7 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [6U] ? (this->ammod__DOT__cordicg__DOT__z
                               [6U] + this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [6U] - this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v8 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [7U] ? (this->ammod__DOT__cordicg__DOT__z
                               [7U] + this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [7U] - this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v9 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [8U] ? (this->ammod__DOT__cordicg__DOT__z
                               [8U] + this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [8U] - this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v10 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [9U] ? (this->ammod__DOT__cordicg__DOT__z
                               [9U] + this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [9U] - this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v11 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xaU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xaU] + this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xaU] - this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v12 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xbU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xbU] + this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xbU] - this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v13 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xcU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xcU] + this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xcU] - this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v14 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xdU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xdU] + this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xdU] - this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v15 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xeU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xeU] + this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xeU] - this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v16 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xfU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xfU] + this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xfU] - this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain)));
    this->ammod__DOT__cordicg__DOT__pluscheck0[1U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0;
    this->ammod__DOT__cordicg__DOT__pluscheck0[2U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1;
    this->ammod__DOT__cordicg__DOT__pluscheck0[3U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2;
    this->ammod__DOT__cordicg__DOT__pluscheck0[4U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3;
    this->ammod__DOT__cordicg__DOT__pluscheck0[5U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4;
    this->ammod__DOT__cordicg__DOT__pluscheck0[6U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5;
    this->ammod__DOT__cordicg__DOT__pluscheck0[7U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6;
    this->ammod__DOT__cordicg__DOT__pluscheck0[8U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7;
    this->ammod__DOT__cordicg__DOT__pluscheck0[9U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xaU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xbU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xcU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xdU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xeU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xfU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0x10U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15;
    this->ammod__DOT__cordicg__DOT__pluscheck[1U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0;
    this->ammod__DOT__cordicg__DOT__pluscheck[2U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1;
    this->ammod__DOT__cordicg__DOT__pluscheck[3U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2;
    this->ammod__DOT__cordicg__DOT__pluscheck[4U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3;
    this->ammod__DOT__cordicg__DOT__pluscheck[5U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4;
    this->ammod__DOT__cordicg__DOT__pluscheck[6U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5;
    this->ammod__DOT__cordicg__DOT__pluscheck[7U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6;
    this->ammod__DOT__cordicg__DOT__pluscheck[8U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7;
    this->ammod__DOT__cordicg__DOT__pluscheck[9U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xaU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xbU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xcU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xdU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xeU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xfU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14;
    this->ammod__DOT__cordicg__DOT__pluscheck[0x10U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15;
    this->ammod__DOT__cordicg__DOT__x[0U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v0;
    this->ammod__DOT__cordicg__DOT__x[1U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v1;
    this->ammod__DOT__cordicg__DOT__x[2U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v2;
    this->ammod__DOT__cordicg__DOT__x[3U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v3;
    this->ammod__DOT__cordicg__DOT__x[4U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v4;
    this->ammod__DOT__cordicg__DOT__x[5U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v5;
    this->ammod__DOT__cordicg__DOT__x[6U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v6;
    this->ammod__DOT__cordicg__DOT__x[7U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v7;
    this->ammod__DOT__cordicg__DOT__x[8U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v8;
    this->ammod__DOT__cordicg__DOT__x[9U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v9;
    this->ammod__DOT__cordicg__DOT__x[0xaU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v10;
    this->ammod__DOT__cordicg__DOT__x[0xbU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v11;
    this->ammod__DOT__cordicg__DOT__x[0xcU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v12;
    this->ammod__DOT__cordicg__DOT__x[0xdU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v13;
    this->ammod__DOT__cordicg__DOT__x[0xeU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v14;
    this->ammod__DOT__cordicg__DOT__x[0xfU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v15;
    this->ammod__DOT__cordicg__DOT__x[0x10U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v16;
    this->ammod__DOT__cordicg__DOT__y[0U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v0;
    this->ammod__DOT__cordicg__DOT__y[1U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v1;
    this->ammod__DOT__cordicg__DOT__y[2U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v2;
    this->ammod__DOT__cordicg__DOT__y[3U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v3;
    this->ammod__DOT__cordicg__DOT__y[4U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v4;
    this->ammod__DOT__cordicg__DOT__y[5U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v5;
    this->ammod__DOT__cordicg__DOT__y[6U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v6;
    this->ammod__DOT__cordicg__DOT__y[7U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v7;
    this->ammod__DOT__cordicg__DOT__y[8U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v8;
    this->ammod__DOT__cordicg__DOT__y[9U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v9;
    this->ammod__DOT__cordicg__DOT__y[0xaU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v10;
    this->ammod__DOT__cordicg__DOT__y[0xbU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v11;
    this->ammod__DOT__cordicg__DOT__y[0xcU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v12;
    this->ammod__DOT__cordicg__DOT__y[0xdU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v13;
    this->ammod__DOT__cordicg__DOT__y[0xeU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v14;
    this->ammod__DOT__cordicg__DOT__y[0xfU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v15;
    this->ammod__DOT__cordicg__DOT__y[0x10U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v16;
    this->ammod__DOT__cordicg__DOT__z[0U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v0;
    this->ammod__DOT__cordicg__DOT__z[1U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v1;
    this->ammod__DOT__cordicg__DOT__z[2U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v2;
    this->ammod__DOT__cordicg__DOT__z[3U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v3;
    this->ammod__DOT__cordicg__DOT__z[4U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v4;
    this->ammod__DOT__cordicg__DOT__z[5U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v5;
    this->ammod__DOT__cordicg__DOT__z[6U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v6;
    this->ammod__DOT__cordicg__DOT__z[7U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v7;
    this->ammod__DOT__cordicg__DOT__z[8U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v8;
    this->ammod__DOT__cordicg__DOT__z[9U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v9;
    this->ammod__DOT__cordicg__DOT__z[0xaU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v10;
    this->ammod__DOT__cordicg__DOT__z[0xbU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v11;
    this->ammod__DOT__cordicg__DOT__z[0xcU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v12;
    this->ammod__DOT__cordicg__DOT__z[0xdU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v13;
    this->ammod__DOT__cordicg__DOT__z[0xeU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v14;
    this->ammod__DOT__cordicg__DOT__z[0xfU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v15;
    this->ammod__DOT__cordicg__DOT__z[0x10U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v16;
    this->ammod__DOT__cordicg__DOT__yin_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__yin_d;
    this->ammod__DOT__cordicg__DOT__xin_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__xin_d;
    this->ammod__DOT__ampx_d2 = ((IData)(this->ammod__DOT__gphtime)
                                  ? (0xffffU & (IData)(this->ammod__DOT__ampx_d))
                                  : 0U);
    this->ammod__DOT__cordicg__DOT__phaseout = this->ammod__DOT__cordicg__DOT__phaseout_r;
    this->ammod__DOT__cordicg__DOT__zg1 = this->ammod__DOT__cordicg__DOT__zg0;
    this->ammod__DOT__cordicg__DOT__phasein_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__phasein_d;
    this->ammod__DOT__phaseinit = (0x1ffffU & ((this->ammod__DOT__phasetime 
                                                >> 0xaU) 
                                               + this->ammod__DOT__pini_d));
    this->ammod__DOT__multidelay__DOT__dout = (1U & 
                                               ((IData)(this->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                                                >> 0xcU));
    this->ammod__DOT__phtime__DOT__phasetime = this->ammod__DOT__phtime__DOT__phasetime_r3;
    this->ammod__DOT__phtime__DOT__phasetime_r2 = this->ammod__DOT__phtime__DOT__phasetime_r1;
    this->ammod__DOT__gateout = this->ammod__DOT__gateout_r;
    this->ammod__DOT__phtime__DOT__gateout = (1U & 
                                              ((IData)(this->ammod__DOT__phtime__DOT__gatesr) 
                                               >> 4U));
    this->ammod__DOT__pinidelay__DOT__dout = (0x1ffffU 
                                              & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
                                                 >> 6U));
    this->ammod__DOT__ampxdelay__DOT__dout = (0xffffU 
                                              & this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U]);
    this->envdata_r2[0U] = this->envdata_r;
    this->envdata_r2[1U] = this->envdata_r;
    this->envdata_r2[2U] = this->envdata_r;
    this->envdata_r2[3U] = this->envdata_r;
    this->ammod__DOT__envxy32x16[0U] = this->envdata_r3[0U];
    this->ammod__DOT__envxy32x16[1U] = this->envdata_r3[1U];
    this->ammod__DOT__envxy32x16[2U] = this->envdata_r3[2U];
    this->ammod__DOT__envxy32x16[3U] = this->envdata_r3[3U];
    this->ammod__DOT__gphaseinit = this->ammod__DOT__gphtime;
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout 
        = (1U & (this->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                 >> 0x13U));
    this->freqaddr_r3 = this->freqaddr_r2;
    this->ammod__DOT__cordicg__DOT__error = this->ammod__DOT__cordicg__DOT__errorr;
    this->ammod__DOT__cordicg__DOT__genblk6__DOT__ydummy 
        = (1U & ((this->ammod__DOT__cordicg__DOT__ysum3 
                  - this->ammod__DOT__cordicg__DOT__ysum2_d) 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__yout_r = (0xffffU 
                                              & (this->ammod__DOT__cordicg__DOT__ysum3 
                                                 - this->ammod__DOT__cordicg__DOT__ysum2_d));
    this->ammod__DOT__cordicg__DOT__genblk6__DOT__xdummy 
        = (1U & ((this->ammod__DOT__cordicg__DOT__xsum3 
                  - this->ammod__DOT__cordicg__DOT__xsum2_d) 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__xout_r = (0xffffU 
                                              & (this->ammod__DOT__cordicg__DOT__xsum3 
                                                 - this->ammod__DOT__cordicg__DOT__xsum2_d));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    this->envaddrdelay__DOT__dout = (0xfffU & ((this->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                                                << 4U) 
                                               | (this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                                  >> 0x1cU)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.cmdstb) {
        this->__Vdly__envaddr_cnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.envstart;
    } else {
        if (this->busy) {
            this->__Vdly__envaddr_cnt = (0xfffU & ((IData)(this->envaddr_cnt) 
                                                   + 
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.envlength))));
        }
    }
    this->dummybusy = (1U & (IData)((this->busy_sr 
                                     >> 0x29U)));
    this->envaddr_r = this->envaddr_cnt;
    this->busy_sr = ((0x3fffffffffeULL & (this->busy_sr 
                                          << 1U)) | (QData)((IData)(this->busy)));
    this->freqdata_r2[0U] = this->freqdata_r[0U];
    this->freqdata_r2[1U] = this->freqdata_r[1U];
    this->freqdata_r2[2U] = this->freqdata_r[2U];
    this->freqdata_r2[3U] = this->freqdata_r[3U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[0U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x60U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[1U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x61U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[2U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x62U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[3U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x63U];
    this->ammod__DOT__multiy16x16 = this->ammod__DOT__multiy16x16_r;
    this->ammod__DOT__multix16x16 = this->ammod__DOT__multix16x16_r;
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
    this->ammod__DOT__cordicg__DOT__phaseout1 = this->ammod__DOT__cordicg__DOT__phaseout;
    this->ammod__DOT__cordicg__DOT__shiftpi = (1U & 
                                               ((this->ammod__DOT__cordicg__DOT__phasein_1 
                                                 >> 0x10U) 
                                                ^ (this->ammod__DOT__cordicg__DOT__phasein_1 
                                                   >> 0xfU)));
    this->ammod__DOT__gmulti = this->ammod__DOT__multidelay__DOT__dout;
    this->ammod__DOT__phasetime = this->ammod__DOT__phtime__DOT__phasetime;
    this->ammod__DOT__pini_d = this->ammod__DOT__pinidelay__DOT__dout;
    this->ammod__DOT__ampx_d = this->ammod__DOT__ampxdelay__DOT__dout;
    this->ammod__DOT__gphtime = this->ammod__DOT__phtime__DOT__gateout;
    this->ammod__DOT__cordicg__DOT__gout = this->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    this->envaddr = this->envaddrdelay__DOT__dout;
    this->envaddr_cnt = this->__Vdly__envaddr_cnt;
    this->ammod__DOT__freqcossinp32x16_d[0U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[0U];
    this->ammod__DOT__freqcossinp32x16_d[1U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[1U];
    this->ammod__DOT__freqcossinp32x16_d[2U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[2U];
    this->ammod__DOT__freqcossinp32x16_d[3U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[3U];
    this->ammod__DOT__cordicg__DOT__xin = this->ammod__DOT__ampx_d2;
    this->ammod__DOT__cordicg__DOT__zg0 = this->ammod__DOT__cordicg__DOT__zg;
    this->ammod__DOT__cordicg__DOT__phasein = this->ammod__DOT__phaseinit;
    this->ammod__DOT__phtime__DOT__phasetime_r1 = this->ammod__DOT__phtime__DOT__phasetime_r0;
    this->envdata_r = this->envdata;
    this->ammod__DOT__cordicg__DOT__gin = this->ammod__DOT__gphaseinit;
    this->ammod__DOT__gcordic = this->ammod__DOT__cordicg__DOT__gout;
    this->freqaddr_r2 = this->freqaddr_r;
    this->ammod__DOT__cordicg__DOT__yout = this->ammod__DOT__cordicg__DOT__yout_r;
    this->ammod__DOT__cordicg__DOT__ysum2_d = this->ammod__DOT__cordicg__DOT__ysum2;
    this->ammod__DOT__cordicg__DOT__ysum3 = (0x1ffffU 
                                             & (this->ammod__DOT__cordicg__DOT__ysum0 
                                                - this->ammod__DOT__cordicg__DOT__ysum1));
    this->ammod__DOT__cordicg__DOT__xout = this->ammod__DOT__cordicg__DOT__xout_r;
    this->ammod__DOT__cordicg__DOT__xsum2_d = this->ammod__DOT__cordicg__DOT__xsum2;
    this->ammod__DOT__cordicg__DOT__xsum3 = (0x1ffffU 
                                             & (this->ammod__DOT__cordicg__DOT__xsum0 
                                                - this->ammod__DOT__cordicg__DOT__xsum1));
    this->ammod__DOT__multiy[3U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multix[3U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multiy[2U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multix[2U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multiy[1U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multix[1U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multiy[0U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multix[0U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    this->envaddrdelay__DOT__din = this->envaddr_r;
    this->ammod__DOT__gatein = (1U & (IData)((this->busy_sr 
                                              >> 3U)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.cmdstb) {
        this->busy = 1U;
    } else {
        if (this->lastenv) {
            this->busy = 0U;
        }
    }
    this->freqdata_r[0U] = this->freqdata[0U];
    this->freqdata_r[1U] = this->freqdata[1U];
    this->freqdata_r[2U] = this->freqdata[2U];
    this->freqdata_r[3U] = this->freqdata[3U];
    this->ammod__DOT__freqcossinp32x16[0U] = this->freqdata_r2[0U];
    this->ammod__DOT__freqcossinp32x16[1U] = this->freqdata_r2[1U];
    this->ammod__DOT__freqcossinp32x16[2U] = this->freqdata_r2[2U];
    this->ammod__DOT__freqcossinp32x16[3U] = this->freqdata_r2[3U];
    this->ammod__DOT__freq32 = this->freqdata_r2[0U];
    this->ammod__DOT__cordicg__DOT__zg = this->ammod__DOT__cordicg__DOT__z
        [0xfU];
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__din 
        = this->ammod__DOT__cordicg__DOT__gin;
    this->ammod__DOT__multidelay__DOT__din = this->ammod__DOT__gcordic;
    this->ammod__DOT__cordicg__DOT__yout1 = this->ammod__DOT__cordicg__DOT__yout;
    this->ammod__DOT__cordicg__DOT__xout1 = this->ammod__DOT__cordicg__DOT__xout;
    this->ammod__DOT__phtime__DOT__gatein = this->ammod__DOT__gatein;
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
    this->ammod__DOT__phtime__DOT__phasetime_r0 = (0x7ffffffU 
                                                   & (IData)(this->ammod__DOT__phtime__DOT__phasetime_w));
    this->freqaddr_r = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.freqaddr;
    this->ammod__DOT__cordicg__DOT__ysum2 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 0xcU) 
                                                - VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 0xeU)));
    this->ammod__DOT__cordicg__DOT__ysum0 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 1U) 
                                                + VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 3U)));
    this->ammod__DOT__cordicg__DOT__ysum1 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 6U) 
                                                + VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 9U)));
    this->ammod__DOT__cordicg__DOT__xsum2 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 0xcU) 
                                                - VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 0xeU)));
    this->ammod__DOT__cordicg__DOT__xsum0 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 1U) 
                                                + VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 3U)));
    this->ammod__DOT__cordicg__DOT__xsum1 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 6U) 
                                                + VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 9U)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2;
    this->ammod__DOT__phtime__DOT__freq = this->ammod__DOT__freq;
    this->ammod__DOT__phtime__DOT__phasetime_w = (0x3fffffffffffffULL 
                                                  & ((QData)((IData)(this->ammod__DOT__phtime__DOT__freq_r)) 
                                                     * (QData)((IData)(this->ammod__DOT__phtime__DOT__tcnt_r))));
    this->ammod__DOT__cordicg__DOT__yg = this->ammod__DOT__cordicg__DOT__y
        [0xfU];
    this->ammod__DOT__cordicg__DOT__xg = this->ammod__DOT__cordicg__DOT__x
        [0xfU];
    this->freqaddr = this->freqaddr_r;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi 
        = this->ammod__DOT__envx[3U];
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi 
        = this->ammod__DOT__envy[3U];
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi 
        = this->ammod__DOT__envx[2U];
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi 
        = this->ammod__DOT__envy[2U];
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi 
        = this->ammod__DOT__envx[1U];
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi 
        = this->ammod__DOT__envy[1U];
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi 
        = this->ammod__DOT__envx[0U];
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi 
        = this->ammod__DOT__envy[0U];
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi 
        = this->ammod__DOT__cosp[3U];
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi 
        = this->ammod__DOT__sinp[3U];
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi 
        = this->ammod__DOT__cosp[2U];
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi 
        = this->ammod__DOT__sinp[2U];
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi 
        = this->ammod__DOT__cosp[1U];
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi 
        = this->ammod__DOT__sinp[1U];
    this->ammod__DOT__sin = this->ammod__DOT__sin_w;
    this->ammod__DOT__cos = this->ammod__DOT__cos_w;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi 
        = this->ammod__DOT__cosp[0U];
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi 
        = this->ammod__DOT__sinp[0U];
    this->ammod__DOT__envx[0U] = (0xffffU & ((this->envdata_r3[1U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[0U] 
                                                >> 0x10U)));
    this->ammod__DOT__envx[1U] = (0xffffU & ((this->envdata_r3[2U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[1U] 
                                                >> 0x10U)));
    this->ammod__DOT__envx[2U] = (0xffffU & ((this->envdata_r3[3U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[2U] 
                                                >> 0x10U)));
    this->ammod__DOT__envx[3U] = (0xffffU & (this->envdata_r3[3U] 
                                             >> 0x10U));
    this->ammod__DOT__envy[0U] = (0xffffU & this->envdata_r3[0U]);
    this->ammod__DOT__envy[1U] = (0xffffU & this->envdata_r3[1U]);
    this->ammod__DOT__envy[2U] = (0xffffU & this->envdata_r3[2U]);
    this->ammod__DOT__envy[3U] = (0xffffU & this->envdata_r3[3U]);
    this->ammod__DOT__sin_w = this->ammod__DOT__cordicg__DOT__yout;
    this->ammod__DOT__cos_w = this->ammod__DOT__cordicg__DOT__xout;
    this->ammod__DOT__cosp[1U] = (0xffffU & ((this->ammod__DOT__freqcossinp32x16_d[2U] 
                                              << 0x10U) 
                                             | (this->ammod__DOT__freqcossinp32x16_d[1U] 
                                                >> 0x10U)));
    this->ammod__DOT__cosp[2U] = (0xffffU & ((this->ammod__DOT__freqcossinp32x16_d[3U] 
                                              << 0x10U) 
                                             | (this->ammod__DOT__freqcossinp32x16_d[2U] 
                                                >> 0x10U)));
    this->ammod__DOT__cosp[3U] = (0xffffU & (this->ammod__DOT__freqcossinp32x16_d[3U] 
                                             >> 0x10U));
    this->ammod__DOT__sinp[1U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[1U]);
    this->ammod__DOT__sinp[2U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[2U]);
    this->ammod__DOT__sinp[3U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[3U]);
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
}

VL_INLINE_OPT void Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__15(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__15\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.valid 
        = this->ammod__DOT__gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.prepbusy 
        = (0U != this->busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multiy 
        = this->ammod__DOT__multiy16x16;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multix 
        = this->ammod__DOT__multix16x16;
    this->ammod__DOT__tcnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.tcnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.valid;
    this->ammod__DOT__phtime__DOT__tcnt = this->ammod__DOT__tcnt;
}

VL_INLINE_OPT void Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__18(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__18\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->ammod__DOT__pini = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.pini;
    this->ammod__DOT__ampx = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.ampx;
    this->ammod__DOT__pinidelay__DOT__din = this->ammod__DOT__pini;
    this->ammod__DOT__ampxdelay__DOT__din = this->ammod__DOT__ampx;
}

VL_INLINE_OPT void Vtop_elementconn__pi3::_multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__21(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__21\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->lastenv = ((IData)(this->envaddr_cnt) == 
                     (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.envstart) 
                       + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.envlength)) 
                      - (IData)(1U)));
}

VL_INLINE_OPT void Vtop_elementconn__pi3::_combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__8\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->envaddrdelay__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk;
    this->ammod__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk;
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
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__clk 
        = this->ammod__DOT__cordicg__DOT__clk;
}

VL_INLINE_OPT void Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__12\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp23[4];
    WData/*127:0*/ __Vtemp27[4];
    WData/*383:0*/ __Vtemp30[12];
    WData/*3199:0*/ __Vtemp34[100];
    IData/*31:0*/ __Vilp;
    // Body
    this->__Vdly__envaddr_cnt = this->envaddr_cnt;
    this->envaddr_r3 = this->envaddr_r2;
    this->ammod__DOT__cordicg__DOT__genblk3__DOT__yin_d = 0U;
    this->ammod__DOT__phtime__DOT__freq_r = this->ammod__DOT__freq;
    this->ammod__DOT__phtime__DOT__tcnt_r = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.tcnt;
    this->ammod__DOT__cordicg__DOT__genblk3__DOT__xin_d 
        = this->ammod__DOT__ampx_d2;
    this->ammod__DOT__cordicg__DOT__phaseout_r = this->ammod__DOT__cordicg__DOT__zg1;
    this->ammod__DOT__cordicg__DOT__genblk3__DOT__phasein_d 
        = this->ammod__DOT__phaseinit;
    this->ammod__DOT__multidelay__DOT__usual__DOT__shifter 
        = ((0x1ffeU & ((IData)(this->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                       << 1U)) | (IData)(this->ammod__DOT__gcordic));
    this->ammod__DOT__phtime__DOT__phasetime_r3 = this->ammod__DOT__phtime__DOT__phasetime_r2;
    this->ammod__DOT__gateout_r = this->ammod__DOT__gmulti;
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v0 
        = (0x1ffffU & ((IData)(this->ammod__DOT__cordicg__DOT__shiftpi)
                        ? (- VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__cordicg__DOT__yin_1)))
                        : VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__cordicg__DOT__yin_1))));
    this->ammod__DOT__phtime__DOT__gatesr = ((0xfeU 
                                              & ((IData)(this->ammod__DOT__phtime__DOT__gatesr) 
                                                 << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (this->busy_sr 
                                                           >> 3U))));
    __Vtemp23[1U] = ((0x1ffffU & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
                                  >> 0xfU)) | (0xfffe0000U 
                                               & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
                                                  << 0x11U)));
    __Vtemp23[2U] = ((0x1ffffU & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
                                  >> 0xfU)) | (0xfffe0000U 
                                               & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
                                                  << 0x11U)));
    __Vtemp23[3U] = ((0x1ffffU & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
                                  >> 0xfU)) | (0x7e0000U 
                                               & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
                                                  << 0x11U)));
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
        = ((0xfffe0000U & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
                           << 0x11U)) | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.pini);
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp23[1U];
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp23[2U];
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp23[3U];
    __Vtemp27[1U] = ((0xffffU & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
                                 >> 0x10U)) | (0xffff0000U 
                                               & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
                                                  << 0x10U)));
    __Vtemp27[2U] = ((0xffffU & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
                                 >> 0x10U)) | (0xffff0000U 
                                               & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
                                                  << 0x10U)));
    __Vtemp27[3U] = (0xffffU & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
                                >> 0x10U));
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
        = ((0xffff0000U & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
                           << 0x10U)) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.ampx));
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp27[1U];
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp27[2U];
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp27[3U];
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xfU], 0xfU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xfU], 0xfU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xfU], 0xfU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xfU], 0xfU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xeU], 0xeU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xeU], 0xeU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xeU], 0xeU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xeU], 0xeU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xdU], 0xdU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xdU], 0xdU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xdU], 0xdU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xdU], 0xdU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xcU], 0xcU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xcU], 0xcU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xcU], 0xcU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xcU], 0xcU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xbU], 0xbU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xbU], 0xbU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xbU], 0xbU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xbU], 0xbU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xaU], 0xaU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xaU], 0xaU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xaU], 0xaU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xaU], 0xaU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [9U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [9U], 9U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [9U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [9U], 9U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [9U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [9U], 9U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [9U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [9U], 9U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [8U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [8U], 8U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [8U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [8U], 8U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [8U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [8U], 8U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [8U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [8U], 8U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [7U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [7U], 7U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [7U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [7U], 7U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [7U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [7U], 7U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [7U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [7U], 7U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [6U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [6U], 6U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [6U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [6U], 6U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [6U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [6U], 6U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [6U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [6U], 6U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [5U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [5U], 5U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [5U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [5U], 5U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [5U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [5U], 5U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [5U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [5U], 5U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [4U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [4U], 4U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [4U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [4U], 4U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [4U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [4U], 4U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [4U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [4U], 4U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [3U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [3U], 3U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [3U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [3U], 3U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [3U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [3U], 3U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [3U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [3U], 3U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [2U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [2U], 2U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [2U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [2U], 2U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [2U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [2U], 2U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [2U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [2U], 2U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [1U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [1U], 1U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [1U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [1U], 1U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [1U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [1U], 1U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [1U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [1U], 1U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0U] + this->ammod__DOT__cordicg__DOT__y
                       [0U]));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0U] - this->ammod__DOT__cordicg__DOT__y
                       [0U]));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0U] - this->ammod__DOT__cordicg__DOT__x
                       [0U]));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0U] + this->ammod__DOT__cordicg__DOT__x
                       [0U]));
    this->envdata_r3[0U] = this->envdata_r2[0U];
    this->envdata_r3[1U] = this->envdata_r2[1U];
    this->envdata_r3[2U] = this->envdata_r2[2U];
    this->envdata_r3[3U] = this->envdata_r2[3U];
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
        = ((0xffffeU & (this->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                        << 1U)) | (IData)(this->ammod__DOT__gphaseinit));
    this->freqaddr_r4 = this->freqaddr_r3;
    this->ammod__DOT__cordicg__DOT__errorr = (1U & 
                                              (((IData)(this->ammod__DOT__cordicg__DOT__genblk6__DOT__xdummy) 
                                                ^ ((IData)(this->ammod__DOT__cordicg__DOT__xout_r) 
                                                   >> 0xfU)) 
                                               | ((IData)(this->ammod__DOT__cordicg__DOT__genblk6__DOT__ydummy) 
                                                  ^ 
                                                  ((IData)(this->ammod__DOT__cordicg__DOT__yout) 
                                                   >> 0xfU))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xfU] - this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xfU] + this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xeU] - this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xeU] + this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xdU] - this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xdU] + this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xcU] - this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xcU] + this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xbU] - this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xbU] + this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xaU] - this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xaU] + this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [9U] - this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [9U] + this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [8U] - this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [8U] + this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [7U] - this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [7U] + this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [6U] - this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [6U] + this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [5U] - this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [5U] + this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [4U] - this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [4U] + this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [3U] - this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [3U] + this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [2U] - this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [2U] + this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [1U] - this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [1U] + this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0U] - this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0U] + this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1));
    __Vtemp30[1U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[0U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[1U] 
                                                 << 0xcU)));
    __Vtemp30[2U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[1U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[2U] 
                                                 << 0xcU)));
    __Vtemp30[3U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[2U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[3U] 
                                                 << 0xcU)));
    __Vtemp30[4U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[3U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[4U] 
                                                 << 0xcU)));
    __Vtemp30[5U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[4U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[5U] 
                                                 << 0xcU)));
    __Vtemp30[6U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[5U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[6U] 
                                                 << 0xcU)));
    __Vtemp30[7U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[6U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[7U] 
                                                 << 0xcU)));
    __Vtemp30[8U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[7U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[8U] 
                                                 << 0xcU)));
    __Vtemp30[9U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[8U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[9U] 
                                                 << 0xcU)));
    __Vtemp30[0xaU] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[9U] 
                                  >> 0x14U)) | (0xfffff000U 
                                                & (this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                                   << 0xcU)));
    __Vtemp30[0xbU] = (0xffU & (this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                >> 0x14U));
    this->envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = ((0xfffff000U & (this->envaddrdelay__DOT__usual__DOT__shifter[0U] 
                           << 0xcU)) | (IData)(this->envaddr_r));
    this->envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp30[1U];
    this->envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp30[2U];
    this->envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp30[3U];
    this->envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp30[4U];
    this->envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp30[5U];
    this->envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp30[6U];
    this->envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp30[7U];
    this->envaddrdelay__DOT__usual__DOT__shifter[8U] 
        = __Vtemp30[8U];
    this->envaddrdelay__DOT__usual__DOT__shifter[9U] 
        = __Vtemp30[9U];
    this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
        = __Vtemp30[0xaU];
    this->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
        = __Vtemp30[0xbU];
    __Vtemp34[4U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0U];
    __Vtemp34[5U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[1U];
    __Vtemp34[6U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[2U];
    __Vtemp34[7U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[3U];
    __Vtemp34[8U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[4U];
    __Vtemp34[9U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[5U];
    __Vtemp34[0xaU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[6U];
    __Vtemp34[0xbU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[7U];
    __Vtemp34[0xcU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[8U];
    __Vtemp34[0xdU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[9U];
    __Vtemp34[0xeU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xaU];
    __Vtemp34[0xfU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xbU];
    __Vtemp34[0x10U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xcU];
    __Vtemp34[0x11U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xdU];
    __Vtemp34[0x12U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xeU];
    __Vtemp34[0x13U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xfU];
    __Vtemp34[0x14U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x10U];
    __Vtemp34[0x15U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x11U];
    __Vtemp34[0x16U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x12U];
    __Vtemp34[0x17U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x13U];
    __Vtemp34[0x18U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x14U];
    __Vtemp34[0x19U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x15U];
    __Vtemp34[0x1aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x16U];
    __Vtemp34[0x1bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x17U];
    __Vtemp34[0x1cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x18U];
    __Vtemp34[0x1dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x19U];
    __Vtemp34[0x1eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1aU];
    __Vtemp34[0x1fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1bU];
    __Vtemp34[0x20U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1cU];
    __Vtemp34[0x21U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1dU];
    __Vtemp34[0x22U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1eU];
    __Vtemp34[0x23U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1fU];
    __Vtemp34[0x24U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x20U];
    __Vtemp34[0x25U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x21U];
    __Vtemp34[0x26U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x22U];
    __Vtemp34[0x27U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x23U];
    __Vtemp34[0x28U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x24U];
    __Vtemp34[0x29U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x25U];
    __Vtemp34[0x2aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x26U];
    __Vtemp34[0x2bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x27U];
    __Vtemp34[0x2cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x28U];
    __Vtemp34[0x2dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x29U];
    __Vtemp34[0x2eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2aU];
    __Vtemp34[0x2fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2bU];
    __Vtemp34[0x30U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2cU];
    __Vtemp34[0x31U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2dU];
    __Vtemp34[0x32U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2eU];
    __Vtemp34[0x33U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2fU];
    __Vtemp34[0x34U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x30U];
    __Vtemp34[0x35U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x31U];
    __Vtemp34[0x36U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x32U];
    __Vtemp34[0x37U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x33U];
    __Vtemp34[0x38U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x34U];
    __Vtemp34[0x39U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x35U];
    __Vtemp34[0x3aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x36U];
    __Vtemp34[0x3bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x37U];
    __Vtemp34[0x3cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x38U];
    __Vtemp34[0x3dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x39U];
    __Vtemp34[0x3eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3aU];
    __Vtemp34[0x3fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3bU];
    __Vtemp34[0x40U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3cU];
    __Vtemp34[0x41U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3dU];
    __Vtemp34[0x42U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3eU];
    __Vtemp34[0x43U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3fU];
    __Vtemp34[0x44U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x40U];
    __Vtemp34[0x45U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x41U];
    __Vtemp34[0x46U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x42U];
    __Vtemp34[0x47U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x43U];
    __Vtemp34[0x48U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x44U];
    __Vtemp34[0x49U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x45U];
    __Vtemp34[0x4aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x46U];
    __Vtemp34[0x4bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x47U];
    __Vtemp34[0x4cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x48U];
    __Vtemp34[0x4dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x49U];
    __Vtemp34[0x4eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4aU];
    __Vtemp34[0x4fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4bU];
    __Vtemp34[0x50U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4cU];
    __Vtemp34[0x51U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4dU];
    __Vtemp34[0x52U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4eU];
    __Vtemp34[0x53U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4fU];
    __Vtemp34[0x54U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x50U];
    __Vtemp34[0x55U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x51U];
    __Vtemp34[0x56U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x52U];
    __Vtemp34[0x57U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x53U];
    __Vtemp34[0x58U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x54U];
    __Vtemp34[0x59U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x55U];
    __Vtemp34[0x5aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x56U];
    __Vtemp34[0x5bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x57U];
    __Vtemp34[0x5cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x58U];
    __Vtemp34[0x5dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x59U];
    __Vtemp34[0x5eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5aU];
    __Vtemp34[0x5fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5bU];
    __Vtemp34[0x60U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5cU];
    __Vtemp34[0x61U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5dU];
    __Vtemp34[0x62U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5eU];
    __Vtemp34[0x63U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5fU];
    this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0U] 
        = this->freqdata_r2[0U];
    this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[1U] 
        = this->freqdata_r2[1U];
    this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[2U] 
        = this->freqdata_r2[2U];
    this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[3U] 
        = this->freqdata_r2[3U];
    __Vilp = 4U;
    while ((__Vilp <= 0x63U)) {
        this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[__Vilp] 
            = __Vtemp34[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    this->ammod__DOT__multiy16x16_r = ((0xffffffffffff0000ULL 
                                        & this->ammod__DOT__multiy16x16_r) 
                                       | (IData)((IData)(
                                                         this->ammod__DOT__multiy
                                                         [0U])));
    this->ammod__DOT__multiy16x16_r = ((0xffffffff0000ffffULL 
                                        & this->ammod__DOT__multiy16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multiy
                                                          [1U])) 
                                          << 0x10U));
    this->ammod__DOT__multiy16x16_r = ((0xffff0000ffffffffULL 
                                        & this->ammod__DOT__multiy16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multiy
                                                          [2U])) 
                                          << 0x20U));
    this->ammod__DOT__multiy16x16_r = ((0xffffffffffffULL 
                                        & this->ammod__DOT__multiy16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multiy
                                                          [3U])) 
                                          << 0x30U));
    this->ammod__DOT__multix16x16_r = ((0xffffffffffff0000ULL 
                                        & this->ammod__DOT__multix16x16_r) 
                                       | (IData)((IData)(
                                                         this->ammod__DOT__multix
                                                         [0U])));
    this->ammod__DOT__multix16x16_r = ((0xffffffff0000ffffULL 
                                        & this->ammod__DOT__multix16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multix
                                                          [1U])) 
                                          << 0x10U));
    this->ammod__DOT__multix16x16_r = ((0xffff0000ffffffffULL 
                                        & this->ammod__DOT__multix16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multix
                                                          [2U])) 
                                          << 0x20U));
    this->ammod__DOT__multix16x16_r = ((0xffffffffffffULL 
                                        & this->ammod__DOT__multix16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multix
                                                          [3U])) 
                                          << 0x30U));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0 
        = this->ammod__DOT__cordicg__DOT__plusall[0U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1 
        = this->ammod__DOT__cordicg__DOT__plusall[1U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2 
        = this->ammod__DOT__cordicg__DOT__plusall[2U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3 
        = this->ammod__DOT__cordicg__DOT__plusall[3U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4 
        = this->ammod__DOT__cordicg__DOT__plusall[4U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5 
        = this->ammod__DOT__cordicg__DOT__plusall[5U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6 
        = this->ammod__DOT__cordicg__DOT__plusall[6U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7 
        = this->ammod__DOT__cordicg__DOT__plusall[7U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8 
        = this->ammod__DOT__cordicg__DOT__plusall[8U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9 
        = this->ammod__DOT__cordicg__DOT__plusall[9U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10 
        = this->ammod__DOT__cordicg__DOT__plusall[0xaU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11 
        = this->ammod__DOT__cordicg__DOT__plusall[0xbU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12 
        = this->ammod__DOT__cordicg__DOT__plusall[0xcU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13 
        = this->ammod__DOT__cordicg__DOT__plusall[0xdU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14 
        = this->ammod__DOT__cordicg__DOT__plusall[0xeU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15 
        = this->ammod__DOT__cordicg__DOT__plusall[0xfU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0 
        = this->ammod__DOT__cordicg__DOT__plusall[0U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1 
        = this->ammod__DOT__cordicg__DOT__plusall[1U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2 
        = this->ammod__DOT__cordicg__DOT__plusall[2U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3 
        = this->ammod__DOT__cordicg__DOT__plusall[3U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4 
        = this->ammod__DOT__cordicg__DOT__plusall[4U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5 
        = this->ammod__DOT__cordicg__DOT__plusall[5U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6 
        = this->ammod__DOT__cordicg__DOT__plusall[6U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7 
        = this->ammod__DOT__cordicg__DOT__plusall[7U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8 
        = this->ammod__DOT__cordicg__DOT__plusall[8U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9 
        = this->ammod__DOT__cordicg__DOT__plusall[9U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10 
        = this->ammod__DOT__cordicg__DOT__plusall[0xaU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11 
        = this->ammod__DOT__cordicg__DOT__plusall[0xbU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12 
        = this->ammod__DOT__cordicg__DOT__plusall[0xcU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13 
        = this->ammod__DOT__cordicg__DOT__plusall[0xdU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14 
        = this->ammod__DOT__cordicg__DOT__plusall[0xeU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15 
        = this->ammod__DOT__cordicg__DOT__plusall[0xfU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v0 
        = (0x1ffffU & ((IData)(this->ammod__DOT__cordicg__DOT__shiftpi)
                        ? (- VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__cordicg__DOT__xin_1)))
                        : VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__cordicg__DOT__xin_1))));
    if (this->ammod__DOT__cordicg__DOT__plusall[0U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v1 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0U] + this->ammod__DOT__cordicg__DOT__y
                           [0U]));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v1 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0U] - this->ammod__DOT__cordicg__DOT__x
                           [0U]));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v1 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0U] - this->ammod__DOT__cordicg__DOT__y
                           [0U]));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v1 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0U] + this->ammod__DOT__cordicg__DOT__x
                           [0U]));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[1U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v2 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [1U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [1U], 1U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v2 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [1U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [1U], 1U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v2 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [1U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [1U], 1U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v2 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [1U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [1U], 1U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[2U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v3 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [2U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [2U], 2U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v3 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [2U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [2U], 2U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v3 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [2U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [2U], 2U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v3 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [2U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [2U], 2U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[3U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v4 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [3U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [3U], 3U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v4 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [3U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [3U], 3U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v4 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [3U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [3U], 3U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v4 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [3U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [3U], 3U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[4U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v5 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [4U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [4U], 4U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v5 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [4U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [4U], 4U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v5 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [4U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [4U], 4U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v5 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [4U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [4U], 4U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[5U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v6 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [5U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [5U], 5U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v6 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [5U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [5U], 5U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v6 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [5U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [5U], 5U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v6 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [5U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [5U], 5U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[6U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v7 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [6U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [6U], 6U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v7 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [6U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [6U], 6U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v7 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [6U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [6U], 6U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v7 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [6U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [6U], 6U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[7U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v8 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [7U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [7U], 7U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v8 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [7U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [7U], 7U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v8 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [7U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [7U], 7U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v8 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [7U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [7U], 7U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[8U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v9 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [8U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [8U], 8U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v9 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [8U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [8U], 8U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v9 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [8U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [8U], 8U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v9 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [8U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [8U], 8U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[9U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v10 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [9U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [9U], 9U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v10 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [9U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [9U], 9U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v10 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [9U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [9U], 9U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v10 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [9U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [9U], 9U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xaU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v11 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xaU], 0xaU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v11 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xaU], 0xaU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v11 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xaU], 0xaU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v11 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xaU], 0xaU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xbU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v12 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xbU], 0xbU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v12 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xbU], 0xbU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v12 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xbU], 0xbU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v12 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xbU], 0xbU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xcU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v13 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xcU], 0xcU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v13 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xcU], 0xcU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v13 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xcU], 0xcU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v13 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xcU], 0xcU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xdU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v14 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xdU], 0xdU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v14 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xdU], 0xdU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v14 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xdU], 0xdU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v14 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xdU], 0xdU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xeU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v15 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xeU], 0xeU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v15 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xeU], 0xeU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v15 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xeU], 0xeU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v15 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xeU], 0xeU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xfU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v16 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xfU], 0xfU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v16 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xfU], 0xfU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v16 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xfU], 0xfU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v16 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xfU], 0xfU)));
    }
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v0 
        = ((IData)(this->ammod__DOT__cordicg__DOT__shiftpi)
            ? ((0x10000U & ((~ (this->ammod__DOT__cordicg__DOT__phasein_1 
                                >> 0x10U)) << 0x10U)) 
               | (0xffffU & this->ammod__DOT__cordicg__DOT__phasein_1))
            : this->ammod__DOT__cordicg__DOT__phasein_1);
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v1 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0U] ? (this->ammod__DOT__cordicg__DOT__z
                               [0U] + this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0U] - this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v2 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [1U] ? (this->ammod__DOT__cordicg__DOT__z
                               [1U] + this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [1U] - this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v3 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [2U] ? (this->ammod__DOT__cordicg__DOT__z
                               [2U] + this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [2U] - this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v4 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [3U] ? (this->ammod__DOT__cordicg__DOT__z
                               [3U] + this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [3U] - this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v5 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [4U] ? (this->ammod__DOT__cordicg__DOT__z
                               [4U] + this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [4U] - this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v6 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [5U] ? (this->ammod__DOT__cordicg__DOT__z
                               [5U] + this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [5U] - this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v7 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [6U] ? (this->ammod__DOT__cordicg__DOT__z
                               [6U] + this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [6U] - this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v8 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [7U] ? (this->ammod__DOT__cordicg__DOT__z
                               [7U] + this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [7U] - this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v9 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [8U] ? (this->ammod__DOT__cordicg__DOT__z
                               [8U] + this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [8U] - this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v10 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [9U] ? (this->ammod__DOT__cordicg__DOT__z
                               [9U] + this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [9U] - this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v11 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xaU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xaU] + this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xaU] - this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v12 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xbU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xbU] + this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xbU] - this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v13 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xcU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xcU] + this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xcU] - this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v14 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xdU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xdU] + this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xdU] - this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v15 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xeU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xeU] + this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xeU] - this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v16 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xfU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xfU] + this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xfU] - this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain)));
    this->ammod__DOT__cordicg__DOT__pluscheck0[1U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0;
    this->ammod__DOT__cordicg__DOT__pluscheck0[2U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1;
    this->ammod__DOT__cordicg__DOT__pluscheck0[3U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2;
    this->ammod__DOT__cordicg__DOT__pluscheck0[4U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3;
    this->ammod__DOT__cordicg__DOT__pluscheck0[5U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4;
    this->ammod__DOT__cordicg__DOT__pluscheck0[6U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5;
    this->ammod__DOT__cordicg__DOT__pluscheck0[7U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6;
    this->ammod__DOT__cordicg__DOT__pluscheck0[8U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7;
    this->ammod__DOT__cordicg__DOT__pluscheck0[9U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xaU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xbU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xcU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xdU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xeU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xfU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0x10U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15;
    this->ammod__DOT__cordicg__DOT__pluscheck[1U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0;
    this->ammod__DOT__cordicg__DOT__pluscheck[2U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1;
    this->ammod__DOT__cordicg__DOT__pluscheck[3U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2;
    this->ammod__DOT__cordicg__DOT__pluscheck[4U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3;
    this->ammod__DOT__cordicg__DOT__pluscheck[5U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4;
    this->ammod__DOT__cordicg__DOT__pluscheck[6U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5;
    this->ammod__DOT__cordicg__DOT__pluscheck[7U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6;
    this->ammod__DOT__cordicg__DOT__pluscheck[8U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7;
    this->ammod__DOT__cordicg__DOT__pluscheck[9U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xaU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xbU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xcU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xdU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xeU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xfU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14;
    this->ammod__DOT__cordicg__DOT__pluscheck[0x10U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15;
    this->ammod__DOT__cordicg__DOT__x[0U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v0;
    this->ammod__DOT__cordicg__DOT__x[1U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v1;
    this->ammod__DOT__cordicg__DOT__x[2U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v2;
    this->ammod__DOT__cordicg__DOT__x[3U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v3;
    this->ammod__DOT__cordicg__DOT__x[4U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v4;
    this->ammod__DOT__cordicg__DOT__x[5U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v5;
    this->ammod__DOT__cordicg__DOT__x[6U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v6;
    this->ammod__DOT__cordicg__DOT__x[7U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v7;
    this->ammod__DOT__cordicg__DOT__x[8U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v8;
    this->ammod__DOT__cordicg__DOT__x[9U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v9;
    this->ammod__DOT__cordicg__DOT__x[0xaU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v10;
    this->ammod__DOT__cordicg__DOT__x[0xbU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v11;
    this->ammod__DOT__cordicg__DOT__x[0xcU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v12;
    this->ammod__DOT__cordicg__DOT__x[0xdU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v13;
    this->ammod__DOT__cordicg__DOT__x[0xeU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v14;
    this->ammod__DOT__cordicg__DOT__x[0xfU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v15;
    this->ammod__DOT__cordicg__DOT__x[0x10U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v16;
    this->ammod__DOT__cordicg__DOT__y[0U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v0;
    this->ammod__DOT__cordicg__DOT__y[1U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v1;
    this->ammod__DOT__cordicg__DOT__y[2U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v2;
    this->ammod__DOT__cordicg__DOT__y[3U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v3;
    this->ammod__DOT__cordicg__DOT__y[4U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v4;
    this->ammod__DOT__cordicg__DOT__y[5U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v5;
    this->ammod__DOT__cordicg__DOT__y[6U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v6;
    this->ammod__DOT__cordicg__DOT__y[7U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v7;
    this->ammod__DOT__cordicg__DOT__y[8U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v8;
    this->ammod__DOT__cordicg__DOT__y[9U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v9;
    this->ammod__DOT__cordicg__DOT__y[0xaU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v10;
    this->ammod__DOT__cordicg__DOT__y[0xbU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v11;
    this->ammod__DOT__cordicg__DOT__y[0xcU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v12;
    this->ammod__DOT__cordicg__DOT__y[0xdU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v13;
    this->ammod__DOT__cordicg__DOT__y[0xeU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v14;
    this->ammod__DOT__cordicg__DOT__y[0xfU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v15;
    this->ammod__DOT__cordicg__DOT__y[0x10U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v16;
    this->ammod__DOT__cordicg__DOT__z[0U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v0;
    this->ammod__DOT__cordicg__DOT__z[1U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v1;
    this->ammod__DOT__cordicg__DOT__z[2U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v2;
    this->ammod__DOT__cordicg__DOT__z[3U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v3;
    this->ammod__DOT__cordicg__DOT__z[4U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v4;
    this->ammod__DOT__cordicg__DOT__z[5U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v5;
    this->ammod__DOT__cordicg__DOT__z[6U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v6;
    this->ammod__DOT__cordicg__DOT__z[7U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v7;
    this->ammod__DOT__cordicg__DOT__z[8U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v8;
    this->ammod__DOT__cordicg__DOT__z[9U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v9;
    this->ammod__DOT__cordicg__DOT__z[0xaU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v10;
    this->ammod__DOT__cordicg__DOT__z[0xbU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v11;
    this->ammod__DOT__cordicg__DOT__z[0xcU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v12;
    this->ammod__DOT__cordicg__DOT__z[0xdU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v13;
    this->ammod__DOT__cordicg__DOT__z[0xeU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v14;
    this->ammod__DOT__cordicg__DOT__z[0xfU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v15;
    this->ammod__DOT__cordicg__DOT__z[0x10U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v16;
    this->ammod__DOT__cordicg__DOT__yin_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__yin_d;
    this->ammod__DOT__cordicg__DOT__xin_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__xin_d;
    this->ammod__DOT__ampx_d2 = ((IData)(this->ammod__DOT__gphtime)
                                  ? (0xffffU & (IData)(this->ammod__DOT__ampx_d))
                                  : 0U);
    this->ammod__DOT__cordicg__DOT__phaseout = this->ammod__DOT__cordicg__DOT__phaseout_r;
    this->ammod__DOT__cordicg__DOT__zg1 = this->ammod__DOT__cordicg__DOT__zg0;
    this->ammod__DOT__cordicg__DOT__phasein_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__phasein_d;
    this->ammod__DOT__phaseinit = (0x1ffffU & ((this->ammod__DOT__phasetime 
                                                >> 0xaU) 
                                               + this->ammod__DOT__pini_d));
    this->ammod__DOT__multidelay__DOT__dout = (1U & 
                                               ((IData)(this->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                                                >> 0xcU));
    this->ammod__DOT__phtime__DOT__phasetime = this->ammod__DOT__phtime__DOT__phasetime_r3;
    this->ammod__DOT__phtime__DOT__phasetime_r2 = this->ammod__DOT__phtime__DOT__phasetime_r1;
    this->ammod__DOT__gateout = this->ammod__DOT__gateout_r;
    this->ammod__DOT__phtime__DOT__gateout = (1U & 
                                              ((IData)(this->ammod__DOT__phtime__DOT__gatesr) 
                                               >> 4U));
    this->ammod__DOT__pinidelay__DOT__dout = (0x1ffffU 
                                              & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
                                                 >> 6U));
    this->ammod__DOT__ampxdelay__DOT__dout = (0xffffU 
                                              & this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U]);
    this->envdata_r2[0U] = this->envdata_r;
    this->envdata_r2[1U] = this->envdata_r;
    this->envdata_r2[2U] = this->envdata_r;
    this->envdata_r2[3U] = this->envdata_r;
    this->ammod__DOT__envxy32x16[0U] = this->envdata_r3[0U];
    this->ammod__DOT__envxy32x16[1U] = this->envdata_r3[1U];
    this->ammod__DOT__envxy32x16[2U] = this->envdata_r3[2U];
    this->ammod__DOT__envxy32x16[3U] = this->envdata_r3[3U];
    this->ammod__DOT__gphaseinit = this->ammod__DOT__gphtime;
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout 
        = (1U & (this->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                 >> 0x13U));
    this->freqaddr_r3 = this->freqaddr_r2;
    this->ammod__DOT__cordicg__DOT__error = this->ammod__DOT__cordicg__DOT__errorr;
    this->ammod__DOT__cordicg__DOT__genblk6__DOT__ydummy 
        = (1U & ((this->ammod__DOT__cordicg__DOT__ysum3 
                  - this->ammod__DOT__cordicg__DOT__ysum2_d) 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__yout_r = (0xffffU 
                                              & (this->ammod__DOT__cordicg__DOT__ysum3 
                                                 - this->ammod__DOT__cordicg__DOT__ysum2_d));
    this->ammod__DOT__cordicg__DOT__genblk6__DOT__xdummy 
        = (1U & ((this->ammod__DOT__cordicg__DOT__xsum3 
                  - this->ammod__DOT__cordicg__DOT__xsum2_d) 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__xout_r = (0xffffU 
                                              & (this->ammod__DOT__cordicg__DOT__xsum3 
                                                 - this->ammod__DOT__cordicg__DOT__xsum2_d));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    this->envaddrdelay__DOT__dout = (0xfffU & ((this->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                                                << 4U) 
                                               | (this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                                  >> 0x1cU)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.cmdstb) {
        this->__Vdly__envaddr_cnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.envstart;
    } else {
        if (this->busy) {
            this->__Vdly__envaddr_cnt = (0xfffU & ((IData)(this->envaddr_cnt) 
                                                   + 
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.envlength))));
        }
    }
    this->dummybusy = (1U & (IData)((this->busy_sr 
                                     >> 0x29U)));
    this->envaddr_r = this->envaddr_cnt;
    this->busy_sr = ((0x3fffffffffeULL & (this->busy_sr 
                                          << 1U)) | (QData)((IData)(this->busy)));
    this->freqdata_r2[0U] = this->freqdata_r[0U];
    this->freqdata_r2[1U] = this->freqdata_r[1U];
    this->freqdata_r2[2U] = this->freqdata_r[2U];
    this->freqdata_r2[3U] = this->freqdata_r[3U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[0U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x60U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[1U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x61U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[2U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x62U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[3U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x63U];
    this->ammod__DOT__multiy16x16 = this->ammod__DOT__multiy16x16_r;
    this->ammod__DOT__multix16x16 = this->ammod__DOT__multix16x16_r;
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
    this->ammod__DOT__cordicg__DOT__phaseout1 = this->ammod__DOT__cordicg__DOT__phaseout;
    this->ammod__DOT__cordicg__DOT__shiftpi = (1U & 
                                               ((this->ammod__DOT__cordicg__DOT__phasein_1 
                                                 >> 0x10U) 
                                                ^ (this->ammod__DOT__cordicg__DOT__phasein_1 
                                                   >> 0xfU)));
    this->ammod__DOT__gmulti = this->ammod__DOT__multidelay__DOT__dout;
    this->ammod__DOT__phasetime = this->ammod__DOT__phtime__DOT__phasetime;
    this->ammod__DOT__pini_d = this->ammod__DOT__pinidelay__DOT__dout;
    this->ammod__DOT__ampx_d = this->ammod__DOT__ampxdelay__DOT__dout;
    this->ammod__DOT__gphtime = this->ammod__DOT__phtime__DOT__gateout;
    this->ammod__DOT__cordicg__DOT__gout = this->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    this->envaddr = this->envaddrdelay__DOT__dout;
    this->envaddr_cnt = this->__Vdly__envaddr_cnt;
    this->ammod__DOT__freqcossinp32x16_d[0U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[0U];
    this->ammod__DOT__freqcossinp32x16_d[1U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[1U];
    this->ammod__DOT__freqcossinp32x16_d[2U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[2U];
    this->ammod__DOT__freqcossinp32x16_d[3U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[3U];
    this->ammod__DOT__cordicg__DOT__xin = this->ammod__DOT__ampx_d2;
    this->ammod__DOT__cordicg__DOT__zg0 = this->ammod__DOT__cordicg__DOT__zg;
    this->ammod__DOT__cordicg__DOT__phasein = this->ammod__DOT__phaseinit;
    this->ammod__DOT__phtime__DOT__phasetime_r1 = this->ammod__DOT__phtime__DOT__phasetime_r0;
    this->envdata_r = this->envdata;
    this->ammod__DOT__cordicg__DOT__gin = this->ammod__DOT__gphaseinit;
    this->ammod__DOT__gcordic = this->ammod__DOT__cordicg__DOT__gout;
    this->freqaddr_r2 = this->freqaddr_r;
    this->ammod__DOT__cordicg__DOT__yout = this->ammod__DOT__cordicg__DOT__yout_r;
    this->ammod__DOT__cordicg__DOT__ysum2_d = this->ammod__DOT__cordicg__DOT__ysum2;
    this->ammod__DOT__cordicg__DOT__ysum3 = (0x1ffffU 
                                             & (this->ammod__DOT__cordicg__DOT__ysum0 
                                                - this->ammod__DOT__cordicg__DOT__ysum1));
    this->ammod__DOT__cordicg__DOT__xout = this->ammod__DOT__cordicg__DOT__xout_r;
    this->ammod__DOT__cordicg__DOT__xsum2_d = this->ammod__DOT__cordicg__DOT__xsum2;
    this->ammod__DOT__cordicg__DOT__xsum3 = (0x1ffffU 
                                             & (this->ammod__DOT__cordicg__DOT__xsum0 
                                                - this->ammod__DOT__cordicg__DOT__xsum1));
    this->ammod__DOT__multiy[3U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multix[3U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multiy[2U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multix[2U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multiy[1U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multix[1U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multiy[0U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multix[0U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    this->envaddrdelay__DOT__din = this->envaddr_r;
    this->ammod__DOT__gatein = (1U & (IData)((this->busy_sr 
                                              >> 3U)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.cmdstb) {
        this->busy = 1U;
    } else {
        if (this->lastenv) {
            this->busy = 0U;
        }
    }
    this->freqdata_r[0U] = this->freqdata[0U];
    this->freqdata_r[1U] = this->freqdata[1U];
    this->freqdata_r[2U] = this->freqdata[2U];
    this->freqdata_r[3U] = this->freqdata[3U];
    this->ammod__DOT__freqcossinp32x16[0U] = this->freqdata_r2[0U];
    this->ammod__DOT__freqcossinp32x16[1U] = this->freqdata_r2[1U];
    this->ammod__DOT__freqcossinp32x16[2U] = this->freqdata_r2[2U];
    this->ammod__DOT__freqcossinp32x16[3U] = this->freqdata_r2[3U];
    this->ammod__DOT__freq32 = this->freqdata_r2[0U];
    this->ammod__DOT__cordicg__DOT__zg = this->ammod__DOT__cordicg__DOT__z
        [0xfU];
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__din 
        = this->ammod__DOT__cordicg__DOT__gin;
    this->ammod__DOT__multidelay__DOT__din = this->ammod__DOT__gcordic;
    this->ammod__DOT__cordicg__DOT__yout1 = this->ammod__DOT__cordicg__DOT__yout;
    this->ammod__DOT__cordicg__DOT__xout1 = this->ammod__DOT__cordicg__DOT__xout;
    this->ammod__DOT__phtime__DOT__gatein = this->ammod__DOT__gatein;
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
    this->ammod__DOT__phtime__DOT__phasetime_r0 = (0x7ffffffU 
                                                   & (IData)(this->ammod__DOT__phtime__DOT__phasetime_w));
    this->freqaddr_r = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.freqaddr;
    this->ammod__DOT__cordicg__DOT__ysum2 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 0xcU) 
                                                - VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 0xeU)));
    this->ammod__DOT__cordicg__DOT__ysum0 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 1U) 
                                                + VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 3U)));
    this->ammod__DOT__cordicg__DOT__ysum1 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 6U) 
                                                + VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 9U)));
    this->ammod__DOT__cordicg__DOT__xsum2 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 0xcU) 
                                                - VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 0xeU)));
    this->ammod__DOT__cordicg__DOT__xsum0 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 1U) 
                                                + VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 3U)));
    this->ammod__DOT__cordicg__DOT__xsum1 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 6U) 
                                                + VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 9U)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2;
    this->ammod__DOT__phtime__DOT__freq = this->ammod__DOT__freq;
    this->ammod__DOT__phtime__DOT__phasetime_w = (0x3fffffffffffffULL 
                                                  & ((QData)((IData)(this->ammod__DOT__phtime__DOT__freq_r)) 
                                                     * (QData)((IData)(this->ammod__DOT__phtime__DOT__tcnt_r))));
    this->ammod__DOT__cordicg__DOT__yg = this->ammod__DOT__cordicg__DOT__y
        [0xfU];
    this->ammod__DOT__cordicg__DOT__xg = this->ammod__DOT__cordicg__DOT__x
        [0xfU];
    this->freqaddr = this->freqaddr_r;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi 
        = this->ammod__DOT__envx[3U];
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi 
        = this->ammod__DOT__envy[3U];
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi 
        = this->ammod__DOT__envx[2U];
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi 
        = this->ammod__DOT__envy[2U];
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi 
        = this->ammod__DOT__envx[1U];
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi 
        = this->ammod__DOT__envy[1U];
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi 
        = this->ammod__DOT__envx[0U];
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi 
        = this->ammod__DOT__envy[0U];
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi 
        = this->ammod__DOT__cosp[3U];
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi 
        = this->ammod__DOT__sinp[3U];
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi 
        = this->ammod__DOT__cosp[2U];
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi 
        = this->ammod__DOT__sinp[2U];
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi 
        = this->ammod__DOT__cosp[1U];
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi 
        = this->ammod__DOT__sinp[1U];
    this->ammod__DOT__sin = this->ammod__DOT__sin_w;
    this->ammod__DOT__cos = this->ammod__DOT__cos_w;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi 
        = this->ammod__DOT__cosp[0U];
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi 
        = this->ammod__DOT__sinp[0U];
    this->ammod__DOT__envx[0U] = (0xffffU & ((this->envdata_r3[1U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[0U] 
                                                >> 0x10U)));
    this->ammod__DOT__envx[1U] = (0xffffU & ((this->envdata_r3[2U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[1U] 
                                                >> 0x10U)));
    this->ammod__DOT__envx[2U] = (0xffffU & ((this->envdata_r3[3U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[2U] 
                                                >> 0x10U)));
    this->ammod__DOT__envx[3U] = (0xffffU & (this->envdata_r3[3U] 
                                             >> 0x10U));
    this->ammod__DOT__envy[0U] = (0xffffU & this->envdata_r3[0U]);
    this->ammod__DOT__envy[1U] = (0xffffU & this->envdata_r3[1U]);
    this->ammod__DOT__envy[2U] = (0xffffU & this->envdata_r3[2U]);
    this->ammod__DOT__envy[3U] = (0xffffU & this->envdata_r3[3U]);
    this->ammod__DOT__sin_w = this->ammod__DOT__cordicg__DOT__yout;
    this->ammod__DOT__cos_w = this->ammod__DOT__cordicg__DOT__xout;
    this->ammod__DOT__cosp[1U] = (0xffffU & ((this->ammod__DOT__freqcossinp32x16_d[2U] 
                                              << 0x10U) 
                                             | (this->ammod__DOT__freqcossinp32x16_d[1U] 
                                                >> 0x10U)));
    this->ammod__DOT__cosp[2U] = (0xffffU & ((this->ammod__DOT__freqcossinp32x16_d[3U] 
                                              << 0x10U) 
                                             | (this->ammod__DOT__freqcossinp32x16_d[2U] 
                                                >> 0x10U)));
    this->ammod__DOT__cosp[3U] = (0xffffU & (this->ammod__DOT__freqcossinp32x16_d[3U] 
                                             >> 0x10U));
    this->ammod__DOT__sinp[1U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[1U]);
    this->ammod__DOT__sinp[2U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[2U]);
    this->ammod__DOT__sinp[3U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[3U]);
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
}

VL_INLINE_OPT void Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__13(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__13\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.valid 
        = this->ammod__DOT__gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.prepbusy 
        = (0U != this->busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multiy 
        = this->ammod__DOT__multiy16x16;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multix 
        = this->ammod__DOT__multix16x16;
    this->ammod__DOT__tcnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.tcnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.valid;
    this->ammod__DOT__phtime__DOT__tcnt = this->ammod__DOT__tcnt;
}

VL_INLINE_OPT void Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__17(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__17\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->ammod__DOT__pini = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.pini;
    this->ammod__DOT__ampx = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.ampx;
    this->ammod__DOT__pinidelay__DOT__din = this->ammod__DOT__pini;
    this->ammod__DOT__ampxdelay__DOT__din = this->ammod__DOT__ampx;
}

VL_INLINE_OPT void Vtop_elementconn__pi3::_multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__20(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__20\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->lastenv = ((IData)(this->envaddr_cnt) == 
                     (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.envstart) 
                       + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.envlength)) 
                      - (IData)(1U)));
}

VL_INLINE_OPT void Vtop_elementconn__pi3::_combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__7\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->envaddrdelay__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk;
    this->ammod__DOT__clk = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk;
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
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__clk 
        = this->ammod__DOT__cordicg__DOT__clk;
}

VL_INLINE_OPT void Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_elementconn__pi3::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__10\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp42[4];
    WData/*127:0*/ __Vtemp46[4];
    WData/*383:0*/ __Vtemp49[12];
    WData/*3199:0*/ __Vtemp53[100];
    IData/*31:0*/ __Vilp;
    // Body
    this->__Vdly__envaddr_cnt = this->envaddr_cnt;
    this->envaddr_r3 = this->envaddr_r2;
    this->ammod__DOT__cordicg__DOT__genblk3__DOT__yin_d = 0U;
    this->ammod__DOT__phtime__DOT__freq_r = this->ammod__DOT__freq;
    this->ammod__DOT__phtime__DOT__tcnt_r = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.tcnt;
    this->ammod__DOT__cordicg__DOT__genblk3__DOT__xin_d 
        = this->ammod__DOT__ampx_d2;
    this->ammod__DOT__cordicg__DOT__phaseout_r = this->ammod__DOT__cordicg__DOT__zg1;
    this->ammod__DOT__cordicg__DOT__genblk3__DOT__phasein_d 
        = this->ammod__DOT__phaseinit;
    this->ammod__DOT__multidelay__DOT__usual__DOT__shifter 
        = ((0x1ffeU & ((IData)(this->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                       << 1U)) | (IData)(this->ammod__DOT__gcordic));
    this->ammod__DOT__phtime__DOT__phasetime_r3 = this->ammod__DOT__phtime__DOT__phasetime_r2;
    this->ammod__DOT__gateout_r = this->ammod__DOT__gmulti;
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v0 
        = (0x1ffffU & ((IData)(this->ammod__DOT__cordicg__DOT__shiftpi)
                        ? (- VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__cordicg__DOT__yin_1)))
                        : VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__cordicg__DOT__yin_1))));
    this->ammod__DOT__phtime__DOT__gatesr = ((0xfeU 
                                              & ((IData)(this->ammod__DOT__phtime__DOT__gatesr) 
                                                 << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (this->busy_sr 
                                                           >> 3U))));
    __Vtemp42[1U] = ((0x1ffffU & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
                                  >> 0xfU)) | (0xfffe0000U 
                                               & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
                                                  << 0x11U)));
    __Vtemp42[2U] = ((0x1ffffU & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
                                  >> 0xfU)) | (0xfffe0000U 
                                               & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
                                                  << 0x11U)));
    __Vtemp42[3U] = ((0x1ffffU & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
                                  >> 0xfU)) | (0x7e0000U 
                                               & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
                                                  << 0x11U)));
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
        = ((0xfffe0000U & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[0U] 
                           << 0x11U)) | vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.pini);
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp42[1U];
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp42[2U];
    this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp42[3U];
    __Vtemp46[1U] = ((0xffffU & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
                                 >> 0x10U)) | (0xffff0000U 
                                               & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
                                                  << 0x10U)));
    __Vtemp46[2U] = ((0xffffU & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
                                 >> 0x10U)) | (0xffff0000U 
                                               & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
                                                  << 0x10U)));
    __Vtemp46[3U] = (0xffffU & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
                                >> 0x10U));
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
        = ((0xffff0000U & (this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[0U] 
                           << 0x10U)) | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.ampx));
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp46[1U];
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp46[2U];
    this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp46[3U];
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xfU], 0xfU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xfU], 0xfU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xfU], 0xfU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xfU], 0xfU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xeU], 0xeU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xeU], 0xeU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xeU], 0xeU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xeU], 0xeU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xdU], 0xdU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xdU], 0xdU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xdU], 0xdU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xdU], 0xdU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xcU], 0xcU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xcU], 0xcU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xcU], 0xcU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xcU], 0xcU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xbU], 0xbU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xbU], 0xbU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xbU], 0xbU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xbU], 0xbU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xaU], 0xaU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__y
                                               [0xaU], 0xaU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xaU], 0xaU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                               this->ammod__DOT__cordicg__DOT__x
                                               [0xaU], 0xaU)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [9U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [9U], 9U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [9U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [9U], 9U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [9U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [9U], 9U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [9U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [9U], 9U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [8U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [8U], 8U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [8U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [8U], 8U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [8U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [8U], 8U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [8U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [8U], 8U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [7U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [7U], 7U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [7U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [7U], 7U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [7U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [7U], 7U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [7U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [7U], 7U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [6U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [6U], 6U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [6U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [6U], 6U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [6U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [6U], 6U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [6U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [6U], 6U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [5U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [5U], 5U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [5U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [5U], 5U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [5U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [5U], 5U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [5U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [5U], 5U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [4U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [4U], 4U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [4U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [4U], 4U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [4U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [4U], 4U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [4U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [4U], 4U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [3U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [3U], 3U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [3U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [3U], 3U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [3U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [3U], 3U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [3U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [3U], 3U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [2U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [2U], 2U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [2U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [2U], 2U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [2U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [2U], 2U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [2U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [2U], 2U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [1U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [1U], 1U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [1U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__y
                                             [1U], 1U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [1U] - VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [1U], 1U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [1U] + VL_SHIFTRS_III(17,17,32, 
                                             this->ammod__DOT__cordicg__DOT__x
                                             [1U], 1U)));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0U] + this->ammod__DOT__cordicg__DOT__y
                       [0U]));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__xminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                       [0U] - this->ammod__DOT__cordicg__DOT__y
                       [0U]));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0U] - this->ammod__DOT__cordicg__DOT__x
                       [0U]));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__yminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                       [0U] + this->ammod__DOT__cordicg__DOT__x
                       [0U]));
    this->envdata_r3[0U] = this->envdata_r2[0U];
    this->envdata_r3[1U] = this->envdata_r2[1U];
    this->envdata_r3[2U] = this->envdata_r2[2U];
    this->envdata_r3[3U] = this->envdata_r2[3U];
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
        = ((0xffffeU & (this->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                        << 1U)) | (IData)(this->ammod__DOT__gphaseinit));
    this->freqaddr_r4 = this->freqaddr_r3;
    this->ammod__DOT__cordicg__DOT__errorr = (1U & 
                                              (((IData)(this->ammod__DOT__cordicg__DOT__genblk6__DOT__xdummy) 
                                                ^ ((IData)(this->ammod__DOT__cordicg__DOT__xout_r) 
                                                   >> 0xfU)) 
                                               | ((IData)(this->ammod__DOT__cordicg__DOT__genblk6__DOT__ydummy) 
                                                  ^ 
                                                  ((IData)(this->ammod__DOT__cordicg__DOT__yout) 
                                                   >> 0xfU))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xfU] - this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xfU] + this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xeU] - this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xeU] + this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xdU] - this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xdU] + this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xcU] - this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xcU] + this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xbU] - this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xbU] + this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xaU] - this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0xaU] + this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [9U] - this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [9U] + this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [8U] - this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [8U] + this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [7U] - this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [7U] + this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [6U] - this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [6U] + this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [5U] - this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [5U] + this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [4U] - this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [4U] + this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [3U] - this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [3U] + this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [2U] - this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [2U] + this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [1U] - this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [1U] + this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zminus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0U] - this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__zplus 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__z
                       [0U] + this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
                             + this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
                             + this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1));
    __Vtemp49[1U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[0U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[1U] 
                                                 << 0xcU)));
    __Vtemp49[2U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[1U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[2U] 
                                                 << 0xcU)));
    __Vtemp49[3U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[2U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[3U] 
                                                 << 0xcU)));
    __Vtemp49[4U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[3U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[4U] 
                                                 << 0xcU)));
    __Vtemp49[5U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[4U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[5U] 
                                                 << 0xcU)));
    __Vtemp49[6U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[5U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[6U] 
                                                 << 0xcU)));
    __Vtemp49[7U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[6U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[7U] 
                                                 << 0xcU)));
    __Vtemp49[8U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[7U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[8U] 
                                                 << 0xcU)));
    __Vtemp49[9U] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[8U] 
                                >> 0x14U)) | (0xfffff000U 
                                              & (this->envaddrdelay__DOT__usual__DOT__shifter[9U] 
                                                 << 0xcU)));
    __Vtemp49[0xaU] = ((0xfffU & (this->envaddrdelay__DOT__usual__DOT__shifter[9U] 
                                  >> 0x14U)) | (0xfffff000U 
                                                & (this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                                   << 0xcU)));
    __Vtemp49[0xbU] = (0xffU & (this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                >> 0x14U));
    this->envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = ((0xfffff000U & (this->envaddrdelay__DOT__usual__DOT__shifter[0U] 
                           << 0xcU)) | (IData)(this->envaddr_r));
    this->envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp49[1U];
    this->envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp49[2U];
    this->envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp49[3U];
    this->envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp49[4U];
    this->envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp49[5U];
    this->envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp49[6U];
    this->envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp49[7U];
    this->envaddrdelay__DOT__usual__DOT__shifter[8U] 
        = __Vtemp49[8U];
    this->envaddrdelay__DOT__usual__DOT__shifter[9U] 
        = __Vtemp49[9U];
    this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
        = __Vtemp49[0xaU];
    this->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
        = __Vtemp49[0xbU];
    __Vtemp53[4U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0U];
    __Vtemp53[5U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[1U];
    __Vtemp53[6U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[2U];
    __Vtemp53[7U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[3U];
    __Vtemp53[8U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[4U];
    __Vtemp53[9U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[5U];
    __Vtemp53[0xaU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[6U];
    __Vtemp53[0xbU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[7U];
    __Vtemp53[0xcU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[8U];
    __Vtemp53[0xdU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[9U];
    __Vtemp53[0xeU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xaU];
    __Vtemp53[0xfU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xbU];
    __Vtemp53[0x10U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xcU];
    __Vtemp53[0x11U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xdU];
    __Vtemp53[0x12U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xeU];
    __Vtemp53[0x13U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0xfU];
    __Vtemp53[0x14U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x10U];
    __Vtemp53[0x15U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x11U];
    __Vtemp53[0x16U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x12U];
    __Vtemp53[0x17U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x13U];
    __Vtemp53[0x18U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x14U];
    __Vtemp53[0x19U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x15U];
    __Vtemp53[0x1aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x16U];
    __Vtemp53[0x1bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x17U];
    __Vtemp53[0x1cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x18U];
    __Vtemp53[0x1dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x19U];
    __Vtemp53[0x1eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1aU];
    __Vtemp53[0x1fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1bU];
    __Vtemp53[0x20U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1cU];
    __Vtemp53[0x21U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1dU];
    __Vtemp53[0x22U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1eU];
    __Vtemp53[0x23U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x1fU];
    __Vtemp53[0x24U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x20U];
    __Vtemp53[0x25U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x21U];
    __Vtemp53[0x26U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x22U];
    __Vtemp53[0x27U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x23U];
    __Vtemp53[0x28U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x24U];
    __Vtemp53[0x29U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x25U];
    __Vtemp53[0x2aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x26U];
    __Vtemp53[0x2bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x27U];
    __Vtemp53[0x2cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x28U];
    __Vtemp53[0x2dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x29U];
    __Vtemp53[0x2eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2aU];
    __Vtemp53[0x2fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2bU];
    __Vtemp53[0x30U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2cU];
    __Vtemp53[0x31U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2dU];
    __Vtemp53[0x32U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2eU];
    __Vtemp53[0x33U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x2fU];
    __Vtemp53[0x34U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x30U];
    __Vtemp53[0x35U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x31U];
    __Vtemp53[0x36U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x32U];
    __Vtemp53[0x37U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x33U];
    __Vtemp53[0x38U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x34U];
    __Vtemp53[0x39U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x35U];
    __Vtemp53[0x3aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x36U];
    __Vtemp53[0x3bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x37U];
    __Vtemp53[0x3cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x38U];
    __Vtemp53[0x3dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x39U];
    __Vtemp53[0x3eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3aU];
    __Vtemp53[0x3fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3bU];
    __Vtemp53[0x40U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3cU];
    __Vtemp53[0x41U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3dU];
    __Vtemp53[0x42U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3eU];
    __Vtemp53[0x43U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x3fU];
    __Vtemp53[0x44U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x40U];
    __Vtemp53[0x45U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x41U];
    __Vtemp53[0x46U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x42U];
    __Vtemp53[0x47U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x43U];
    __Vtemp53[0x48U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x44U];
    __Vtemp53[0x49U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x45U];
    __Vtemp53[0x4aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x46U];
    __Vtemp53[0x4bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x47U];
    __Vtemp53[0x4cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x48U];
    __Vtemp53[0x4dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x49U];
    __Vtemp53[0x4eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4aU];
    __Vtemp53[0x4fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4bU];
    __Vtemp53[0x50U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4cU];
    __Vtemp53[0x51U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4dU];
    __Vtemp53[0x52U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4eU];
    __Vtemp53[0x53U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x4fU];
    __Vtemp53[0x54U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x50U];
    __Vtemp53[0x55U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x51U];
    __Vtemp53[0x56U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x52U];
    __Vtemp53[0x57U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x53U];
    __Vtemp53[0x58U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x54U];
    __Vtemp53[0x59U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x55U];
    __Vtemp53[0x5aU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x56U];
    __Vtemp53[0x5bU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x57U];
    __Vtemp53[0x5cU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x58U];
    __Vtemp53[0x5dU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x59U];
    __Vtemp53[0x5eU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5aU];
    __Vtemp53[0x5fU] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5bU];
    __Vtemp53[0x60U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5cU];
    __Vtemp53[0x61U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5dU];
    __Vtemp53[0x62U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5eU];
    __Vtemp53[0x63U] = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x5fU];
    this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0U] 
        = this->freqdata_r2[0U];
    this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[1U] 
        = this->freqdata_r2[1U];
    this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[2U] 
        = this->freqdata_r2[2U];
    this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[3U] 
        = this->freqdata_r2[3U];
    __Vilp = 4U;
    while ((__Vilp <= 0x63U)) {
        this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[__Vilp] 
            = __Vtemp53[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    this->ammod__DOT__multiy16x16_r = ((0xffffffffffff0000ULL 
                                        & this->ammod__DOT__multiy16x16_r) 
                                       | (IData)((IData)(
                                                         this->ammod__DOT__multiy
                                                         [0U])));
    this->ammod__DOT__multiy16x16_r = ((0xffffffff0000ffffULL 
                                        & this->ammod__DOT__multiy16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multiy
                                                          [1U])) 
                                          << 0x10U));
    this->ammod__DOT__multiy16x16_r = ((0xffff0000ffffffffULL 
                                        & this->ammod__DOT__multiy16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multiy
                                                          [2U])) 
                                          << 0x20U));
    this->ammod__DOT__multiy16x16_r = ((0xffffffffffffULL 
                                        & this->ammod__DOT__multiy16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multiy
                                                          [3U])) 
                                          << 0x30U));
    this->ammod__DOT__multix16x16_r = ((0xffffffffffff0000ULL 
                                        & this->ammod__DOT__multix16x16_r) 
                                       | (IData)((IData)(
                                                         this->ammod__DOT__multix
                                                         [0U])));
    this->ammod__DOT__multix16x16_r = ((0xffffffff0000ffffULL 
                                        & this->ammod__DOT__multix16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multix
                                                          [1U])) 
                                          << 0x10U));
    this->ammod__DOT__multix16x16_r = ((0xffff0000ffffffffULL 
                                        & this->ammod__DOT__multix16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multix
                                                          [2U])) 
                                          << 0x20U));
    this->ammod__DOT__multix16x16_r = ((0xffffffffffffULL 
                                        & this->ammod__DOT__multix16x16_r) 
                                       | ((QData)((IData)(
                                                          this->ammod__DOT__multix
                                                          [3U])) 
                                          << 0x30U));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0 
        = this->ammod__DOT__cordicg__DOT__plusall[0U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1 
        = this->ammod__DOT__cordicg__DOT__plusall[1U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2 
        = this->ammod__DOT__cordicg__DOT__plusall[2U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3 
        = this->ammod__DOT__cordicg__DOT__plusall[3U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4 
        = this->ammod__DOT__cordicg__DOT__plusall[4U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5 
        = this->ammod__DOT__cordicg__DOT__plusall[5U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6 
        = this->ammod__DOT__cordicg__DOT__plusall[6U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7 
        = this->ammod__DOT__cordicg__DOT__plusall[7U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8 
        = this->ammod__DOT__cordicg__DOT__plusall[8U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9 
        = this->ammod__DOT__cordicg__DOT__plusall[9U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10 
        = this->ammod__DOT__cordicg__DOT__plusall[0xaU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11 
        = this->ammod__DOT__cordicg__DOT__plusall[0xbU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12 
        = this->ammod__DOT__cordicg__DOT__plusall[0xcU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13 
        = this->ammod__DOT__cordicg__DOT__plusall[0xdU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14 
        = this->ammod__DOT__cordicg__DOT__plusall[0xeU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15 
        = this->ammod__DOT__cordicg__DOT__plusall[0xfU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0 
        = this->ammod__DOT__cordicg__DOT__plusall[0U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1 
        = this->ammod__DOT__cordicg__DOT__plusall[1U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2 
        = this->ammod__DOT__cordicg__DOT__plusall[2U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3 
        = this->ammod__DOT__cordicg__DOT__plusall[3U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4 
        = this->ammod__DOT__cordicg__DOT__plusall[4U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5 
        = this->ammod__DOT__cordicg__DOT__plusall[5U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6 
        = this->ammod__DOT__cordicg__DOT__plusall[6U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7 
        = this->ammod__DOT__cordicg__DOT__plusall[7U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8 
        = this->ammod__DOT__cordicg__DOT__plusall[8U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9 
        = this->ammod__DOT__cordicg__DOT__plusall[9U];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10 
        = this->ammod__DOT__cordicg__DOT__plusall[0xaU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11 
        = this->ammod__DOT__cordicg__DOT__plusall[0xbU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12 
        = this->ammod__DOT__cordicg__DOT__plusall[0xcU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13 
        = this->ammod__DOT__cordicg__DOT__plusall[0xdU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14 
        = this->ammod__DOT__cordicg__DOT__plusall[0xeU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15 
        = this->ammod__DOT__cordicg__DOT__plusall[0xfU];
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v0 
        = (0x1ffffU & ((IData)(this->ammod__DOT__cordicg__DOT__shiftpi)
                        ? (- VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__cordicg__DOT__xin_1)))
                        : VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__cordicg__DOT__xin_1))));
    if (this->ammod__DOT__cordicg__DOT__plusall[0U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v1 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0U] + this->ammod__DOT__cordicg__DOT__y
                           [0U]));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v1 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0U] - this->ammod__DOT__cordicg__DOT__x
                           [0U]));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v1 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0U] - this->ammod__DOT__cordicg__DOT__y
                           [0U]));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v1 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0U] + this->ammod__DOT__cordicg__DOT__x
                           [0U]));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[1U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v2 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [1U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [1U], 1U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v2 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [1U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [1U], 1U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v2 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [1U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [1U], 1U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v2 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [1U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [1U], 1U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[2U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v3 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [2U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [2U], 2U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v3 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [2U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [2U], 2U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v3 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [2U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [2U], 2U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v3 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [2U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [2U], 2U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[3U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v4 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [3U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [3U], 3U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v4 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [3U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [3U], 3U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v4 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [3U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [3U], 3U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v4 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [3U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [3U], 3U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[4U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v5 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [4U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [4U], 4U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v5 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [4U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [4U], 4U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v5 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [4U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [4U], 4U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v5 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [4U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [4U], 4U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[5U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v6 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [5U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [5U], 5U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v6 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [5U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [5U], 5U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v6 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [5U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [5U], 5U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v6 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [5U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [5U], 5U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[6U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v7 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [6U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [6U], 6U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v7 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [6U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [6U], 6U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v7 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [6U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [6U], 6U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v7 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [6U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [6U], 6U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[7U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v8 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [7U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [7U], 7U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v8 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [7U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [7U], 7U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v8 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [7U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [7U], 7U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v8 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [7U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [7U], 7U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[8U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v9 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [8U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [8U], 8U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v9 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [8U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [8U], 8U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v9 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [8U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [8U], 8U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v9 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [8U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [8U], 8U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[9U]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v10 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [9U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [9U], 9U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v10 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [9U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [9U], 9U)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v10 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [9U] - VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__y
                                                 [9U], 9U)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v10 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [9U] + VL_SHIFTRS_III(17,17,32, 
                                                 this->ammod__DOT__cordicg__DOT__x
                                                 [9U], 9U)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xaU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v11 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xaU], 0xaU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v11 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xaU], 0xaU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v11 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xaU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xaU], 0xaU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v11 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xaU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xaU], 0xaU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xbU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v12 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xbU], 0xbU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v12 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xbU], 0xbU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v12 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xbU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xbU], 0xbU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v12 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xbU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xbU], 0xbU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xcU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v13 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xcU], 0xcU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v13 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xcU], 0xcU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v13 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xcU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xcU], 0xcU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v13 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xcU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xcU], 0xcU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xdU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v14 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xdU], 0xdU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v14 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xdU], 0xdU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v14 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xdU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xdU], 0xdU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v14 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xdU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xdU], 0xdU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xeU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v15 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xeU], 0xeU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v15 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xeU], 0xeU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v15 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xeU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xeU], 0xeU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v15 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xeU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xeU], 0xeU)));
    }
    if (this->ammod__DOT__cordicg__DOT__plusall[0xfU]) {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v16 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xfU], 0xfU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v16 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xfU], 0xfU)));
    } else {
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v16 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__x
                           [0xfU] - VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__y
                                                   [0xfU], 0xfU)));
        this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v16 
            = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__y
                           [0xfU] + VL_SHIFTRS_III(17,17,32, 
                                                   this->ammod__DOT__cordicg__DOT__x
                                                   [0xfU], 0xfU)));
    }
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v0 
        = ((IData)(this->ammod__DOT__cordicg__DOT__shiftpi)
            ? ((0x10000U & ((~ (this->ammod__DOT__cordicg__DOT__phasein_1 
                                >> 0x10U)) << 0x10U)) 
               | (0xffffU & this->ammod__DOT__cordicg__DOT__phasein_1))
            : this->ammod__DOT__cordicg__DOT__phasein_1);
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v1 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0U] ? (this->ammod__DOT__cordicg__DOT__z
                               [0U] + this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0U] - this->ammod__DOT__cordicg__DOT__stage__BRA__0__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v2 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [1U] ? (this->ammod__DOT__cordicg__DOT__z
                               [1U] + this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [1U] - this->ammod__DOT__cordicg__DOT__stage__BRA__1__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v3 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [2U] ? (this->ammod__DOT__cordicg__DOT__z
                               [2U] + this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [2U] - this->ammod__DOT__cordicg__DOT__stage__BRA__2__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v4 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [3U] ? (this->ammod__DOT__cordicg__DOT__z
                               [3U] + this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [3U] - this->ammod__DOT__cordicg__DOT__stage__BRA__3__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v5 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [4U] ? (this->ammod__DOT__cordicg__DOT__z
                               [4U] + this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [4U] - this->ammod__DOT__cordicg__DOT__stage__BRA__4__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v6 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [5U] ? (this->ammod__DOT__cordicg__DOT__z
                               [5U] + this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [5U] - this->ammod__DOT__cordicg__DOT__stage__BRA__5__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v7 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [6U] ? (this->ammod__DOT__cordicg__DOT__z
                               [6U] + this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [6U] - this->ammod__DOT__cordicg__DOT__stage__BRA__6__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v8 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [7U] ? (this->ammod__DOT__cordicg__DOT__z
                               [7U] + this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [7U] - this->ammod__DOT__cordicg__DOT__stage__BRA__7__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v9 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [8U] ? (this->ammod__DOT__cordicg__DOT__z
                               [8U] + this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [8U] - this->ammod__DOT__cordicg__DOT__stage__BRA__8__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v10 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [9U] ? (this->ammod__DOT__cordicg__DOT__z
                               [9U] + this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [9U] - this->ammod__DOT__cordicg__DOT__stage__BRA__9__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v11 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xaU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xaU] + this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xaU] - this->ammod__DOT__cordicg__DOT__stage__BRA__10__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v12 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xbU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xbU] + this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xbU] - this->ammod__DOT__cordicg__DOT__stage__BRA__11__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v13 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xcU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xcU] + this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xcU] - this->ammod__DOT__cordicg__DOT__stage__BRA__12__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v14 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xdU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xdU] + this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xdU] - this->ammod__DOT__cordicg__DOT__stage__BRA__13__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v15 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xeU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xeU] + this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xeU] - this->ammod__DOT__cordicg__DOT__stage__BRA__14__KET____DOT__ain)));
    this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v16 
        = (0x1ffffU & (this->ammod__DOT__cordicg__DOT__plusall
                       [0xfU] ? (this->ammod__DOT__cordicg__DOT__z
                                 [0xfU] + this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain)
                        : (this->ammod__DOT__cordicg__DOT__z
                           [0xfU] - this->ammod__DOT__cordicg__DOT__stage__BRA__15__KET____DOT__ain)));
    this->ammod__DOT__cordicg__DOT__pluscheck0[1U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v0;
    this->ammod__DOT__cordicg__DOT__pluscheck0[2U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v1;
    this->ammod__DOT__cordicg__DOT__pluscheck0[3U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v2;
    this->ammod__DOT__cordicg__DOT__pluscheck0[4U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v3;
    this->ammod__DOT__cordicg__DOT__pluscheck0[5U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v4;
    this->ammod__DOT__cordicg__DOT__pluscheck0[6U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v5;
    this->ammod__DOT__cordicg__DOT__pluscheck0[7U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v6;
    this->ammod__DOT__cordicg__DOT__pluscheck0[8U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v7;
    this->ammod__DOT__cordicg__DOT__pluscheck0[9U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v8;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xaU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v9;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xbU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v10;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xcU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v11;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xdU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v12;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xeU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v13;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0xfU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v14;
    this->ammod__DOT__cordicg__DOT__pluscheck0[0x10U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck0__v15;
    this->ammod__DOT__cordicg__DOT__pluscheck[1U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v0;
    this->ammod__DOT__cordicg__DOT__pluscheck[2U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v1;
    this->ammod__DOT__cordicg__DOT__pluscheck[3U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v2;
    this->ammod__DOT__cordicg__DOT__pluscheck[4U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v3;
    this->ammod__DOT__cordicg__DOT__pluscheck[5U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v4;
    this->ammod__DOT__cordicg__DOT__pluscheck[6U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v5;
    this->ammod__DOT__cordicg__DOT__pluscheck[7U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v6;
    this->ammod__DOT__cordicg__DOT__pluscheck[8U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v7;
    this->ammod__DOT__cordicg__DOT__pluscheck[9U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v8;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xaU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v9;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xbU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v10;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xcU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v11;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xdU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v12;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xeU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v13;
    this->ammod__DOT__cordicg__DOT__pluscheck[0xfU] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v14;
    this->ammod__DOT__cordicg__DOT__pluscheck[0x10U] 
        = this->__Vdlyvval__ammod__DOT__cordicg__DOT__pluscheck__v15;
    this->ammod__DOT__cordicg__DOT__x[0U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v0;
    this->ammod__DOT__cordicg__DOT__x[1U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v1;
    this->ammod__DOT__cordicg__DOT__x[2U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v2;
    this->ammod__DOT__cordicg__DOT__x[3U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v3;
    this->ammod__DOT__cordicg__DOT__x[4U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v4;
    this->ammod__DOT__cordicg__DOT__x[5U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v5;
    this->ammod__DOT__cordicg__DOT__x[6U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v6;
    this->ammod__DOT__cordicg__DOT__x[7U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v7;
    this->ammod__DOT__cordicg__DOT__x[8U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v8;
    this->ammod__DOT__cordicg__DOT__x[9U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v9;
    this->ammod__DOT__cordicg__DOT__x[0xaU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v10;
    this->ammod__DOT__cordicg__DOT__x[0xbU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v11;
    this->ammod__DOT__cordicg__DOT__x[0xcU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v12;
    this->ammod__DOT__cordicg__DOT__x[0xdU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v13;
    this->ammod__DOT__cordicg__DOT__x[0xeU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v14;
    this->ammod__DOT__cordicg__DOT__x[0xfU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v15;
    this->ammod__DOT__cordicg__DOT__x[0x10U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__x__v16;
    this->ammod__DOT__cordicg__DOT__y[0U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v0;
    this->ammod__DOT__cordicg__DOT__y[1U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v1;
    this->ammod__DOT__cordicg__DOT__y[2U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v2;
    this->ammod__DOT__cordicg__DOT__y[3U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v3;
    this->ammod__DOT__cordicg__DOT__y[4U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v4;
    this->ammod__DOT__cordicg__DOT__y[5U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v5;
    this->ammod__DOT__cordicg__DOT__y[6U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v6;
    this->ammod__DOT__cordicg__DOT__y[7U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v7;
    this->ammod__DOT__cordicg__DOT__y[8U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v8;
    this->ammod__DOT__cordicg__DOT__y[9U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v9;
    this->ammod__DOT__cordicg__DOT__y[0xaU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v10;
    this->ammod__DOT__cordicg__DOT__y[0xbU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v11;
    this->ammod__DOT__cordicg__DOT__y[0xcU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v12;
    this->ammod__DOT__cordicg__DOT__y[0xdU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v13;
    this->ammod__DOT__cordicg__DOT__y[0xeU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v14;
    this->ammod__DOT__cordicg__DOT__y[0xfU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v15;
    this->ammod__DOT__cordicg__DOT__y[0x10U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__y__v16;
    this->ammod__DOT__cordicg__DOT__z[0U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v0;
    this->ammod__DOT__cordicg__DOT__z[1U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v1;
    this->ammod__DOT__cordicg__DOT__z[2U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v2;
    this->ammod__DOT__cordicg__DOT__z[3U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v3;
    this->ammod__DOT__cordicg__DOT__z[4U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v4;
    this->ammod__DOT__cordicg__DOT__z[5U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v5;
    this->ammod__DOT__cordicg__DOT__z[6U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v6;
    this->ammod__DOT__cordicg__DOT__z[7U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v7;
    this->ammod__DOT__cordicg__DOT__z[8U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v8;
    this->ammod__DOT__cordicg__DOT__z[9U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v9;
    this->ammod__DOT__cordicg__DOT__z[0xaU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v10;
    this->ammod__DOT__cordicg__DOT__z[0xbU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v11;
    this->ammod__DOT__cordicg__DOT__z[0xcU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v12;
    this->ammod__DOT__cordicg__DOT__z[0xdU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v13;
    this->ammod__DOT__cordicg__DOT__z[0xeU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v14;
    this->ammod__DOT__cordicg__DOT__z[0xfU] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v15;
    this->ammod__DOT__cordicg__DOT__z[0x10U] = this->__Vdlyvval__ammod__DOT__cordicg__DOT__z__v16;
    this->ammod__DOT__cordicg__DOT__yin_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__yin_d;
    this->ammod__DOT__cordicg__DOT__xin_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__xin_d;
    this->ammod__DOT__ampx_d2 = ((IData)(this->ammod__DOT__gphtime)
                                  ? (0xffffU & (IData)(this->ammod__DOT__ampx_d))
                                  : 0U);
    this->ammod__DOT__cordicg__DOT__phaseout = this->ammod__DOT__cordicg__DOT__phaseout_r;
    this->ammod__DOT__cordicg__DOT__zg1 = this->ammod__DOT__cordicg__DOT__zg0;
    this->ammod__DOT__cordicg__DOT__phasein_1 = this->ammod__DOT__cordicg__DOT__genblk3__DOT__phasein_d;
    this->ammod__DOT__phaseinit = (0x1ffffU & ((this->ammod__DOT__phasetime 
                                                >> 0xaU) 
                                               + this->ammod__DOT__pini_d));
    this->ammod__DOT__multidelay__DOT__dout = (1U & 
                                               ((IData)(this->ammod__DOT__multidelay__DOT__usual__DOT__shifter) 
                                                >> 0xcU));
    this->ammod__DOT__phtime__DOT__phasetime = this->ammod__DOT__phtime__DOT__phasetime_r3;
    this->ammod__DOT__phtime__DOT__phasetime_r2 = this->ammod__DOT__phtime__DOT__phasetime_r1;
    this->ammod__DOT__gateout = this->ammod__DOT__gateout_r;
    this->ammod__DOT__phtime__DOT__gateout = (1U & 
                                              ((IData)(this->ammod__DOT__phtime__DOT__gatesr) 
                                               >> 4U));
    this->ammod__DOT__pinidelay__DOT__dout = (0x1ffffU 
                                              & (this->ammod__DOT__pinidelay__DOT__usual__DOT__shifter[3U] 
                                                 >> 6U));
    this->ammod__DOT__ampxdelay__DOT__dout = (0xffffU 
                                              & this->ammod__DOT__ampxdelay__DOT__usual__DOT__shifter[3U]);
    this->envdata_r2[0U] = this->envdata_r;
    this->envdata_r2[1U] = this->envdata_r;
    this->envdata_r2[2U] = this->envdata_r;
    this->envdata_r2[3U] = this->envdata_r;
    this->ammod__DOT__envxy32x16[0U] = this->envdata_r3[0U];
    this->ammod__DOT__envxy32x16[1U] = this->envdata_r3[1U];
    this->ammod__DOT__envxy32x16[2U] = this->envdata_r3[2U];
    this->ammod__DOT__envxy32x16[3U] = this->envdata_r3[3U];
    this->ammod__DOT__gphaseinit = this->ammod__DOT__gphtime;
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout 
        = (1U & (this->ammod__DOT__cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                 >> 0x13U));
    this->freqaddr_r3 = this->freqaddr_r2;
    this->ammod__DOT__cordicg__DOT__error = this->ammod__DOT__cordicg__DOT__errorr;
    this->ammod__DOT__cordicg__DOT__genblk6__DOT__ydummy 
        = (1U & ((this->ammod__DOT__cordicg__DOT__ysum3 
                  - this->ammod__DOT__cordicg__DOT__ysum2_d) 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__yout_r = (0xffffU 
                                              & (this->ammod__DOT__cordicg__DOT__ysum3 
                                                 - this->ammod__DOT__cordicg__DOT__ysum2_d));
    this->ammod__DOT__cordicg__DOT__genblk6__DOT__xdummy 
        = (1U & ((this->ammod__DOT__cordicg__DOT__xsum3 
                  - this->ammod__DOT__cordicg__DOT__xsum2_d) 
                 >> 0x10U));
    this->ammod__DOT__cordicg__DOT__xout_r = (0xffffU 
                                              & (this->ammod__DOT__cordicg__DOT__xsum3 
                                                 - this->ammod__DOT__cordicg__DOT__xsum2_d));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr4)))));
    this->envaddrdelay__DOT__dout = (0xfffU & ((this->envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                                                << 4U) 
                                               | (this->envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                                  >> 0x1cU)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.cmdstb) {
        this->__Vdly__envaddr_cnt = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.envstart;
    } else {
        if (this->busy) {
            this->__Vdly__envaddr_cnt = (0xfffU & ((IData)(this->envaddr_cnt) 
                                                   + 
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.envlength))));
        }
    }
    this->dummybusy = (1U & (IData)((this->busy_sr 
                                     >> 0x29U)));
    this->envaddr_r = this->envaddr_cnt;
    this->busy_sr = ((0x3fffffffffeULL & (this->busy_sr 
                                          << 1U)) | (QData)((IData)(this->busy)));
    this->freqdata_r2[0U] = this->freqdata_r[0U];
    this->freqdata_r2[1U] = this->freqdata_r[1U];
    this->freqdata_r2[2U] = this->freqdata_r[2U];
    this->freqdata_r2[3U] = this->freqdata_r[3U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[0U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x60U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[1U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x61U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[2U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x62U];
    this->ammod__DOT__freqcossinpdelay__DOT__dout[3U] 
        = this->ammod__DOT__freqcossinpdelay__DOT__usual__DOT__shifter[0x63U];
    this->ammod__DOT__multiy16x16 = this->ammod__DOT__multiy16x16_r;
    this->ammod__DOT__multix16x16 = this->ammod__DOT__multix16x16_r;
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
    this->ammod__DOT__cordicg__DOT__phaseout1 = this->ammod__DOT__cordicg__DOT__phaseout;
    this->ammod__DOT__cordicg__DOT__shiftpi = (1U & 
                                               ((this->ammod__DOT__cordicg__DOT__phasein_1 
                                                 >> 0x10U) 
                                                ^ (this->ammod__DOT__cordicg__DOT__phasein_1 
                                                   >> 0xfU)));
    this->ammod__DOT__gmulti = this->ammod__DOT__multidelay__DOT__dout;
    this->ammod__DOT__phasetime = this->ammod__DOT__phtime__DOT__phasetime;
    this->ammod__DOT__pini_d = this->ammod__DOT__pinidelay__DOT__dout;
    this->ammod__DOT__ampx_d = this->ammod__DOT__ampxdelay__DOT__dout;
    this->ammod__DOT__gphtime = this->ammod__DOT__phtime__DOT__gateout;
    this->ammod__DOT__cordicg__DOT__gout = this->ammod__DOT__cordicg__DOT__reg_delay__DOT__dout;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
    this->envaddr = this->envaddrdelay__DOT__dout;
    this->envaddr_cnt = this->__Vdly__envaddr_cnt;
    this->ammod__DOT__freqcossinp32x16_d[0U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[0U];
    this->ammod__DOT__freqcossinp32x16_d[1U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[1U];
    this->ammod__DOT__freqcossinp32x16_d[2U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[2U];
    this->ammod__DOT__freqcossinp32x16_d[3U] = this->ammod__DOT__freqcossinpdelay__DOT__dout[3U];
    this->ammod__DOT__cordicg__DOT__xin = this->ammod__DOT__ampx_d2;
    this->ammod__DOT__cordicg__DOT__zg0 = this->ammod__DOT__cordicg__DOT__zg;
    this->ammod__DOT__cordicg__DOT__phasein = this->ammod__DOT__phaseinit;
    this->ammod__DOT__phtime__DOT__phasetime_r1 = this->ammod__DOT__phtime__DOT__phasetime_r0;
    this->envdata_r = this->envdata;
    this->ammod__DOT__cordicg__DOT__gin = this->ammod__DOT__gphaseinit;
    this->ammod__DOT__gcordic = this->ammod__DOT__cordicg__DOT__gout;
    this->freqaddr_r2 = this->freqaddr_r;
    this->ammod__DOT__cordicg__DOT__yout = this->ammod__DOT__cordicg__DOT__yout_r;
    this->ammod__DOT__cordicg__DOT__ysum2_d = this->ammod__DOT__cordicg__DOT__ysum2;
    this->ammod__DOT__cordicg__DOT__ysum3 = (0x1ffffU 
                                             & (this->ammod__DOT__cordicg__DOT__ysum0 
                                                - this->ammod__DOT__cordicg__DOT__ysum1));
    this->ammod__DOT__cordicg__DOT__xout = this->ammod__DOT__cordicg__DOT__xout_r;
    this->ammod__DOT__cordicg__DOT__xsum2_d = this->ammod__DOT__cordicg__DOT__xsum2;
    this->ammod__DOT__cordicg__DOT__xsum3 = (0x1ffffU 
                                             & (this->ammod__DOT__cordicg__DOT__xsum0 
                                                - this->ammod__DOT__cordicg__DOT__xsum1));
    this->ammod__DOT__multiy[3U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multix[3U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__common 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multiy[2U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multix[2U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__common 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multiy[1U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multix[1U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__common 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multiy[0U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__multix[0U] = (0xffffU & (IData)(
                                                      (this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr 
                                                       >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__common 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__common 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__common 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__common 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi4 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi3;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__common 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__mult0;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr4 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr3;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    this->envaddrdelay__DOT__din = this->envaddr_r;
    this->ammod__DOT__gatein = (1U & (IData)((this->busy_sr 
                                              >> 3U)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.cmdstb) {
        this->busy = 1U;
    } else {
        if (this->lastenv) {
            this->busy = 0U;
        }
    }
    this->freqdata_r[0U] = this->freqdata[0U];
    this->freqdata_r[1U] = this->freqdata[1U];
    this->freqdata_r[2U] = this->freqdata[2U];
    this->freqdata_r[3U] = this->freqdata[3U];
    this->ammod__DOT__freqcossinp32x16[0U] = this->freqdata_r2[0U];
    this->ammod__DOT__freqcossinp32x16[1U] = this->freqdata_r2[1U];
    this->ammod__DOT__freqcossinp32x16[2U] = this->freqdata_r2[2U];
    this->ammod__DOT__freqcossinp32x16[3U] = this->freqdata_r2[3U];
    this->ammod__DOT__freq32 = this->freqdata_r2[0U];
    this->ammod__DOT__cordicg__DOT__zg = this->ammod__DOT__cordicg__DOT__z
        [0xfU];
    this->ammod__DOT__cordicg__DOT__reg_delay__DOT__din 
        = this->ammod__DOT__cordicg__DOT__gin;
    this->ammod__DOT__multidelay__DOT__din = this->ammod__DOT__gcordic;
    this->ammod__DOT__cordicg__DOT__yout1 = this->ammod__DOT__cordicg__DOT__yout;
    this->ammod__DOT__cordicg__DOT__xout1 = this->ammod__DOT__cordicg__DOT__xout;
    this->ammod__DOT__phtime__DOT__gatein = this->ammod__DOT__gatein;
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
    this->ammod__DOT__phtime__DOT__phasetime_r0 = (0x7ffffffU 
                                                   & (IData)(this->ammod__DOT__phtime__DOT__phasetime_w));
    this->freqaddr_r = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.freqaddr;
    this->ammod__DOT__cordicg__DOT__ysum2 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 0xcU) 
                                                - VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 0xeU)));
    this->ammod__DOT__cordicg__DOT__ysum0 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 1U) 
                                                + VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 3U)));
    this->ammod__DOT__cordicg__DOT__ysum1 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 6U) 
                                                + VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__yg, 9U)));
    this->ammod__DOT__cordicg__DOT__xsum2 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 0xcU) 
                                                - VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 0xeU)));
    this->ammod__DOT__cordicg__DOT__xsum0 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 1U) 
                                                + VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 3U)));
    this->ammod__DOT__cordicg__DOT__xsum1 = (0x1ffffU 
                                             & (VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 6U) 
                                                + VL_SHIFTRS_III(17,17,32, this->ammod__DOT__cordicg__DOT__xg, 9U)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr2;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi3 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2;
    this->ammod__DOT__phtime__DOT__freq = this->ammod__DOT__freq;
    this->ammod__DOT__phtime__DOT__phasetime_w = (0x3fffffffffffffULL 
                                                  & ((QData)((IData)(this->ammod__DOT__phtime__DOT__freq_r)) 
                                                     * (QData)((IData)(this->ammod__DOT__phtime__DOT__tcnt_r))));
    this->ammod__DOT__cordicg__DOT__yg = this->ammod__DOT__cordicg__DOT__y
        [0xfU];
    this->ammod__DOT__cordicg__DOT__xg = this->ammod__DOT__cordicg__DOT__x
        [0xfU];
    this->freqaddr = this->freqaddr_r;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1))));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr1;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi2 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi1;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi1 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr1 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi1 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr1 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi1 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr1 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi1 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr1 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__3__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi 
        = this->ammod__DOT__envx[3U];
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi 
        = this->ammod__DOT__envy[3U];
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__2__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi 
        = this->ammod__DOT__envx[2U];
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi 
        = this->ammod__DOT__envy[2U];
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__1__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi 
        = this->ammod__DOT__envx[1U];
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi 
        = this->ammod__DOT__envy[1U];
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zi1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->ammod__DOT__genblk2__BRA__0__KET____DOT__zr1 
                              >> 0xfU)));
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi 
        = this->ammod__DOT__envx[0U];
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi 
        = this->ammod__DOT__envy[0U];
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi 
        = this->ammod__DOT__cosp[3U];
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi 
        = this->ammod__DOT__sinp[3U];
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi 
        = this->ammod__DOT__cosp[2U];
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi 
        = this->ammod__DOT__sinp[2U];
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi 
        = this->ammod__DOT__cosp[1U];
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi 
        = this->ammod__DOT__sinp[1U];
    this->ammod__DOT__sin = this->ammod__DOT__sin_w;
    this->ammod__DOT__cos = this->ammod__DOT__cos_w;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi 
        = this->ammod__DOT__cosp[0U];
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi 
        = this->ammod__DOT__sinp[0U];
    this->ammod__DOT__envx[0U] = (0xffffU & ((this->envdata_r3[1U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[0U] 
                                                >> 0x10U)));
    this->ammod__DOT__envx[1U] = (0xffffU & ((this->envdata_r3[2U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[1U] 
                                                >> 0x10U)));
    this->ammod__DOT__envx[2U] = (0xffffU & ((this->envdata_r3[3U] 
                                              << 0x10U) 
                                             | (this->envdata_r3[2U] 
                                                >> 0x10U)));
    this->ammod__DOT__envx[3U] = (0xffffU & (this->envdata_r3[3U] 
                                             >> 0x10U));
    this->ammod__DOT__envy[0U] = (0xffffU & this->envdata_r3[0U]);
    this->ammod__DOT__envy[1U] = (0xffffU & this->envdata_r3[1U]);
    this->ammod__DOT__envy[2U] = (0xffffU & this->envdata_r3[2U]);
    this->ammod__DOT__envy[3U] = (0xffffU & this->envdata_r3[3U]);
    this->ammod__DOT__sin_w = this->ammod__DOT__cordicg__DOT__yout;
    this->ammod__DOT__cos_w = this->ammod__DOT__cordicg__DOT__xout;
    this->ammod__DOT__cosp[1U] = (0xffffU & ((this->ammod__DOT__freqcossinp32x16_d[2U] 
                                              << 0x10U) 
                                             | (this->ammod__DOT__freqcossinp32x16_d[1U] 
                                                >> 0x10U)));
    this->ammod__DOT__cosp[2U] = (0xffffU & ((this->ammod__DOT__freqcossinp32x16_d[3U] 
                                              << 0x10U) 
                                             | (this->ammod__DOT__freqcossinp32x16_d[2U] 
                                                >> 0x10U)));
    this->ammod__DOT__cosp[3U] = (0xffffU & (this->ammod__DOT__freqcossinp32x16_d[3U] 
                                             >> 0x10U));
    this->ammod__DOT__sinp[1U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[1U]);
    this->ammod__DOT__sinp[2U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[2U]);
    this->ammod__DOT__sinp[3U] = (0xffffU & this->ammod__DOT__freqcossinp32x16_d[3U]);
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envxi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__envyi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__3__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__2__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__1__KET____DOT__sinpi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xi 
        = this->ammod__DOT__sin;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__1__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__2__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__3__KET____DOT__mult1__DOT__xr 
        = this->ammod__DOT__cos;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__cospi;
    this->ammod__DOT__genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = this->ammod__DOT__genblk2__BRA__0__KET____DOT__sinpi;
}
