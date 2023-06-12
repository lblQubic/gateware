// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_ammod__N10.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_ammod__N10::_combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__15(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10::_combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__15\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    this->cordicg__DOT__reg_delay__DOT__clk = this->cordicg__DOT__clk;
}

VL_INLINE_OPT void Vtop_ammod__N10::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__23(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__23\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp3[4];
    WData/*127:0*/ __Vtemp7[4];
    WData/*12799:0*/ __Vtemp11[400];
    IData/*31:0*/ __Vilp;
    // Body
    this->cordicg__DOT__genblk3__DOT__yin_d = 0U;
    this->phtime__DOT__tcnt_r = this->tcnt;
    this->phtime__DOT__freq_r = this->freq;
    this->cordicg__DOT__genblk3__DOT__xin_d = this->ampx_d2;
    this->cordicg__DOT__phaseout_r = this->cordicg__DOT__zg1;
    this->cordicg__DOT__genblk3__DOT__phasein_d = this->phaseinit;
    this->multidelay__DOT__usual__DOT__shifter = ((0x1ffeU 
                                                   & ((IData)(this->multidelay__DOT__usual__DOT__shifter) 
                                                      << 1U)) 
                                                  | (IData)(this->gcordic));
    __Vtemp3[1U] = ((0x1ffffU & (this->pinidelay__DOT__usual__DOT__shifter[0U] 
                                 >> 0xfU)) | (0xfffe0000U 
                                              & (this->pinidelay__DOT__usual__DOT__shifter[1U] 
                                                 << 0x11U)));
    __Vtemp3[2U] = ((0x1ffffU & (this->pinidelay__DOT__usual__DOT__shifter[1U] 
                                 >> 0xfU)) | (0xfffe0000U 
                                              & (this->pinidelay__DOT__usual__DOT__shifter[2U] 
                                                 << 0x11U)));
    __Vtemp3[3U] = ((0x1ffffU & (this->pinidelay__DOT__usual__DOT__shifter[2U] 
                                 >> 0xfU)) | (0x7e0000U 
                                              & (this->pinidelay__DOT__usual__DOT__shifter[3U] 
                                                 << 0x11U)));
    this->pinidelay__DOT__usual__DOT__shifter[0U] = 
        ((0xfffe0000U & (this->pinidelay__DOT__usual__DOT__shifter[0U] 
                         << 0x11U)) | this->pini);
    this->pinidelay__DOT__usual__DOT__shifter[1U] = 
        __Vtemp3[1U];
    this->pinidelay__DOT__usual__DOT__shifter[2U] = 
        __Vtemp3[2U];
    this->pinidelay__DOT__usual__DOT__shifter[3U] = 
        __Vtemp3[3U];
    __Vtemp7[1U] = ((0xffffU & (this->ampxdelay__DOT__usual__DOT__shifter[0U] 
                                >> 0x10U)) | (0xffff0000U 
                                              & (this->ampxdelay__DOT__usual__DOT__shifter[1U] 
                                                 << 0x10U)));
    __Vtemp7[2U] = ((0xffffU & (this->ampxdelay__DOT__usual__DOT__shifter[1U] 
                                >> 0x10U)) | (0xffff0000U 
                                              & (this->ampxdelay__DOT__usual__DOT__shifter[2U] 
                                                 << 0x10U)));
    __Vtemp7[3U] = (0xffffU & (this->ampxdelay__DOT__usual__DOT__shifter[2U] 
                               >> 0x10U));
    this->ampxdelay__DOT__usual__DOT__shifter[0U] = 
        ((0xffff0000U & (this->ampxdelay__DOT__usual__DOT__shifter[0U] 
                         << 0x10U)) | (IData)(this->ampx));
    this->ampxdelay__DOT__usual__DOT__shifter[1U] = 
        __Vtemp7[1U];
    this->ampxdelay__DOT__usual__DOT__shifter[2U] = 
        __Vtemp7[2U];
    this->ampxdelay__DOT__usual__DOT__shifter[3U] = 
        __Vtemp7[3U];
    this->phtime__DOT__gatesr = ((0xfeU & ((IData)(this->phtime__DOT__gatesr) 
                                           << 1U)) 
                                 | (IData)(this->gatein));
    this->phtime__DOT__phasetime_r3 = this->phtime__DOT__phasetime_r2;
    this->__Vdlyvval__cordicg__DOT__y__v0 = (0x1ffffU 
                                             & ((IData)(this->cordicg__DOT__shiftpi)
                                                 ? 
                                                (- 
                                                 VL_EXTENDS_II(17,16, (IData)(this->cordicg__DOT__yin_1)))
                                                 : 
                                                VL_EXTENDS_II(17,16, (IData)(this->cordicg__DOT__yin_1))));
    this->gateout_r = this->gmulti;
    this->cordicg__DOT__stage__BRA__15__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xfU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xfU], 0xfU)));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xfU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xfU], 0xfU)));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xfU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xfU], 0xfU)));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xfU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xfU], 0xfU)));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xeU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xeU], 0xeU)));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xeU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xeU], 0xeU)));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xeU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xeU], 0xeU)));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xeU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xeU], 0xeU)));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xdU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xdU], 0xdU)));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xdU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xdU], 0xdU)));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xdU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xdU], 0xdU)));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xdU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xdU], 0xdU)));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xcU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xcU], 0xcU)));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xcU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xcU], 0xcU)));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xcU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xcU], 0xcU)));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xcU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xcU], 0xcU)));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xbU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xbU], 0xbU)));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xbU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xbU], 0xbU)));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xbU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xbU], 0xbU)));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xbU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xbU], 0xbU)));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xaU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xaU], 0xaU)));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xaU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xaU], 0xaU)));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xaU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xaU], 0xaU)));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xaU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xaU], 0xaU)));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[9U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [9U], 9U)));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[9U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [9U], 9U)));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[9U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [9U], 9U)));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[9U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [9U], 9U)));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[8U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [8U], 8U)));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[8U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [8U], 8U)));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[8U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [8U], 8U)));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[8U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [8U], 8U)));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[7U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [7U], 7U)));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[7U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [7U], 7U)));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[7U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [7U], 7U)));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[7U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [7U], 7U)));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[6U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [6U], 6U)));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[6U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [6U], 6U)));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[6U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [6U], 6U)));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[6U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [6U], 6U)));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[5U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [5U], 5U)));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[5U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [5U], 5U)));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[5U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [5U], 5U)));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[5U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [5U], 5U)));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[4U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [4U], 4U)));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[4U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [4U], 4U)));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[4U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [4U], 4U)));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[4U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [4U], 4U)));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[3U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [3U], 3U)));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[3U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [3U], 3U)));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[3U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [3U], 3U)));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[3U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [3U], 3U)));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[2U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [2U], 2U)));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[2U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [2U], 2U)));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[2U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [2U], 2U)));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[2U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [2U], 2U)));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[1U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [1U], 1U)));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[1U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [1U], 1U)));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[1U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [1U], 1U)));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[1U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [1U], 1U)));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0U] + 
                       this->cordicg__DOT__y[0U]));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0U] - 
                       this->cordicg__DOT__y[0U]));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0U] - 
                       this->cordicg__DOT__x[0U]));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0U] + 
                       this->cordicg__DOT__x[0U]));
    this->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
        = ((0xffffeU & (this->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                        << 1U)) | (IData)(this->gphaseinit));
    this->cordicg__DOT__errorr = (1U & (((IData)(this->cordicg__DOT__genblk6__DOT__xdummy) 
                                         ^ ((IData)(this->cordicg__DOT__xout_r) 
                                            >> 0xfU)) 
                                        | ((IData)(this->cordicg__DOT__genblk6__DOT__ydummy) 
                                           ^ ((IData)(this->cordicg__DOT__yout) 
                                              >> 0xfU))));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xfU] 
                       - this->cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xfU] 
                       + this->cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xeU] 
                       - this->cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xeU] 
                       + this->cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xdU] 
                       - this->cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xdU] 
                       + this->cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xcU] 
                       - this->cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xcU] 
                       + this->cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xbU] 
                       - this->cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xbU] 
                       + this->cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xaU] 
                       - this->cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xaU] 
                       + this->cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[9U] - this->cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[9U] + this->cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[8U] - this->cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[8U] + this->cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[7U] - this->cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[7U] + this->cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[6U] - this->cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[6U] + this->cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[5U] - this->cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[5U] + this->cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[4U] - this->cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[4U] + this->cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[3U] - this->cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[3U] + this->cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[2U] - this->cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[2U] + this->cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[1U] - this->cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[1U] + this->cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0U] - this->cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0U] + this->cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__15__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__15__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__15__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__15__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__14__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__14__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__14__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__14__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__13__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__13__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__13__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__13__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__12__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__12__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__12__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__12__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__11__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__11__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__11__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__11__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__10__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__10__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__10__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__10__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__9__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__9__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__9__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__9__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__8__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__8__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__8__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__8__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__7__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__7__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__7__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__7__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__6__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__6__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__6__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__6__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__5__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__5__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__5__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__5__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__4__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__4__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__4__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__4__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__15__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__15__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__15__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__15__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__14__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__14__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__14__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__14__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__13__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__13__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__13__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__13__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__12__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__12__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__12__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__12__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__11__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__11__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__11__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__11__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__10__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__10__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__10__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__10__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__9__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__9__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__9__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__9__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__8__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__8__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__8__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__8__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__7__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__7__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__7__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__7__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__6__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__6__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__6__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__6__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__5__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__5__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__5__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__5__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__4__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__4__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__4__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__4__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1));
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v0 
        = this->cordicg__DOT__plusall[0U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v1 
        = this->cordicg__DOT__plusall[1U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v2 
        = this->cordicg__DOT__plusall[2U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v3 
        = this->cordicg__DOT__plusall[3U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v4 
        = this->cordicg__DOT__plusall[4U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v5 
        = this->cordicg__DOT__plusall[5U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v6 
        = this->cordicg__DOT__plusall[6U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v7 
        = this->cordicg__DOT__plusall[7U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v8 
        = this->cordicg__DOT__plusall[8U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v9 
        = this->cordicg__DOT__plusall[9U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v10 
        = this->cordicg__DOT__plusall[0xaU];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v11 
        = this->cordicg__DOT__plusall[0xbU];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v12 
        = this->cordicg__DOT__plusall[0xcU];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v13 
        = this->cordicg__DOT__plusall[0xdU];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v14 
        = this->cordicg__DOT__plusall[0xeU];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v15 
        = this->cordicg__DOT__plusall[0xfU];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v0 = 
        this->cordicg__DOT__plusall[0U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v1 = 
        this->cordicg__DOT__plusall[1U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v2 = 
        this->cordicg__DOT__plusall[2U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v3 = 
        this->cordicg__DOT__plusall[3U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v4 = 
        this->cordicg__DOT__plusall[4U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v5 = 
        this->cordicg__DOT__plusall[5U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v6 = 
        this->cordicg__DOT__plusall[6U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v7 = 
        this->cordicg__DOT__plusall[7U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v8 = 
        this->cordicg__DOT__plusall[8U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v9 = 
        this->cordicg__DOT__plusall[9U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v10 
        = this->cordicg__DOT__plusall[0xaU];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v11 
        = this->cordicg__DOT__plusall[0xbU];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v12 
        = this->cordicg__DOT__plusall[0xcU];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v13 
        = this->cordicg__DOT__plusall[0xdU];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v14 
        = this->cordicg__DOT__plusall[0xeU];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v15 
        = this->cordicg__DOT__plusall[0xfU];
    this->__Vdlyvval__cordicg__DOT__x__v0 = (0x1ffffU 
                                             & ((IData)(this->cordicg__DOT__shiftpi)
                                                 ? 
                                                (- 
                                                 VL_EXTENDS_II(17,16, (IData)(this->cordicg__DOT__xin_1)))
                                                 : 
                                                VL_EXTENDS_II(17,16, (IData)(this->cordicg__DOT__xin_1))));
    if (this->cordicg__DOT__plusall[0U]) {
        this->__Vdlyvval__cordicg__DOT__x__v1 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [0U] 
                                                    + 
                                                    this->cordicg__DOT__y
                                                    [0U]));
        this->__Vdlyvval__cordicg__DOT__y__v1 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [0U] 
                                                    - 
                                                    this->cordicg__DOT__x
                                                    [0U]));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v1 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [0U] 
                                                    - 
                                                    this->cordicg__DOT__y
                                                    [0U]));
        this->__Vdlyvval__cordicg__DOT__y__v1 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [0U] 
                                                    + 
                                                    this->cordicg__DOT__x
                                                    [0U]));
    }
    if (this->cordicg__DOT__plusall[1U]) {
        this->__Vdlyvval__cordicg__DOT__x__v2 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [1U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [1U], 1U)));
        this->__Vdlyvval__cordicg__DOT__y__v2 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [1U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [1U], 1U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v2 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [1U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [1U], 1U)));
        this->__Vdlyvval__cordicg__DOT__y__v2 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [1U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [1U], 1U)));
    }
    if (this->cordicg__DOT__plusall[2U]) {
        this->__Vdlyvval__cordicg__DOT__x__v3 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [2U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [2U], 2U)));
        this->__Vdlyvval__cordicg__DOT__y__v3 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [2U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [2U], 2U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v3 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [2U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [2U], 2U)));
        this->__Vdlyvval__cordicg__DOT__y__v3 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [2U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [2U], 2U)));
    }
    if (this->cordicg__DOT__plusall[3U]) {
        this->__Vdlyvval__cordicg__DOT__x__v4 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [3U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [3U], 3U)));
        this->__Vdlyvval__cordicg__DOT__y__v4 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [3U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [3U], 3U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v4 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [3U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [3U], 3U)));
        this->__Vdlyvval__cordicg__DOT__y__v4 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [3U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [3U], 3U)));
    }
    if (this->cordicg__DOT__plusall[4U]) {
        this->__Vdlyvval__cordicg__DOT__x__v5 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [4U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [4U], 4U)));
        this->__Vdlyvval__cordicg__DOT__y__v5 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [4U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [4U], 4U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v5 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [4U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [4U], 4U)));
        this->__Vdlyvval__cordicg__DOT__y__v5 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [4U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [4U], 4U)));
    }
    if (this->cordicg__DOT__plusall[5U]) {
        this->__Vdlyvval__cordicg__DOT__x__v6 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [5U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [5U], 5U)));
        this->__Vdlyvval__cordicg__DOT__y__v6 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [5U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [5U], 5U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v6 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [5U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [5U], 5U)));
        this->__Vdlyvval__cordicg__DOT__y__v6 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [5U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [5U], 5U)));
    }
    if (this->cordicg__DOT__plusall[6U]) {
        this->__Vdlyvval__cordicg__DOT__x__v7 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [6U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [6U], 6U)));
        this->__Vdlyvval__cordicg__DOT__y__v7 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [6U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [6U], 6U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v7 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [6U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [6U], 6U)));
        this->__Vdlyvval__cordicg__DOT__y__v7 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [6U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [6U], 6U)));
    }
    if (this->cordicg__DOT__plusall[7U]) {
        this->__Vdlyvval__cordicg__DOT__x__v8 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [7U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [7U], 7U)));
        this->__Vdlyvval__cordicg__DOT__y__v8 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [7U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [7U], 7U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v8 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [7U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [7U], 7U)));
        this->__Vdlyvval__cordicg__DOT__y__v8 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [7U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [7U], 7U)));
    }
    if (this->cordicg__DOT__plusall[8U]) {
        this->__Vdlyvval__cordicg__DOT__x__v9 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [8U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [8U], 8U)));
        this->__Vdlyvval__cordicg__DOT__y__v9 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [8U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [8U], 8U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v9 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [8U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [8U], 8U)));
        this->__Vdlyvval__cordicg__DOT__y__v9 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [8U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [8U], 8U)));
    }
    if (this->cordicg__DOT__plusall[9U]) {
        this->__Vdlyvval__cordicg__DOT__x__v10 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [9U] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [9U], 9U)));
        this->__Vdlyvval__cordicg__DOT__y__v10 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [9U] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [9U], 9U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v10 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [9U] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [9U], 9U)));
        this->__Vdlyvval__cordicg__DOT__y__v10 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [9U] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [9U], 9U)));
    }
    if (this->cordicg__DOT__plusall[0xaU]) {
        this->__Vdlyvval__cordicg__DOT__x__v11 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xaU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xaU], 0xaU)));
        this->__Vdlyvval__cordicg__DOT__y__v11 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xaU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xaU], 0xaU)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v11 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xaU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xaU], 0xaU)));
        this->__Vdlyvval__cordicg__DOT__y__v11 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xaU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xaU], 0xaU)));
    }
    if (this->cordicg__DOT__plusall[0xbU]) {
        this->__Vdlyvval__cordicg__DOT__x__v12 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xbU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xbU], 0xbU)));
        this->__Vdlyvval__cordicg__DOT__y__v12 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xbU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xbU], 0xbU)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v12 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xbU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xbU], 0xbU)));
        this->__Vdlyvval__cordicg__DOT__y__v12 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xbU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xbU], 0xbU)));
    }
    if (this->cordicg__DOT__plusall[0xcU]) {
        this->__Vdlyvval__cordicg__DOT__x__v13 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xcU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xcU], 0xcU)));
        this->__Vdlyvval__cordicg__DOT__y__v13 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xcU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xcU], 0xcU)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v13 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xcU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xcU], 0xcU)));
        this->__Vdlyvval__cordicg__DOT__y__v13 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xcU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xcU], 0xcU)));
    }
    if (this->cordicg__DOT__plusall[0xdU]) {
        this->__Vdlyvval__cordicg__DOT__x__v14 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xdU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xdU], 0xdU)));
        this->__Vdlyvval__cordicg__DOT__y__v14 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xdU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xdU], 0xdU)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v14 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xdU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xdU], 0xdU)));
        this->__Vdlyvval__cordicg__DOT__y__v14 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xdU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xdU], 0xdU)));
    }
    if (this->cordicg__DOT__plusall[0xeU]) {
        this->__Vdlyvval__cordicg__DOT__x__v15 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xeU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xeU], 0xeU)));
        this->__Vdlyvval__cordicg__DOT__y__v15 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xeU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xeU], 0xeU)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v15 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xeU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xeU], 0xeU)));
        this->__Vdlyvval__cordicg__DOT__y__v15 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xeU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xeU], 0xeU)));
    }
    if (this->cordicg__DOT__plusall[0xfU]) {
        this->__Vdlyvval__cordicg__DOT__x__v16 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xfU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xfU], 0xfU)));
        this->__Vdlyvval__cordicg__DOT__y__v16 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xfU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xfU], 0xfU)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v16 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xfU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xfU], 0xfU)));
        this->__Vdlyvval__cordicg__DOT__y__v16 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xfU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xfU], 0xfU)));
    }
    __Vtemp11[0x10U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0U];
    __Vtemp11[0x11U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[1U];
    __Vtemp11[0x12U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[2U];
    __Vtemp11[0x13U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[3U];
    __Vtemp11[0x14U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[4U];
    __Vtemp11[0x15U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[5U];
    __Vtemp11[0x16U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[6U];
    __Vtemp11[0x17U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[7U];
    __Vtemp11[0x18U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[8U];
    __Vtemp11[0x19U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[9U];
    __Vtemp11[0x1aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xaU];
    __Vtemp11[0x1bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbU];
    __Vtemp11[0x1cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xcU];
    __Vtemp11[0x1dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdU];
    __Vtemp11[0x1eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xeU];
    __Vtemp11[0x1fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfU];
    __Vtemp11[0x20U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10U];
    __Vtemp11[0x21U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11U];
    __Vtemp11[0x22U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12U];
    __Vtemp11[0x23U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13U];
    __Vtemp11[0x24U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14U];
    __Vtemp11[0x25U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15U];
    __Vtemp11[0x26U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16U];
    __Vtemp11[0x27U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17U];
    __Vtemp11[0x28U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18U];
    __Vtemp11[0x29U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x19U];
    __Vtemp11[0x2aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x1aU];
    __Vtemp11[0x2bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x1bU];
    __Vtemp11[0x2cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x1cU];
    __Vtemp11[0x2dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x1dU];
    __Vtemp11[0x2eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x1eU];
    __Vtemp11[0x2fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x1fU];
    __Vtemp11[0x30U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x20U];
    __Vtemp11[0x31U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x21U];
    __Vtemp11[0x32U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x22U];
    __Vtemp11[0x33U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x23U];
    __Vtemp11[0x34U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x24U];
    __Vtemp11[0x35U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x25U];
    __Vtemp11[0x36U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x26U];
    __Vtemp11[0x37U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x27U];
    __Vtemp11[0x38U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x28U];
    __Vtemp11[0x39U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x29U];
    __Vtemp11[0x3aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x2aU];
    __Vtemp11[0x3bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x2bU];
    __Vtemp11[0x3cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x2cU];
    __Vtemp11[0x3dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x2dU];
    __Vtemp11[0x3eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x2eU];
    __Vtemp11[0x3fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x2fU];
    __Vtemp11[0x40U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x30U];
    __Vtemp11[0x41U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x31U];
    __Vtemp11[0x42U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x32U];
    __Vtemp11[0x43U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x33U];
    __Vtemp11[0x44U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x34U];
    __Vtemp11[0x45U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x35U];
    __Vtemp11[0x46U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x36U];
    __Vtemp11[0x47U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x37U];
    __Vtemp11[0x48U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x38U];
    __Vtemp11[0x49U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x39U];
    __Vtemp11[0x4aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x3aU];
    __Vtemp11[0x4bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x3bU];
    __Vtemp11[0x4cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x3cU];
    __Vtemp11[0x4dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x3dU];
    __Vtemp11[0x4eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x3eU];
    __Vtemp11[0x4fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x3fU];
    __Vtemp11[0x50U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x40U];
    __Vtemp11[0x51U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x41U];
    __Vtemp11[0x52U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x42U];
    __Vtemp11[0x53U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x43U];
    __Vtemp11[0x54U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x44U];
    __Vtemp11[0x55U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x45U];
    __Vtemp11[0x56U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x46U];
    __Vtemp11[0x57U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x47U];
    __Vtemp11[0x58U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x48U];
    __Vtemp11[0x59U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x49U];
    __Vtemp11[0x5aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x4aU];
    __Vtemp11[0x5bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x4bU];
    __Vtemp11[0x5cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x4cU];
    __Vtemp11[0x5dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x4dU];
    __Vtemp11[0x5eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x4eU];
    __Vtemp11[0x5fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x4fU];
    __Vtemp11[0x60U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x50U];
    __Vtemp11[0x61U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x51U];
    __Vtemp11[0x62U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x52U];
    __Vtemp11[0x63U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x53U];
    __Vtemp11[0x64U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x54U];
    __Vtemp11[0x65U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x55U];
    __Vtemp11[0x66U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x56U];
    __Vtemp11[0x67U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x57U];
    __Vtemp11[0x68U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x58U];
    __Vtemp11[0x69U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x59U];
    __Vtemp11[0x6aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x5aU];
    __Vtemp11[0x6bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x5bU];
    __Vtemp11[0x6cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x5cU];
    __Vtemp11[0x6dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x5dU];
    __Vtemp11[0x6eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x5eU];
    __Vtemp11[0x6fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x5fU];
    __Vtemp11[0x70U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x60U];
    __Vtemp11[0x71U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x61U];
    __Vtemp11[0x72U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x62U];
    __Vtemp11[0x73U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x63U];
    __Vtemp11[0x74U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x64U];
    __Vtemp11[0x75U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x65U];
    __Vtemp11[0x76U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x66U];
    __Vtemp11[0x77U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x67U];
    __Vtemp11[0x78U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x68U];
    __Vtemp11[0x79U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x69U];
    __Vtemp11[0x7aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x6aU];
    __Vtemp11[0x7bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x6bU];
    __Vtemp11[0x7cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x6cU];
    __Vtemp11[0x7dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x6dU];
    __Vtemp11[0x7eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x6eU];
    __Vtemp11[0x7fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x6fU];
    __Vtemp11[0x80U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x70U];
    __Vtemp11[0x81U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x71U];
    __Vtemp11[0x82U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x72U];
    __Vtemp11[0x83U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x73U];
    __Vtemp11[0x84U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x74U];
    __Vtemp11[0x85U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x75U];
    __Vtemp11[0x86U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x76U];
    __Vtemp11[0x87U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x77U];
    __Vtemp11[0x88U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x78U];
    __Vtemp11[0x89U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x79U];
    __Vtemp11[0x8aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x7aU];
    __Vtemp11[0x8bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x7bU];
    __Vtemp11[0x8cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x7cU];
    __Vtemp11[0x8dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x7dU];
    __Vtemp11[0x8eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x7eU];
    __Vtemp11[0x8fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x7fU];
    __Vtemp11[0x90U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x80U];
    __Vtemp11[0x91U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x81U];
    __Vtemp11[0x92U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x82U];
    __Vtemp11[0x93U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x83U];
    __Vtemp11[0x94U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x84U];
    __Vtemp11[0x95U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x85U];
    __Vtemp11[0x96U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x86U];
    __Vtemp11[0x97U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x87U];
    __Vtemp11[0x98U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x88U];
    __Vtemp11[0x99U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x89U];
    __Vtemp11[0x9aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x8aU];
    __Vtemp11[0x9bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x8bU];
    __Vtemp11[0x9cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x8cU];
    __Vtemp11[0x9dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x8dU];
    __Vtemp11[0x9eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x8eU];
    __Vtemp11[0x9fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x8fU];
    __Vtemp11[0xa0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x90U];
    __Vtemp11[0xa1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x91U];
    __Vtemp11[0xa2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x92U];
    __Vtemp11[0xa3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x93U];
    __Vtemp11[0xa4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x94U];
    __Vtemp11[0xa5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x95U];
    __Vtemp11[0xa6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x96U];
    __Vtemp11[0xa7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x97U];
    __Vtemp11[0xa8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x98U];
    __Vtemp11[0xa9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x99U];
    __Vtemp11[0xaaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x9aU];
    __Vtemp11[0xabU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x9bU];
    __Vtemp11[0xacU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x9cU];
    __Vtemp11[0xadU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x9dU];
    __Vtemp11[0xaeU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x9eU];
    __Vtemp11[0xafU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x9fU];
    __Vtemp11[0xb0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa0U];
    __Vtemp11[0xb1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa1U];
    __Vtemp11[0xb2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa2U];
    __Vtemp11[0xb3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa3U];
    __Vtemp11[0xb4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa4U];
    __Vtemp11[0xb5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa5U];
    __Vtemp11[0xb6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa6U];
    __Vtemp11[0xb7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa7U];
    __Vtemp11[0xb8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa8U];
    __Vtemp11[0xb9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa9U];
    __Vtemp11[0xbaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xaaU];
    __Vtemp11[0xbbU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xabU];
    __Vtemp11[0xbcU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xacU];
    __Vtemp11[0xbdU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xadU];
    __Vtemp11[0xbeU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xaeU];
    __Vtemp11[0xbfU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xafU];
    __Vtemp11[0xc0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb0U];
    __Vtemp11[0xc1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb1U];
    __Vtemp11[0xc2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb2U];
    __Vtemp11[0xc3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb3U];
    __Vtemp11[0xc4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb4U];
    __Vtemp11[0xc5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb5U];
    __Vtemp11[0xc6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb6U];
    __Vtemp11[0xc7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb7U];
    __Vtemp11[0xc8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb8U];
    __Vtemp11[0xc9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb9U];
    __Vtemp11[0xcaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbaU];
    __Vtemp11[0xcbU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbbU];
    __Vtemp11[0xccU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbcU];
    __Vtemp11[0xcdU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbdU];
    __Vtemp11[0xceU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbeU];
    __Vtemp11[0xcfU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbfU];
    __Vtemp11[0xd0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc0U];
    __Vtemp11[0xd1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc1U];
    __Vtemp11[0xd2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc2U];
    __Vtemp11[0xd3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc3U];
    __Vtemp11[0xd4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc4U];
    __Vtemp11[0xd5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc5U];
    __Vtemp11[0xd6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc6U];
    __Vtemp11[0xd7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc7U];
    __Vtemp11[0xd8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc8U];
    __Vtemp11[0xd9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc9U];
    __Vtemp11[0xdaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xcaU];
    __Vtemp11[0xdbU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xcbU];
    __Vtemp11[0xdcU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xccU];
    __Vtemp11[0xddU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xcdU];
    __Vtemp11[0xdeU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xceU];
    __Vtemp11[0xdfU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xcfU];
    __Vtemp11[0xe0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd0U];
    __Vtemp11[0xe1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd1U];
    __Vtemp11[0xe2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd2U];
    __Vtemp11[0xe3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd3U];
    __Vtemp11[0xe4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd4U];
    __Vtemp11[0xe5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd5U];
    __Vtemp11[0xe6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd6U];
    __Vtemp11[0xe7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd7U];
    __Vtemp11[0xe8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd8U];
    __Vtemp11[0xe9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd9U];
    __Vtemp11[0xeaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdaU];
    __Vtemp11[0xebU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdbU];
    __Vtemp11[0xecU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdcU];
    __Vtemp11[0xedU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xddU];
    __Vtemp11[0xeeU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdeU];
    __Vtemp11[0xefU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdfU];
    __Vtemp11[0xf0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe0U];
    __Vtemp11[0xf1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe1U];
    __Vtemp11[0xf2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe2U];
    __Vtemp11[0xf3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe3U];
    __Vtemp11[0xf4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe4U];
    __Vtemp11[0xf5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe5U];
    __Vtemp11[0xf6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe6U];
    __Vtemp11[0xf7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe7U];
    __Vtemp11[0xf8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe8U];
    __Vtemp11[0xf9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe9U];
    __Vtemp11[0xfaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xeaU];
    __Vtemp11[0xfbU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xebU];
    __Vtemp11[0xfcU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xecU];
    __Vtemp11[0xfdU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xedU];
    __Vtemp11[0xfeU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xeeU];
    __Vtemp11[0xffU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xefU];
    __Vtemp11[0x100U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf0U];
    __Vtemp11[0x101U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf1U];
    __Vtemp11[0x102U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf2U];
    __Vtemp11[0x103U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf3U];
    __Vtemp11[0x104U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf4U];
    __Vtemp11[0x105U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf5U];
    __Vtemp11[0x106U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf6U];
    __Vtemp11[0x107U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf7U];
    __Vtemp11[0x108U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf8U];
    __Vtemp11[0x109U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf9U];
    __Vtemp11[0x10aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfaU];
    __Vtemp11[0x10bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfbU];
    __Vtemp11[0x10cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfcU];
    __Vtemp11[0x10dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfdU];
    __Vtemp11[0x10eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfeU];
    __Vtemp11[0x10fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xffU];
    __Vtemp11[0x110U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x100U];
    __Vtemp11[0x111U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x101U];
    __Vtemp11[0x112U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x102U];
    __Vtemp11[0x113U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x103U];
    __Vtemp11[0x114U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x104U];
    __Vtemp11[0x115U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x105U];
    __Vtemp11[0x116U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x106U];
    __Vtemp11[0x117U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x107U];
    __Vtemp11[0x118U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x108U];
    __Vtemp11[0x119U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x109U];
    __Vtemp11[0x11aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10aU];
    __Vtemp11[0x11bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10bU];
    __Vtemp11[0x11cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10cU];
    __Vtemp11[0x11dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10dU];
    __Vtemp11[0x11eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10eU];
    __Vtemp11[0x11fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10fU];
    __Vtemp11[0x120U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x110U];
    __Vtemp11[0x121U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x111U];
    __Vtemp11[0x122U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x112U];
    __Vtemp11[0x123U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x113U];
    __Vtemp11[0x124U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x114U];
    __Vtemp11[0x125U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x115U];
    __Vtemp11[0x126U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x116U];
    __Vtemp11[0x127U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x117U];
    __Vtemp11[0x128U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x118U];
    __Vtemp11[0x129U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x119U];
    __Vtemp11[0x12aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11aU];
    __Vtemp11[0x12bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11bU];
    __Vtemp11[0x12cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11cU];
    __Vtemp11[0x12dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11dU];
    __Vtemp11[0x12eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11eU];
    __Vtemp11[0x12fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11fU];
    __Vtemp11[0x130U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x120U];
    __Vtemp11[0x131U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x121U];
    __Vtemp11[0x132U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x122U];
    __Vtemp11[0x133U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x123U];
    __Vtemp11[0x134U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x124U];
    __Vtemp11[0x135U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x125U];
    __Vtemp11[0x136U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x126U];
    __Vtemp11[0x137U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x127U];
    __Vtemp11[0x138U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x128U];
    __Vtemp11[0x139U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x129U];
    __Vtemp11[0x13aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12aU];
    __Vtemp11[0x13bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12bU];
    __Vtemp11[0x13cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12cU];
    __Vtemp11[0x13dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12dU];
    __Vtemp11[0x13eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12eU];
    __Vtemp11[0x13fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12fU];
    __Vtemp11[0x140U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x130U];
    __Vtemp11[0x141U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x131U];
    __Vtemp11[0x142U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x132U];
    __Vtemp11[0x143U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x133U];
    __Vtemp11[0x144U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x134U];
    __Vtemp11[0x145U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x135U];
    __Vtemp11[0x146U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x136U];
    __Vtemp11[0x147U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x137U];
    __Vtemp11[0x148U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x138U];
    __Vtemp11[0x149U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x139U];
    __Vtemp11[0x14aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13aU];
    __Vtemp11[0x14bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13bU];
    __Vtemp11[0x14cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13cU];
    __Vtemp11[0x14dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13dU];
    __Vtemp11[0x14eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13eU];
    __Vtemp11[0x14fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13fU];
    __Vtemp11[0x150U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x140U];
    __Vtemp11[0x151U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x141U];
    __Vtemp11[0x152U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x142U];
    __Vtemp11[0x153U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x143U];
    __Vtemp11[0x154U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x144U];
    __Vtemp11[0x155U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x145U];
    __Vtemp11[0x156U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x146U];
    __Vtemp11[0x157U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x147U];
    __Vtemp11[0x158U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x148U];
    __Vtemp11[0x159U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x149U];
    __Vtemp11[0x15aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14aU];
    __Vtemp11[0x15bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14bU];
    __Vtemp11[0x15cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14cU];
    __Vtemp11[0x15dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14dU];
    __Vtemp11[0x15eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14eU];
    __Vtemp11[0x15fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14fU];
    __Vtemp11[0x160U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x150U];
    __Vtemp11[0x161U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x151U];
    __Vtemp11[0x162U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x152U];
    __Vtemp11[0x163U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x153U];
    __Vtemp11[0x164U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x154U];
    __Vtemp11[0x165U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x155U];
    __Vtemp11[0x166U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x156U];
    __Vtemp11[0x167U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x157U];
    __Vtemp11[0x168U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x158U];
    __Vtemp11[0x169U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x159U];
    __Vtemp11[0x16aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15aU];
    __Vtemp11[0x16bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15bU];
    __Vtemp11[0x16cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15cU];
    __Vtemp11[0x16dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15dU];
    __Vtemp11[0x16eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15eU];
    __Vtemp11[0x16fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15fU];
    __Vtemp11[0x170U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x160U];
    __Vtemp11[0x171U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x161U];
    __Vtemp11[0x172U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x162U];
    __Vtemp11[0x173U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x163U];
    __Vtemp11[0x174U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x164U];
    __Vtemp11[0x175U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x165U];
    __Vtemp11[0x176U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x166U];
    __Vtemp11[0x177U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x167U];
    __Vtemp11[0x178U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x168U];
    __Vtemp11[0x179U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x169U];
    __Vtemp11[0x17aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16aU];
    __Vtemp11[0x17bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16bU];
    __Vtemp11[0x17cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16cU];
    __Vtemp11[0x17dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16dU];
    __Vtemp11[0x17eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16eU];
    __Vtemp11[0x17fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16fU];
    __Vtemp11[0x180U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x170U];
    __Vtemp11[0x181U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x171U];
    __Vtemp11[0x182U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x172U];
    __Vtemp11[0x183U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x173U];
    __Vtemp11[0x184U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x174U];
    __Vtemp11[0x185U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x175U];
    __Vtemp11[0x186U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x176U];
    __Vtemp11[0x187U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x177U];
    __Vtemp11[0x188U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x178U];
    __Vtemp11[0x189U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x179U];
    __Vtemp11[0x18aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17aU];
    __Vtemp11[0x18bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17bU];
    __Vtemp11[0x18cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17cU];
    __Vtemp11[0x18dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17dU];
    __Vtemp11[0x18eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17eU];
    __Vtemp11[0x18fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17fU];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0U] 
        = this->freqcossinp32x16[0U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[1U] 
        = this->freqcossinp32x16[1U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[2U] 
        = this->freqcossinp32x16[2U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[3U] 
        = this->freqcossinp32x16[3U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[4U] 
        = this->freqcossinp32x16[4U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[5U] 
        = this->freqcossinp32x16[5U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[6U] 
        = this->freqcossinp32x16[6U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[7U] 
        = this->freqcossinp32x16[7U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[8U] 
        = this->freqcossinp32x16[8U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[9U] 
        = this->freqcossinp32x16[9U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0xaU] 
        = this->freqcossinp32x16[0xaU];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbU] 
        = this->freqcossinp32x16[0xbU];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0xcU] 
        = this->freqcossinp32x16[0xcU];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdU] 
        = this->freqcossinp32x16[0xdU];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0xeU] 
        = this->freqcossinp32x16[0xeU];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfU] 
        = this->freqcossinp32x16[0xfU];
    __Vilp = 0x10U;
    while ((__Vilp <= 0x18fU)) {
        this->freqcossinpdelay__DOT__usual__DOT__shifter[__Vilp] 
            = __Vtemp11[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    this->multiy16x16_r[0U] = ((0xffff0000U & this->multiy16x16_r[0U]) 
                               | this->multiy[0U]);
    this->multiy16x16_r[0U] = ((0xffffU & this->multiy16x16_r[0U]) 
                               | (0xffff0000U & (this->multiy
                                                 [1U] 
                                                 << 0x10U)));
    this->multiy16x16_r[1U] = ((0xffff0000U & this->multiy16x16_r[1U]) 
                               | this->multiy[2U]);
    this->multiy16x16_r[1U] = ((0xffffU & this->multiy16x16_r[1U]) 
                               | (0xffff0000U & (this->multiy
                                                 [3U] 
                                                 << 0x10U)));
    this->multiy16x16_r[2U] = ((0xffff0000U & this->multiy16x16_r[2U]) 
                               | this->multiy[4U]);
    this->multiy16x16_r[2U] = ((0xffffU & this->multiy16x16_r[2U]) 
                               | (0xffff0000U & (this->multiy
                                                 [5U] 
                                                 << 0x10U)));
    this->multiy16x16_r[3U] = ((0xffff0000U & this->multiy16x16_r[3U]) 
                               | this->multiy[6U]);
    this->multiy16x16_r[3U] = ((0xffffU & this->multiy16x16_r[3U]) 
                               | (0xffff0000U & (this->multiy
                                                 [7U] 
                                                 << 0x10U)));
    this->multiy16x16_r[4U] = ((0xffff0000U & this->multiy16x16_r[4U]) 
                               | this->multiy[8U]);
    this->multiy16x16_r[4U] = ((0xffffU & this->multiy16x16_r[4U]) 
                               | (0xffff0000U & (this->multiy
                                                 [9U] 
                                                 << 0x10U)));
    this->multiy16x16_r[5U] = ((0xffff0000U & this->multiy16x16_r[5U]) 
                               | this->multiy[0xaU]);
    this->multiy16x16_r[5U] = ((0xffffU & this->multiy16x16_r[5U]) 
                               | (0xffff0000U & (this->multiy
                                                 [0xbU] 
                                                 << 0x10U)));
    this->multiy16x16_r[6U] = ((0xffff0000U & this->multiy16x16_r[6U]) 
                               | this->multiy[0xcU]);
    this->multiy16x16_r[6U] = ((0xffffU & this->multiy16x16_r[6U]) 
                               | (0xffff0000U & (this->multiy
                                                 [0xdU] 
                                                 << 0x10U)));
    this->multiy16x16_r[7U] = ((0xffff0000U & this->multiy16x16_r[7U]) 
                               | this->multiy[0xeU]);
    this->multiy16x16_r[7U] = ((0xffffU & this->multiy16x16_r[7U]) 
                               | (0xffff0000U & (this->multiy
                                                 [0xfU] 
                                                 << 0x10U)));
    this->__Vdlyvval__cordicg__DOT__z__v0 = ((IData)(this->cordicg__DOT__shiftpi)
                                              ? ((0x10000U 
                                                  & ((~ 
                                                      (this->cordicg__DOT__phasein_1 
                                                       >> 0x10U)) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & this->cordicg__DOT__phasein_1))
                                              : this->cordicg__DOT__phasein_1);
    this->__Vdlyvval__cordicg__DOT__z__v1 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [0U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [0U] 
                                                 + this->cordicg__DOT__stage__BRA__0__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [0U] 
                                                 - this->cordicg__DOT__stage__BRA__0__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v2 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [1U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [1U] 
                                                 + this->cordicg__DOT__stage__BRA__1__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [1U] 
                                                 - this->cordicg__DOT__stage__BRA__1__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v3 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [2U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [2U] 
                                                 + this->cordicg__DOT__stage__BRA__2__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [2U] 
                                                 - this->cordicg__DOT__stage__BRA__2__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v4 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [3U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [3U] 
                                                 + this->cordicg__DOT__stage__BRA__3__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [3U] 
                                                 - this->cordicg__DOT__stage__BRA__3__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v5 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [4U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [4U] 
                                                 + this->cordicg__DOT__stage__BRA__4__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [4U] 
                                                 - this->cordicg__DOT__stage__BRA__4__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v6 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [5U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [5U] 
                                                 + this->cordicg__DOT__stage__BRA__5__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [5U] 
                                                 - this->cordicg__DOT__stage__BRA__5__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v7 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [6U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [6U] 
                                                 + this->cordicg__DOT__stage__BRA__6__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [6U] 
                                                 - this->cordicg__DOT__stage__BRA__6__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v8 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [7U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [7U] 
                                                 + this->cordicg__DOT__stage__BRA__7__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [7U] 
                                                 - this->cordicg__DOT__stage__BRA__7__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v9 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [8U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [8U] 
                                                 + this->cordicg__DOT__stage__BRA__8__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [8U] 
                                                 - this->cordicg__DOT__stage__BRA__8__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v10 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [9U]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [9U] 
                                                  + this->cordicg__DOT__stage__BRA__9__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [9U] 
                                                  - this->cordicg__DOT__stage__BRA__9__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v11 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [0xaU]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [0xaU] 
                                                  + this->cordicg__DOT__stage__BRA__10__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [0xaU] 
                                                  - this->cordicg__DOT__stage__BRA__10__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v12 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [0xbU]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [0xbU] 
                                                  + this->cordicg__DOT__stage__BRA__11__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [0xbU] 
                                                  - this->cordicg__DOT__stage__BRA__11__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v13 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [0xcU]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [0xcU] 
                                                  + this->cordicg__DOT__stage__BRA__12__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [0xcU] 
                                                  - this->cordicg__DOT__stage__BRA__12__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v14 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [0xdU]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [0xdU] 
                                                  + this->cordicg__DOT__stage__BRA__13__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [0xdU] 
                                                  - this->cordicg__DOT__stage__BRA__13__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v15 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [0xeU]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [0xeU] 
                                                  + this->cordicg__DOT__stage__BRA__14__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [0xeU] 
                                                  - this->cordicg__DOT__stage__BRA__14__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v16 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [0xfU]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [0xfU] 
                                                  + this->cordicg__DOT__stage__BRA__15__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [0xfU] 
                                                  - this->cordicg__DOT__stage__BRA__15__KET____DOT__ain)));
    this->multix16x16_r[0U] = ((0xffff0000U & this->multix16x16_r[0U]) 
                               | this->multix[0U]);
    this->multix16x16_r[0U] = ((0xffffU & this->multix16x16_r[0U]) 
                               | (0xffff0000U & (this->multix
                                                 [1U] 
                                                 << 0x10U)));
    this->multix16x16_r[1U] = ((0xffff0000U & this->multix16x16_r[1U]) 
                               | this->multix[2U]);
    this->multix16x16_r[1U] = ((0xffffU & this->multix16x16_r[1U]) 
                               | (0xffff0000U & (this->multix
                                                 [3U] 
                                                 << 0x10U)));
    this->multix16x16_r[2U] = ((0xffff0000U & this->multix16x16_r[2U]) 
                               | this->multix[4U]);
    this->multix16x16_r[2U] = ((0xffffU & this->multix16x16_r[2U]) 
                               | (0xffff0000U & (this->multix
                                                 [5U] 
                                                 << 0x10U)));
    this->multix16x16_r[3U] = ((0xffff0000U & this->multix16x16_r[3U]) 
                               | this->multix[6U]);
    this->multix16x16_r[3U] = ((0xffffU & this->multix16x16_r[3U]) 
                               | (0xffff0000U & (this->multix
                                                 [7U] 
                                                 << 0x10U)));
    this->multix16x16_r[4U] = ((0xffff0000U & this->multix16x16_r[4U]) 
                               | this->multix[8U]);
    this->multix16x16_r[4U] = ((0xffffU & this->multix16x16_r[4U]) 
                               | (0xffff0000U & (this->multix
                                                 [9U] 
                                                 << 0x10U)));
    this->multix16x16_r[5U] = ((0xffff0000U & this->multix16x16_r[5U]) 
                               | this->multix[0xaU]);
    this->multix16x16_r[5U] = ((0xffffU & this->multix16x16_r[5U]) 
                               | (0xffff0000U & (this->multix
                                                 [0xbU] 
                                                 << 0x10U)));
    this->multix16x16_r[6U] = ((0xffff0000U & this->multix16x16_r[6U]) 
                               | this->multix[0xcU]);
    this->multix16x16_r[6U] = ((0xffffU & this->multix16x16_r[6U]) 
                               | (0xffff0000U & (this->multix
                                                 [0xdU] 
                                                 << 0x10U)));
    this->multix16x16_r[7U] = ((0xffff0000U & this->multix16x16_r[7U]) 
                               | this->multix[0xeU]);
    this->multix16x16_r[7U] = ((0xffffU & this->multix16x16_r[7U]) 
                               | (0xffff0000U & (this->multix
                                                 [0xfU] 
                                                 << 0x10U)));
}

VL_INLINE_OPT void Vtop_ammod__N10::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__24(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__24\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->cordicg__DOT__pluscheck0[1U] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v0;
    this->cordicg__DOT__pluscheck0[2U] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v1;
    this->cordicg__DOT__pluscheck0[3U] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v2;
    this->cordicg__DOT__pluscheck0[4U] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v3;
    this->cordicg__DOT__pluscheck0[5U] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v4;
    this->cordicg__DOT__pluscheck0[6U] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v5;
    this->cordicg__DOT__pluscheck0[7U] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v6;
    this->cordicg__DOT__pluscheck0[8U] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v7;
    this->cordicg__DOT__pluscheck0[9U] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v8;
    this->cordicg__DOT__pluscheck0[0xaU] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v9;
    this->cordicg__DOT__pluscheck0[0xbU] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v10;
    this->cordicg__DOT__pluscheck0[0xcU] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v11;
    this->cordicg__DOT__pluscheck0[0xdU] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v12;
    this->cordicg__DOT__pluscheck0[0xeU] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v13;
    this->cordicg__DOT__pluscheck0[0xfU] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v14;
    this->cordicg__DOT__pluscheck0[0x10U] = this->__Vdlyvval__cordicg__DOT__pluscheck0__v15;
    this->cordicg__DOT__pluscheck[1U] = this->__Vdlyvval__cordicg__DOT__pluscheck__v0;
    this->cordicg__DOT__pluscheck[2U] = this->__Vdlyvval__cordicg__DOT__pluscheck__v1;
    this->cordicg__DOT__pluscheck[3U] = this->__Vdlyvval__cordicg__DOT__pluscheck__v2;
    this->cordicg__DOT__pluscheck[4U] = this->__Vdlyvval__cordicg__DOT__pluscheck__v3;
    this->cordicg__DOT__pluscheck[5U] = this->__Vdlyvval__cordicg__DOT__pluscheck__v4;
    this->cordicg__DOT__pluscheck[6U] = this->__Vdlyvval__cordicg__DOT__pluscheck__v5;
    this->cordicg__DOT__pluscheck[7U] = this->__Vdlyvval__cordicg__DOT__pluscheck__v6;
    this->cordicg__DOT__pluscheck[8U] = this->__Vdlyvval__cordicg__DOT__pluscheck__v7;
    this->cordicg__DOT__pluscheck[9U] = this->__Vdlyvval__cordicg__DOT__pluscheck__v8;
    this->cordicg__DOT__pluscheck[0xaU] = this->__Vdlyvval__cordicg__DOT__pluscheck__v9;
    this->cordicg__DOT__pluscheck[0xbU] = this->__Vdlyvval__cordicg__DOT__pluscheck__v10;
    this->cordicg__DOT__pluscheck[0xcU] = this->__Vdlyvval__cordicg__DOT__pluscheck__v11;
    this->cordicg__DOT__pluscheck[0xdU] = this->__Vdlyvval__cordicg__DOT__pluscheck__v12;
    this->cordicg__DOT__pluscheck[0xeU] = this->__Vdlyvval__cordicg__DOT__pluscheck__v13;
    this->cordicg__DOT__pluscheck[0xfU] = this->__Vdlyvval__cordicg__DOT__pluscheck__v14;
    this->cordicg__DOT__pluscheck[0x10U] = this->__Vdlyvval__cordicg__DOT__pluscheck__v15;
    this->cordicg__DOT__x[0U] = this->__Vdlyvval__cordicg__DOT__x__v0;
    this->cordicg__DOT__x[1U] = this->__Vdlyvval__cordicg__DOT__x__v1;
    this->cordicg__DOT__x[2U] = this->__Vdlyvval__cordicg__DOT__x__v2;
    this->cordicg__DOT__x[3U] = this->__Vdlyvval__cordicg__DOT__x__v3;
    this->cordicg__DOT__x[4U] = this->__Vdlyvval__cordicg__DOT__x__v4;
    this->cordicg__DOT__x[5U] = this->__Vdlyvval__cordicg__DOT__x__v5;
    this->cordicg__DOT__x[6U] = this->__Vdlyvval__cordicg__DOT__x__v6;
    this->cordicg__DOT__x[7U] = this->__Vdlyvval__cordicg__DOT__x__v7;
    this->cordicg__DOT__x[8U] = this->__Vdlyvval__cordicg__DOT__x__v8;
    this->cordicg__DOT__x[9U] = this->__Vdlyvval__cordicg__DOT__x__v9;
    this->cordicg__DOT__x[0xaU] = this->__Vdlyvval__cordicg__DOT__x__v10;
    this->cordicg__DOT__x[0xbU] = this->__Vdlyvval__cordicg__DOT__x__v11;
    this->cordicg__DOT__x[0xcU] = this->__Vdlyvval__cordicg__DOT__x__v12;
    this->cordicg__DOT__x[0xdU] = this->__Vdlyvval__cordicg__DOT__x__v13;
    this->cordicg__DOT__x[0xeU] = this->__Vdlyvval__cordicg__DOT__x__v14;
    this->cordicg__DOT__x[0xfU] = this->__Vdlyvval__cordicg__DOT__x__v15;
    this->cordicg__DOT__x[0x10U] = this->__Vdlyvval__cordicg__DOT__x__v16;
    this->cordicg__DOT__y[0U] = this->__Vdlyvval__cordicg__DOT__y__v0;
    this->cordicg__DOT__y[1U] = this->__Vdlyvval__cordicg__DOT__y__v1;
    this->cordicg__DOT__y[2U] = this->__Vdlyvval__cordicg__DOT__y__v2;
    this->cordicg__DOT__y[3U] = this->__Vdlyvval__cordicg__DOT__y__v3;
    this->cordicg__DOT__y[4U] = this->__Vdlyvval__cordicg__DOT__y__v4;
    this->cordicg__DOT__y[5U] = this->__Vdlyvval__cordicg__DOT__y__v5;
    this->cordicg__DOT__y[6U] = this->__Vdlyvval__cordicg__DOT__y__v6;
    this->cordicg__DOT__y[7U] = this->__Vdlyvval__cordicg__DOT__y__v7;
    this->cordicg__DOT__y[8U] = this->__Vdlyvval__cordicg__DOT__y__v8;
    this->cordicg__DOT__y[9U] = this->__Vdlyvval__cordicg__DOT__y__v9;
    this->cordicg__DOT__y[0xaU] = this->__Vdlyvval__cordicg__DOT__y__v10;
    this->cordicg__DOT__y[0xbU] = this->__Vdlyvval__cordicg__DOT__y__v11;
    this->cordicg__DOT__y[0xcU] = this->__Vdlyvval__cordicg__DOT__y__v12;
    this->cordicg__DOT__y[0xdU] = this->__Vdlyvval__cordicg__DOT__y__v13;
    this->cordicg__DOT__y[0xeU] = this->__Vdlyvval__cordicg__DOT__y__v14;
    this->cordicg__DOT__y[0xfU] = this->__Vdlyvval__cordicg__DOT__y__v15;
    this->cordicg__DOT__y[0x10U] = this->__Vdlyvval__cordicg__DOT__y__v16;
    this->cordicg__DOT__z[0U] = this->__Vdlyvval__cordicg__DOT__z__v0;
    this->cordicg__DOT__z[1U] = this->__Vdlyvval__cordicg__DOT__z__v1;
    this->cordicg__DOT__z[2U] = this->__Vdlyvval__cordicg__DOT__z__v2;
    this->cordicg__DOT__z[3U] = this->__Vdlyvval__cordicg__DOT__z__v3;
    this->cordicg__DOT__z[4U] = this->__Vdlyvval__cordicg__DOT__z__v4;
    this->cordicg__DOT__z[5U] = this->__Vdlyvval__cordicg__DOT__z__v5;
    this->cordicg__DOT__z[6U] = this->__Vdlyvval__cordicg__DOT__z__v6;
    this->cordicg__DOT__z[7U] = this->__Vdlyvval__cordicg__DOT__z__v7;
    this->cordicg__DOT__z[8U] = this->__Vdlyvval__cordicg__DOT__z__v8;
    this->cordicg__DOT__z[9U] = this->__Vdlyvval__cordicg__DOT__z__v9;
    this->cordicg__DOT__z[0xaU] = this->__Vdlyvval__cordicg__DOT__z__v10;
    this->cordicg__DOT__z[0xbU] = this->__Vdlyvval__cordicg__DOT__z__v11;
    this->cordicg__DOT__z[0xcU] = this->__Vdlyvval__cordicg__DOT__z__v12;
    this->cordicg__DOT__z[0xdU] = this->__Vdlyvval__cordicg__DOT__z__v13;
    this->cordicg__DOT__z[0xeU] = this->__Vdlyvval__cordicg__DOT__z__v14;
    this->cordicg__DOT__z[0xfU] = this->__Vdlyvval__cordicg__DOT__z__v15;
    this->cordicg__DOT__z[0x10U] = this->__Vdlyvval__cordicg__DOT__z__v16;
    this->cordicg__DOT__yin_1 = this->cordicg__DOT__genblk3__DOT__yin_d;
    this->cordicg__DOT__xin_1 = this->cordicg__DOT__genblk3__DOT__xin_d;
    this->ampx_d2 = ((IData)(this->gphtime) ? (0xffffU 
                                               & (IData)(this->ampx_d))
                      : 0U);
    this->cordicg__DOT__phaseout = this->cordicg__DOT__phaseout_r;
    this->cordicg__DOT__zg1 = this->cordicg__DOT__zg0;
    this->cordicg__DOT__phasein_1 = this->cordicg__DOT__genblk3__DOT__phasein_d;
    this->phaseinit = (0x1ffffU & ((this->phasetime 
                                    >> 0xaU) + this->pini_d));
    this->multidelay__DOT__dout = (1U & ((IData)(this->multidelay__DOT__usual__DOT__shifter) 
                                         >> 0xcU));
    this->pinidelay__DOT__dout = (0x1ffffU & (this->pinidelay__DOT__usual__DOT__shifter[3U] 
                                              >> 6U));
    this->ampxdelay__DOT__dout = (0xffffU & this->ampxdelay__DOT__usual__DOT__shifter[3U]);
    this->phtime__DOT__gateout = (1U & ((IData)(this->phtime__DOT__gatesr) 
                                        >> 4U));
    this->phtime__DOT__phasetime = this->phtime__DOT__phasetime_r3;
    this->phtime__DOT__phasetime_r2 = this->phtime__DOT__phasetime_r1;
    this->gateout = this->gateout_r;
    this->gphaseinit = this->gphtime;
    this->cordicg__DOT__reg_delay__DOT__dout = (1U 
                                                & (this->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                                                   >> 0x13U));
    this->cordicg__DOT__error = this->cordicg__DOT__errorr;
    this->cordicg__DOT__genblk6__DOT__ydummy = (1U 
                                                & ((this->cordicg__DOT__ysum3 
                                                    - this->cordicg__DOT__ysum2_d) 
                                                   >> 0x10U));
    this->cordicg__DOT__yout_r = (0xffffU & (this->cordicg__DOT__ysum3 
                                             - this->cordicg__DOT__ysum2_d));
    this->cordicg__DOT__genblk6__DOT__xdummy = (1U 
                                                & ((this->cordicg__DOT__xsum3 
                                                    - this->cordicg__DOT__xsum2_d) 
                                                   >> 0x10U));
    this->cordicg__DOT__xout_r = (0xffffU & (this->cordicg__DOT__xsum3 
                                             - this->cordicg__DOT__xsum2_d));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__15__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__15__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__14__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__14__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__13__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__13__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__12__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__12__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__11__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__11__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__10__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__10__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__9__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__9__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__8__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__8__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__7__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__7__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__6__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__6__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__5__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__5__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__4__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__4__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__3__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__3__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__2__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__2__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__1__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__1__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__zi 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__0__KET____DOT__mult2__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult2__DOT__xi4)))));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__zr 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__common;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__0__KET____DOT__mult2__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult2__DOT__xr4)))));
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__15__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__15__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__14__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__14__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__13__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__13__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__12__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__12__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__11__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__11__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__10__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__10__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__9__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__9__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__8__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__8__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__7__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__7__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__6__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__6__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__5__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__5__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__4__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__4__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__3__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__3__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__2__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__2__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__1__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__1__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult1__DOT__xr4)))));
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__zi 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__0__KET____DOT__mult1__DOT__addi)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult1__DOT__xi4)))));
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__zr 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__common;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__0__KET____DOT__mult1__DOT__addr)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult1__DOT__xr4)))));
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
    this->multiy16x16[0U] = this->multiy16x16_r[0U];
    this->multiy16x16[1U] = this->multiy16x16_r[1U];
    this->multiy16x16[2U] = this->multiy16x16_r[2U];
    this->multiy16x16[3U] = this->multiy16x16_r[3U];
    this->multiy16x16[4U] = this->multiy16x16_r[4U];
    this->multiy16x16[5U] = this->multiy16x16_r[5U];
    this->multiy16x16[6U] = this->multiy16x16_r[6U];
    this->multiy16x16[7U] = this->multiy16x16_r[7U];
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
    this->multix16x16[0U] = this->multix16x16_r[0U];
    this->multix16x16[1U] = this->multix16x16_r[1U];
    this->multix16x16[2U] = this->multix16x16_r[2U];
    this->multix16x16[3U] = this->multix16x16_r[3U];
    this->multix16x16[4U] = this->multix16x16_r[4U];
    this->multix16x16[5U] = this->multix16x16_r[5U];
    this->multix16x16[6U] = this->multix16x16_r[6U];
    this->multix16x16[7U] = this->multix16x16_r[7U];
    this->cordicg__DOT__phaseout1 = this->cordicg__DOT__phaseout;
    this->cordicg__DOT__shiftpi = (1U & ((this->cordicg__DOT__phasein_1 
                                          >> 0x10U) 
                                         ^ (this->cordicg__DOT__phasein_1 
                                            >> 0xfU)));
    this->gmulti = this->multidelay__DOT__dout;
    this->pini_d = this->pinidelay__DOT__dout;
    this->ampx_d = this->ampxdelay__DOT__dout;
    this->phasetime = this->phtime__DOT__phasetime;
    this->gphtime = this->phtime__DOT__gateout;
    this->cordicg__DOT__gout = this->cordicg__DOT__reg_delay__DOT__dout;
    this->genblk2__BRA__15__KET____DOT__zi = this->genblk2__BRA__15__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__15__KET____DOT__zr = this->genblk2__BRA__15__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__14__KET____DOT__zi = this->genblk2__BRA__14__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__14__KET____DOT__zr = this->genblk2__BRA__14__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__13__KET____DOT__zi = this->genblk2__BRA__13__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__13__KET____DOT__zr = this->genblk2__BRA__13__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__12__KET____DOT__zi = this->genblk2__BRA__12__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__12__KET____DOT__zr = this->genblk2__BRA__12__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__11__KET____DOT__zi = this->genblk2__BRA__11__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__11__KET____DOT__zr = this->genblk2__BRA__11__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__10__KET____DOT__zi = this->genblk2__BRA__10__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__10__KET____DOT__zr = this->genblk2__BRA__10__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__9__KET____DOT__zi = this->genblk2__BRA__9__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__9__KET____DOT__zr = this->genblk2__BRA__9__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__8__KET____DOT__zi = this->genblk2__BRA__8__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__8__KET____DOT__zr = this->genblk2__BRA__8__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__7__KET____DOT__zi = this->genblk2__BRA__7__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__7__KET____DOT__zr = this->genblk2__BRA__7__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__6__KET____DOT__zi = this->genblk2__BRA__6__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__6__KET____DOT__zr = this->genblk2__BRA__6__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__5__KET____DOT__zi = this->genblk2__BRA__5__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__5__KET____DOT__zr = this->genblk2__BRA__5__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__4__KET____DOT__zi = this->genblk2__BRA__4__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__4__KET____DOT__zr = this->genblk2__BRA__4__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__3__KET____DOT__zi = this->genblk2__BRA__3__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__3__KET____DOT__zr = this->genblk2__BRA__3__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__2__KET____DOT__zi = this->genblk2__BRA__2__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__2__KET____DOT__zr = this->genblk2__BRA__2__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__1__KET____DOT__zi = this->genblk2__BRA__1__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__1__KET____DOT__zr = this->genblk2__BRA__1__KET____DOT__mult2__DOT__zr;
    this->genblk2__BRA__0__KET____DOT__zi = this->genblk2__BRA__0__KET____DOT__mult2__DOT__zi;
    this->genblk2__BRA__0__KET____DOT__zr = this->genblk2__BRA__0__KET____DOT__mult2__DOT__zr;
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
    this->cordicg__DOT__xin = this->ampx_d2;
    this->cordicg__DOT__zg0 = this->cordicg__DOT__zg;
    this->cordicg__DOT__phasein = this->phaseinit;
    this->phtime__DOT__phasetime_r1 = this->phtime__DOT__phasetime_r0;
    this->cordicg__DOT__gin = this->gphaseinit;
    this->gcordic = this->cordicg__DOT__gout;
    this->cordicg__DOT__yout = this->cordicg__DOT__yout_r;
    this->cordicg__DOT__ysum2_d = this->cordicg__DOT__ysum2;
    this->cordicg__DOT__ysum3 = (0x1ffffU & (this->cordicg__DOT__ysum0 
                                             - this->cordicg__DOT__ysum1));
    this->cordicg__DOT__xout = this->cordicg__DOT__xout_r;
    this->cordicg__DOT__xsum2_d = this->cordicg__DOT__xsum2;
    this->cordicg__DOT__xsum3 = (0x1ffffU & (this->cordicg__DOT__xsum0 
                                             - this->cordicg__DOT__xsum1));
    this->multiy[0xfU] = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zi 
                                             >> 0xfU)));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult2__DOT__yi3))));
    this->multix[0xfU] = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zr 
                                             >> 0xfU)));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult2__DOT__yi3))));
    this->multiy[0xeU] = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zi 
                                             >> 0xfU)));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult2__DOT__yi3))));
    this->multix[0xeU] = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zr 
                                             >> 0xfU)));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult2__DOT__yi3))));
    this->multiy[0xdU] = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zi 
                                             >> 0xfU)));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult2__DOT__yi3))));
    this->multix[0xdU] = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zr 
                                             >> 0xfU)));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult2__DOT__yi3))));
    this->multiy[0xcU] = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zi 
                                             >> 0xfU)));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult2__DOT__yi3))));
    this->multix[0xcU] = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zr 
                                             >> 0xfU)));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult2__DOT__yi3))));
    this->multiy[0xbU] = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zi 
                                             >> 0xfU)));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult2__DOT__yi3))));
    this->multix[0xbU] = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zr 
                                             >> 0xfU)));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult2__DOT__yi3))));
    this->multiy[0xaU] = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zi 
                                             >> 0xfU)));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult2__DOT__yi3))));
    this->multix[0xaU] = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zr 
                                             >> 0xfU)));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult2__DOT__yi3))));
    this->multiy[9U] = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zi 
                                           >> 0xfU)));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult2__DOT__yi3))));
    this->multix[9U] = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zr 
                                           >> 0xfU)));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult2__DOT__yi3))));
    this->multiy[8U] = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zi 
                                           >> 0xfU)));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult2__DOT__yi3))));
    this->multix[8U] = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zr 
                                           >> 0xfU)));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult2__DOT__yi3))));
    this->multiy[7U] = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zi 
                                           >> 0xfU)));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult2__DOT__yi3))));
    this->multix[7U] = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zr 
                                           >> 0xfU)));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult2__DOT__yi3))));
    this->multiy[6U] = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zi 
                                           >> 0xfU)));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult2__DOT__yi3))));
    this->multix[6U] = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zr 
                                           >> 0xfU)));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult2__DOT__yi3))));
    this->multiy[5U] = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zi 
                                           >> 0xfU)));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult2__DOT__yi3))));
    this->multix[5U] = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zr 
                                           >> 0xfU)));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult2__DOT__yi3))));
    this->multiy[4U] = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zi 
                                           >> 0xfU)));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult2__DOT__yi3))));
    this->multix[4U] = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zr 
                                           >> 0xfU)));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult2__DOT__yi3))));
    this->multiy[3U] = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zi 
                                           >> 0xfU)));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    this->multix[3U] = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zr 
                                           >> 0xfU)));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult2__DOT__yi3))));
    this->multiy[2U] = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zi 
                                           >> 0xfU)));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    this->multix[2U] = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zr 
                                           >> 0xfU)));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult2__DOT__yi3))));
    this->multiy[1U] = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zi 
                                           >> 0xfU)));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    this->multix[1U] = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zr 
                                           >> 0xfU)));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult2__DOT__yi3))));
    this->multiy[0U] = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zi 
                                           >> 0xfU)));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xi4 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__xi3;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    this->multix[0U] = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zr 
                                           >> 0xfU)));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__common 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__mult0;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xr4 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__xr3;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult2__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult2__DOT__yi3))));
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__xi4 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__xi3;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__addi 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       + VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__common 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__mult0;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__xr4 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__xr3;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__addr 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult1__DOT__yr3)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult1__DOT__yi3))));
    this->cordicg__DOT__zg = this->cordicg__DOT__z[0xfU];
    this->cordicg__DOT__reg_delay__DOT__din = this->cordicg__DOT__gin;
    this->multidelay__DOT__din = this->gcordic;
    this->cordicg__DOT__yout1 = this->cordicg__DOT__yout;
    this->cordicg__DOT__xout1 = this->cordicg__DOT__xout;
    this->phtime__DOT__phasetime_r0 = (0x7ffffffU & (IData)(this->phtime__DOT__phasetime_w));
    this->cordicg__DOT__ysum2 = (0x1ffffU & (VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__yg, 0xcU) 
                                             - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__yg, 0xeU)));
    this->cordicg__DOT__ysum0 = (0x1ffffU & (VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__yg, 1U) 
                                             + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__yg, 3U)));
    this->cordicg__DOT__ysum1 = (0x1ffffU & (VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__yg, 6U) 
                                             + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__yg, 9U)));
    this->cordicg__DOT__xsum2 = (0x1ffffU & (VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__xg, 0xcU) 
                                             - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__xg, 0xeU)));
    this->cordicg__DOT__xsum0 = (0x1ffffU & (VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__xg, 1U) 
                                             + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__xg, 3U)));
    this->cordicg__DOT__xsum1 = (0x1ffffU & (VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__xg, 6U) 
                                             + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__xg, 9U)));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__15__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__14__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__13__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__12__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__11__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__10__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__9__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__8__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__7__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__6__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__5__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__4__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xi3 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__xi2;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult2__DOT__yi2)))));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xr3 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__xr2;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__yr3 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__yr2;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__yi3 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__yi2;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__15__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__14__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__13__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__12__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__11__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__10__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__9__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__8__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__7__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__6__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__5__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__4__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__yi2;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__xi3 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__xi2;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__mult0 
        = (0x1ffffffffULL & VL_MULS_QQQ(33,33,33, (0x1ffffffffULL 
                                                   & VL_EXTENDS_QI(33,17, this->genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon)), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult1__DOT__yi2)))));
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__xr3 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__xr2;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__yr3 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__yr2;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__yi3 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__yi2;
    this->phtime__DOT__phasetime_w = (0x3fffffffffffffULL 
                                      & ((QData)((IData)(this->phtime__DOT__freq_r)) 
                                         * (QData)((IData)(this->phtime__DOT__tcnt_r))));
    this->cordicg__DOT__yg = this->cordicg__DOT__y[0xfU];
    this->cordicg__DOT__xg = this->cordicg__DOT__x[0xfU];
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__15__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__14__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__13__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__12__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__11__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__10__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__9__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__8__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__7__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__6__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__5__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__4__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__3__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__2__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__1__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xi2 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__xi1;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult2__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult2__DOT__xi1))));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xr2 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__xr1;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__yr2 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__yr1;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__yi2 
        = this->genblk2__BRA__0__KET____DOT__mult2__DOT__yi1;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__15__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__15__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__14__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__14__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__13__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__13__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__12__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__12__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__11__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__11__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__10__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__10__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__9__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__9__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__8__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__8__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__7__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__7__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__6__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__6__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__5__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__5__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__4__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__4__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__3__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__3__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__2__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__2__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__1__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__1__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__xi2 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__xi1;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__addcommon 
        = (0x1ffffU & (VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult1__DOT__xr1)) 
                       - VL_EXTENDS_II(17,16, (IData)(this->genblk2__BRA__0__KET____DOT__mult1__DOT__xi1))));
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__xr2 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__xr1;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__yr2 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__yr1;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__yi2 
        = this->genblk2__BRA__0__KET____DOT__mult1__DOT__yi1;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__15__KET____DOT__envxi;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__15__KET____DOT__envyi;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__14__KET____DOT__envxi;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__14__KET____DOT__envyi;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__13__KET____DOT__envxi;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__13__KET____DOT__envyi;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__12__KET____DOT__envxi;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__12__KET____DOT__envyi;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__11__KET____DOT__envxi;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__11__KET____DOT__envyi;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__10__KET____DOT__envxi;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__10__KET____DOT__envyi;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__9__KET____DOT__envxi;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__9__KET____DOT__envyi;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__8__KET____DOT__envxi;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__8__KET____DOT__envyi;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__7__KET____DOT__envxi;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__7__KET____DOT__envyi;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__6__KET____DOT__envxi;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__6__KET____DOT__envyi;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__5__KET____DOT__envxi;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__5__KET____DOT__envyi;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__4__KET____DOT__envxi;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__4__KET____DOT__envyi;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__3__KET____DOT__envxi;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__3__KET____DOT__envyi;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__2__KET____DOT__envxi;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__2__KET____DOT__envyi;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__1__KET____DOT__envxi;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__1__KET____DOT__envyi;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xi1 
        = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xr1 
        = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__yr1 
        = this->genblk2__BRA__0__KET____DOT__envxi;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__yi1 
        = this->genblk2__BRA__0__KET____DOT__envyi;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__15__KET____DOT__cospi;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__15__KET____DOT__sinpi;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__14__KET____DOT__cospi;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__14__KET____DOT__sinpi;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__13__KET____DOT__cospi;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__13__KET____DOT__sinpi;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__12__KET____DOT__cospi;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__12__KET____DOT__sinpi;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__11__KET____DOT__cospi;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__11__KET____DOT__sinpi;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__10__KET____DOT__cospi;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__10__KET____DOT__sinpi;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__9__KET____DOT__cospi;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__9__KET____DOT__sinpi;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__8__KET____DOT__cospi;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__8__KET____DOT__sinpi;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__7__KET____DOT__cospi;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__7__KET____DOT__sinpi;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__6__KET____DOT__cospi;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__6__KET____DOT__sinpi;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__5__KET____DOT__cospi;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__5__KET____DOT__sinpi;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__4__KET____DOT__cospi;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__4__KET____DOT__sinpi;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__3__KET____DOT__cospi;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__3__KET____DOT__sinpi;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__2__KET____DOT__cospi;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__2__KET____DOT__sinpi;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__1__KET____DOT__cospi;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__1__KET____DOT__sinpi;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__xi1 
        = this->sin;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__xr1 
        = this->cos;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__yr1 
        = this->genblk2__BRA__0__KET____DOT__cospi;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__yi1 
        = this->genblk2__BRA__0__KET____DOT__sinpi;
    this->genblk2__BRA__15__KET____DOT__zi1 = this->genblk2__BRA__15__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__15__KET____DOT__zr1 = this->genblk2__BRA__15__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__14__KET____DOT__zi1 = this->genblk2__BRA__14__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__14__KET____DOT__zr1 = this->genblk2__BRA__14__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__13__KET____DOT__zi1 = this->genblk2__BRA__13__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__13__KET____DOT__zr1 = this->genblk2__BRA__13__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__12__KET____DOT__zi1 = this->genblk2__BRA__12__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__12__KET____DOT__zr1 = this->genblk2__BRA__12__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__11__KET____DOT__zi1 = this->genblk2__BRA__11__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__11__KET____DOT__zr1 = this->genblk2__BRA__11__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__10__KET____DOT__zi1 = this->genblk2__BRA__10__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__10__KET____DOT__zr1 = this->genblk2__BRA__10__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__9__KET____DOT__zi1 = this->genblk2__BRA__9__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__9__KET____DOT__zr1 = this->genblk2__BRA__9__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__8__KET____DOT__zi1 = this->genblk2__BRA__8__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__8__KET____DOT__zr1 = this->genblk2__BRA__8__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__7__KET____DOT__zi1 = this->genblk2__BRA__7__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__7__KET____DOT__zr1 = this->genblk2__BRA__7__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__6__KET____DOT__zi1 = this->genblk2__BRA__6__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__6__KET____DOT__zr1 = this->genblk2__BRA__6__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__5__KET____DOT__zi1 = this->genblk2__BRA__5__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__5__KET____DOT__zr1 = this->genblk2__BRA__5__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__4__KET____DOT__zi1 = this->genblk2__BRA__4__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__4__KET____DOT__zr1 = this->genblk2__BRA__4__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__3__KET____DOT__zi1 = this->genblk2__BRA__3__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__3__KET____DOT__zr1 = this->genblk2__BRA__3__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__2__KET____DOT__zi1 = this->genblk2__BRA__2__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__2__KET____DOT__zr1 = this->genblk2__BRA__2__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__1__KET____DOT__zi1 = this->genblk2__BRA__1__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__1__KET____DOT__zr1 = this->genblk2__BRA__1__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__0__KET____DOT__zi1 = this->genblk2__BRA__0__KET____DOT__mult1__DOT__zi;
    this->genblk2__BRA__0__KET____DOT__zr1 = this->genblk2__BRA__0__KET____DOT__mult1__DOT__zr;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__15__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__15__KET____DOT__envxi = this->envx
        [0xfU];
    this->genblk2__BRA__15__KET____DOT__envyi = this->envy
        [0xfU];
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__14__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__14__KET____DOT__envxi = this->envx
        [0xeU];
    this->genblk2__BRA__14__KET____DOT__envyi = this->envy
        [0xeU];
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__13__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__13__KET____DOT__envxi = this->envx
        [0xdU];
    this->genblk2__BRA__13__KET____DOT__envyi = this->envy
        [0xdU];
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__12__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__12__KET____DOT__envxi = this->envx
        [0xcU];
    this->genblk2__BRA__12__KET____DOT__envyi = this->envy
        [0xcU];
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__11__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__11__KET____DOT__envxi = this->envx
        [0xbU];
    this->genblk2__BRA__11__KET____DOT__envyi = this->envy
        [0xbU];
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__10__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__10__KET____DOT__envxi = this->envx
        [0xaU];
    this->genblk2__BRA__10__KET____DOT__envyi = this->envy
        [0xaU];
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__9__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__9__KET____DOT__envxi = this->envx
        [9U];
    this->genblk2__BRA__9__KET____DOT__envyi = this->envy
        [9U];
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__8__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__8__KET____DOT__envxi = this->envx
        [8U];
    this->genblk2__BRA__8__KET____DOT__envyi = this->envy
        [8U];
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__7__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__7__KET____DOT__envxi = this->envx
        [7U];
    this->genblk2__BRA__7__KET____DOT__envyi = this->envy
        [7U];
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__6__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__6__KET____DOT__envxi = this->envx
        [6U];
    this->genblk2__BRA__6__KET____DOT__envyi = this->envy
        [6U];
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__5__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__5__KET____DOT__envxi = this->envx
        [5U];
    this->genblk2__BRA__5__KET____DOT__envyi = this->envy
        [5U];
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__4__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__4__KET____DOT__envxi = this->envx
        [4U];
    this->genblk2__BRA__4__KET____DOT__envyi = this->envy
        [4U];
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__3__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__3__KET____DOT__envxi = this->envx
        [3U];
    this->genblk2__BRA__3__KET____DOT__envyi = this->envy
        [3U];
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__2__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__2__KET____DOT__envxi = this->envx
        [2U];
    this->genblk2__BRA__2__KET____DOT__envyi = this->envy
        [2U];
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__1__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__1__KET____DOT__envxi = this->envx
        [1U];
    this->genblk2__BRA__1__KET____DOT__envyi = this->envy
        [1U];
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xi 
        = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zi1 
                              >> 0xfU)));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__xr 
        = (0xffffU & (IData)((this->genblk2__BRA__0__KET____DOT__zr1 
                              >> 0xfU)));
    this->genblk2__BRA__0__KET____DOT__envxi = this->envx
        [0U];
    this->genblk2__BRA__0__KET____DOT__envyi = this->envy
        [0U];
    this->genblk2__BRA__15__KET____DOT__cospi = this->cosp
        [0xfU];
    this->genblk2__BRA__15__KET____DOT__sinpi = this->sinp
        [0xfU];
    this->genblk2__BRA__14__KET____DOT__cospi = this->cosp
        [0xeU];
    this->genblk2__BRA__14__KET____DOT__sinpi = this->sinp
        [0xeU];
    this->genblk2__BRA__13__KET____DOT__cospi = this->cosp
        [0xdU];
    this->genblk2__BRA__13__KET____DOT__sinpi = this->sinp
        [0xdU];
    this->genblk2__BRA__12__KET____DOT__cospi = this->cosp
        [0xcU];
    this->genblk2__BRA__12__KET____DOT__sinpi = this->sinp
        [0xcU];
    this->genblk2__BRA__11__KET____DOT__cospi = this->cosp
        [0xbU];
    this->genblk2__BRA__11__KET____DOT__sinpi = this->sinp
        [0xbU];
    this->genblk2__BRA__10__KET____DOT__cospi = this->cosp
        [0xaU];
    this->genblk2__BRA__10__KET____DOT__sinpi = this->sinp
        [0xaU];
    this->genblk2__BRA__9__KET____DOT__cospi = this->cosp
        [9U];
    this->genblk2__BRA__9__KET____DOT__sinpi = this->sinp
        [9U];
    this->genblk2__BRA__8__KET____DOT__cospi = this->cosp
        [8U];
    this->genblk2__BRA__8__KET____DOT__sinpi = this->sinp
        [8U];
    this->genblk2__BRA__7__KET____DOT__cospi = this->cosp
        [7U];
    this->genblk2__BRA__7__KET____DOT__sinpi = this->sinp
        [7U];
    this->genblk2__BRA__6__KET____DOT__cospi = this->cosp
        [6U];
    this->genblk2__BRA__6__KET____DOT__sinpi = this->sinp
        [6U];
    this->genblk2__BRA__5__KET____DOT__cospi = this->cosp
        [5U];
    this->genblk2__BRA__5__KET____DOT__sinpi = this->sinp
        [5U];
    this->genblk2__BRA__4__KET____DOT__cospi = this->cosp
        [4U];
    this->genblk2__BRA__4__KET____DOT__sinpi = this->sinp
        [4U];
    this->genblk2__BRA__3__KET____DOT__cospi = this->cosp
        [3U];
    this->genblk2__BRA__3__KET____DOT__sinpi = this->sinp
        [3U];
    this->genblk2__BRA__2__KET____DOT__cospi = this->cosp
        [2U];
    this->genblk2__BRA__2__KET____DOT__sinpi = this->sinp
        [2U];
    this->genblk2__BRA__1__KET____DOT__cospi = this->cosp
        [1U];
    this->genblk2__BRA__1__KET____DOT__sinpi = this->sinp
        [1U];
    this->sin = this->sin_w;
    this->cos = this->cos_w;
    this->genblk2__BRA__0__KET____DOT__cospi = this->cosp
        [0U];
    this->genblk2__BRA__0__KET____DOT__sinpi = this->sinp
        [0U];
    this->sin_w = this->cordicg__DOT__yout;
    this->cos_w = this->cordicg__DOT__xout;
    this->cosp[1U] = (0xffffU & ((this->freqcossinp32x16_d[2U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[1U] 
                                               >> 0x10U)));
    this->cosp[2U] = (0xffffU & ((this->freqcossinp32x16_d[3U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[2U] 
                                               >> 0x10U)));
    this->cosp[3U] = (0xffffU & ((this->freqcossinp32x16_d[4U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[3U] 
                                               >> 0x10U)));
    this->cosp[4U] = (0xffffU & ((this->freqcossinp32x16_d[5U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[4U] 
                                               >> 0x10U)));
    this->cosp[5U] = (0xffffU & ((this->freqcossinp32x16_d[6U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[5U] 
                                               >> 0x10U)));
    this->cosp[6U] = (0xffffU & ((this->freqcossinp32x16_d[7U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[6U] 
                                               >> 0x10U)));
    this->cosp[7U] = (0xffffU & ((this->freqcossinp32x16_d[8U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[7U] 
                                               >> 0x10U)));
    this->cosp[8U] = (0xffffU & ((this->freqcossinp32x16_d[9U] 
                                  << 0x10U) | (this->freqcossinp32x16_d[8U] 
                                               >> 0x10U)));
    this->cosp[9U] = (0xffffU & ((this->freqcossinp32x16_d[0xaU] 
                                  << 0x10U) | (this->freqcossinp32x16_d[9U] 
                                               >> 0x10U)));
    this->cosp[0xaU] = (0xffffU & ((this->freqcossinp32x16_d[0xbU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xaU] 
                                                 >> 0x10U)));
    this->cosp[0xbU] = (0xffffU & ((this->freqcossinp32x16_d[0xcU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xbU] 
                                                 >> 0x10U)));
    this->cosp[0xcU] = (0xffffU & ((this->freqcossinp32x16_d[0xdU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xcU] 
                                                 >> 0x10U)));
    this->cosp[0xdU] = (0xffffU & ((this->freqcossinp32x16_d[0xeU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xdU] 
                                                 >> 0x10U)));
    this->cosp[0xeU] = (0xffffU & ((this->freqcossinp32x16_d[0xfU] 
                                    << 0x10U) | (this->freqcossinp32x16_d[0xeU] 
                                                 >> 0x10U)));
    this->cosp[0xfU] = (0xffffU & (this->freqcossinp32x16_d[0xfU] 
                                   >> 0x10U));
    this->sinp[1U] = (0xffffU & this->freqcossinp32x16_d[1U]);
    this->sinp[2U] = (0xffffU & this->freqcossinp32x16_d[2U]);
    this->sinp[3U] = (0xffffU & this->freqcossinp32x16_d[3U]);
    this->sinp[4U] = (0xffffU & this->freqcossinp32x16_d[4U]);
    this->sinp[5U] = (0xffffU & this->freqcossinp32x16_d[5U]);
    this->sinp[6U] = (0xffffU & this->freqcossinp32x16_d[6U]);
    this->sinp[7U] = (0xffffU & this->freqcossinp32x16_d[7U]);
    this->sinp[8U] = (0xffffU & this->freqcossinp32x16_d[8U]);
    this->sinp[9U] = (0xffffU & this->freqcossinp32x16_d[9U]);
    this->sinp[0xaU] = (0xffffU & this->freqcossinp32x16_d[0xaU]);
    this->sinp[0xbU] = (0xffffU & this->freqcossinp32x16_d[0xbU]);
    this->sinp[0xcU] = (0xffffU & this->freqcossinp32x16_d[0xcU]);
    this->sinp[0xdU] = (0xffffU & this->freqcossinp32x16_d[0xdU]);
    this->sinp[0xeU] = (0xffffU & this->freqcossinp32x16_d[0xeU]);
    this->sinp[0xfU] = (0xffffU & this->freqcossinp32x16_d[0xfU]);
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__15__KET____DOT__envxi;
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__15__KET____DOT__envyi;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__14__KET____DOT__envxi;
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__14__KET____DOT__envyi;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__13__KET____DOT__envxi;
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__13__KET____DOT__envyi;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__12__KET____DOT__envxi;
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__12__KET____DOT__envyi;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__11__KET____DOT__envxi;
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__11__KET____DOT__envyi;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__10__KET____DOT__envxi;
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__10__KET____DOT__envyi;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__9__KET____DOT__envxi;
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__9__KET____DOT__envyi;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__8__KET____DOT__envxi;
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__8__KET____DOT__envyi;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__7__KET____DOT__envxi;
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__7__KET____DOT__envyi;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__6__KET____DOT__envxi;
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__6__KET____DOT__envyi;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__5__KET____DOT__envxi;
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__5__KET____DOT__envyi;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__4__KET____DOT__envxi;
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__4__KET____DOT__envyi;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__3__KET____DOT__envxi;
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__3__KET____DOT__envyi;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__2__KET____DOT__envxi;
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__2__KET____DOT__envyi;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__1__KET____DOT__envxi;
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__1__KET____DOT__envyi;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__yr 
        = this->genblk2__BRA__0__KET____DOT__envxi;
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__yi 
        = this->genblk2__BRA__0__KET____DOT__envyi;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__15__KET____DOT__cospi;
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__15__KET____DOT__sinpi;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__14__KET____DOT__cospi;
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__14__KET____DOT__sinpi;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__13__KET____DOT__cospi;
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__13__KET____DOT__sinpi;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__12__KET____DOT__cospi;
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__12__KET____DOT__sinpi;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__11__KET____DOT__cospi;
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__11__KET____DOT__sinpi;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__10__KET____DOT__cospi;
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__10__KET____DOT__sinpi;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__9__KET____DOT__cospi;
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__9__KET____DOT__sinpi;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__8__KET____DOT__cospi;
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__8__KET____DOT__sinpi;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__7__KET____DOT__cospi;
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__7__KET____DOT__sinpi;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__6__KET____DOT__cospi;
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__6__KET____DOT__sinpi;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__5__KET____DOT__cospi;
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__5__KET____DOT__sinpi;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__4__KET____DOT__cospi;
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__4__KET____DOT__sinpi;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__3__KET____DOT__cospi;
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__3__KET____DOT__sinpi;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__2__KET____DOT__cospi;
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__2__KET____DOT__sinpi;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__1__KET____DOT__cospi;
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__1__KET____DOT__sinpi;
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
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__yr 
        = this->genblk2__BRA__0__KET____DOT__cospi;
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__yi 
        = this->genblk2__BRA__0__KET____DOT__sinpi;
}

VL_INLINE_OPT void Vtop_ammod__N10::_combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__33(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10::_combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__33\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->envx[0U] = (0xffffU & ((this->envxy32x16[1U] 
                                  << 0x10U) | (this->envxy32x16[0U] 
                                               >> 0x10U)));
    this->envx[1U] = (0xffffU & ((this->envxy32x16[2U] 
                                  << 0x10U) | (this->envxy32x16[1U] 
                                               >> 0x10U)));
    this->envx[2U] = (0xffffU & ((this->envxy32x16[3U] 
                                  << 0x10U) | (this->envxy32x16[2U] 
                                               >> 0x10U)));
    this->envx[3U] = (0xffffU & ((this->envxy32x16[4U] 
                                  << 0x10U) | (this->envxy32x16[3U] 
                                               >> 0x10U)));
    this->envx[4U] = (0xffffU & ((this->envxy32x16[5U] 
                                  << 0x10U) | (this->envxy32x16[4U] 
                                               >> 0x10U)));
    this->envx[5U] = (0xffffU & ((this->envxy32x16[6U] 
                                  << 0x10U) | (this->envxy32x16[5U] 
                                               >> 0x10U)));
    this->envx[6U] = (0xffffU & ((this->envxy32x16[7U] 
                                  << 0x10U) | (this->envxy32x16[6U] 
                                               >> 0x10U)));
    this->envx[7U] = (0xffffU & ((this->envxy32x16[8U] 
                                  << 0x10U) | (this->envxy32x16[7U] 
                                               >> 0x10U)));
    this->envx[8U] = (0xffffU & ((this->envxy32x16[9U] 
                                  << 0x10U) | (this->envxy32x16[8U] 
                                               >> 0x10U)));
    this->envx[9U] = (0xffffU & ((this->envxy32x16[0xaU] 
                                  << 0x10U) | (this->envxy32x16[9U] 
                                               >> 0x10U)));
    this->envx[0xaU] = (0xffffU & ((this->envxy32x16[0xbU] 
                                    << 0x10U) | (this->envxy32x16[0xaU] 
                                                 >> 0x10U)));
    this->envx[0xbU] = (0xffffU & ((this->envxy32x16[0xcU] 
                                    << 0x10U) | (this->envxy32x16[0xbU] 
                                                 >> 0x10U)));
    this->envx[0xcU] = (0xffffU & ((this->envxy32x16[0xdU] 
                                    << 0x10U) | (this->envxy32x16[0xcU] 
                                                 >> 0x10U)));
    this->envx[0xdU] = (0xffffU & ((this->envxy32x16[0xeU] 
                                    << 0x10U) | (this->envxy32x16[0xdU] 
                                                 >> 0x10U)));
    this->envx[0xeU] = (0xffffU & ((this->envxy32x16[0xfU] 
                                    << 0x10U) | (this->envxy32x16[0xeU] 
                                                 >> 0x10U)));
    this->envx[0xfU] = (0xffffU & (this->envxy32x16[0xfU] 
                                   >> 0x10U));
    this->envy[0U] = (0xffffU & this->envxy32x16[0U]);
    this->envy[1U] = (0xffffU & this->envxy32x16[1U]);
    this->envy[2U] = (0xffffU & this->envxy32x16[2U]);
    this->envy[3U] = (0xffffU & this->envxy32x16[3U]);
    this->envy[4U] = (0xffffU & this->envxy32x16[4U]);
    this->envy[5U] = (0xffffU & this->envxy32x16[5U]);
    this->envy[6U] = (0xffffU & this->envxy32x16[6U]);
    this->envy[7U] = (0xffffU & this->envxy32x16[7U]);
    this->envy[8U] = (0xffffU & this->envxy32x16[8U]);
    this->envy[9U] = (0xffffU & this->envxy32x16[9U]);
    this->envy[0xaU] = (0xffffU & this->envxy32x16[0xaU]);
    this->envy[0xbU] = (0xffffU & this->envxy32x16[0xbU]);
    this->envy[0xcU] = (0xffffU & this->envxy32x16[0xcU]);
    this->envy[0xdU] = (0xffffU & this->envxy32x16[0xdU]);
    this->envy[0xeU] = (0xffffU & this->envxy32x16[0xeU]);
    this->envy[0xfU] = (0xffffU & this->envxy32x16[0xfU]);
}

VL_INLINE_OPT void Vtop_ammod__N10::_combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__39(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10::_combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__39\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->pinidelay__DOT__din = this->pini;
    this->ampxdelay__DOT__din = this->ampx;
    this->phtime__DOT__tcnt = this->tcnt;
    this->phtime__DOT__gatein = this->gatein;
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
    this->freq = (0x7ffffffU & (this->freq32 >> 5U));
    this->phtime__DOT__freq = this->freq;
}

VL_INLINE_OPT void Vtop_ammod__N10::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__29(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ammod__N10::_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__29\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp16[4];
    WData/*127:0*/ __Vtemp20[4];
    WData/*12799:0*/ __Vtemp24[400];
    IData/*31:0*/ __Vilp;
    // Body
    this->cordicg__DOT__genblk3__DOT__yin_d = 0U;
    this->phtime__DOT__tcnt_r = this->tcnt;
    this->phtime__DOT__freq_r = this->freq;
    this->cordicg__DOT__genblk3__DOT__xin_d = this->ampx_d2;
    this->cordicg__DOT__phaseout_r = this->cordicg__DOT__zg1;
    this->cordicg__DOT__genblk3__DOT__phasein_d = this->phaseinit;
    this->multidelay__DOT__usual__DOT__shifter = ((0x1ffeU 
                                                   & ((IData)(this->multidelay__DOT__usual__DOT__shifter) 
                                                      << 1U)) 
                                                  | (IData)(this->gcordic));
    __Vtemp16[1U] = ((0x1ffffU & (this->pinidelay__DOT__usual__DOT__shifter[0U] 
                                  >> 0xfU)) | (0xfffe0000U 
                                               & (this->pinidelay__DOT__usual__DOT__shifter[1U] 
                                                  << 0x11U)));
    __Vtemp16[2U] = ((0x1ffffU & (this->pinidelay__DOT__usual__DOT__shifter[1U] 
                                  >> 0xfU)) | (0xfffe0000U 
                                               & (this->pinidelay__DOT__usual__DOT__shifter[2U] 
                                                  << 0x11U)));
    __Vtemp16[3U] = ((0x1ffffU & (this->pinidelay__DOT__usual__DOT__shifter[2U] 
                                  >> 0xfU)) | (0x7e0000U 
                                               & (this->pinidelay__DOT__usual__DOT__shifter[3U] 
                                                  << 0x11U)));
    this->pinidelay__DOT__usual__DOT__shifter[0U] = 
        ((0xfffe0000U & (this->pinidelay__DOT__usual__DOT__shifter[0U] 
                         << 0x11U)) | this->pini);
    this->pinidelay__DOT__usual__DOT__shifter[1U] = 
        __Vtemp16[1U];
    this->pinidelay__DOT__usual__DOT__shifter[2U] = 
        __Vtemp16[2U];
    this->pinidelay__DOT__usual__DOT__shifter[3U] = 
        __Vtemp16[3U];
    __Vtemp20[1U] = ((0xffffU & (this->ampxdelay__DOT__usual__DOT__shifter[0U] 
                                 >> 0x10U)) | (0xffff0000U 
                                               & (this->ampxdelay__DOT__usual__DOT__shifter[1U] 
                                                  << 0x10U)));
    __Vtemp20[2U] = ((0xffffU & (this->ampxdelay__DOT__usual__DOT__shifter[1U] 
                                 >> 0x10U)) | (0xffff0000U 
                                               & (this->ampxdelay__DOT__usual__DOT__shifter[2U] 
                                                  << 0x10U)));
    __Vtemp20[3U] = (0xffffU & (this->ampxdelay__DOT__usual__DOT__shifter[2U] 
                                >> 0x10U));
    this->ampxdelay__DOT__usual__DOT__shifter[0U] = 
        ((0xffff0000U & (this->ampxdelay__DOT__usual__DOT__shifter[0U] 
                         << 0x10U)) | (IData)(this->ampx));
    this->ampxdelay__DOT__usual__DOT__shifter[1U] = 
        __Vtemp20[1U];
    this->ampxdelay__DOT__usual__DOT__shifter[2U] = 
        __Vtemp20[2U];
    this->ampxdelay__DOT__usual__DOT__shifter[3U] = 
        __Vtemp20[3U];
    this->phtime__DOT__gatesr = ((0xfeU & ((IData)(this->phtime__DOT__gatesr) 
                                           << 1U)) 
                                 | (IData)(this->gatein));
    this->phtime__DOT__phasetime_r3 = this->phtime__DOT__phasetime_r2;
    this->gateout_r = this->gmulti;
    this->__Vdlyvval__cordicg__DOT__y__v0 = (0x1ffffU 
                                             & ((IData)(this->cordicg__DOT__shiftpi)
                                                 ? 
                                                (- 
                                                 VL_EXTENDS_II(17,16, (IData)(this->cordicg__DOT__yin_1)))
                                                 : 
                                                VL_EXTENDS_II(17,16, (IData)(this->cordicg__DOT__yin_1))));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xfU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xfU], 0xfU)));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xfU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xfU], 0xfU)));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xfU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xfU], 0xfU)));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xfU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xfU], 0xfU)));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xeU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xeU], 0xeU)));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xeU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xeU], 0xeU)));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xeU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xeU], 0xeU)));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xeU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xeU], 0xeU)));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xdU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xdU], 0xdU)));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xdU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xdU], 0xdU)));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xdU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xdU], 0xdU)));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xdU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xdU], 0xdU)));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xcU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xcU], 0xcU)));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xcU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xcU], 0xcU)));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xcU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xcU], 0xcU)));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xcU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xcU], 0xcU)));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xbU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xbU], 0xbU)));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xbU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xbU], 0xbU)));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xbU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xbU], 0xbU)));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xbU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xbU], 0xbU)));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xaU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xaU], 0xaU)));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0xaU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                        [0xaU], 0xaU)));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xaU] 
                       - VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xaU], 0xaU)));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0xaU] 
                       + VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                        [0xaU], 0xaU)));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[9U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [9U], 9U)));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[9U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [9U], 9U)));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[9U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [9U], 9U)));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[9U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [9U], 9U)));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[8U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [8U], 8U)));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[8U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [8U], 8U)));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[8U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [8U], 8U)));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[8U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [8U], 8U)));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[7U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [7U], 7U)));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[7U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [7U], 7U)));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[7U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [7U], 7U)));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[7U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [7U], 7U)));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[6U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [6U], 6U)));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[6U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [6U], 6U)));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[6U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [6U], 6U)));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[6U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [6U], 6U)));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[5U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [5U], 5U)));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[5U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [5U], 5U)));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[5U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [5U], 5U)));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[5U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [5U], 5U)));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[4U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [4U], 4U)));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[4U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [4U], 4U)));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[4U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [4U], 4U)));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[4U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [4U], 4U)));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[3U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [3U], 3U)));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[3U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [3U], 3U)));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[3U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [3U], 3U)));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[3U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [3U], 3U)));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[2U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [2U], 2U)));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[2U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [2U], 2U)));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[2U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [2U], 2U)));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[2U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [2U], 2U)));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[1U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [1U], 1U)));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[1U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__y
                                      [1U], 1U)));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[1U] - 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [1U], 1U)));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[1U] + 
                       VL_SHIFTRS_III(17,17,32, this->cordicg__DOT__x
                                      [1U], 1U)));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__xplus 
        = (0x1ffffU & (this->cordicg__DOT__x[0U] + 
                       this->cordicg__DOT__y[0U]));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__xminus 
        = (0x1ffffU & (this->cordicg__DOT__x[0U] - 
                       this->cordicg__DOT__y[0U]));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__yplus 
        = (0x1ffffU & (this->cordicg__DOT__y[0U] - 
                       this->cordicg__DOT__x[0U]));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__yminus 
        = (0x1ffffU & (this->cordicg__DOT__y[0U] + 
                       this->cordicg__DOT__x[0U]));
    this->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
        = ((0xffffeU & (this->cordicg__DOT__reg_delay__DOT__usual__DOT__shifter 
                        << 1U)) | (IData)(this->gphaseinit));
    this->cordicg__DOT__errorr = (1U & (((IData)(this->cordicg__DOT__genblk6__DOT__xdummy) 
                                         ^ ((IData)(this->cordicg__DOT__xout_r) 
                                            >> 0xfU)) 
                                        | ((IData)(this->cordicg__DOT__genblk6__DOT__ydummy) 
                                           ^ ((IData)(this->cordicg__DOT__yout) 
                                              >> 0xfU))));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xfU] 
                       - this->cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__15__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xfU] 
                       + this->cordicg__DOT__stage__BRA__15__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xeU] 
                       - this->cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__14__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xeU] 
                       + this->cordicg__DOT__stage__BRA__14__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xdU] 
                       - this->cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__13__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xdU] 
                       + this->cordicg__DOT__stage__BRA__13__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xcU] 
                       - this->cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__12__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xcU] 
                       + this->cordicg__DOT__stage__BRA__12__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xbU] 
                       - this->cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__11__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xbU] 
                       + this->cordicg__DOT__stage__BRA__11__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xaU] 
                       - this->cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__10__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0xaU] 
                       + this->cordicg__DOT__stage__BRA__10__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[9U] - this->cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__9__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[9U] + this->cordicg__DOT__stage__BRA__9__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[8U] - this->cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__8__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[8U] + this->cordicg__DOT__stage__BRA__8__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[7U] - this->cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__7__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[7U] + this->cordicg__DOT__stage__BRA__7__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[6U] - this->cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__6__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[6U] + this->cordicg__DOT__stage__BRA__6__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[5U] - this->cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__5__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[5U] + this->cordicg__DOT__stage__BRA__5__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[4U] - this->cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__4__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[4U] + this->cordicg__DOT__stage__BRA__4__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[3U] - this->cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__3__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[3U] + this->cordicg__DOT__stage__BRA__3__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[2U] - this->cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__2__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[2U] + this->cordicg__DOT__stage__BRA__2__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[1U] - this->cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__1__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[1U] + this->cordicg__DOT__stage__BRA__1__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__zminus 
        = (0x1ffffU & (this->cordicg__DOT__z[0U] - this->cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    this->cordicg__DOT__stage__BRA__0__KET____DOT__zplus 
        = (0x1ffffU & (this->cordicg__DOT__z[0U] + this->cordicg__DOT__stage__BRA__0__KET____DOT__ain));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__15__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__15__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__15__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__15__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__15__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__14__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__14__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__14__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__14__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__14__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__13__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__13__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__13__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__13__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__13__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__12__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__12__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__12__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__12__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__12__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__11__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__11__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__11__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__11__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__11__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__10__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__10__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__10__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__10__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__10__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__9__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__9__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__9__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__9__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__9__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__8__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__8__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__8__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__8__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__8__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__7__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__7__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__7__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__7__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__7__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__6__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__6__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__6__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__6__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__6__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__5__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__5__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__5__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__5__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__5__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__4__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__4__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__4__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__4__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__4__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__3__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__3__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__3__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__3__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__3__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__2__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__2__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__2__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__2__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__2__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__1__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__1__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__1__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__1__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__1__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__0__KET____DOT__mult2__DOT__multi 
                             + this->genblk2__BRA__0__KET____DOT__mult2__DOT__commonr2));
    this->genblk2__BRA__0__KET____DOT__mult2__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__0__KET____DOT__mult2__DOT__multr 
                             + this->genblk2__BRA__0__KET____DOT__mult2__DOT__commonr1));
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__15__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__15__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__15__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__15__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__15__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__14__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__14__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__14__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__14__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__14__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__13__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__13__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__13__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__13__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__13__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__12__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__12__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__12__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__12__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__12__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__11__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__11__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__11__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__11__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__11__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__10__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__10__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__10__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__10__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__10__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__9__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__9__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__9__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__9__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__9__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__8__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__8__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__8__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__8__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__8__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__7__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__7__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__7__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__7__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__7__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__6__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__6__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__6__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__6__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__6__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__5__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__5__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__5__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__5__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__5__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__4__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__4__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__4__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__4__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__4__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__3__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__3__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__3__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__3__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__3__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__2__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__2__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__2__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__2__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__2__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__1__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__1__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__1__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__1__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__1__KET____DOT__mult1__DOT__commonr1));
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__zi_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__0__KET____DOT__mult1__DOT__multi 
                             + this->genblk2__BRA__0__KET____DOT__mult1__DOT__commonr2));
    this->genblk2__BRA__0__KET____DOT__mult1__DOT__zr_int 
        = (0x1ffffffffULL & (this->genblk2__BRA__0__KET____DOT__mult1__DOT__multr 
                             + this->genblk2__BRA__0__KET____DOT__mult1__DOT__commonr1));
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v0 
        = this->cordicg__DOT__plusall[0U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v1 
        = this->cordicg__DOT__plusall[1U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v2 
        = this->cordicg__DOT__plusall[2U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v3 
        = this->cordicg__DOT__plusall[3U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v4 
        = this->cordicg__DOT__plusall[4U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v5 
        = this->cordicg__DOT__plusall[5U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v6 
        = this->cordicg__DOT__plusall[6U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v7 
        = this->cordicg__DOT__plusall[7U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v8 
        = this->cordicg__DOT__plusall[8U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v9 
        = this->cordicg__DOT__plusall[9U];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v10 
        = this->cordicg__DOT__plusall[0xaU];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v11 
        = this->cordicg__DOT__plusall[0xbU];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v12 
        = this->cordicg__DOT__plusall[0xcU];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v13 
        = this->cordicg__DOT__plusall[0xdU];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v14 
        = this->cordicg__DOT__plusall[0xeU];
    this->__Vdlyvval__cordicg__DOT__pluscheck0__v15 
        = this->cordicg__DOT__plusall[0xfU];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v0 = 
        this->cordicg__DOT__plusall[0U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v1 = 
        this->cordicg__DOT__plusall[1U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v2 = 
        this->cordicg__DOT__plusall[2U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v3 = 
        this->cordicg__DOT__plusall[3U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v4 = 
        this->cordicg__DOT__plusall[4U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v5 = 
        this->cordicg__DOT__plusall[5U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v6 = 
        this->cordicg__DOT__plusall[6U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v7 = 
        this->cordicg__DOT__plusall[7U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v8 = 
        this->cordicg__DOT__plusall[8U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v9 = 
        this->cordicg__DOT__plusall[9U];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v10 
        = this->cordicg__DOT__plusall[0xaU];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v11 
        = this->cordicg__DOT__plusall[0xbU];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v12 
        = this->cordicg__DOT__plusall[0xcU];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v13 
        = this->cordicg__DOT__plusall[0xdU];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v14 
        = this->cordicg__DOT__plusall[0xeU];
    this->__Vdlyvval__cordicg__DOT__pluscheck__v15 
        = this->cordicg__DOT__plusall[0xfU];
    this->__Vdlyvval__cordicg__DOT__x__v0 = (0x1ffffU 
                                             & ((IData)(this->cordicg__DOT__shiftpi)
                                                 ? 
                                                (- 
                                                 VL_EXTENDS_II(17,16, (IData)(this->cordicg__DOT__xin_1)))
                                                 : 
                                                VL_EXTENDS_II(17,16, (IData)(this->cordicg__DOT__xin_1))));
    if (this->cordicg__DOT__plusall[0U]) {
        this->__Vdlyvval__cordicg__DOT__x__v1 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [0U] 
                                                    + 
                                                    this->cordicg__DOT__y
                                                    [0U]));
        this->__Vdlyvval__cordicg__DOT__y__v1 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [0U] 
                                                    - 
                                                    this->cordicg__DOT__x
                                                    [0U]));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v1 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [0U] 
                                                    - 
                                                    this->cordicg__DOT__y
                                                    [0U]));
        this->__Vdlyvval__cordicg__DOT__y__v1 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [0U] 
                                                    + 
                                                    this->cordicg__DOT__x
                                                    [0U]));
    }
    if (this->cordicg__DOT__plusall[1U]) {
        this->__Vdlyvval__cordicg__DOT__x__v2 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [1U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [1U], 1U)));
        this->__Vdlyvval__cordicg__DOT__y__v2 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [1U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [1U], 1U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v2 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [1U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [1U], 1U)));
        this->__Vdlyvval__cordicg__DOT__y__v2 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [1U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [1U], 1U)));
    }
    if (this->cordicg__DOT__plusall[2U]) {
        this->__Vdlyvval__cordicg__DOT__x__v3 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [2U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [2U], 2U)));
        this->__Vdlyvval__cordicg__DOT__y__v3 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [2U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [2U], 2U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v3 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [2U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [2U], 2U)));
        this->__Vdlyvval__cordicg__DOT__y__v3 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [2U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [2U], 2U)));
    }
    if (this->cordicg__DOT__plusall[3U]) {
        this->__Vdlyvval__cordicg__DOT__x__v4 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [3U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [3U], 3U)));
        this->__Vdlyvval__cordicg__DOT__y__v4 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [3U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [3U], 3U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v4 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [3U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [3U], 3U)));
        this->__Vdlyvval__cordicg__DOT__y__v4 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [3U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [3U], 3U)));
    }
    if (this->cordicg__DOT__plusall[4U]) {
        this->__Vdlyvval__cordicg__DOT__x__v5 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [4U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [4U], 4U)));
        this->__Vdlyvval__cordicg__DOT__y__v5 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [4U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [4U], 4U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v5 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [4U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [4U], 4U)));
        this->__Vdlyvval__cordicg__DOT__y__v5 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [4U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [4U], 4U)));
    }
    if (this->cordicg__DOT__plusall[5U]) {
        this->__Vdlyvval__cordicg__DOT__x__v6 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [5U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [5U], 5U)));
        this->__Vdlyvval__cordicg__DOT__y__v6 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [5U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [5U], 5U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v6 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [5U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [5U], 5U)));
        this->__Vdlyvval__cordicg__DOT__y__v6 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [5U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [5U], 5U)));
    }
    if (this->cordicg__DOT__plusall[6U]) {
        this->__Vdlyvval__cordicg__DOT__x__v7 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [6U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [6U], 6U)));
        this->__Vdlyvval__cordicg__DOT__y__v7 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [6U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [6U], 6U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v7 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [6U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [6U], 6U)));
        this->__Vdlyvval__cordicg__DOT__y__v7 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [6U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [6U], 6U)));
    }
    if (this->cordicg__DOT__plusall[7U]) {
        this->__Vdlyvval__cordicg__DOT__x__v8 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [7U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [7U], 7U)));
        this->__Vdlyvval__cordicg__DOT__y__v8 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [7U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [7U], 7U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v8 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [7U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [7U], 7U)));
        this->__Vdlyvval__cordicg__DOT__y__v8 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [7U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [7U], 7U)));
    }
    if (this->cordicg__DOT__plusall[8U]) {
        this->__Vdlyvval__cordicg__DOT__x__v9 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [8U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [8U], 8U)));
        this->__Vdlyvval__cordicg__DOT__y__v9 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [8U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [8U], 8U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v9 = (0x1ffffU 
                                                 & (this->cordicg__DOT__x
                                                    [8U] 
                                                    - 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__y
                                                                   [8U], 8U)));
        this->__Vdlyvval__cordicg__DOT__y__v9 = (0x1ffffU 
                                                 & (this->cordicg__DOT__y
                                                    [8U] 
                                                    + 
                                                    VL_SHIFTRS_III(17,17,32, 
                                                                   this->cordicg__DOT__x
                                                                   [8U], 8U)));
    }
    if (this->cordicg__DOT__plusall[9U]) {
        this->__Vdlyvval__cordicg__DOT__x__v10 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [9U] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [9U], 9U)));
        this->__Vdlyvval__cordicg__DOT__y__v10 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [9U] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [9U], 9U)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v10 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [9U] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [9U], 9U)));
        this->__Vdlyvval__cordicg__DOT__y__v10 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [9U] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [9U], 9U)));
    }
    if (this->cordicg__DOT__plusall[0xaU]) {
        this->__Vdlyvval__cordicg__DOT__x__v11 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xaU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xaU], 0xaU)));
        this->__Vdlyvval__cordicg__DOT__y__v11 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xaU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xaU], 0xaU)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v11 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xaU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xaU], 0xaU)));
        this->__Vdlyvval__cordicg__DOT__y__v11 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xaU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xaU], 0xaU)));
    }
    if (this->cordicg__DOT__plusall[0xbU]) {
        this->__Vdlyvval__cordicg__DOT__x__v12 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xbU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xbU], 0xbU)));
        this->__Vdlyvval__cordicg__DOT__y__v12 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xbU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xbU], 0xbU)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v12 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xbU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xbU], 0xbU)));
        this->__Vdlyvval__cordicg__DOT__y__v12 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xbU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xbU], 0xbU)));
    }
    if (this->cordicg__DOT__plusall[0xcU]) {
        this->__Vdlyvval__cordicg__DOT__x__v13 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xcU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xcU], 0xcU)));
        this->__Vdlyvval__cordicg__DOT__y__v13 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xcU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xcU], 0xcU)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v13 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xcU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xcU], 0xcU)));
        this->__Vdlyvval__cordicg__DOT__y__v13 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xcU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xcU], 0xcU)));
    }
    if (this->cordicg__DOT__plusall[0xdU]) {
        this->__Vdlyvval__cordicg__DOT__x__v14 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xdU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xdU], 0xdU)));
        this->__Vdlyvval__cordicg__DOT__y__v14 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xdU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xdU], 0xdU)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v14 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xdU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xdU], 0xdU)));
        this->__Vdlyvval__cordicg__DOT__y__v14 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xdU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xdU], 0xdU)));
    }
    if (this->cordicg__DOT__plusall[0xeU]) {
        this->__Vdlyvval__cordicg__DOT__x__v15 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xeU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xeU], 0xeU)));
        this->__Vdlyvval__cordicg__DOT__y__v15 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xeU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xeU], 0xeU)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v15 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xeU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xeU], 0xeU)));
        this->__Vdlyvval__cordicg__DOT__y__v15 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xeU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xeU], 0xeU)));
    }
    if (this->cordicg__DOT__plusall[0xfU]) {
        this->__Vdlyvval__cordicg__DOT__x__v16 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xfU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xfU], 0xfU)));
        this->__Vdlyvval__cordicg__DOT__y__v16 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xfU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xfU], 0xfU)));
    } else {
        this->__Vdlyvval__cordicg__DOT__x__v16 = (0x1ffffU 
                                                  & (this->cordicg__DOT__x
                                                     [0xfU] 
                                                     - 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__y
                                                                    [0xfU], 0xfU)));
        this->__Vdlyvval__cordicg__DOT__y__v16 = (0x1ffffU 
                                                  & (this->cordicg__DOT__y
                                                     [0xfU] 
                                                     + 
                                                     VL_SHIFTRS_III(17,17,32, 
                                                                    this->cordicg__DOT__x
                                                                    [0xfU], 0xfU)));
    }
    __Vtemp24[0x10U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0U];
    __Vtemp24[0x11U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[1U];
    __Vtemp24[0x12U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[2U];
    __Vtemp24[0x13U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[3U];
    __Vtemp24[0x14U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[4U];
    __Vtemp24[0x15U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[5U];
    __Vtemp24[0x16U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[6U];
    __Vtemp24[0x17U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[7U];
    __Vtemp24[0x18U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[8U];
    __Vtemp24[0x19U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[9U];
    __Vtemp24[0x1aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xaU];
    __Vtemp24[0x1bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbU];
    __Vtemp24[0x1cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xcU];
    __Vtemp24[0x1dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdU];
    __Vtemp24[0x1eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xeU];
    __Vtemp24[0x1fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfU];
    __Vtemp24[0x20U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10U];
    __Vtemp24[0x21U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11U];
    __Vtemp24[0x22U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12U];
    __Vtemp24[0x23U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13U];
    __Vtemp24[0x24U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14U];
    __Vtemp24[0x25U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15U];
    __Vtemp24[0x26U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16U];
    __Vtemp24[0x27U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17U];
    __Vtemp24[0x28U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x18U];
    __Vtemp24[0x29U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x19U];
    __Vtemp24[0x2aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x1aU];
    __Vtemp24[0x2bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x1bU];
    __Vtemp24[0x2cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x1cU];
    __Vtemp24[0x2dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x1dU];
    __Vtemp24[0x2eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x1eU];
    __Vtemp24[0x2fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x1fU];
    __Vtemp24[0x30U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x20U];
    __Vtemp24[0x31U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x21U];
    __Vtemp24[0x32U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x22U];
    __Vtemp24[0x33U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x23U];
    __Vtemp24[0x34U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x24U];
    __Vtemp24[0x35U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x25U];
    __Vtemp24[0x36U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x26U];
    __Vtemp24[0x37U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x27U];
    __Vtemp24[0x38U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x28U];
    __Vtemp24[0x39U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x29U];
    __Vtemp24[0x3aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x2aU];
    __Vtemp24[0x3bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x2bU];
    __Vtemp24[0x3cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x2cU];
    __Vtemp24[0x3dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x2dU];
    __Vtemp24[0x3eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x2eU];
    __Vtemp24[0x3fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x2fU];
    __Vtemp24[0x40U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x30U];
    __Vtemp24[0x41U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x31U];
    __Vtemp24[0x42U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x32U];
    __Vtemp24[0x43U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x33U];
    __Vtemp24[0x44U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x34U];
    __Vtemp24[0x45U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x35U];
    __Vtemp24[0x46U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x36U];
    __Vtemp24[0x47U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x37U];
    __Vtemp24[0x48U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x38U];
    __Vtemp24[0x49U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x39U];
    __Vtemp24[0x4aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x3aU];
    __Vtemp24[0x4bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x3bU];
    __Vtemp24[0x4cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x3cU];
    __Vtemp24[0x4dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x3dU];
    __Vtemp24[0x4eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x3eU];
    __Vtemp24[0x4fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x3fU];
    __Vtemp24[0x50U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x40U];
    __Vtemp24[0x51U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x41U];
    __Vtemp24[0x52U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x42U];
    __Vtemp24[0x53U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x43U];
    __Vtemp24[0x54U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x44U];
    __Vtemp24[0x55U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x45U];
    __Vtemp24[0x56U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x46U];
    __Vtemp24[0x57U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x47U];
    __Vtemp24[0x58U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x48U];
    __Vtemp24[0x59U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x49U];
    __Vtemp24[0x5aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x4aU];
    __Vtemp24[0x5bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x4bU];
    __Vtemp24[0x5cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x4cU];
    __Vtemp24[0x5dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x4dU];
    __Vtemp24[0x5eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x4eU];
    __Vtemp24[0x5fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x4fU];
    __Vtemp24[0x60U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x50U];
    __Vtemp24[0x61U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x51U];
    __Vtemp24[0x62U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x52U];
    __Vtemp24[0x63U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x53U];
    __Vtemp24[0x64U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x54U];
    __Vtemp24[0x65U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x55U];
    __Vtemp24[0x66U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x56U];
    __Vtemp24[0x67U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x57U];
    __Vtemp24[0x68U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x58U];
    __Vtemp24[0x69U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x59U];
    __Vtemp24[0x6aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x5aU];
    __Vtemp24[0x6bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x5bU];
    __Vtemp24[0x6cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x5cU];
    __Vtemp24[0x6dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x5dU];
    __Vtemp24[0x6eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x5eU];
    __Vtemp24[0x6fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x5fU];
    __Vtemp24[0x70U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x60U];
    __Vtemp24[0x71U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x61U];
    __Vtemp24[0x72U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x62U];
    __Vtemp24[0x73U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x63U];
    __Vtemp24[0x74U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x64U];
    __Vtemp24[0x75U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x65U];
    __Vtemp24[0x76U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x66U];
    __Vtemp24[0x77U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x67U];
    __Vtemp24[0x78U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x68U];
    __Vtemp24[0x79U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x69U];
    __Vtemp24[0x7aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x6aU];
    __Vtemp24[0x7bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x6bU];
    __Vtemp24[0x7cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x6cU];
    __Vtemp24[0x7dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x6dU];
    __Vtemp24[0x7eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x6eU];
    __Vtemp24[0x7fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x6fU];
    __Vtemp24[0x80U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x70U];
    __Vtemp24[0x81U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x71U];
    __Vtemp24[0x82U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x72U];
    __Vtemp24[0x83U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x73U];
    __Vtemp24[0x84U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x74U];
    __Vtemp24[0x85U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x75U];
    __Vtemp24[0x86U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x76U];
    __Vtemp24[0x87U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x77U];
    __Vtemp24[0x88U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x78U];
    __Vtemp24[0x89U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x79U];
    __Vtemp24[0x8aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x7aU];
    __Vtemp24[0x8bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x7bU];
    __Vtemp24[0x8cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x7cU];
    __Vtemp24[0x8dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x7dU];
    __Vtemp24[0x8eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x7eU];
    __Vtemp24[0x8fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x7fU];
    __Vtemp24[0x90U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x80U];
    __Vtemp24[0x91U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x81U];
    __Vtemp24[0x92U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x82U];
    __Vtemp24[0x93U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x83U];
    __Vtemp24[0x94U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x84U];
    __Vtemp24[0x95U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x85U];
    __Vtemp24[0x96U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x86U];
    __Vtemp24[0x97U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x87U];
    __Vtemp24[0x98U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x88U];
    __Vtemp24[0x99U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x89U];
    __Vtemp24[0x9aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x8aU];
    __Vtemp24[0x9bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x8bU];
    __Vtemp24[0x9cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x8cU];
    __Vtemp24[0x9dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x8dU];
    __Vtemp24[0x9eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x8eU];
    __Vtemp24[0x9fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x8fU];
    __Vtemp24[0xa0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x90U];
    __Vtemp24[0xa1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x91U];
    __Vtemp24[0xa2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x92U];
    __Vtemp24[0xa3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x93U];
    __Vtemp24[0xa4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x94U];
    __Vtemp24[0xa5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x95U];
    __Vtemp24[0xa6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x96U];
    __Vtemp24[0xa7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x97U];
    __Vtemp24[0xa8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x98U];
    __Vtemp24[0xa9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x99U];
    __Vtemp24[0xaaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x9aU];
    __Vtemp24[0xabU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x9bU];
    __Vtemp24[0xacU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x9cU];
    __Vtemp24[0xadU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x9dU];
    __Vtemp24[0xaeU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x9eU];
    __Vtemp24[0xafU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x9fU];
    __Vtemp24[0xb0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa0U];
    __Vtemp24[0xb1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa1U];
    __Vtemp24[0xb2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa2U];
    __Vtemp24[0xb3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa3U];
    __Vtemp24[0xb4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa4U];
    __Vtemp24[0xb5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa5U];
    __Vtemp24[0xb6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa6U];
    __Vtemp24[0xb7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa7U];
    __Vtemp24[0xb8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa8U];
    __Vtemp24[0xb9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xa9U];
    __Vtemp24[0xbaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xaaU];
    __Vtemp24[0xbbU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xabU];
    __Vtemp24[0xbcU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xacU];
    __Vtemp24[0xbdU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xadU];
    __Vtemp24[0xbeU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xaeU];
    __Vtemp24[0xbfU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xafU];
    __Vtemp24[0xc0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb0U];
    __Vtemp24[0xc1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb1U];
    __Vtemp24[0xc2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb2U];
    __Vtemp24[0xc3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb3U];
    __Vtemp24[0xc4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb4U];
    __Vtemp24[0xc5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb5U];
    __Vtemp24[0xc6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb6U];
    __Vtemp24[0xc7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb7U];
    __Vtemp24[0xc8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb8U];
    __Vtemp24[0xc9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xb9U];
    __Vtemp24[0xcaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbaU];
    __Vtemp24[0xcbU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbbU];
    __Vtemp24[0xccU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbcU];
    __Vtemp24[0xcdU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbdU];
    __Vtemp24[0xceU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbeU];
    __Vtemp24[0xcfU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbfU];
    __Vtemp24[0xd0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc0U];
    __Vtemp24[0xd1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc1U];
    __Vtemp24[0xd2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc2U];
    __Vtemp24[0xd3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc3U];
    __Vtemp24[0xd4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc4U];
    __Vtemp24[0xd5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc5U];
    __Vtemp24[0xd6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc6U];
    __Vtemp24[0xd7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc7U];
    __Vtemp24[0xd8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc8U];
    __Vtemp24[0xd9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xc9U];
    __Vtemp24[0xdaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xcaU];
    __Vtemp24[0xdbU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xcbU];
    __Vtemp24[0xdcU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xccU];
    __Vtemp24[0xddU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xcdU];
    __Vtemp24[0xdeU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xceU];
    __Vtemp24[0xdfU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xcfU];
    __Vtemp24[0xe0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd0U];
    __Vtemp24[0xe1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd1U];
    __Vtemp24[0xe2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd2U];
    __Vtemp24[0xe3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd3U];
    __Vtemp24[0xe4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd4U];
    __Vtemp24[0xe5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd5U];
    __Vtemp24[0xe6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd6U];
    __Vtemp24[0xe7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd7U];
    __Vtemp24[0xe8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd8U];
    __Vtemp24[0xe9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xd9U];
    __Vtemp24[0xeaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdaU];
    __Vtemp24[0xebU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdbU];
    __Vtemp24[0xecU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdcU];
    __Vtemp24[0xedU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xddU];
    __Vtemp24[0xeeU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdeU];
    __Vtemp24[0xefU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdfU];
    __Vtemp24[0xf0U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe0U];
    __Vtemp24[0xf1U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe1U];
    __Vtemp24[0xf2U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe2U];
    __Vtemp24[0xf3U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe3U];
    __Vtemp24[0xf4U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe4U];
    __Vtemp24[0xf5U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe5U];
    __Vtemp24[0xf6U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe6U];
    __Vtemp24[0xf7U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe7U];
    __Vtemp24[0xf8U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe8U];
    __Vtemp24[0xf9U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xe9U];
    __Vtemp24[0xfaU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xeaU];
    __Vtemp24[0xfbU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xebU];
    __Vtemp24[0xfcU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xecU];
    __Vtemp24[0xfdU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xedU];
    __Vtemp24[0xfeU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xeeU];
    __Vtemp24[0xffU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xefU];
    __Vtemp24[0x100U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf0U];
    __Vtemp24[0x101U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf1U];
    __Vtemp24[0x102U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf2U];
    __Vtemp24[0x103U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf3U];
    __Vtemp24[0x104U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf4U];
    __Vtemp24[0x105U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf5U];
    __Vtemp24[0x106U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf6U];
    __Vtemp24[0x107U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf7U];
    __Vtemp24[0x108U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf8U];
    __Vtemp24[0x109U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xf9U];
    __Vtemp24[0x10aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfaU];
    __Vtemp24[0x10bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfbU];
    __Vtemp24[0x10cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfcU];
    __Vtemp24[0x10dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfdU];
    __Vtemp24[0x10eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfeU];
    __Vtemp24[0x10fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0xffU];
    __Vtemp24[0x110U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x100U];
    __Vtemp24[0x111U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x101U];
    __Vtemp24[0x112U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x102U];
    __Vtemp24[0x113U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x103U];
    __Vtemp24[0x114U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x104U];
    __Vtemp24[0x115U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x105U];
    __Vtemp24[0x116U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x106U];
    __Vtemp24[0x117U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x107U];
    __Vtemp24[0x118U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x108U];
    __Vtemp24[0x119U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x109U];
    __Vtemp24[0x11aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10aU];
    __Vtemp24[0x11bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10bU];
    __Vtemp24[0x11cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10cU];
    __Vtemp24[0x11dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10dU];
    __Vtemp24[0x11eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10eU];
    __Vtemp24[0x11fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x10fU];
    __Vtemp24[0x120U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x110U];
    __Vtemp24[0x121U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x111U];
    __Vtemp24[0x122U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x112U];
    __Vtemp24[0x123U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x113U];
    __Vtemp24[0x124U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x114U];
    __Vtemp24[0x125U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x115U];
    __Vtemp24[0x126U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x116U];
    __Vtemp24[0x127U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x117U];
    __Vtemp24[0x128U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x118U];
    __Vtemp24[0x129U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x119U];
    __Vtemp24[0x12aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11aU];
    __Vtemp24[0x12bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11bU];
    __Vtemp24[0x12cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11cU];
    __Vtemp24[0x12dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11dU];
    __Vtemp24[0x12eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11eU];
    __Vtemp24[0x12fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x11fU];
    __Vtemp24[0x130U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x120U];
    __Vtemp24[0x131U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x121U];
    __Vtemp24[0x132U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x122U];
    __Vtemp24[0x133U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x123U];
    __Vtemp24[0x134U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x124U];
    __Vtemp24[0x135U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x125U];
    __Vtemp24[0x136U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x126U];
    __Vtemp24[0x137U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x127U];
    __Vtemp24[0x138U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x128U];
    __Vtemp24[0x139U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x129U];
    __Vtemp24[0x13aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12aU];
    __Vtemp24[0x13bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12bU];
    __Vtemp24[0x13cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12cU];
    __Vtemp24[0x13dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12dU];
    __Vtemp24[0x13eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12eU];
    __Vtemp24[0x13fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x12fU];
    __Vtemp24[0x140U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x130U];
    __Vtemp24[0x141U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x131U];
    __Vtemp24[0x142U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x132U];
    __Vtemp24[0x143U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x133U];
    __Vtemp24[0x144U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x134U];
    __Vtemp24[0x145U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x135U];
    __Vtemp24[0x146U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x136U];
    __Vtemp24[0x147U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x137U];
    __Vtemp24[0x148U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x138U];
    __Vtemp24[0x149U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x139U];
    __Vtemp24[0x14aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13aU];
    __Vtemp24[0x14bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13bU];
    __Vtemp24[0x14cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13cU];
    __Vtemp24[0x14dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13dU];
    __Vtemp24[0x14eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13eU];
    __Vtemp24[0x14fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x13fU];
    __Vtemp24[0x150U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x140U];
    __Vtemp24[0x151U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x141U];
    __Vtemp24[0x152U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x142U];
    __Vtemp24[0x153U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x143U];
    __Vtemp24[0x154U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x144U];
    __Vtemp24[0x155U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x145U];
    __Vtemp24[0x156U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x146U];
    __Vtemp24[0x157U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x147U];
    __Vtemp24[0x158U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x148U];
    __Vtemp24[0x159U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x149U];
    __Vtemp24[0x15aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14aU];
    __Vtemp24[0x15bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14bU];
    __Vtemp24[0x15cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14cU];
    __Vtemp24[0x15dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14dU];
    __Vtemp24[0x15eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14eU];
    __Vtemp24[0x15fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x14fU];
    __Vtemp24[0x160U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x150U];
    __Vtemp24[0x161U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x151U];
    __Vtemp24[0x162U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x152U];
    __Vtemp24[0x163U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x153U];
    __Vtemp24[0x164U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x154U];
    __Vtemp24[0x165U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x155U];
    __Vtemp24[0x166U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x156U];
    __Vtemp24[0x167U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x157U];
    __Vtemp24[0x168U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x158U];
    __Vtemp24[0x169U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x159U];
    __Vtemp24[0x16aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15aU];
    __Vtemp24[0x16bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15bU];
    __Vtemp24[0x16cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15cU];
    __Vtemp24[0x16dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15dU];
    __Vtemp24[0x16eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15eU];
    __Vtemp24[0x16fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x15fU];
    __Vtemp24[0x170U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x160U];
    __Vtemp24[0x171U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x161U];
    __Vtemp24[0x172U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x162U];
    __Vtemp24[0x173U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x163U];
    __Vtemp24[0x174U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x164U];
    __Vtemp24[0x175U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x165U];
    __Vtemp24[0x176U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x166U];
    __Vtemp24[0x177U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x167U];
    __Vtemp24[0x178U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x168U];
    __Vtemp24[0x179U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x169U];
    __Vtemp24[0x17aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16aU];
    __Vtemp24[0x17bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16bU];
    __Vtemp24[0x17cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16cU];
    __Vtemp24[0x17dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16dU];
    __Vtemp24[0x17eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16eU];
    __Vtemp24[0x17fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x16fU];
    __Vtemp24[0x180U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x170U];
    __Vtemp24[0x181U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x171U];
    __Vtemp24[0x182U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x172U];
    __Vtemp24[0x183U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x173U];
    __Vtemp24[0x184U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x174U];
    __Vtemp24[0x185U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x175U];
    __Vtemp24[0x186U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x176U];
    __Vtemp24[0x187U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x177U];
    __Vtemp24[0x188U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x178U];
    __Vtemp24[0x189U] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x179U];
    __Vtemp24[0x18aU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17aU];
    __Vtemp24[0x18bU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17bU];
    __Vtemp24[0x18cU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17cU];
    __Vtemp24[0x18dU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17dU];
    __Vtemp24[0x18eU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17eU];
    __Vtemp24[0x18fU] = this->freqcossinpdelay__DOT__usual__DOT__shifter[0x17fU];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0U] 
        = this->freqcossinp32x16[0U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[1U] 
        = this->freqcossinp32x16[1U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[2U] 
        = this->freqcossinp32x16[2U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[3U] 
        = this->freqcossinp32x16[3U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[4U] 
        = this->freqcossinp32x16[4U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[5U] 
        = this->freqcossinp32x16[5U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[6U] 
        = this->freqcossinp32x16[6U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[7U] 
        = this->freqcossinp32x16[7U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[8U] 
        = this->freqcossinp32x16[8U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[9U] 
        = this->freqcossinp32x16[9U];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0xaU] 
        = this->freqcossinp32x16[0xaU];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0xbU] 
        = this->freqcossinp32x16[0xbU];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0xcU] 
        = this->freqcossinp32x16[0xcU];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0xdU] 
        = this->freqcossinp32x16[0xdU];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0xeU] 
        = this->freqcossinp32x16[0xeU];
    this->freqcossinpdelay__DOT__usual__DOT__shifter[0xfU] 
        = this->freqcossinp32x16[0xfU];
    __Vilp = 0x10U;
    while ((__Vilp <= 0x18fU)) {
        this->freqcossinpdelay__DOT__usual__DOT__shifter[__Vilp] 
            = __Vtemp24[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    this->__Vdlyvval__cordicg__DOT__z__v0 = ((IData)(this->cordicg__DOT__shiftpi)
                                              ? ((0x10000U 
                                                  & ((~ 
                                                      (this->cordicg__DOT__phasein_1 
                                                       >> 0x10U)) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & this->cordicg__DOT__phasein_1))
                                              : this->cordicg__DOT__phasein_1);
    this->__Vdlyvval__cordicg__DOT__z__v1 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [0U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [0U] 
                                                 + this->cordicg__DOT__stage__BRA__0__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [0U] 
                                                 - this->cordicg__DOT__stage__BRA__0__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v2 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [1U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [1U] 
                                                 + this->cordicg__DOT__stage__BRA__1__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [1U] 
                                                 - this->cordicg__DOT__stage__BRA__1__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v3 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [2U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [2U] 
                                                 + this->cordicg__DOT__stage__BRA__2__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [2U] 
                                                 - this->cordicg__DOT__stage__BRA__2__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v4 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [3U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [3U] 
                                                 + this->cordicg__DOT__stage__BRA__3__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [3U] 
                                                 - this->cordicg__DOT__stage__BRA__3__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v5 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [4U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [4U] 
                                                 + this->cordicg__DOT__stage__BRA__4__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [4U] 
                                                 - this->cordicg__DOT__stage__BRA__4__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v6 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [5U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [5U] 
                                                 + this->cordicg__DOT__stage__BRA__5__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [5U] 
                                                 - this->cordicg__DOT__stage__BRA__5__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v7 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [6U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [6U] 
                                                 + this->cordicg__DOT__stage__BRA__6__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [6U] 
                                                 - this->cordicg__DOT__stage__BRA__6__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v8 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [7U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [7U] 
                                                 + this->cordicg__DOT__stage__BRA__7__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [7U] 
                                                 - this->cordicg__DOT__stage__BRA__7__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v9 = (0x1ffffU 
                                             & (this->cordicg__DOT__plusall
                                                [8U]
                                                 ? 
                                                (this->cordicg__DOT__z
                                                 [8U] 
                                                 + this->cordicg__DOT__stage__BRA__8__KET____DOT__ain)
                                                 : 
                                                (this->cordicg__DOT__z
                                                 [8U] 
                                                 - this->cordicg__DOT__stage__BRA__8__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v10 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [9U]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [9U] 
                                                  + this->cordicg__DOT__stage__BRA__9__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [9U] 
                                                  - this->cordicg__DOT__stage__BRA__9__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v11 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [0xaU]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [0xaU] 
                                                  + this->cordicg__DOT__stage__BRA__10__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [0xaU] 
                                                  - this->cordicg__DOT__stage__BRA__10__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v12 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [0xbU]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [0xbU] 
                                                  + this->cordicg__DOT__stage__BRA__11__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [0xbU] 
                                                  - this->cordicg__DOT__stage__BRA__11__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v13 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [0xcU]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [0xcU] 
                                                  + this->cordicg__DOT__stage__BRA__12__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [0xcU] 
                                                  - this->cordicg__DOT__stage__BRA__12__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v14 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [0xdU]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [0xdU] 
                                                  + this->cordicg__DOT__stage__BRA__13__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [0xdU] 
                                                  - this->cordicg__DOT__stage__BRA__13__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v15 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [0xeU]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [0xeU] 
                                                  + this->cordicg__DOT__stage__BRA__14__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [0xeU] 
                                                  - this->cordicg__DOT__stage__BRA__14__KET____DOT__ain)));
    this->__Vdlyvval__cordicg__DOT__z__v16 = (0x1ffffU 
                                              & (this->cordicg__DOT__plusall
                                                 [0xfU]
                                                  ? 
                                                 (this->cordicg__DOT__z
                                                  [0xfU] 
                                                  + this->cordicg__DOT__stage__BRA__15__KET____DOT__ain)
                                                  : 
                                                 (this->cordicg__DOT__z
                                                  [0xfU] 
                                                  - this->cordicg__DOT__stage__BRA__15__KET____DOT__ain)));
    this->multiy16x16_r[0U] = ((0xffff0000U & this->multiy16x16_r[0U]) 
                               | this->multiy[0U]);
    this->multiy16x16_r[0U] = ((0xffffU & this->multiy16x16_r[0U]) 
                               | (0xffff0000U & (this->multiy
                                                 [1U] 
                                                 << 0x10U)));
    this->multiy16x16_r[1U] = ((0xffff0000U & this->multiy16x16_r[1U]) 
                               | this->multiy[2U]);
    this->multiy16x16_r[1U] = ((0xffffU & this->multiy16x16_r[1U]) 
                               | (0xffff0000U & (this->multiy
                                                 [3U] 
                                                 << 0x10U)));
    this->multiy16x16_r[2U] = ((0xffff0000U & this->multiy16x16_r[2U]) 
                               | this->multiy[4U]);
    this->multiy16x16_r[2U] = ((0xffffU & this->multiy16x16_r[2U]) 
                               | (0xffff0000U & (this->multiy
                                                 [5U] 
                                                 << 0x10U)));
    this->multiy16x16_r[3U] = ((0xffff0000U & this->multiy16x16_r[3U]) 
                               | this->multiy[6U]);
    this->multiy16x16_r[3U] = ((0xffffU & this->multiy16x16_r[3U]) 
                               | (0xffff0000U & (this->multiy
                                                 [7U] 
                                                 << 0x10U)));
    this->multiy16x16_r[4U] = ((0xffff0000U & this->multiy16x16_r[4U]) 
                               | this->multiy[8U]);
    this->multiy16x16_r[4U] = ((0xffffU & this->multiy16x16_r[4U]) 
                               | (0xffff0000U & (this->multiy
                                                 [9U] 
                                                 << 0x10U)));
    this->multiy16x16_r[5U] = ((0xffff0000U & this->multiy16x16_r[5U]) 
                               | this->multiy[0xaU]);
    this->multiy16x16_r[5U] = ((0xffffU & this->multiy16x16_r[5U]) 
                               | (0xffff0000U & (this->multiy
                                                 [0xbU] 
                                                 << 0x10U)));
    this->multiy16x16_r[6U] = ((0xffff0000U & this->multiy16x16_r[6U]) 
                               | this->multiy[0xcU]);
    this->multiy16x16_r[6U] = ((0xffffU & this->multiy16x16_r[6U]) 
                               | (0xffff0000U & (this->multiy
                                                 [0xdU] 
                                                 << 0x10U)));
    this->multiy16x16_r[7U] = ((0xffff0000U & this->multiy16x16_r[7U]) 
                               | this->multiy[0xeU]);
    this->multiy16x16_r[7U] = ((0xffffU & this->multiy16x16_r[7U]) 
                               | (0xffff0000U & (this->multiy
                                                 [0xfU] 
                                                 << 0x10U)));
    this->multix16x16_r[0U] = ((0xffff0000U & this->multix16x16_r[0U]) 
                               | this->multix[0U]);
    this->multix16x16_r[0U] = ((0xffffU & this->multix16x16_r[0U]) 
                               | (0xffff0000U & (this->multix
                                                 [1U] 
                                                 << 0x10U)));
    this->multix16x16_r[1U] = ((0xffff0000U & this->multix16x16_r[1U]) 
                               | this->multix[2U]);
    this->multix16x16_r[1U] = ((0xffffU & this->multix16x16_r[1U]) 
                               | (0xffff0000U & (this->multix
                                                 [3U] 
                                                 << 0x10U)));
    this->multix16x16_r[2U] = ((0xffff0000U & this->multix16x16_r[2U]) 
                               | this->multix[4U]);
    this->multix16x16_r[2U] = ((0xffffU & this->multix16x16_r[2U]) 
                               | (0xffff0000U & (this->multix
                                                 [5U] 
                                                 << 0x10U)));
    this->multix16x16_r[3U] = ((0xffff0000U & this->multix16x16_r[3U]) 
                               | this->multix[6U]);
    this->multix16x16_r[3U] = ((0xffffU & this->multix16x16_r[3U]) 
                               | (0xffff0000U & (this->multix
                                                 [7U] 
                                                 << 0x10U)));
    this->multix16x16_r[4U] = ((0xffff0000U & this->multix16x16_r[4U]) 
                               | this->multix[8U]);
    this->multix16x16_r[4U] = ((0xffffU & this->multix16x16_r[4U]) 
                               | (0xffff0000U & (this->multix
                                                 [9U] 
                                                 << 0x10U)));
    this->multix16x16_r[5U] = ((0xffff0000U & this->multix16x16_r[5U]) 
                               | this->multix[0xaU]);
    this->multix16x16_r[5U] = ((0xffffU & this->multix16x16_r[5U]) 
                               | (0xffff0000U & (this->multix
                                                 [0xbU] 
                                                 << 0x10U)));
    this->multix16x16_r[6U] = ((0xffff0000U & this->multix16x16_r[6U]) 
                               | this->multix[0xcU]);
    this->multix16x16_r[6U] = ((0xffffU & this->multix16x16_r[6U]) 
                               | (0xffff0000U & (this->multix
                                                 [0xdU] 
                                                 << 0x10U)));
    this->multix16x16_r[7U] = ((0xffff0000U & this->multix16x16_r[7U]) 
                               | this->multix[0xeU]);
    this->multix16x16_r[7U] = ((0xffffU & this->multix16x16_r[7U]) 
                               | (0xffff0000U & (this->multix
                                                 [0xfU] 
                                                 << 0x10U)));
}
