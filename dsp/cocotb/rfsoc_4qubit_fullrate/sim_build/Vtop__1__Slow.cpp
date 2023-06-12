// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn.freqaddr;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multix;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multix;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multiy;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.multiy;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn.envaddr;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn.freqaddr;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multix;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multix;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multiy;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.multiy;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn.envaddr;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn.freqaddr;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multix;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multix;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.chan[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multiy;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.chan[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.multiy;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn.envaddr;
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
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.gateout;
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
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.gateout;
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
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.gateout;
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
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif.cmd_read[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif.cmd_read[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif.cmd_read[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif.cmd_read[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__memif.cmd_read[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__memif.cmd_read[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__memif.cmd_read[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__memif.cmd_read[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__memif.cmd_read[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__memif.cmd_read[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__memif.cmd_read[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__memif.cmd_read[3U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdloenv
        [2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.valid;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.valid;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.postprobusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.valid;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multiy[7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.multix[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.valid;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[0U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multix[7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[0U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.valid;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.valid;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.postprobusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.valid;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multiy[7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.multix[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.valid;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[1U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multix[7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[1U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.valid;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__valid 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.valid;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.postprobusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.valid;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multiy[7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.multix[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.pulsebusy 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.valid;
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[2U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multix[7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[2U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[0U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[0U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[1U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[1U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxy[2U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx[2U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix[7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[0U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[0U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[0U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [0U][2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[0U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [0U][3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[0U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [0U][4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[0U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [0U][5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[0U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [0U][6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[0U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [0U][7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[1U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[1U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[1U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [1U][2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[1U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [1U][3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[1U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [1U][4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[1U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [1U][5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[1U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [1U][6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[1U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [1U][7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[2U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [2U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[2U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [2U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[2U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [2U][2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[2U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [2U][3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[2U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [2U][4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[2U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [2U][5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[2U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [2U][6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[2U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1
        [2U][7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[0U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[0U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[0U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [0U][2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[0U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [0U][3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[0U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [0U][4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[0U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [0U][5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[0U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [0U][6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[0U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [0U][7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[1U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[1U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[1U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [1U][2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[1U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [1U][3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[1U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [1U][4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[1U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [1U][5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[1U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [1U][6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[1U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [1U][7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[2U][0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [2U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[2U][1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [2U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[2U][2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [2U][2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[2U][3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [2U][3U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[2U][4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [2U][4U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[2U][5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [2U][5U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[2U][6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [2U][6U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[2U][7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1
        [2U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[0U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [0U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[0U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [0U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[0U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [0U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[0U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [0U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[0U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [0U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[0U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [0U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[0U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [0U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[0U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [0U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[1U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [1U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[1U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [1U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[1U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [1U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[1U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [1U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[1U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [1U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[1U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [1U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[1U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [1U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[1U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [1U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[2U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [2U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[2U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [2U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[2U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [2U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[2U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [2U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[2U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [2U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[2U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [2U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[2U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [2U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[2U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [2U][7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[3U][0U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [3U][0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[3U][1U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [3U][1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[3U][2U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [3U][2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[3U][3U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [3U][3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[3U][4U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [3U][4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[3U][5U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [3U][5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[3U][6U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [3U][6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac[3U][7U] 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__xmaif.daccplxx
        [3U][7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__xinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [0U][0U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__xinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [1U][0U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__xinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [2U][0U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__xinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [0U][1U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [0U][0U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__xinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [1U][1U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [1U][0U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__xinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [2U][1U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [2U][0U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__xinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [0U][1U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__xinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [1U][1U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__xinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [2U][1U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__xinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [0U][2U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [0U][1U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__xinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [1U][2U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [1U][1U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__xinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [2U][2U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [2U][1U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__xinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [0U][2U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__xinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [1U][2U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__xinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [2U][2U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__xinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [0U][3U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [0U][2U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__xinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [1U][3U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [1U][2U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__xinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [2U][3U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [2U][2U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__xinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [0U][3U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__xinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [1U][3U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__xinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [2U][3U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__xinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [0U][4U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [0U][3U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__xinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [1U][4U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [1U][3U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__xinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [2U][4U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [2U][3U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__xinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [0U][4U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__xinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [1U][4U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__xinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [2U][4U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__xinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [0U][5U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [0U][4U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__xinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [1U][5U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [1U][4U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__xinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [2U][5U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [2U][4U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__xinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [0U][5U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__xinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [1U][5U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__xinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [2U][5U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__xinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [0U][6U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [0U][5U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__xinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [1U][6U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [1U][5U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__xinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [2U][6U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [2U][5U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__xinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [0U][6U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__xinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [1U][6U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__xinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [2U][6U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__xinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [0U][7U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [0U][6U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__xinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [1U][7U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [1U][6U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__xinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                       [2U][7U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                                             [2U][6U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__xinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [0U][7U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__xinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [1U][7U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__xinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
           [2U][7U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__xinslice[0U] 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                      [0U][7U] >> 0x10U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__xinslice[1U] 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                      [1U][7U] >> 0x10U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__xinslice[2U] 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin
                      [2U][7U] >> 0x10U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__yinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [0U][0U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__yinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [1U][0U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__yinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [2U][0U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__yinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [0U][1U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [0U][0U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__yinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [1U][1U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [1U][0U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__yinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [2U][1U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [2U][0U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__yinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [0U][1U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__yinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [1U][1U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__yinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [2U][1U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__yinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [0U][2U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [0U][1U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__yinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [1U][2U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [1U][1U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__yinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [2U][2U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [2U][1U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__yinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [0U][2U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__yinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [1U][2U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__yinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [2U][2U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__yinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [0U][3U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [0U][2U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__yinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [1U][3U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [1U][2U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__yinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [2U][3U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [2U][2U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__yinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [0U][3U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__yinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [1U][3U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__yinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [2U][3U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__yinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [0U][4U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [0U][3U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__yinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [1U][4U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [1U][3U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__yinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [2U][4U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [2U][3U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__yinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [0U][4U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__yinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [1U][4U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__yinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [2U][4U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__yinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [0U][5U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [0U][4U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__yinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [1U][5U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [1U][4U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__yinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [2U][5U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [2U][4U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__yinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [0U][5U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__yinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [1U][5U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__yinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [2U][5U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__yinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [0U][6U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [0U][5U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__yinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [1U][6U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [1U][5U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__yinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [2U][6U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [2U][5U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__yinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [0U][6U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__yinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [1U][6U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__yinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [2U][6U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__yinslice[0U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [0U][7U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [0U][6U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__yinslice[1U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [1U][7U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [1U][6U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__yinslice[2U] 
        = (0xffffU & ((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                       [2U][7U] << 0x10U) | (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                                             [2U][6U] 
                                             >> 0x10U)));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__yinslice[0U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [0U][7U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__yinslice[1U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [1U][7U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__yinslice[2U] 
        = (0xffffU & vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
           [2U][7U]);
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__yinslice[0U] 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                      [0U][7U] >> 0x10U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__yinslice[1U] 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                      [1U][7U] >> 0x10U));
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__yinslice[2U] 
        = (0xffffU & (vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin
                      [2U][7U] >> 0x10U));
    vlTOPp->dsp_sim_toplevel__DOT__dac[0U][0U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [0U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[0U][1U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [0U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[0U][2U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [0U][2U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[0U][3U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [0U][3U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[0U][4U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [0U][4U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[0U][5U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [0U][5U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[0U][6U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [0U][6U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[0U][7U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [0U][7U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[1U][0U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [1U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[1U][1U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [1U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[1U][2U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [1U][2U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[1U][3U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [1U][3U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[1U][4U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [1U][4U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[1U][5U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [1U][5U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[1U][6U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [1U][6U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[1U][7U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [1U][7U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[2U][0U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [2U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[2U][1U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [2U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[2U][2U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [2U][2U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[2U][3U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [2U][3U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[2U][4U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [2U][4U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[2U][5U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [2U][5U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[2U][6U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [2U][6U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[2U][7U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [2U][7U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[3U][0U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [3U][0U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[3U][1U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [3U][1U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[3U][2U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [3U][2U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[3U][3U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [3U][3U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[3U][4U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [3U][4U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[3U][5U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [3U][5U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[3U][6U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [3U][6U];
    vlTOPp->dsp_sim_toplevel__DOT__dac[3U][7U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.dac
        [3U][7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumx__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__xinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumx__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__xinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumx__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__xinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__yinslice
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumy__vin[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__yinslice
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumy__vin[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__yinslice
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumy__vin[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__yinslice
        [2U];
    vlTOPp->dac[0U][0U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [0U][0U];
    vlTOPp->dac[0U][1U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [0U][1U];
    vlTOPp->dac[0U][2U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [0U][2U];
    vlTOPp->dac[0U][3U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [0U][3U];
    vlTOPp->dac[0U][4U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [0U][4U];
    vlTOPp->dac[0U][5U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [0U][5U];
    vlTOPp->dac[0U][6U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [0U][6U];
    vlTOPp->dac[0U][7U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [0U][7U];
    vlTOPp->dac[1U][0U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [1U][0U];
    vlTOPp->dac[1U][1U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [1U][1U];
    vlTOPp->dac[1U][2U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [1U][2U];
    vlTOPp->dac[1U][3U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [1U][3U];
    vlTOPp->dac[1U][4U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [1U][4U];
    vlTOPp->dac[1U][5U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [1U][5U];
    vlTOPp->dac[1U][6U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [1U][6U];
    vlTOPp->dac[1U][7U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [1U][7U];
    vlTOPp->dac[2U][0U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [2U][0U];
    vlTOPp->dac[2U][1U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [2U][1U];
    vlTOPp->dac[2U][2U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [2U][2U];
    vlTOPp->dac[2U][3U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [2U][3U];
    vlTOPp->dac[2U][4U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [2U][4U];
    vlTOPp->dac[2U][5U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [2U][5U];
    vlTOPp->dac[2U][6U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [2U][6U];
    vlTOPp->dac[2U][7U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [2U][7U];
    vlTOPp->dac[3U][0U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [3U][0U];
    vlTOPp->dac[3U][1U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [3U][1U];
    vlTOPp->dac[3U][2U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [3U][2U];
    vlTOPp->dac[3U][3U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [3U][3U];
    vlTOPp->dac[3U][4U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [3U][4U];
    vlTOPp->dac[3U][5U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [3U][5U];
    vlTOPp->dac[3U][6U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [3U][6U];
    vlTOPp->dac[3U][7U] = vlTOPp->dsp_sim_toplevel__DOT__dac
        [3U][7U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumx__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumx__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumx__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumy__vin
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vin_w[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumy__vin
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vin_w[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumy__vin
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vin_w[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumy__vin
        [2U];
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__2(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__2(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__2(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____2(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____2(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____2(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____2(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__._initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____1(vlSymsp);
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET__.clk;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspif__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET____clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.clk;
    vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__clk 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.clk;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__4(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__5(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__6(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__7(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__8(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__7(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__8(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__7(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__8(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____4(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____4(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____4(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____4(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____4(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____4(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____4(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____4(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____4(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____6(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____6(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____6(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____6(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____6(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____3(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____3(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif__1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__memif._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif__1(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__memif._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif__1(vlSymsp);
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____9(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____9(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____9(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____9(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____9(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____9(vlSymsp);
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    stb_start = VL_RAND_RESET_I(1);
    nshot = VL_RAND_RESET_I(32);
    mem_write_data = VL_RAND_RESET_I(32);
    mem_write_addr = VL_RAND_RESET_I(16);
    proc_write_sel = VL_RAND_RESET_I(3);
    mem_write_sel = VL_RAND_RESET_I(3);
    mem_write_en = VL_RAND_RESET_I(1);
    buf_read_addr = VL_RAND_RESET_I(13);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        adc[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(256, dac[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        acc_read_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        acq_read_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    dsp_sim_toplevel__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__stb_start = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__nshot = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__mem_write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__mem_write_addr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__proc_write_sel = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__mem_write_sel = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__mem_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__buf_read_addr = VL_RAND_RESET_I(13);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__adc[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dac[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__acc_read_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__acq_read_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_qdrv_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_qdrv_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_rdrv_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_rdrv_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_rdlo_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_rdlo_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_qdrv_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_qdrv_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_rdrv_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_rdrv_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_rdlo_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_rdlo_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_qdrv_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_qdrv_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_rdrv_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_rdrv_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_rdlo_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_rdlo_wen = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procreset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procreset_d = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__done = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__nshot = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__stbprocend = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procdone = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procdone_r = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__nobusy = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__nobusy_r = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__shotcnt = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__nextshotcnt = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__currentshotcnt = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__proccorereset = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_input = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__fproc_meas_valid = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__state_dbg[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__nextstate_dbg[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin1[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin1[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__yin[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT____Vcellinp__rdrvelemout1__xin[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__rdrvxin2[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__rdrvyin2[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__adc[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample[__Vi0] = VL_RAND_RESET_Q(64);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__mixbb1 = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__dspmod__DOT__mixbb2 = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__dspmod__DOT__resetacc = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__addr_accbuf[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__locklast_accbuf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__we_accbuf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__dac[__Vi0]);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__state = 0;
    dsp_sim_toplevel__DOT__dspmod__DOT__nextstate = 0;
    dsp_sim_toplevel__DOT__dspmod__DOT__shotadd = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__accvalid = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__accvalid = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__accvalid = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__acqpztifwire__BRA__0__KET____DOT__stb_start_r = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__acqpztifwire__BRA__1__KET____DOT__stb_start_r = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__0__KET____DOT__stb_start_r = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__1__KET____DOT__stb_start_r = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__2__KET____DOT__stb_start_r = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztifwire__BRA__3__KET____DOT__stb_start_r = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xin[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yin[__Vi0]);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__xout);
    VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__yout);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__0__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__1__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__2__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__3__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__4__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__5__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__6__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__7__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__8__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__9__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__10__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__11__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__12__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__13__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__14__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumx__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT____Vcellinp__stepslice__BRA__15__KET____DOT__sumy__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__l1__BRA__0__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout1__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__l1__BRA__1__KET____DOT__vtemp_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__xin[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__yin[__Vi0]);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__xout);
    VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__yout);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__xinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__yinslice[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__xoutslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__youtslice = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__0__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__1__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__2__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__3__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__4__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__5__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__6__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__7__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__8__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__9__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__10__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__11__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__12__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__13__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__14__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumx__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vin[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vout = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gin = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vin_w[__Vi0] = VL_RAND_RESET_I(16);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gsr = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__gout_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelemout2__DOT__stepslice__BRA__15__KET____DOT__sumy__DOT__vtemp[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_valid = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_state[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__core_next_state[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__fproc__DOT__meas_addr[__Vi0] = VL_RAND_RESET_I(2);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__cmd_read_addr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__state_dbg = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__nextstate_dbg = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__stbend = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__procdone_mon = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__nobusy_mon = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__procdone = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__command_d2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__addr_command = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__noop = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__nobusy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__done_gate = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_read_addr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out1 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_in = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(79, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__phase_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__phase_write_en_cmd = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__freq_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__freq_write_en_cmd = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__env_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__env_write_en_cmd = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__phase_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__freq_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__env_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__c_strobe_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1_sel = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_en_sel = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en_sel = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset_ctrl = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr_ptr_load_val = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__alu_cmd_data_in0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_time = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in0 = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in1 = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_addr = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr = VL_RAND_RESET_I(5);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__dummy_resetsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__load_val = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__load_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__ptr_out = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val_inc = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__read_addr_0 = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__read_addr_1 = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_addr = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_0_out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_1_out = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__opcode = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_ready = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_ready = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__cstrobe_in = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_opcode = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in0_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state = VL_RAND_RESET_I(5);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = VL_RAND_RESET_I(5);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ctrl = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id1 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__add = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__eq = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__le = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ge = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub_oflow = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__rst = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__in_val = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__load_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__value = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(79, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_cmd_in);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__reg_in = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cstrobe_in = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_word = VL_RAND_RESET_I(24);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cstrobe = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_i_in = VL_RAND_RESET_I(24);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_in = VL_RAND_RESET_I(24);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_i_in = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_in = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_i_in = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_in = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_i_in = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_in = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_i_in = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_in = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envdata_r2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(240, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envdata_r2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(360, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__cmd_read_addr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__state_dbg = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__nextstate_dbg = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__stbend = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__procdone_mon = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__nobusy_mon = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__procdone = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__command_d2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__addr_command = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__noop = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__nobusy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__done_gate = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_read_addr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out1 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_in = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(79, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__phase_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__phase_write_en_cmd = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__freq_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__freq_write_en_cmd = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__env_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__env_write_en_cmd = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__phase_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__freq_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__env_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__c_strobe_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1_sel = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_en_sel = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en_sel = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset_ctrl = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr_ptr_load_val = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__alu_cmd_data_in0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_time = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in0 = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in1 = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_addr = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr = VL_RAND_RESET_I(5);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__dummy_resetsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__load_val = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__load_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__ptr_out = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val_inc = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__read_addr_0 = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__read_addr_1 = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_addr = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_0_out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_1_out = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__opcode = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_ready = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_ready = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__cstrobe_in = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_opcode = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in0_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state = VL_RAND_RESET_I(5);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = VL_RAND_RESET_I(5);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ctrl = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id1 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__add = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__eq = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__le = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ge = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub_oflow = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__rst = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__in_val = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__load_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__value = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(79, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_cmd_in);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__reg_in = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cstrobe_in = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_word = VL_RAND_RESET_I(24);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cstrobe = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_i_in = VL_RAND_RESET_I(24);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_in = VL_RAND_RESET_I(24);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_i_in = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_in = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_i_in = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_in = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_i_in = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_in = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_i_in = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_in = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envdata_r2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(240, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envdata_r2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(360, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__cmd_read_addr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__state_dbg = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__nextstate_dbg = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__stbend = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__procdone_mon = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__nobusy_mon = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__procdone = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__command_d2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__addr_command = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__noop = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__nobusy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__done_gate = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_out);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cmd_buf_read_addr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_file_out1 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_in = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(79, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_i);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__phase_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__phase_write_en_cmd = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__freq_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__freq_write_en_cmd = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__env_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__env_write_en_cmd = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__phase_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__freq_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__env_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_opcode = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__c_strobe_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in0_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_in1_sel = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_en_sel = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en_sel = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__cstrobe = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__write_pulse_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__qclk_reset_ctrl = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__inst_ptr_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__local_cmd);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr_ptr_load_val = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__alu_cmd_data_in0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulse_cmd_time = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in0 = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_addr_in1 = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reg_write_addr = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__reset_sr = VL_RAND_RESET_I(5);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__dummy_resetsr = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__load_val = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__load_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__ptr_out = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val_inc = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__prev_val = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__instr__DOT__cur_val = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__read_addr_0 = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__read_addr_1 = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_addr = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_0_out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__reg_1_out = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__regs__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__opcode = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_ready = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_ready = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__cstrobe_in = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_opcode = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__c_strobe_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__done_gate = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in0_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__alu_in1_sel = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__reg_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_ptr_load_en = VL_RAND_RESET_I(2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__instr_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_load_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__qclk_reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__sync_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__fproc_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__write_pulse_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__pulse_reset = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__state = VL_RAND_RESET_I(5);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__next_state = VL_RAND_RESET_I(5);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_cycles = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__ctu__DOT__mem_wait_rst = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ctrl = VL_RAND_RESET_I(3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id0 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__id1 = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__add = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__eq = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__le = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__ge = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__sub_oflow = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in0_reg = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__in1_reg = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myalu__DOT__local_out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__rst = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__in_val = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__load_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__out = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__myclk__DOT__value = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(79, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_cmd_in);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__reg_in = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__pulse_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cstrobe_in = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_word = VL_RAND_RESET_I(24);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cstrobe = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_i_in = VL_RAND_RESET_I(24);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_in = VL_RAND_RESET_I(24);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_i_in = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_in = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_i_in = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_in = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_i_in = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_in = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_i_in = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_in = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__cfg_write_en = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__env_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__phase_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__freq_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__dproc__DOT__pulsereg__DOT__amp_write_sel = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envdata_r2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(8);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(240, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy_sr = VL_RAND_RESET_Q(42);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__dummybusy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r2 = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r3 = VL_RAND_RESET_I(9);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqaddr_r4 = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r3);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r2 = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_r3 = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r3);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envdata_r2);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__lastenv = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__gate = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__din = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__dout = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(360, dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddrdelay__DOT__usual__DOT__shifter);
    dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multix);
    VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__0__KET____DOT__qdrvout__DOT__multiy);
    dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multix);
    VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__1__KET____DOT__qdrvout__DOT__multiy);
    dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multix);
    VL_RAND_RESET_W(256, dsp_sim_toplevel__DOT__dspmod__DOT__qdrvouts__BRA__2__KET____DOT__qdrvout__DOT__multiy);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__adcx = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__adcy = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__shift = VL_RAND_RESET_I(5);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__gateout = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__stbout = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accx = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accy = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__adcx_r = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__adcy_r = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__multixi[__Vi0][__Vi1] = VL_RAND_RESET_Q(33);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__multiyi[__Vi0][__Vi1] = VL_RAND_RESET_Q(33);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__sumxslice[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__sumyslice[__Vi0] = VL_RAND_RESET_Q(34);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__gatesr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__gatesrdummy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__sumxslicelast = VL_RAND_RESET_Q(50);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__sumyslicelast = VL_RAND_RESET_Q(50);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accsumx = VL_RAND_RESET_Q(50);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accsumy = VL_RAND_RESET_Q(50);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__newacc = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accx_r = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accy_r = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__adcxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__adcyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__dloxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__dloyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__multixi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__multiyi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__multixi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__multiyi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__adcxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__adcyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__dloxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__dloyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__multixi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__multiyi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__multixi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__multiyi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__adcxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__adcyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__dloxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__dloyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__multixi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__multiyi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__multixi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__multiyi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__adcxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__adcyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__dloxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__dloyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__multixi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__multiyi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__multixi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__multiyi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__0__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__adcx = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__adcy = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__shift = VL_RAND_RESET_I(5);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__gateout = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__stbout = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accx = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accy = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__adcx_r = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__adcy_r = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__multixi[__Vi0][__Vi1] = VL_RAND_RESET_Q(33);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__multiyi[__Vi0][__Vi1] = VL_RAND_RESET_Q(33);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__sumxslice[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__sumyslice[__Vi0] = VL_RAND_RESET_Q(34);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__gatesr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__gatesrdummy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__sumxslicelast = VL_RAND_RESET_Q(50);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__sumyslicelast = VL_RAND_RESET_Q(50);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accsumx = VL_RAND_RESET_Q(50);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accsumy = VL_RAND_RESET_Q(50);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__newacc = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accx_r = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accy_r = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__adcxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__adcyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__dloxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__dloyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__multixi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__multiyi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__multixi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__multiyi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__adcxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__adcyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__dloxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__dloyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__multixi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__multiyi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__multixi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__multiyi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__adcxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__adcyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__dloxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__dloyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__multixi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__multiyi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__multixi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__multiyi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__adcxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__adcyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__dloxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__dloyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__multixi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__multiyi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__multixi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__multiyi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__1__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__adcx = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__adcy = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__shift = VL_RAND_RESET_I(5);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__gateout = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__stbout = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accx = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accy = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__adcx_r = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__adcy_r = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__multixi[__Vi0][__Vi1] = VL_RAND_RESET_Q(33);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__multiyi[__Vi0][__Vi1] = VL_RAND_RESET_Q(33);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__sumxslice[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__sumyslice[__Vi0] = VL_RAND_RESET_Q(34);
    }
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__gatesr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__gatesrdummy = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__sumxslicelast = VL_RAND_RESET_Q(50);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__sumyslicelast = VL_RAND_RESET_Q(50);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accsumx = VL_RAND_RESET_Q(50);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accsumy = VL_RAND_RESET_Q(50);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__newacc = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accx_r = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__accy_r = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__adcxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__adcyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__dloxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__dloyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__multixi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__multiyi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__multixi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__multiyi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__adcxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__adcyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__dloxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__dloyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__multixi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__multiyi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__multixi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__multiyi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__adcxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__adcyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__dloxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__dloyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__multixi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__multiyi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__multixi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__multiyi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__adcxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__adcyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__dloxi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__dloyi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__multixi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__multiyi_w = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__multixi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__multiyi_r = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexi = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__indexj = VL_RAND_RESET_I(4);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yr = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yi = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__zr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__zi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xi4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__xr4 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yi1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yi2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yi3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yr1 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yr2 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__yr3 = VL_RAND_RESET_I(16);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__addcommon = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__addr = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__addi = VL_RAND_RESET_I(17);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__mult0 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multr = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multi = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__zr_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__zi_int = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__common = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__commonr1 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__dspmod__DOT__rdlomixacc__BRA__2__KET____DOT__genblk1__DOT__rdlo0mixacc1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__commonr2 = VL_RAND_RESET_Q(33);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__write_addr = VL_RAND_RESET_I(13);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__read_addr = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__read_data);
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__cmd_mem__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(11);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__write_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_addr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_data);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(8);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__write_addr = VL_RAND_RESET_I(13);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_data);
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__write_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__read_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__write_addr = VL_RAND_RESET_I(13);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_data);
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__write_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__read_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__write_addr = VL_RAND_RESET_I(11);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_data);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__write_data = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__write_addr = VL_RAND_RESET_I(10);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__read_addr = VL_RAND_RESET_I(10);
    dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__read_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__write_addr = VL_RAND_RESET_I(13);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__read_addr = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__read_data);
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__cmd_mem__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(11);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__write_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_addr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_data);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(8);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__write_addr = VL_RAND_RESET_I(13);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_data);
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__write_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__read_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__write_addr = VL_RAND_RESET_I(13);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_data);
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__write_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__read_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__write_addr = VL_RAND_RESET_I(11);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_data);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__write_data = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__write_addr = VL_RAND_RESET_I(10);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__read_addr = VL_RAND_RESET_I(10);
    dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__read_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__write_addr = VL_RAND_RESET_I(13);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__read_addr = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__read_data);
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__cmd_mem__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(11);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__write_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_addr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_data);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(8);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__write_addr = VL_RAND_RESET_I(13);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_data);
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__write_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__read_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__write_addr = VL_RAND_RESET_I(13);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(512, dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_data);
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__write_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__read_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdlo__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__write_data = VL_RAND_RESET_I(32);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__write_addr = VL_RAND_RESET_I(11);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_addr = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(128, dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_data);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(9);
    }
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__write_data = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__write_addr = VL_RAND_RESET_I(10);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__read_addr = VL_RAND_RESET_I(10);
    dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__read_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(10);
    }
    dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__write_data = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__write_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__read_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__read_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__clk = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__write_data = VL_RAND_RESET_Q(64);
    dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__write_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__write_enable = VL_RAND_RESET_I(1);
    dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__read_addr = VL_RAND_RESET_I(12);
    dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__read_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__cur_read_addr[__Vi0] = VL_RAND_RESET_I(12);
    }
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__adc__v0 = VL_RAND_RESET_Q(64);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__adc__v0 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__adc__v1 = VL_RAND_RESET_Q(64);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__adc__v1 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v0 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v0 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v0 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v1 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v1 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v1 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v2 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v2 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v2 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v3 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v3 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v3 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v4 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v4 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v4 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v5 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v5 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v5 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v6 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v6 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v6 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v7 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v7 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v7 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v8 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v8 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v8 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v9 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v9 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v9 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v10 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v10 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v10 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v11 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v11 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v11 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v12 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v12 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v12 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v13 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v13 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v13 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v14 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v14 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v14 = 0;
    __Vdlyvlsb__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v15 = 0;
    __Vdlyvval__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v15 = VL_RAND_RESET_I(16);
    __Vdlyvset__dsp_sim_toplevel__DOT__dspmod__DOT__dacundersample__v15 = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
