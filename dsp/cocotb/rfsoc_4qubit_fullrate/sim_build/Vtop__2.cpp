// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop::_multiclk__TOP__45(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__45\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__write_enable 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_acqbuf
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__write_enable 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.we_acqbuf
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__write_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_acqbuf
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__write_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_acqbuf
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__0__KET____DOT__acq_buf__DOT__write_data 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_acqbuf
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk2__BRA__1__KET____DOT__acq_buf__DOT__write_data 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_acqbuf
        [1U];
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__46(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__46\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_accbuf[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
        [0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_accbuf[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
        [1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_accbuf[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__data_accbuf
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
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdlo__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdlo__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdlo__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdlofreq
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__acc_buf__DOT__write_data 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_accbuf
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__acc_buf__DOT__write_data 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_accbuf
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__acc_buf__DOT__write_data 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.data_accbuf
        [2U];
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__47(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__47\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_qdrv__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvenv
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_qdrv__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvenv
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_qdrv__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvenv
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_qdrv__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvfreq
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_qdrv__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvfreq
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_qdrv__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_qdrvfreq
        [2U];
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__48(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__48\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__env_mem_rdrv__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvenv
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__env_mem_rdrv__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvenv
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__env_mem_rdrv__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvenv
        [2U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__0__KET____DOT__freq_mem_rdrv__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvfreq
        [0U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__1__KET____DOT__freq_mem_rdrv__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvfreq
        [1U];
    vlTOPp->dsp_sim_toplevel__DOT__genblk1__BRA__2__KET____DOT__freq_mem_rdrv__DOT__read_addr 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.addr_rdrvfreq
        [2U];
}

VL_INLINE_OPT void Vtop::_sequent__TOP__49(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__49\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.tcnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU];
}

VL_INLINE_OPT void Vtop::_sequent__TOP__50(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__50\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.tcnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU];
}

VL_INLINE_OPT void Vtop::_sequent__TOP__51(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__51\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.tcnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__freqdata_r2[0xfU];
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__52(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__52\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void Vtop::_sequent__TOP__53(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__53\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.tcnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU];
}

VL_INLINE_OPT void Vtop::_sequent__TOP__54(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__54\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.tcnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU];
}

VL_INLINE_OPT void Vtop::_sequent__TOP__55(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__55\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.tcnt 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.tcnt;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.gatein 
        = (1U & (IData)((vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__busy_sr 
                         >> 3U)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[1U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[2U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[3U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[3U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[4U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[4U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[5U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[5U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[6U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[6U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[7U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[7U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[8U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[8U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[9U] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[9U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xaU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xaU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xbU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xbU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xcU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xcU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xdU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xdU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xeU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xeU];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.freqcossinp32x16[0xfU] 
        = vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__freqdata_r2[0xfU];
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__56(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__56\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__57(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__57\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__lastenv 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__envaddr_cnt) 
           == (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.envstart) 
                + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.envlength)) 
               - (IData)(1U)));
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__58(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__58\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__lastenv 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__envaddr_cnt) 
           == (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.envstart) 
                + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.envlength)) 
               - (IData)(1U)));
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__59(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__59\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__lastenv 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__envaddr_cnt) 
           == (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.envstart) 
                + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.envlength)) 
               - (IData)(1U)));
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__60(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__60\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__lastenv 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__envaddr_cnt) 
           == (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.envstart) 
                + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.envlength)) 
               - (IData)(1U)));
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__61(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__61\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__lastenv 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__envaddr_cnt) 
           == (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.envstart) 
                + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.envlength)) 
               - (IData)(1U)));
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__62(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_multiclk__TOP__62\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__lastenv 
        = ((IData)(vlTOPp->dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__envaddr_cnt) 
           == (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.envstart) 
                + (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.envlength)) 
               - (IData)(1U)));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____clk)))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____11(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__7(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__8(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__9(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__15(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__15(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__15(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__15(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__15(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__15(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspif__clk)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET____clk)))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__0__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____15(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET____clk)))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__1__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____15(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET____clk)))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__2__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____15(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____clk)))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____15(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET____clk)))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____6(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____clk)))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____6(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____clk)))) {
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__10(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____7(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__11(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____8(vlSymsp);
        vlTOPp->_sequent__TOP__16(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET____clk)))) {
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__12(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____7(vlSymsp);
        vlTOPp->_sequent__TOP__18(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__13(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____8(vlSymsp);
        vlTOPp->_sequent__TOP__19(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET____clk)))) {
        vlTOPp->_sequent__TOP__20(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__14(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____7(vlSymsp);
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__15(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____8(vlSymsp);
        vlTOPp->_sequent__TOP__22(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____clk)))) {
        vlTOPp->_sequent__TOP__23(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____10(vlSymsp);
        vlTOPp->_sequent__TOP__24(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET____clk)))) {
        vlTOPp->_sequent__TOP__25(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____10(vlSymsp);
        vlTOPp->_sequent__TOP__26(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET____clk)))) {
        vlTOPp->_sequent__TOP__27(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____10(vlSymsp);
        vlTOPp->_sequent__TOP__28(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____clk)))) {
        vlTOPp->_sequent__TOP__29(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____10(vlSymsp);
        vlTOPp->_sequent__TOP__30(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET____clk)))) {
        vlTOPp->_sequent__TOP__31(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____10(vlSymsp);
        vlTOPp->_sequent__TOP__32(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET____clk)))) {
        vlTOPp->_sequent__TOP__33(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____10(vlSymsp);
        vlTOPp->_sequent__TOP__34(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod__clk)))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__23(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__24(vlSymsp);
        vlTOPp->_sequent__TOP__35(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____9(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod__clk)))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__23(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__24(vlSymsp);
        vlTOPp->_sequent__TOP__36(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____9(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__clk)))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__23(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__24(vlSymsp);
        vlTOPp->_sequent__TOP__37(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____9(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod__clk)))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__29(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__30(vlSymsp);
        vlTOPp->_sequent__TOP__38(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____13(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod__clk)))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__29(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__30(vlSymsp);
        vlTOPp->_sequent__TOP__39(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____13(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__clk)))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__29(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__30(vlSymsp);
        vlTOPp->_sequent__TOP__40(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____13(vlSymsp);
    }
    vlTOPp->_combo__TOP__41(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__33(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__33(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__33(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__33(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__33(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__33(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__42(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif__1(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__DOT__memif._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif__1(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__DOT__memif._settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif__1(vlSymsp);
        vlTOPp->_sequent__TOP__43(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspif__clk)))) {
        vlTOPp->_sequent__TOP__44(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__16(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__17(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn._sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__18(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET__.clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__1__KET____clk))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET__.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__acqpztif__BRA__0__KET____clk))))) {
        vlTOPp->_multiclk__TOP__45(vlSymsp);
    }
    if (((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET____clk))) 
          | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET____clk)))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____clk))))) {
        vlTOPp->_multiclk__TOP__46(vlSymsp);
    }
    if (((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.clk) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____clk))) 
          | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET____clk)))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET____clk))))) {
        vlTOPp->_multiclk__TOP__47(vlSymsp);
    }
    if (((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.clk) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET____clk))) 
          | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____clk)))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET____clk))))) {
        vlTOPp->_multiclk__TOP__48(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____clk)))) {
        vlTOPp->_sequent__TOP__49(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET____clk)))) {
        vlTOPp->_sequent__TOP__50(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET____clk)))) {
        vlTOPp->_sequent__TOP__51(vlSymsp);
    }
    if ((((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspif__clk))) 
           | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod.clk) 
              & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod__clk)))) 
          | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod.clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__clk)))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod__clk))))) {
        vlTOPp->_multiclk__TOP__52(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____clk)))) {
        vlTOPp->_sequent__TOP__53(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET____clk)))) {
        vlTOPp->_sequent__TOP__54(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET____clk)))) {
        vlTOPp->_sequent__TOP__55(vlSymsp);
    }
    if (((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod.clk) 
           & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod__clk))) 
          | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod.clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod__clk)))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod__clk))))) {
        vlTOPp->_multiclk__TOP__56(vlSymsp);
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__qdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__39(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__qdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__39(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__39(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__39(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__39(vlSymsp);
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdrvelemconn__DOT__ammod._combo__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__qdrvelemconn__DOT__ammod__39(vlSymsp);
    if ((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspif__clk))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____clk))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__._multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____13(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn._multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__rdloelemconn__19(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspif__clk))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET____clk))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__._multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____13(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn._multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__rdloelemconn__20(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspif__clk))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET____clk))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__._multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____13(vlSymsp);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn._multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__rdloelemconn__21(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspif__clk))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____clk))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__._multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____16(vlSymsp);
        vlTOPp->_multiclk__TOP__57(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspif__clk))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET____clk))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__._multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____16(vlSymsp);
        vlTOPp->_multiclk__TOP__58(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspif__clk))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET____clk))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__._multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET____16(vlSymsp);
        vlTOPp->_multiclk__TOP__59(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspif__clk))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____clk))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__._multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____16(vlSymsp);
        vlTOPp->_multiclk__TOP__60(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspif__clk))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET____clk))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__._multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____16(vlSymsp);
        vlTOPp->_multiclk__TOP__61(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspif.clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspif__clk))) 
         | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET____clk))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__._multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET____16(vlSymsp);
        vlTOPp->_multiclk__TOP__62(vlSymsp);
    }
    // Final
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

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((stb_start & 0xfeU))) {
        Verilated::overWidthError("stb_start");}
    if (VL_UNLIKELY((proc_write_sel & 0xf8U))) {
        Verilated::overWidthError("proc_write_sel");}
    if (VL_UNLIKELY((mem_write_sel & 0xf8U))) {
        Verilated::overWidthError("mem_write_sel");}
    if (VL_UNLIKELY((mem_write_en & 0xfeU))) {
        Verilated::overWidthError("mem_write_en");}
    if (VL_UNLIKELY((buf_read_addr & 0xe000U))) {
        Verilated::overWidthError("buf_read_addr");}
}
#endif  // VL_DEBUG
