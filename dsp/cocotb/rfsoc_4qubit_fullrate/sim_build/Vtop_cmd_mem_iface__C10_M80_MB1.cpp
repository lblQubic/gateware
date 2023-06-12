// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_cmd_mem_iface__C10_M80_MB1.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_cmd_mem_iface__C10_M80_MB1::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_cmd_mem_iface__C10_M80_MB1::_settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->cmd_read[0U] = this->mem_bus[0U][0U];
    this->cmd_read[1U] = this->mem_bus[0U][1U];
    this->cmd_read[2U] = this->mem_bus[0U][2U];
    this->cmd_read[3U] = this->mem_bus[0U][3U];
}
