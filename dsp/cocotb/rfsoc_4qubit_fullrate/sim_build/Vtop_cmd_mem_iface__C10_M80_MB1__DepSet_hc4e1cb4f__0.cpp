// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_cmd_mem_iface__C10_M80_MB1.h"

VL_INLINE_OPT void Vtop_cmd_mem_iface__C10_M80_MB1___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif__0(Vtop_cmd_mem_iface__C10_M80_MB1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_cmd_mem_iface__C10_M80_MB1___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif__0\n"); );
    // Body
    vlSelf->cmd_read[0U] = vlSelf->mem_bus[0U][0U];
    vlSelf->cmd_read[1U] = vlSelf->mem_bus[0U][1U];
    vlSelf->cmd_read[2U] = vlSelf->mem_bus[0U][2U];
    vlSelf->cmd_read[3U] = vlSelf->mem_bus[0U][3U];
}

std::string VL_TO_STRING(const Vtop_cmd_mem_iface__C10_M80_MB1* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_cmd_mem_iface__C10_M80_MB1::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
