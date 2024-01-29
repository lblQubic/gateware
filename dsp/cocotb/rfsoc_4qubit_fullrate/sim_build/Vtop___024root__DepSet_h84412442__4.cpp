// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern const VlWide<11>/*351:0*/ Vtop__ConstPool__CONST_hec3cede4_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__29(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__29\n"); );
    // Init
    SData/*11:0*/ __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = 0;
    VlWide<12>/*383:0*/ __Vtemp_h5e700449__0;
    // Body
    __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.tcnt;
    __Vtemp_h5e700449__0[1U] = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                              << 0xcU));
    __Vtemp_h5e700449__0[2U] = (((Vtop__ConstPool__CONST_hec3cede4_0[1U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                              << 0xcU));
    __Vtemp_h5e700449__0[3U] = (((Vtop__ConstPool__CONST_hec3cede4_0[2U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                              << 0xcU));
    __Vtemp_h5e700449__0[4U] = (((Vtop__ConstPool__CONST_hec3cede4_0[3U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                              << 0xcU));
    __Vtemp_h5e700449__0[5U] = (((Vtop__ConstPool__CONST_hec3cede4_0[4U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                              << 0xcU));
    __Vtemp_h5e700449__0[6U] = (((Vtop__ConstPool__CONST_hec3cede4_0[5U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                              << 0xcU));
    __Vtemp_h5e700449__0[7U] = (((Vtop__ConstPool__CONST_hec3cede4_0[6U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                              << 0xcU));
    __Vtemp_h5e700449__0[8U] = (((Vtop__ConstPool__CONST_hec3cede4_0[7U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                              << 0xcU));
    __Vtemp_h5e700449__0[9U] = (((Vtop__ConstPool__CONST_hec3cede4_0[8U] 
                                  & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U]) 
                                 >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                               & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                              << 0xcU));
    __Vtemp_h5e700449__0[0xaU] = (((Vtop__ConstPool__CONST_hec3cede4_0[9U] 
                                    & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U]) 
                                   >> 0x14U) | ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                                 & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                                << 0xcU));
    __Vtemp_h5e700449__0[0xbU] = ((Vtop__ConstPool__CONST_hec3cede4_0[0xaU] 
                                   & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU]) 
                                  >> 0x14U);
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U] 
        = (((Vtop__ConstPool__CONST_hec3cede4_0[0U] 
             & vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0U]) 
            << 0xcU) | (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[1U] 
        = __Vtemp_h5e700449__0[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[2U] 
        = __Vtemp_h5e700449__0[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[3U] 
        = __Vtemp_h5e700449__0[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[4U] 
        = __Vtemp_h5e700449__0[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[5U] 
        = __Vtemp_h5e700449__0[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[6U] 
        = __Vtemp_h5e700449__0[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[7U] 
        = __Vtemp_h5e700449__0[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[8U] 
        = __Vtemp_h5e700449__0[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[9U] 
        = __Vtemp_h5e700449__0[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
        = __Vtemp_h5e700449__0[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
        = __Vtemp_h5e700449__0[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r3;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout 
        = (0xfffU & ((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xbU] 
                      << 4U) | (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter[0xaU] 
                                >> 0x1cU)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__dummybusy 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 0x29U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy_sr 
        = ((0x3fffffffffeULL & (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy_sr 
                                << 1U)) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy)));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.cmdstb) {
        __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.envstart;
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy = 1U;
    } else {
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy) {
            __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
                = (0xfffU & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt) 
                             + (0U != (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.envlength))));
        }
        if (vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__lastenv) {
            vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy = 0U;
        }
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r2;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xeU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.envxy32x16[0xfU] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt 
        = __Vdly__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.prepbusy 
        = (0U != vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy_sr);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.freqaddr;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__30(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__30\n"); );
    // Init
    VlWide<4>/*127:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data;
    VL_ZERO_W(128, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data);
    VlWide<16>/*511:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data;
    VL_ZERO_W(512, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data);
    VlWide<16>/*511:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data;
    VL_ZERO_W(512, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data);
    IData/*31:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_rdrv__read_data;
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_rdrv__read_data = 0;
    VlWide<16>/*511:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data;
    VL_ZERO_W(512, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data);
    IData/*31:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_rdlo__read_data;
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_rdlo__read_data = 0;
    VlWide<4>/*127:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data;
    VL_ZERO_W(128, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data);
    VlWide<4>/*127:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data;
    VL_ZERO_W(128, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data);
    VlWide<16>/*511:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data;
    VL_ZERO_W(512, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data);
    VlWide<16>/*511:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data;
    VL_ZERO_W(512, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data);
    IData/*31:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_rdrv__read_data;
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_rdrv__read_data = 0;
    VlWide<16>/*511:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data;
    VL_ZERO_W(512, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data);
    IData/*31:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_rdlo__read_data;
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_rdlo__read_data = 0;
    VlWide<4>/*127:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data;
    VL_ZERO_W(128, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data);
    VlWide<4>/*127:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data;
    VL_ZERO_W(128, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data);
    VlWide<16>/*511:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data;
    VL_ZERO_W(512, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data);
    VlWide<16>/*511:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data;
    VL_ZERO_W(512, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data);
    IData/*31:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_rdrv__read_data;
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_rdrv__read_data = 0;
    VlWide<16>/*511:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data;
    VL_ZERO_W(512, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data);
    IData/*31:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_rdlo__read_data;
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_rdlo__read_data = 0;
    VlWide<4>/*127:0*/ dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data;
    VL_ZERO_W(128, dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data);
    SData/*10:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0 = 0;
    SData/*10:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0 = 0;
    SData/*10:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1 = 0;
    SData/*9:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0 = 0;
    QData/*63:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0 = 0;
    SData/*10:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0 = 0;
    SData/*10:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0 = 0;
    SData/*10:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1 = 0;
    SData/*9:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0 = 0;
    QData/*63:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0 = 0;
    SData/*10:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0 = 0;
    SData/*10:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v1 = 0;
    CData/*7:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0;
    CData/*7:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0 = 0;
    SData/*10:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0;
    SData/*8:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1 = 0;
    SData/*9:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0 = 0;
    QData/*63:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0 = 0;
    QData/*63:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0 = 0;
    SData/*11:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0;
    __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0 = 0;
    QData/*63:0*/ __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0 = 0;
    // Body
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0 = 0U;
    __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0 = 0U;
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr__v0 
        = (0xfffU & (IData)(vlSelf->buf_read_addr));
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr__v0 
        = (0xfffU & (IData)(vlSelf->buf_read_addr));
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_acqbuf
        [1U]) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_acqbuf
            [1U];
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_acqbuf
            [1U];
    }
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_acqbuf
        [0U]) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_acqbuf
            [0U];
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_acqbuf
            [0U];
    }
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
        [0U];
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_rdlo_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0 
            = (0x7ffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_rdlo_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0 
            = (0xfffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_rdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0 
            = (0x1fffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_rdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0 
            = (0xfffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_qdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0 
            = (0x1fffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_qdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0 
            = (0xfffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_rdlo_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0 
            = (0x7ffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_rdlo_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0 
            = (0xfffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_rdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0 
            = (0x1fffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_rdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0 
            = (0xfffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_qdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0 
            = (0x1fffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_qdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0 
            = (0xfffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_rdlo_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0 
            = (0x7ffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_rdlo_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0 
            = (0xfffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_rdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0 
            = (0x1fffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_rdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0 
            = (0xfffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_qdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0 
            = (0x1fffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_qdrv_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0 
            = (0xfffU & (IData)(vlSelf->mem_write_addr));
    }
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvfreq
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvenv
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvfreq
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvenv
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvfreq
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvenv
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvfreq
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvenv
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvfreq
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvenv
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvfreq
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvenv
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr__v0 
        = (0x3ffU & (IData)(vlSelf->buf_read_addr));
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr__v0 
        = (0x3ffU & (IData)(vlSelf->buf_read_addr));
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr__v0 
        = (0x3ffU & (IData)(vlSelf->buf_read_addr));
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v1 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr
        [0U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command
        [2U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command
        [1U];
    __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v0 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command
        [0U];
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0 
            = (0x1fffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0 
            = (0x1fffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_wen) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0 
            = vlSelf->mem_write_data;
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0 
            = (0x1fffU & (IData)(vlSelf->mem_write_addr));
    }
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf
        [2U]) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_accbuf
            [2U];
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf
            [2U];
    }
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf
        [1U]) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_accbuf
            [1U];
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf
            [1U];
    }
    if (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf
        [0U]) {
        __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_accbuf
            [0U];
        __Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0 = 1U;
        __Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf
            [0U];
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr__v0;
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data__v0;
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr__v1;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr[0U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v0;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr[1U] 
        = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr__v1;
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data__v0;
    }
    if (__Vdlyvset__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0) {
        vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data[__Vdlyvdim0__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0] 
            = __Vdlyvval__dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data__v0;
    }
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__read_data 
        = vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr
        [0U]];
    vlSelf->dsp_sim_toplevel__DOT__acq_read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr
        [0U]];
    vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__read_data 
        = vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr
        [0U]];
    vlSelf->dsp_sim_toplevel__DOT__acq_read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr
        [0U]];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                    [1U] << 2U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                   [1U] << 2U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data
                                    [(0x7ffU & ((IData)(3U) 
                                                + (
                                                   vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                                   [1U] 
                                                   << 2U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data
                                                [(0x7ffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                                      [1U] 
                                                      << 2U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data
                                     [(0x7ffU & ((IData)(3U) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                                  [1U] 
                                                  << 2U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data
                                                 [(0x7ffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                                       [1U] 
                                                       << 2U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_rdlo__read_data 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr
        [1U]];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                     [1U] << 4U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(4U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(5U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(6U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(7U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(8U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(9U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xaU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xbU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xcU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xdU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
                                    [(0x1fffU & ((IData)(0xfU) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                                  [1U] 
                                                  << 4U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
                                                [(0x1fffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                                      [1U] 
                                                      << 4U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
                                     [(0x1fffU & ((IData)(0xfU) 
                                                  + 
                                                  (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                                   [1U] 
                                                   << 4U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data
                                                 [(0x1fffU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                                       [1U] 
                                                       << 4U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_rdrv__read_data 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr
        [1U]];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                     [1U] << 4U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(4U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(5U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(6U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(7U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(8U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(9U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xaU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xbU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xcU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xdU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
                                    [(0x1fffU & ((IData)(0xfU) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                                  [1U] 
                                                  << 4U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
                                                [(0x1fffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                                      [1U] 
                                                      << 4U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
                                     [(0x1fffU & ((IData)(0xfU) 
                                                  + 
                                                  (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                                   [1U] 
                                                   << 4U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data
                                                 [(0x1fffU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                                       [1U] 
                                                       << 4U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                    [1U] << 4U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(2U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(3U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(4U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(5U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(6U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(7U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(8U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(9U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xaU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xbU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xcU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xdU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
                                    [(0xfffU & ((IData)(0xfU) 
                                                + (
                                                   vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                                   [1U] 
                                                   << 4U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
                                                [(0xfffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                                      [1U] 
                                                      << 4U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
                                     [(0xfffU & ((IData)(0xfU) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                                  [1U] 
                                                  << 4U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data
                                                 [(0xfffU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                                       [1U] 
                                                       << 4U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                    [1U] << 2U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                   [1U] << 2U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data
                                    [(0x7ffU & ((IData)(3U) 
                                                + (
                                                   vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                                   [1U] 
                                                   << 2U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data
                                                [(0x7ffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                                      [1U] 
                                                      << 2U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data
                                     [(0x7ffU & ((IData)(3U) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                                  [1U] 
                                                  << 2U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data
                                                 [(0x7ffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                                       [1U] 
                                                       << 2U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_rdlo__read_data 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr
        [1U]];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                     [1U] << 4U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(4U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(5U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(6U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(7U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(8U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(9U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xaU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xbU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xcU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xdU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
                                    [(0x1fffU & ((IData)(0xfU) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                                  [1U] 
                                                  << 4U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
                                                [(0x1fffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                                      [1U] 
                                                      << 4U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
                                     [(0x1fffU & ((IData)(0xfU) 
                                                  + 
                                                  (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                                   [1U] 
                                                   << 4U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data
                                                 [(0x1fffU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                                       [1U] 
                                                       << 4U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_rdrv__read_data 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr
        [1U]];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                     [1U] << 4U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(4U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(5U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(6U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(7U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(8U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(9U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xaU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xbU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xcU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xdU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
                                    [(0x1fffU & ((IData)(0xfU) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                                  [1U] 
                                                  << 4U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
                                                [(0x1fffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                                      [1U] 
                                                      << 4U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
                                     [(0x1fffU & ((IData)(0xfU) 
                                                  + 
                                                  (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                                   [1U] 
                                                   << 4U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data
                                                 [(0x1fffU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                                       [1U] 
                                                       << 4U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                    [1U] << 4U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(2U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(3U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(4U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(5U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(6U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(7U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(8U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(9U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xaU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xbU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xcU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xdU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
                                    [(0xfffU & ((IData)(0xfU) 
                                                + (
                                                   vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                                   [1U] 
                                                   << 4U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
                                                [(0xfffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                                      [1U] 
                                                      << 4U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
                                     [(0xfffU & ((IData)(0xfU) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                                  [1U] 
                                                  << 4U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data
                                                 [(0xfffU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                                       [1U] 
                                                       << 4U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                    [1U] << 2U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data
        [(0x7ffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                   [1U] << 2U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data
                                    [(0x7ffU & ((IData)(3U) 
                                                + (
                                                   vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                                   [1U] 
                                                   << 2U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data
                                                [(0x7ffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                                      [1U] 
                                                      << 2U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data
                                     [(0x7ffU & ((IData)(3U) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                                  [1U] 
                                                  << 2U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data
                                                 [(0x7ffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr
                                                       [1U] 
                                                       << 2U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_rdlo__read_data 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr
        [1U]];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                     [1U] << 4U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(4U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(5U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(6U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(7U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(8U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(9U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xaU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xbU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xcU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
        [(0x1fffU & ((IData)(0xdU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
                                    [(0x1fffU & ((IData)(0xfU) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                                  [1U] 
                                                  << 4U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
                                                [(0x1fffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                                      [1U] 
                                                      << 4U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
                                     [(0x1fffU & ((IData)(0xfU) 
                                                  + 
                                                  (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                                   [1U] 
                                                   << 4U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data
                                                 [(0x1fffU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr
                                                       [1U] 
                                                       << 4U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_rdrv__read_data 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr
        [1U]];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                     [1U] << 4U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(2U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(3U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(4U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(5U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(6U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(7U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(8U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(9U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                    [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xaU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xbU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xcU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
        [(0x1fffU & ((IData)(0xdU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                      [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
                                    [(0x1fffU & ((IData)(0xfU) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                                  [1U] 
                                                  << 4U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
                                                [(0x1fffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                                      [1U] 
                                                      << 4U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
                                     [(0x1fffU & ((IData)(0xfU) 
                                                  + 
                                                  (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                                   [1U] 
                                                   << 4U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data
                                                 [(0x1fffU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr
                                                       [1U] 
                                                       << 4U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                    [1U] << 4U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(2U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(3U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(4U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(5U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(6U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(7U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[8U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(8U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[9U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(9U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                   [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xaU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xaU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xbU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xbU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xcU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xcU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xdU] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
        [(0xfffU & ((IData)(0xdU) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                     [1U] << 4U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
                                    [(0xfffU & ((IData)(0xfU) 
                                                + (
                                                   vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                                   [1U] 
                                                   << 4U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
                                                [(0xfffU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                                      [1U] 
                                                      << 4U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
                                     [(0xfffU & ((IData)(0xfU) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                                  [1U] 
                                                  << 4U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data
                                                 [(0xfffU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr
                                                       [1U] 
                                                       << 4U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr
                     [1U] << 2U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr
                                    [1U] << 2U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data
                                    [(0x1fffU & ((IData)(3U) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr
                                                  [1U] 
                                                  << 2U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data
                                                [(0x1fffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr
                                                      [1U] 
                                                      << 2U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data
                                     [(0x1fffU & ((IData)(3U) 
                                                  + 
                                                  (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr
                                                   [1U] 
                                                   << 2U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data
                                                 [(0x1fffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr
                                                       [1U] 
                                                       << 2U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr
                     [1U] << 2U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr
                                    [1U] << 2U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data
                                    [(0x1fffU & ((IData)(3U) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr
                                                  [1U] 
                                                  << 2U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data
                                                [(0x1fffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr
                                                      [1U] 
                                                      << 2U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data
                                     [(0x1fffU & ((IData)(3U) 
                                                  + 
                                                  (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr
                                                   [1U] 
                                                   << 2U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data
                                                 [(0x1fffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr
                                                       [1U] 
                                                       << 2U)))]))) 
                   >> 0x20U));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr
                     [1U] << 2U))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data
        [(0x1fffU & ((IData)(1U) + (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr
                                    [1U] << 2U)))];
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data
                                    [(0x1fffU & ((IData)(3U) 
                                                 + 
                                                 (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr
                                                  [1U] 
                                                  << 2U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data
                                                [(0x1fffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr
                                                      [1U] 
                                                      << 2U)))]))));
    dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data
                                     [(0x1fffU & ((IData)(3U) 
                                                  + 
                                                  (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr
                                                   [1U] 
                                                   << 2U)))])) 
                     << 0x20U) | (QData)((IData)(vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data
                                                 [(0x1fffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr
                                                       [1U] 
                                                       << 2U)))]))) 
                   >> 0x20U));
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__read_data 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr
        [0U]];
    vlSelf->dsp_sim_toplevel__DOT__acc_read_data[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr
        [0U]];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__read_data 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr
        [0U]];
    vlSelf->dsp_sim_toplevel__DOT__acc_read_data[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr
        [0U]];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__read_data 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr
        [0U]];
    vlSelf->dsp_sim_toplevel__DOT__acc_read_data[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data
        [vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr
        [0U]];
    vlSelf->acq_read_data[0U] = vlSelf->dsp_sim_toplevel__DOT__acq_read_data
        [0U];
    vlSelf->acq_read_data[1U] = vlSelf->dsp_sim_toplevel__DOT__acq_read_data
        [1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[2U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[2U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[2U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[2U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__read_data 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_rdlo__read_data;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_rdlo__read_data;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[4U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[5U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[6U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[7U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[8U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[9U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data[0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xfU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[2U][0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__read_data[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__read_data 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_rdrv__read_data;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_rdrv__read_data;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[4U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[5U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[6U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[7U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[8U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[9U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data[0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xfU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[2U][0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__read_data[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[4U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[5U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[6U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[7U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[8U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[9U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data[0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xfU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[2U][0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__env_mem_qdrv__read_data[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[1U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[1U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[1U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[1U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__read_data 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_rdlo__read_data;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_rdlo__read_data;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[4U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[5U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[6U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[7U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[8U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[9U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data[0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xfU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[1U][0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__read_data[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__read_data 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_rdrv__read_data;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_rdrv__read_data;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[4U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[5U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[6U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[7U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[8U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[9U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data[0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xfU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[1U][0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__read_data[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[4U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[5U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[6U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[7U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[8U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[9U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data[0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xfU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[1U][0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__env_mem_qdrv__read_data[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[0U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[0U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[0U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq[0U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__read_data 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_rdlo__read_data;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_rdlo__read_data;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[4U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[5U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[6U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[7U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[8U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[9U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data[0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xfU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq[0U][0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__read_data[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__read_data 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_rdrv__read_data;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_rdrv__read_data;
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[4U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[5U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[6U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[7U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[8U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[9U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data[0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xfU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq[0U][0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__read_data[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[4U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[5U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[6U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[7U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[8U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[9U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xaU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xbU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xcU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xdU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xeU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data[0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xfU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][4U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][5U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][6U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][7U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][8U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][9U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][0xaU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][0xbU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][0xcU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][0xdU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][0xeU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv[0U][0xfU] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__env_mem_qdrv__read_data[0xfU];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command[2U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command[2U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command[2U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command[2U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__2__KET____DOT__cmd_mem__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command[1U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command[1U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command[1U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command[1U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__1__KET____DOT__cmd_mem__read_data[3U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__read_data[0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data[0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__read_data[1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data[1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__read_data[2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data[2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__read_data[3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command[0U][0U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command[0U][1U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command[0U][2U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_command[0U][3U] 
        = dsp_sim_toplevel__DOT____Vcellout__genblk1__BRA__0__KET____DOT__cmd_mem__read_data[3U];
    vlSelf->acc_read_data[0U] = vlSelf->dsp_sim_toplevel__DOT__acc_read_data
        [0U];
    vlSelf->acc_read_data[1U] = vlSelf->dsp_sim_toplevel__DOT__acc_read_data
        [1U];
    vlSelf->acc_read_data[2U] = vlSelf->dsp_sim_toplevel__DOT__acc_read_data
        [2U];
    vlSelf->acc_read_data[3U] = vlSelf->dsp_sim_toplevel__DOT__acc_read_data
        [3U];
    vlSelf->acc_read_data[4U] = vlSelf->dsp_sim_toplevel__DOT__acc_read_data
        [4U];
    vlSelf->acc_read_data[5U] = vlSelf->dsp_sim_toplevel__DOT__acc_read_data
        [5U];
    vlSelf->acc_read_data[6U] = vlSelf->dsp_sim_toplevel__DOT__acc_read_data
        [6U];
    vlSelf->acc_read_data[7U] = vlSelf->dsp_sim_toplevel__DOT__acc_read_data
        [7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn.freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [0U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn.freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [0U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn.freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [0U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn.freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [0U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn.freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [1U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn.freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [1U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn.freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [1U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn.freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [1U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn.freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [2U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn.freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [2U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn.freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [2U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn.freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [2U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdloelemconn.freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [3U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdloelemconn.freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [3U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdloelemconn.freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [3U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdloelemconn.freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [3U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdloelemconn.freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [4U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdloelemconn.freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [4U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdloelemconn.freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [4U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdloelemconn.freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [4U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn.freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [5U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn.freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [5U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn.freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [5U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn.freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [5U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn.freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [6U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn.freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [6U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn.freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [6U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn.freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [6U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn.freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [7U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn.freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [7U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn.freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [7U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn.freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdlofreq
        [7U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn.envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv
        [0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn.envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv
        [1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn.envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv
        [2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdloelemconn.envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv
        [3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdloelemconn.envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv
        [4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdloelemconn.envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv
        [5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdloelemconn.envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv
        [6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdloelemconn.envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdloenv
        [7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [0U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [1U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [2U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [3U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [4U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [5U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [6U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvfreq
        [7U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__envdata 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_rdrvenv
        [7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [0U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [1U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [2U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [3U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [4U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [5U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [6U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__freqdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvfreq
        [7U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [0U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [1U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [2U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__envdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [3U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__envdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [4U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__envdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [5U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__envdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [6U][0xfU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[8U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][8U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[9U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][9U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[0xaU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0xaU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[0xbU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0xbU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[0xcU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0xcU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[0xdU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0xdU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[0xeU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0xeU];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__envdata[0xfU] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_qdrvenv
        [7U][0xfU];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__31(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__31\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command[0U] 
        = (0x7ffU & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core.cmd_read_addr));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__32\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command[1U] 
        = (0x7ffU & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core.cmd_read_addr));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__33(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__33\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command[2U] 
        = (0x7ffU & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core.cmd_read_addr));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__34(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__34\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command[3U] 
        = (0x7ffU & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core.cmd_read_addr));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__35(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__35\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command[4U] 
        = (0x7ffU & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core.cmd_read_addr));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__36(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__36\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command[5U] 
        = (0x7ffU & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core.cmd_read_addr));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__37(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__37\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command[6U] 
        = (0x7ffU & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__proc_core.cmd_read_addr));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__38(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__38\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.pini 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.pini;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.ampx 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.ampx;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_command[7U] 
        = (0x7ffU & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__proc_core.cmd_read_addr));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__39(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__39\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_prob[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__0__KET____DOT__state_disc.inference_prob;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_state[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__0__KET____DOT__state_disc.inference_state;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_ready[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__0__KET____DOT__state_disc.ready;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_done[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__0__KET____DOT__state_disc.done_trigger;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_idle[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__0__KET____DOT__state_disc.idle;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__40(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__40\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_prob[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__1__KET____DOT__state_disc.inference_prob;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_state[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__1__KET____DOT__state_disc.inference_state;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_ready[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__1__KET____DOT__state_disc.ready;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_done[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__1__KET____DOT__state_disc.done_trigger;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_idle[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__1__KET____DOT__state_disc.idle;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__41(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__41\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_prob[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__2__KET____DOT__state_disc.inference_prob;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_state[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__2__KET____DOT__state_disc.inference_state;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_ready[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__2__KET____DOT__state_disc.ready;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_done[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__2__KET____DOT__state_disc.done_trigger;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_idle[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__2__KET____DOT__state_disc.idle;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__42(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__42\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_prob[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__3__KET____DOT__state_disc.inference_prob;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_state[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__3__KET____DOT__state_disc.inference_state;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_ready[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__3__KET____DOT__state_disc.ready;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_done[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__3__KET____DOT__state_disc.done_trigger;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_idle[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__3__KET____DOT__state_disc.idle;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__43(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__43\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_prob[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__4__KET____DOT__state_disc.inference_prob;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_state[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__4__KET____DOT__state_disc.inference_state;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_ready[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__4__KET____DOT__state_disc.ready;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_done[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__4__KET____DOT__state_disc.done_trigger;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_idle[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__4__KET____DOT__state_disc.idle;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__44(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__44\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_prob[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__5__KET____DOT__state_disc.inference_prob;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_state[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__5__KET____DOT__state_disc.inference_state;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_ready[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__5__KET____DOT__state_disc.ready;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_done[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__5__KET____DOT__state_disc.done_trigger;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_idle[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__5__KET____DOT__state_disc.idle;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__45(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__45\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_prob[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__6__KET____DOT__state_disc.inference_prob;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_state[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__6__KET____DOT__state_disc.inference_state;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_ready[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__6__KET____DOT__state_disc.ready;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_done[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__6__KET____DOT__state_disc.done_trigger;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_idle[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__6__KET____DOT__state_disc.idle;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__46(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__46\n"); );
    // Body
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_prob[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__7__KET____DOT__state_disc.inference_prob;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__inference_state[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__7__KET____DOT__state_disc.inference_state;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_ready[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__7__KET____DOT__state_disc.ready;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_done[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__7__KET____DOT__state_disc.done_trigger;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nn_idle[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__7__KET____DOT__state_disc.idle;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__47(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__47\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1.adcx 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1.adcx 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1.adcx 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__3__KET____DOT__genblk1__DOT__rdlo0mixacc1.adcx 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__4__KET____DOT__genblk1__DOT__rdlo0mixacc1.adcx 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__5__KET____DOT__genblk1__DOT__rdlo0mixacc1.adcx 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__6__KET____DOT__genblk1__DOT__rdlo0mixacc1.adcx 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__7__KET____DOT__genblk1__DOT__rdlo0mixacc1.adcx 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__mixbb1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__adc
        [0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__adc
        [1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__adc
        [0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__adc
        [1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[0U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[0U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[0U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[0U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[0U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[0U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[0U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[0U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[1U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[1U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[1U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[1U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[1U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[1U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[1U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[1U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[2U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[2U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[2U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[2U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[2U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[2U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[2U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[2U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[3U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[3U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[3U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[3U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[3U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[3U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[3U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.chan[3U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[0U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[0U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[0U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[0U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[0U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[0U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[0U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[0U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[1U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[1U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[1U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[1U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[1U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[1U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[1U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[1U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[2U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[2U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[2U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[2U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[2U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[2U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[2U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[2U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[3U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[3U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[3U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[3U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[3U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[3U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[3U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.chan[3U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[0U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[0U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[0U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[0U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[0U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[0U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[0U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[0U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[1U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[1U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[1U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[1U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[1U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[1U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[1U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[1U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[2U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[2U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[2U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[2U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[2U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[2U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[2U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[2U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[3U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[3U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[3U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[3U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[3U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[3U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[3U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.chan[3U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[0U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[0U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[0U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[0U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[0U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[0U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[0U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[0U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [0U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[1U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[1U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[1U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[1U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[1U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[1U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[1U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[1U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [1U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[2U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[2U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[2U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[2U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[2U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[2U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[2U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[2U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [2U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[3U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[3U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[3U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[3U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[3U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[3U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[3U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.chan[3U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__dac
        [3U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf[0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf[1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf[2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf[3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf[4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf[5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf[6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf[7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf
        [7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core.reset 
        = (1U & (IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core.reset 
        = (1U & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset) 
                 >> 1U));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core.reset 
        = (1U & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset) 
                 >> 2U));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core.reset 
        = (1U & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset) 
                 >> 3U));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core.reset 
        = (1U & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset) 
                 >> 4U));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core.reset 
        = (1U & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset) 
                 >> 5U));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__proc_core.reset 
        = (1U & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset) 
                 >> 6U));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__proc_core.reset 
        = (1U & ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset) 
                 >> 7U));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__update_lastshotdone 
        = ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__done) 
           | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.stb_start));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__lastshotdone_true 
        = ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__done) 
           & (~ (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.stb_start)));
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate = 0U;
    if ((0U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__state)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate 
            = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.stb_start)
                ? 1U : 0U);
    } else if ((1U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__state)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate = 3U;
    } else if ((3U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__state)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate 
            = ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__procdone_r)
                ? 2U : 3U);
    } else if ((2U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__state)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate 
            = ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nobusy_r)
                ? 6U : 2U);
    } else if ((6U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__state)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate 
            = ((IData)(vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__shotadd)
                ? 7U : 5U);
    } else if ((7U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__state)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate = 1U;
    } else if ((5U == vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__state)) {
        vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__nextstate = 0U;
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__0__KET____DOT__state_disc.start_trigger 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__1__KET____DOT__state_disc.start_trigger 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__2__KET____DOT__state_disc.start_trigger 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__3__KET____DOT__state_disc.start_trigger 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__4__KET____DOT__state_disc.start_trigger 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__5__KET____DOT__state_disc.start_trigger 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__6__KET____DOT__state_disc.start_trigger 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__statedisc__BRA__7__KET____DOT__state_disc.start_trigger 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf
        [7U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__write_enable 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf
        [0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__write_enable 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf
        [1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__write_enable 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_accbuf
        [2U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__write_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf
        [0U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__write_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf
        [1U];
    vlSelf->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__write_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_accbuf
        [2U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__48(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__48\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multix;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multiy;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multix;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multiy;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn.freqaddr;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn.envaddr;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__49(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__49\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multix;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multiy;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multix;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multiy;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn.freqaddr;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn.envaddr;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__50(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__50\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multix;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multiy;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multix;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multiy;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn.freqaddr;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn.envaddr;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__51(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__51\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.valid;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.postprobusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__7__KET__.multix[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[7U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[7U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[7U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[7U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[7U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[7U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[7U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[7U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[7U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[7U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[7U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[7U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[7U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[7U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[7U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[7U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__7__KET____DOT__qdrvout__DOT__multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__52(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__52\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.valid;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.postprobusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__6__KET__.multix[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[6U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[6U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[6U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[6U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[6U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[6U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[6U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[6U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[6U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[6U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[6U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[6U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[6U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[6U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[6U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[6U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__6__KET____DOT__qdrvout__DOT__multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__53(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__53\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.valid;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.postprobusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.multix[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[5U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[5U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[5U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[5U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[5U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[5U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[5U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[5U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[5U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[5U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[5U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[5U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[5U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[5U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[5U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[5U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__5__KET____DOT__qdrvout__DOT__multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__54(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__54\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.valid;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.postprobusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.multix[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[4U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[4U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[4U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[4U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[4U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[4U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[4U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[4U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[4U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[4U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[4U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[4U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[4U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[4U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[4U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[4U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__4__KET____DOT__qdrvout__DOT__multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__55(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__55\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.valid;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.postprobusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.multix[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[3U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[3U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__3__KET____DOT__qdrvout__DOT__multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__56(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__56\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.valid;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.postprobusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__57(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__57\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.valid;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.postprobusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__58(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__58\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.valid;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.postprobusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][0U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][1U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][2U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][3U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][4U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][5U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][6U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][7U] 
        = vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__59(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__59\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__7__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[7U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[7U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[7U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[7U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[7U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[7U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[7U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[7U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[7U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[7U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[7U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[7U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[7U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[7U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[7U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[7U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__7__KET__.multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__60(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__60\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__6__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[6U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[6U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[6U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[6U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[6U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[6U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[6U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[6U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[6U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[6U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[6U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[6U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[6U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[6U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[6U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[6U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__6__KET__.multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__61(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__61\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[5U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[5U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[5U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[5U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[5U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[5U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[5U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[5U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[5U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[5U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[5U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[5U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[5U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[5U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[5U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[5U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__62(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__62\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[4U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[4U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[4U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[4U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[4U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[4U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[4U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[4U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[4U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[4U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[4U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[4U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[4U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[4U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[4U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[4U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__63(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__63\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[3U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[3U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[3U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[3U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[3U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[3U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[3U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[3U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[3U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[3U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[3U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[3U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[3U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[3U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[3U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[3U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__64(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__64\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__65(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__65\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[7U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__66(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__66\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.gateout;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multiy16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.multix16x16[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.valid;
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[7U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[0U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[1U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[2U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[3U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[4U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[5U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[6U];
    vlSelf->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[7U];
}
