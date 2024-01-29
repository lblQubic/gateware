// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_proc_core__Qz1_Rz2_RBz3.h"

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.id 
        = (0xffU & (vlSelf->dproc__DOT__local_cmd[1U] 
                    >> 0x14U));
    vlSelf->dproc__DOT__instr__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__opcode = (0xffU & 
                                            (((0U == 0x18U)
                                               ? 0U
                                               : (vlSelf->dproc__DOT__local_cmd[
                                                  (((IData)(7U) 
                                                    + (IData)(0x78U)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x18U)))) 
                                             | (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x18U)));
    vlSelf->dproc__DOT__ctu__DOT__fproc_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.ready;
    vlSelf->dproc__DOT__ctu__DOT__sync_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__sync.ready;
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_in = vlSelf->dproc__DOT__qclk_trig;
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe_in = vlSelf->dproc__DOT__cstrobe;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.env_word 
        = vlSelf->dproc__DOT__pulsereg__DOT__env_word;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.phase 
        = vlSelf->dproc__DOT__pulsereg__DOT__phase;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.freq 
        = vlSelf->dproc__DOT__pulsereg__DOT__freq;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.amp 
        = vlSelf->dproc__DOT__pulsereg__DOT__amp;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cfg 
        = vlSelf->dproc__DOT__pulsereg__DOT__cfg;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cstrobe 
        = vlSelf->dproc__DOT__pulsereg__DOT__cstrobe;
    vlSelf->dproc__DOT__pulse_cmd_time = ((vlSelf->dproc__DOT__local_cmd[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->dproc__DOT__local_cmd[0U] 
                                             >> 5U));
    if ((0U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles);
        vlSelf->dproc__DOT__ctu__DOT__next_state = 
            ((2U > vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles)
              ? 0U : 1U);
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        if ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & (IData)((0x20000000U == (0x70000000U 
                                                 & vlSelf->dproc__DOT__local_cmd[3U]))));
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                    ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? 1U : ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                 ? 1U : ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                          ? 0U : 1U)))
                    : ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 0U : 9U) : ((0x10000000U 
                                           & vlSelf->dproc__DOT__local_cmd[3U])
                                           ? ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                               ? 0U
                                               : 1U)
                                           : 0U)));
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
        } else {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                             >> 0x1eU)) & ((0x20000000U 
                                            & vlSelf->dproc__DOT__local_cmd[3U])
                                            ? (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU))
                                            : (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU)))));
            if ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                if ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                    if ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 6U;
                        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                    } else {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 2U;
                        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
                    }
                } else {
                    vlSelf->dproc__DOT__ctu__DOT__next_state = 4U;
                    vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                }
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                if ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                    if ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 2U;
                        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                    } else {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
                        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 1U;
                    }
                } else {
                    vlSelf->dproc__DOT__ctu__DOT__next_state 
                        = ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 2U : 9U);
                    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                }
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
        vlSelf->dproc__DOT__ctu__DOT__next_state = 3U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((3U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->dproc__DOT__local_cmd[3U])
                                        ? (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])))
                                        : (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U]))))));
        vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
            = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)
                ? 0U : ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                         ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x10000000U & 
                                      vlSelf->dproc__DOT__local_cmd[3U])
                                      ? 2U : 0U)) : 
                        ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                          ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                              ? 2U : 0U) : 0U)));
    } else {
        if ((4U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.ready)
                    ? 2U : 4U);
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((6U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__sync.ready)
                    ? 7U : 6U);
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((7U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
        } else {
            if ((9U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__next_state = 9U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
            }
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        }
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    }
    vlSelf->dproc__DOT__reg_write_addr = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                  >> 0x10U));
    vlSelf->dproc__DOT__pulse_cmd_i[0U] = ((vlSelf->dproc__DOT__local_cmd[2U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[1U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[1U] = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[2U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[2U] = (0x7fffU 
                                           & (vlSelf->dproc__DOT__local_cmd[3U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in = (0xfU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 5U));
    vlSelf->dproc__DOT__ctu__DOT__pulse_reset = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0xb0000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable 
        = ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
           & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
              & ((vlSelf->dproc__DOT__local_cmd[3U] 
                  >> 0x1fU) & ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                ? (IData)((0U == (0x30000000U 
                                                  & vlSelf->dproc__DOT__local_cmd[3U])))
                                : (IData)((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x90000000U == (0xf0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__instr_load_en = (
                                                   (0U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & (2U 
                                                      <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__sync_enable = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0x70000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__fproc_enable = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & (IData)(
                                                               (0x40000000U 
                                                                == 
                                                                (0xe0000000U 
                                                                 & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__pulsereg__DOT__env_i_in = (0xffffffU 
                                                   & ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                       << 6U) 
                                                      | (vlSelf->dproc__DOT__local_cmd[2U] 
                                                         >> 0x1aU)));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in = 
        (0x1ffffU & (vlSelf->dproc__DOT__local_cmd[2U] 
                     >> 7U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in = 
        (0x1ffU & ((vlSelf->dproc__DOT__local_cmd[2U] 
                    << 4U) | (vlSelf->dproc__DOT__local_cmd[1U] 
                              >> 0x1cU)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in = (0xffffU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 0xaU));
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[3U] 
                 >> 0x12U));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 0x18U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[1U] 
                 >> 0x1aU));
    vlSelf->dproc__DOT__ctu__DOT__reg_write_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((~ 
                                                               (vlSelf->dproc__DOT__local_cmd[3U] 
                                                                >> 0x1fU)) 
                                                              & ((0x40000000U 
                                                                  & vlSelf->dproc__DOT__local_cmd[3U])
                                                                  ? (IData)(
                                                                            (0U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))
                                                                  : (IData)(
                                                                            (0x10000000U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))))))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_load_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & (IData)(
                                                                     (0x60000000U 
                                                                      == 
                                                                      (0xf0000000U 
                                                                       & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__alu_cmd_data_in0 = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                             << 8U) 
                                            | (vlSelf->dproc__DOT__local_cmd[2U] 
                                               >> 0x18U));
    vlSelf->dproc__DOT__alu_out = vlSelf->dproc__DOT__myalu__DOT__out;
    vlSelf->dproc__DOT__ctu__DOT__qclk_reset = ((0U 
                                                 != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                & ((1U 
                                                    != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                         & ((4U 
                                                             != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))))))));
    vlSelf->nobusy_mon = vlSelf->nobusy;
    vlSelf->dproc__DOT__myalu__DOT__id0 = vlSelf->dproc__DOT__myalu__DOT__in0_reg;
    vlSelf->dproc__DOT__myalu__DOT__id1 = vlSelf->dproc__DOT__myalu__DOT__in1_reg;
    vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel = (1U 
                                                 & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                    >> 0x1bU));
    vlSelf->dproc__DOT__myalu__DOT__add = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           + vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__myclk__DOT__out = vlSelf->dproc__DOT__myclk__DOT__value;
    vlSelf->dproc__DOT__ctu__DOT__alu_opcode = (7U 
                                                & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x18U));
    vlSelf->cmd_read_addr = vlSelf->addr_command;
    vlSelf->dproc__DOT__instr_ptr_load_val = (0xffffU 
                                              & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                 >> 4U));
    vlSelf->dproc__DOT__reg_addr_in1 = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en = ((0U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & (2U 
                                                     <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__write_pulse_en = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x80000000U == (0xe0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__done_gate = ((0U 
                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((6U 
                                                               != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                                 & (9U 
                                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)))))))));
    vlSelf->dproc__DOT__reg_addr_in0 = (0xfU & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__myalu__DOT__sub = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           - vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__reset = vlSelf->reset;
    vlSelf->dproc__DOT__clk = vlSelf->clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.mem_bus[0U][0U] 
        = vlSelf->command[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.mem_bus[0U][1U] 
        = vlSelf->command[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.mem_bus[0U][2U] 
        = vlSelf->command[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.mem_bus[0U][3U] 
        = vlSelf->command[3U];
    vlSelf->dproc__DOT__regs__DOT__write_addr = vlSelf->dproc__DOT__reg_write_addr;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[0U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[1U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[2U];
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_in = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.reset 
        = vlSelf->dproc__DOT__ctu__DOT__pulse_reset;
    vlSelf->dproc__DOT__qclk_trig_enable = vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable;
    vlSelf->dproc__DOT__c_strobe_enable = vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSelf->dproc__DOT__instr_load_en = vlSelf->dproc__DOT__ctu__DOT__instr_load_en;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__sync.enable 
        = vlSelf->dproc__DOT__ctu__DOT__sync_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.enable 
        = vlSelf->dproc__DOT__ctu__DOT__fproc_enable;
    vlSelf->dproc__DOT__reg_write_en = vlSelf->dproc__DOT__ctu__DOT__reg_write_en;
    vlSelf->dproc__DOT__qclk_load_en = vlSelf->dproc__DOT__ctu__DOT__qclk_load_en;
    vlSelf->dproc__DOT__regs__DOT__write_data = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myclk__DOT__in_val = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_in = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_reset_ctrl = vlSelf->dproc__DOT__ctu__DOT__qclk_reset;
    vlSelf->dproc__DOT__qclk_reset = ((IData)(vlSelf->dproc__DOT__ctu__DOT__qclk_reset) 
                                      | (0U != (0xfU 
                                                & (IData)(vlSelf->dproc__DOT__reset_sr))));
    vlSelf->dproc__DOT__alu_in0_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel;
    vlSelf->dproc__DOT__qclk_out = vlSelf->dproc__DOT__myclk__DOT__out;
    vlSelf->dproc__DOT__alu_in1_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel;
    vlSelf->dproc__DOT__myalu__DOT__ctrl = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__alu_opcode = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__instr__DOT__load_val = vlSelf->dproc__DOT__instr_ptr_load_val;
    vlSelf->dproc__DOT__regs__DOT__read_addr_1 = vlSelf->dproc__DOT__reg_addr_in1;
    vlSelf->dproc__DOT__regs__DOT__reg_1_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in1];
    vlSelf->dproc__DOT__inst_ptr_enable = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en;
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x13U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 0x19U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 6U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 0x1bU) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 9U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__write_pulse_en = vlSelf->dproc__DOT__ctu__DOT__write_pulse_en;
    vlSelf->dproc__DOT__inst_ptr_load_en_sel = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSelf->dproc__DOT__inst_ptr_load_en = (1U & ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en))
                                                   ? vlSelf->dproc__DOT__myalu__DOT__out
                                                   : (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en)));
    vlSelf->stbend = vlSelf->dproc__DOT__ctu__DOT__done_gate;
    vlSelf->dproc__DOT__regs__DOT__read_addr_0 = vlSelf->dproc__DOT__reg_addr_in0;
    vlSelf->dproc__DOT__regs__DOT__reg_0_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in0];
    vlSelf->dproc__DOT__myalu__DOT__eq = (0U == vlSelf->dproc__DOT__myalu__DOT__sub);
    vlSelf->dproc__DOT__myalu__DOT__sub_oflow = (1U 
                                                 & (((~ 
                                                      (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                       >> 0x1fU)) 
                                                     & ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                         & vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                        >> 0x1fU)) 
                                                    | ((~ 
                                                        ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                          | vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                         >> 0x1fU)) 
                                                       & (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                          >> 0x1fU))));
    vlSelf->dproc__DOT__instr__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__regs__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__ctu__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__myalu__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__myclk__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__pulsereg__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__regs__DOT__write_enable = vlSelf->dproc__DOT__reg_write_en;
    vlSelf->dproc__DOT__myclk__DOT__load_enable = vlSelf->dproc__DOT__qclk_load_en;
    vlSelf->dproc__DOT__myclk__DOT__rst = vlSelf->dproc__DOT__qclk_reset;
    vlSelf->dproc__DOT__reg_file_out1 = vlSelf->dproc__DOT__regs__DOT__reg_1_out;
    vlSelf->dproc__DOT__alu_in1 = ((2U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                    ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.data
                                    : ((1U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                        ? vlSelf->dproc__DOT__regs__DOT__reg_1_out
                                        : vlSelf->dproc__DOT__myclk__DOT__out));
    vlSelf->dproc__DOT__instr__DOT__enable = vlSelf->dproc__DOT__inst_ptr_enable;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlSelf->dproc__DOT__write_pulse_en;
    if (vlSelf->dproc__DOT__inst_ptr_load_en) {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 1U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = vlSelf->dproc__DOT__instr_ptr_load_val;
    } else {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 0U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en)
                ? (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val));
    }
    vlSelf->procdone = vlSelf->stbend;
    vlSelf->dproc__DOT__done_gate = vlSelf->stbend;
    vlSelf->procdone_mon = vlSelf->stbend;
    vlSelf->dproc__DOT__pulsereg__DOT__reg_in = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__reg_file_out0 = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__pulsereg__DOT__env_in = (0xffffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : vlSelf->dproc__DOT__pulsereg__DOT__env_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_in = (0x1ffffU 
                                                   & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel)
                                                       ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                       : vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_in = (0x1ffU 
                                                  & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel)
                                                      ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                      : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_in = (0xffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlSelf->dproc__DOT__alu_in0 = ((IData)(vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel)
                                    ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                    : vlSelf->dproc__DOT__alu_cmd_data_in0);
    vlSelf->dproc__DOT__myalu__DOT__le = ((vlSelf->dproc__DOT__myalu__DOT__sub 
                                           >> 0x1fU) 
                                          ^ (IData)(vlSelf->dproc__DOT__myalu__DOT__sub_oflow));
    vlSelf->dproc__DOT__myalu__DOT__in1 = vlSelf->dproc__DOT__alu_in1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.instr_ptr 
        = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__ptr_out = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__cur_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__myalu__DOT__in0 = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__ge = (1U & (~ (IData)(vlSelf->dproc__DOT__myalu__DOT__le)));
    vlSelf->dproc__DOT__myalu__DOT__local_out = ((4U 
                                                  & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? 0U
                                                    : vlSelf->dproc__DOT__myalu__DOT__id1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__ge)
                                                    : (IData)(vlSelf->dproc__DOT__myalu__DOT__le)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__eq)
                                                    : vlSelf->dproc__DOT__myalu__DOT__sub)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? vlSelf->dproc__DOT__myalu__DOT__add
                                                    : vlSelf->dproc__DOT__myalu__DOT__id0)));
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__1(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__1\n"); );
    // Body
    vlSelf->dproc__DOT__cmd_buf_out[0U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.cmd_read[0U];
    vlSelf->dproc__DOT__cmd_buf_out[1U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.cmd_read[1U];
    vlSelf->dproc__DOT__cmd_buf_out[2U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.cmd_read[2U];
    vlSelf->dproc__DOT__cmd_buf_out[3U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.cmd_read[3U];
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__0\n"); );
    // Body
    vlSelf->dproc__DOT__ctu__DOT__fproc_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.ready;
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__1(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__1\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvval__dproc__DOT__regs__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 0;
    // Body
    __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 0U;
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cstrobe) 
         & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.envstart 
            = (0xfffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.freq;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.envlength 
            = (0xfffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.env_word 
                         >> 0xcU));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.envstart 
            = (0xfffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.envlength 
            = (0xfffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.env_word 
                         >> 0xcU));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.freq;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.envstart 
            = (0xffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.envlength 
            = (0xffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.env_word 
                        >> 0xcU));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.freq;
    }
    vlSelf->dproc__DOT__myclk__DOT__value = ((IData)(vlSelf->dproc__DOT__qclk_reset)
                                              ? 0U : 
                                             ((IData)(vlSelf->dproc__DOT__qclk_load_en)
                                               ? ((IData)(3U) 
                                                  + vlSelf->dproc__DOT__alu_out)
                                               : ((IData)(1U) 
                                                  + vlSelf->dproc__DOT__myclk__DOT__value)));
    if (vlSelf->dproc__DOT__reset_reg) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles = 0U;
        vlSelf->dproc__DOT__instr__DOT__prev_val = 0U;
        vlSelf->dproc__DOT__instr__DOT__prev_val_inc = 1U;
        vlSelf->dproc__DOT__ctu__DOT__state = 0U;
    } else {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst)
                ? 0U : ((IData)(1U) + vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
        vlSelf->dproc__DOT__instr__DOT__prev_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
        vlSelf->dproc__DOT__instr__DOT__prev_val_inc 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->dproc__DOT____Vcellout__instr__ptr_out)));
        vlSelf->dproc__DOT__ctu__DOT__state = vlSelf->dproc__DOT__ctu__DOT__next_state;
    }
    if (vlSelf->dproc__DOT__reg_write_en) {
        __Vdlyvval__dproc__DOT__regs__DOT__data__v0 
            = vlSelf->dproc__DOT__alu_out;
        __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 1U;
        __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0 
            = vlSelf->dproc__DOT__reg_write_addr;
    }
    vlSelf->noop = (1U & (~ (IData)((0U != (((vlSelf->command[0U] 
                                              | vlSelf->command[1U]) 
                                             | vlSelf->command[2U]) 
                                            | vlSelf->command[3U])))));
    if (vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__amp = vlSelf->dproc__DOT__pulsereg__DOT__amp_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__freq = vlSelf->dproc__DOT__pulsereg__DOT__freq_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__phase = vlSelf->dproc__DOT__pulsereg__DOT__phase_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__env_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__env_word 
            = vlSelf->dproc__DOT__pulsereg__DOT__env_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__cfg = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    }
    vlSelf->command_d2[0U] = vlSelf->command_d[0U];
    vlSelf->command_d2[1U] = vlSelf->command_d[1U];
    vlSelf->command_d2[2U] = vlSelf->command_d[2U];
    vlSelf->command_d2[3U] = vlSelf->command_d[3U];
    vlSelf->nobusy = (1U & (~ ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.busy) 
                               | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.busy) 
                                  | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.busy)))));
    vlSelf->addr_command = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.instr_ptr;
    vlSelf->dproc__DOT__qclk_trig = ((vlSelf->dproc__DOT__myclk__DOT__out 
                                      == vlSelf->dproc__DOT__pulse_cmd_time) 
                                     & (IData)(vlSelf->dproc__DOT__qclk_trig_enable));
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe = vlSelf->dproc__DOT__cstrobe;
    vlSelf->dproc__DOT__dummy_resetsr = (1U & ((IData)(vlSelf->dproc__DOT__reset_sr) 
                                               >> 4U));
    vlSelf->dproc__DOT__reset_sr = ((0x1eU & ((IData)(vlSelf->dproc__DOT__reset_sr) 
                                              << 1U)) 
                                    | (IData)(vlSelf->dproc__DOT__reset_reg));
    vlSelf->dproc__DOT__myalu__DOT__out = vlSelf->dproc__DOT__myalu__DOT__local_out;
    vlSelf->dproc__DOT__myalu__DOT__in0_reg = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__in1_reg = vlSelf->dproc__DOT__alu_in1;
    if (vlSelf->dproc__DOT__instr_load_en) {
        vlSelf->dproc__DOT__local_cmd[0U] = vlSelf->dproc__DOT__cmd_buf_out[0U];
        vlSelf->dproc__DOT__local_cmd[1U] = vlSelf->dproc__DOT__cmd_buf_out[1U];
        vlSelf->dproc__DOT__local_cmd[2U] = vlSelf->dproc__DOT__cmd_buf_out[2U];
        vlSelf->dproc__DOT__local_cmd[3U] = vlSelf->dproc__DOT__cmd_buf_out[3U];
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__0__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cstrobe) 
           & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cfg))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__0__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cstrobe) 
           & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cfg))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__0__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cstrobe) 
           & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cfg))));
    if (__Vdlyvset__dproc__DOT__regs__DOT__data__v0) {
        vlSelf->dproc__DOT__regs__DOT__data[__Vdlyvdim0__dproc__DOT__regs__DOT__data__v0] 
            = __Vdlyvval__dproc__DOT__regs__DOT__data__v0;
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.amp 
        = vlSelf->dproc__DOT__pulsereg__DOT__amp;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.freq 
        = vlSelf->dproc__DOT__pulsereg__DOT__freq;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.phase 
        = vlSelf->dproc__DOT__pulsereg__DOT__phase;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.env_word 
        = vlSelf->dproc__DOT__pulsereg__DOT__env_word;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cfg 
        = vlSelf->dproc__DOT__pulsereg__DOT__cfg;
    vlSelf->command_d[0U] = vlSelf->command[0U];
    vlSelf->command_d[1U] = vlSelf->command[1U];
    vlSelf->command_d[2U] = vlSelf->command[2U];
    vlSelf->command_d[3U] = vlSelf->command[3U];
    vlSelf->nobusy_mon = vlSelf->nobusy;
    vlSelf->cmd_read_addr = vlSelf->addr_command;
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_in = vlSelf->dproc__DOT__qclk_trig;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.cstrobe 
        = vlSelf->dproc__DOT__pulsereg__DOT__cstrobe;
    vlSelf->dproc__DOT__cstrobe = ((vlSelf->dproc__DOT__myclk__DOT__out 
                                    == vlSelf->dproc__DOT__pulse_cmd_time) 
                                   & (IData)(vlSelf->dproc__DOT__c_strobe_enable));
    vlSelf->dproc__DOT__alu_out = vlSelf->dproc__DOT__myalu__DOT__out;
    vlSelf->dproc__DOT__myalu__DOT__id0 = vlSelf->dproc__DOT__myalu__DOT__in0_reg;
    vlSelf->dproc__DOT__myalu__DOT__id1 = vlSelf->dproc__DOT__myalu__DOT__in1_reg;
    vlSelf->dproc__DOT__myalu__DOT__add = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           + vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__myalu__DOT__sub = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           - vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__reset_reg = vlSelf->reset;
    vlSelf->dproc__DOT__ctu__DOT__instr_load_en = (
                                                   (0U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & (2U 
                                                      <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__qclk_reset = ((0U 
                                                 != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                & ((1U 
                                                    != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                         & ((4U 
                                                             != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))))))));
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en = ((0U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & (2U 
                                                     <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__done_gate = ((0U 
                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((6U 
                                                               != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                                 & (9U 
                                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)))))))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.id 
        = (0xffU & (vlSelf->dproc__DOT__local_cmd[1U] 
                    >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__opcode = (0xffU & 
                                            (((0U == 0x18U)
                                               ? 0U
                                               : (vlSelf->dproc__DOT__local_cmd[
                                                  (((IData)(7U) 
                                                    + (IData)(0x78U)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x18U)))) 
                                             | (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x18U)));
    if ((0U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles);
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        if ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & (IData)((0x20000000U == (0x70000000U 
                                                 & vlSelf->dproc__DOT__local_cmd[3U]))));
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
        } else {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                             >> 0x1eU)) & ((0x20000000U 
                                            & vlSelf->dproc__DOT__local_cmd[3U])
                                            ? (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU))
                                            : (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU)))));
            if ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel 
                    = ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 1U : 0U) : 1U);
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
                    = ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 0U : 1U) : 0U);
            }
        }
    } else if ((2U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((3U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->dproc__DOT__local_cmd[3U])
                                        ? (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])))
                                        : (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U]))))));
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
            = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)
                ? 0U : ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                         ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x10000000U & 
                                      vlSelf->dproc__DOT__local_cmd[3U])
                                      ? 2U : 0U)) : 
                        ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                          ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                              ? 2U : 0U) : 0U)));
    } else {
        if ((4U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((6U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((7U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
        } else {
            if ((9U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            }
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        }
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    }
    vlSelf->dproc__DOT__reg_write_addr = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                  >> 0x10U));
    vlSelf->dproc__DOT__pulse_cmd_i[0U] = ((vlSelf->dproc__DOT__local_cmd[2U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[1U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[1U] = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[2U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[2U] = (0x7fffU 
                                           & (vlSelf->dproc__DOT__local_cmd[3U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in = (0xfU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 5U));
    vlSelf->dproc__DOT__ctu__DOT__pulse_reset = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0xb0000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable 
        = ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
           & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
              & ((vlSelf->dproc__DOT__local_cmd[3U] 
                  >> 0x1fU) & ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                ? (IData)((0U == (0x30000000U 
                                                  & vlSelf->dproc__DOT__local_cmd[3U])))
                                : (IData)((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x90000000U == (0xf0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__sync_enable = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0x70000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__fproc_enable = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & (IData)(
                                                               (0x40000000U 
                                                                == 
                                                                (0xe0000000U 
                                                                 & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__pulsereg__DOT__env_i_in = (0xffffffU 
                                                   & ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                       << 6U) 
                                                      | (vlSelf->dproc__DOT__local_cmd[2U] 
                                                         >> 0x1aU)));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in = 
        (0x1ffffU & (vlSelf->dproc__DOT__local_cmd[2U] 
                     >> 7U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in = 
        (0x1ffU & ((vlSelf->dproc__DOT__local_cmd[2U] 
                    << 4U) | (vlSelf->dproc__DOT__local_cmd[1U] 
                              >> 0x1cU)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in = (0xffffU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 0xaU));
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[3U] 
                 >> 0x12U));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 0x18U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[1U] 
                 >> 0x1aU));
    vlSelf->dproc__DOT__ctu__DOT__reg_write_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((~ 
                                                               (vlSelf->dproc__DOT__local_cmd[3U] 
                                                                >> 0x1fU)) 
                                                              & ((0x40000000U 
                                                                  & vlSelf->dproc__DOT__local_cmd[3U])
                                                                  ? (IData)(
                                                                            (0U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))
                                                                  : (IData)(
                                                                            (0x10000000U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))))))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_load_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & (IData)(
                                                                     (0x60000000U 
                                                                      == 
                                                                      (0xf0000000U 
                                                                       & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__alu_cmd_data_in0 = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                             << 8U) 
                                            | (vlSelf->dproc__DOT__local_cmd[2U] 
                                               >> 0x18U));
    vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel = (1U 
                                                 & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                    >> 0x1bU));
    vlSelf->dproc__DOT__ctu__DOT__alu_opcode = (7U 
                                                & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x18U));
    vlSelf->dproc__DOT__instr_ptr_load_val = (0xffffU 
                                              & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                 >> 4U));
    vlSelf->dproc__DOT__reg_addr_in1 = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__write_pulse_en = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x80000000U == (0xe0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__reg_addr_in0 = (0xfU & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__pulse_cmd_time = ((vlSelf->dproc__DOT__local_cmd[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->dproc__DOT__local_cmd[0U] 
                                             >> 5U));
    vlSelf->dproc__DOT__myclk__DOT__out = vlSelf->dproc__DOT__myclk__DOT__value;
    vlSelf->dproc__DOT__regs__DOT__write_data = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myclk__DOT__in_val = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_in = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myalu__DOT__eq = (0U == vlSelf->dproc__DOT__myalu__DOT__sub);
    vlSelf->dproc__DOT__myalu__DOT__sub_oflow = (1U 
                                                 & (((~ 
                                                      (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                       >> 0x1fU)) 
                                                     & ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                         & vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                        >> 0x1fU)) 
                                                    | ((~ 
                                                        ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                          | vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                         >> 0x1fU)) 
                                                       & (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                          >> 0x1fU))));
    vlSelf->dproc__DOT__instr_load_en = vlSelf->dproc__DOT__ctu__DOT__instr_load_en;
    vlSelf->dproc__DOT__qclk_reset_ctrl = vlSelf->dproc__DOT__ctu__DOT__qclk_reset;
    vlSelf->dproc__DOT__qclk_reset = ((IData)(vlSelf->dproc__DOT__ctu__DOT__qclk_reset) 
                                      | (0U != (0xfU 
                                                & (IData)(vlSelf->dproc__DOT__reset_sr))));
    vlSelf->dproc__DOT__inst_ptr_enable = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en;
    vlSelf->stbend = vlSelf->dproc__DOT__ctu__DOT__done_gate;
    vlSelf->dproc__DOT__regs__DOT__write_addr = vlSelf->dproc__DOT__reg_write_addr;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[0U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[1U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[2U];
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_in = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__pulseout.reset 
        = vlSelf->dproc__DOT__ctu__DOT__pulse_reset;
    vlSelf->dproc__DOT__qclk_trig_enable = vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable;
    vlSelf->dproc__DOT__c_strobe_enable = vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__sync.enable 
        = vlSelf->dproc__DOT__ctu__DOT__sync_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.enable 
        = vlSelf->dproc__DOT__ctu__DOT__fproc_enable;
    vlSelf->dproc__DOT__reg_write_en = vlSelf->dproc__DOT__ctu__DOT__reg_write_en;
    vlSelf->dproc__DOT__qclk_load_en = vlSelf->dproc__DOT__ctu__DOT__qclk_load_en;
    vlSelf->dproc__DOT__alu_in0_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel;
    vlSelf->dproc__DOT__alu_in1_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel;
    vlSelf->dproc__DOT__myalu__DOT__ctrl = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__alu_opcode = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__instr__DOT__load_val = vlSelf->dproc__DOT__instr_ptr_load_val;
    vlSelf->dproc__DOT__regs__DOT__read_addr_1 = vlSelf->dproc__DOT__reg_addr_in1;
    vlSelf->dproc__DOT__regs__DOT__reg_1_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in1];
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x13U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 0x19U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 6U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 0x1bU) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 9U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__write_pulse_en = vlSelf->dproc__DOT__ctu__DOT__write_pulse_en;
    vlSelf->dproc__DOT__inst_ptr_load_en_sel = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSelf->dproc__DOT__inst_ptr_load_en = (1U & ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en))
                                                   ? vlSelf->dproc__DOT__myalu__DOT__out
                                                   : (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en)));
    vlSelf->dproc__DOT__regs__DOT__read_addr_0 = vlSelf->dproc__DOT__reg_addr_in0;
    vlSelf->dproc__DOT__regs__DOT__reg_0_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in0];
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe_in = vlSelf->dproc__DOT__cstrobe;
    vlSelf->dproc__DOT__qclk_out = vlSelf->dproc__DOT__myclk__DOT__out;
    vlSelf->dproc__DOT__myalu__DOT__le = ((vlSelf->dproc__DOT__myalu__DOT__sub 
                                           >> 0x1fU) 
                                          ^ (IData)(vlSelf->dproc__DOT__myalu__DOT__sub_oflow));
    vlSelf->dproc__DOT__instr__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__myclk__DOT__rst = vlSelf->dproc__DOT__qclk_reset;
    vlSelf->dproc__DOT__instr__DOT__enable = vlSelf->dproc__DOT__inst_ptr_enable;
    vlSelf->procdone = vlSelf->stbend;
    vlSelf->dproc__DOT__done_gate = vlSelf->stbend;
    vlSelf->procdone_mon = vlSelf->stbend;
    vlSelf->dproc__DOT__regs__DOT__write_enable = vlSelf->dproc__DOT__reg_write_en;
    vlSelf->dproc__DOT__myclk__DOT__load_enable = vlSelf->dproc__DOT__qclk_load_en;
    vlSelf->dproc__DOT__reg_file_out1 = vlSelf->dproc__DOT__regs__DOT__reg_1_out;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlSelf->dproc__DOT__write_pulse_en;
    if (vlSelf->dproc__DOT__inst_ptr_load_en) {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 1U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = vlSelf->dproc__DOT__instr_ptr_load_val;
    } else {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 0U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en)
                ? (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val));
    }
    vlSelf->dproc__DOT__pulsereg__DOT__reg_in = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__reg_file_out0 = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__pulsereg__DOT__env_in = (0xffffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : vlSelf->dproc__DOT__pulsereg__DOT__env_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_in = (0x1ffffU 
                                                   & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel)
                                                       ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                       : vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_in = (0x1ffU 
                                                  & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel)
                                                      ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                      : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_in = (0xffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlSelf->dproc__DOT__alu_in0 = ((IData)(vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel)
                                    ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                    : vlSelf->dproc__DOT__alu_cmd_data_in0);
    vlSelf->dproc__DOT__myalu__DOT__ge = (1U & (~ (IData)(vlSelf->dproc__DOT__myalu__DOT__le)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.instr_ptr 
        = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__ptr_out = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__cur_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__myalu__DOT__in0 = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__local_out = ((4U 
                                                  & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? 0U
                                                    : vlSelf->dproc__DOT__myalu__DOT__id1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__ge)
                                                    : (IData)(vlSelf->dproc__DOT__myalu__DOT__le)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__eq)
                                                    : vlSelf->dproc__DOT__myalu__DOT__sub)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? vlSelf->dproc__DOT__myalu__DOT__add
                                                    : vlSelf->dproc__DOT__myalu__DOT__id0)));
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__0\n"); );
    // Body
    vlSelf->dproc__DOT__ctu__DOT__next_state = ((0U 
                                                 == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                 ? 
                                                ((2U 
                                                  > vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles)
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                  ? 
                                                 ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x1fU)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 1U
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                                       ? 0U
                                                       : 1U)))
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 0U
                                                      : 9U)
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 
                                                     ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                                       ? 0U
                                                       : 1U)
                                                      : 0U)))
                                                   : 
                                                  ((0x40000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 6U
                                                      : 2U)
                                                     : 4U)
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 2U
                                                      : 0U)
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 2U
                                                      : 9U))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.ready)
                                                      ? 2U
                                                      : 4U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__sync.ready)
                                                       ? 7U
                                                       : 6U)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                       ? 0U
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                        ? 9U
                                                        : 0U))))))));
    vlSelf->dproc__DOT__alu_in1 = ((2U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                    ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__0__KET__.data
                                    : ((1U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                        ? vlSelf->dproc__DOT__regs__DOT__reg_1_out
                                        : vlSelf->dproc__DOT__myclk__DOT__out));
    vlSelf->dproc__DOT__myalu__DOT__in1 = vlSelf->dproc__DOT__alu_in1;
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__3(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__3\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.mem_bus[0U][0U] 
        = vlSelf->command[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.mem_bus[0U][1U] 
        = vlSelf->command[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.mem_bus[0U][2U] 
        = vlSelf->command[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__memif.mem_bus[0U][3U] 
        = vlSelf->command[3U];
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.id 
        = (0xffU & (vlSelf->dproc__DOT__local_cmd[1U] 
                    >> 0x14U));
    vlSelf->dproc__DOT__instr__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__opcode = (0xffU & 
                                            (((0U == 0x18U)
                                               ? 0U
                                               : (vlSelf->dproc__DOT__local_cmd[
                                                  (((IData)(7U) 
                                                    + (IData)(0x78U)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x18U)))) 
                                             | (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x18U)));
    vlSelf->dproc__DOT__ctu__DOT__fproc_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.ready;
    vlSelf->dproc__DOT__ctu__DOT__sync_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__sync.ready;
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_in = vlSelf->dproc__DOT__qclk_trig;
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe_in = vlSelf->dproc__DOT__cstrobe;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.env_word 
        = vlSelf->dproc__DOT__pulsereg__DOT__env_word;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.phase 
        = vlSelf->dproc__DOT__pulsereg__DOT__phase;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.freq 
        = vlSelf->dproc__DOT__pulsereg__DOT__freq;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.amp 
        = vlSelf->dproc__DOT__pulsereg__DOT__amp;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cfg 
        = vlSelf->dproc__DOT__pulsereg__DOT__cfg;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cstrobe 
        = vlSelf->dproc__DOT__pulsereg__DOT__cstrobe;
    vlSelf->dproc__DOT__pulse_cmd_time = ((vlSelf->dproc__DOT__local_cmd[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->dproc__DOT__local_cmd[0U] 
                                             >> 5U));
    if ((0U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles);
        vlSelf->dproc__DOT__ctu__DOT__next_state = 
            ((2U > vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles)
              ? 0U : 1U);
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        if ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & (IData)((0x20000000U == (0x70000000U 
                                                 & vlSelf->dproc__DOT__local_cmd[3U]))));
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                    ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? 1U : ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                 ? 1U : ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                          ? 0U : 1U)))
                    : ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 0U : 9U) : ((0x10000000U 
                                           & vlSelf->dproc__DOT__local_cmd[3U])
                                           ? ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                               ? 0U
                                               : 1U)
                                           : 0U)));
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
        } else {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                             >> 0x1eU)) & ((0x20000000U 
                                            & vlSelf->dproc__DOT__local_cmd[3U])
                                            ? (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU))
                                            : (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU)))));
            if ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                if ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                    if ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 6U;
                        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                    } else {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 2U;
                        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
                    }
                } else {
                    vlSelf->dproc__DOT__ctu__DOT__next_state = 4U;
                    vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                }
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                if ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                    if ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 2U;
                        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                    } else {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
                        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 1U;
                    }
                } else {
                    vlSelf->dproc__DOT__ctu__DOT__next_state 
                        = ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 2U : 9U);
                    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                }
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
        vlSelf->dproc__DOT__ctu__DOT__next_state = 3U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((3U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->dproc__DOT__local_cmd[3U])
                                        ? (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])))
                                        : (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U]))))));
        vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
            = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)
                ? 0U : ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                         ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x10000000U & 
                                      vlSelf->dproc__DOT__local_cmd[3U])
                                      ? 2U : 0U)) : 
                        ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                          ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                              ? 2U : 0U) : 0U)));
    } else {
        if ((4U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.ready)
                    ? 2U : 4U);
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((6U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__sync.ready)
                    ? 7U : 6U);
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((7U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
        } else {
            if ((9U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__next_state = 9U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
            }
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        }
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    }
    vlSelf->dproc__DOT__reg_write_addr = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                  >> 0x10U));
    vlSelf->dproc__DOT__pulse_cmd_i[0U] = ((vlSelf->dproc__DOT__local_cmd[2U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[1U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[1U] = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[2U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[2U] = (0x7fffU 
                                           & (vlSelf->dproc__DOT__local_cmd[3U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in = (0xfU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 5U));
    vlSelf->dproc__DOT__ctu__DOT__pulse_reset = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0xb0000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable 
        = ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
           & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
              & ((vlSelf->dproc__DOT__local_cmd[3U] 
                  >> 0x1fU) & ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                ? (IData)((0U == (0x30000000U 
                                                  & vlSelf->dproc__DOT__local_cmd[3U])))
                                : (IData)((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x90000000U == (0xf0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__instr_load_en = (
                                                   (0U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & (2U 
                                                      <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__sync_enable = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0x70000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__fproc_enable = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & (IData)(
                                                               (0x40000000U 
                                                                == 
                                                                (0xe0000000U 
                                                                 & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__pulsereg__DOT__env_i_in = (0xffffffU 
                                                   & ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                       << 6U) 
                                                      | (vlSelf->dproc__DOT__local_cmd[2U] 
                                                         >> 0x1aU)));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in = 
        (0x1ffffU & (vlSelf->dproc__DOT__local_cmd[2U] 
                     >> 7U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in = 
        (0x1ffU & ((vlSelf->dproc__DOT__local_cmd[2U] 
                    << 4U) | (vlSelf->dproc__DOT__local_cmd[1U] 
                              >> 0x1cU)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in = (0xffffU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 0xaU));
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[3U] 
                 >> 0x12U));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 0x18U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[1U] 
                 >> 0x1aU));
    vlSelf->dproc__DOT__ctu__DOT__reg_write_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((~ 
                                                               (vlSelf->dproc__DOT__local_cmd[3U] 
                                                                >> 0x1fU)) 
                                                              & ((0x40000000U 
                                                                  & vlSelf->dproc__DOT__local_cmd[3U])
                                                                  ? (IData)(
                                                                            (0U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))
                                                                  : (IData)(
                                                                            (0x10000000U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))))))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_load_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & (IData)(
                                                                     (0x60000000U 
                                                                      == 
                                                                      (0xf0000000U 
                                                                       & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__alu_cmd_data_in0 = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                             << 8U) 
                                            | (vlSelf->dproc__DOT__local_cmd[2U] 
                                               >> 0x18U));
    vlSelf->dproc__DOT__alu_out = vlSelf->dproc__DOT__myalu__DOT__out;
    vlSelf->dproc__DOT__ctu__DOT__qclk_reset = ((0U 
                                                 != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                & ((1U 
                                                    != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                         & ((4U 
                                                             != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))))))));
    vlSelf->nobusy_mon = vlSelf->nobusy;
    vlSelf->dproc__DOT__myalu__DOT__id0 = vlSelf->dproc__DOT__myalu__DOT__in0_reg;
    vlSelf->dproc__DOT__myalu__DOT__id1 = vlSelf->dproc__DOT__myalu__DOT__in1_reg;
    vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel = (1U 
                                                 & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                    >> 0x1bU));
    vlSelf->dproc__DOT__myalu__DOT__add = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           + vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__myclk__DOT__out = vlSelf->dproc__DOT__myclk__DOT__value;
    vlSelf->dproc__DOT__ctu__DOT__alu_opcode = (7U 
                                                & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x18U));
    vlSelf->cmd_read_addr = vlSelf->addr_command;
    vlSelf->dproc__DOT__instr_ptr_load_val = (0xffffU 
                                              & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                 >> 4U));
    vlSelf->dproc__DOT__reg_addr_in1 = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en = ((0U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & (2U 
                                                     <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__write_pulse_en = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x80000000U == (0xe0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__done_gate = ((0U 
                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((6U 
                                                               != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                                 & (9U 
                                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)))))))));
    vlSelf->dproc__DOT__reg_addr_in0 = (0xfU & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__myalu__DOT__sub = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           - vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__reset = vlSelf->reset;
    vlSelf->dproc__DOT__clk = vlSelf->clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.mem_bus[0U][0U] 
        = vlSelf->command[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.mem_bus[0U][1U] 
        = vlSelf->command[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.mem_bus[0U][2U] 
        = vlSelf->command[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.mem_bus[0U][3U] 
        = vlSelf->command[3U];
    vlSelf->dproc__DOT__regs__DOT__write_addr = vlSelf->dproc__DOT__reg_write_addr;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[0U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[1U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[2U];
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_in = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.reset 
        = vlSelf->dproc__DOT__ctu__DOT__pulse_reset;
    vlSelf->dproc__DOT__qclk_trig_enable = vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable;
    vlSelf->dproc__DOT__c_strobe_enable = vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSelf->dproc__DOT__instr_load_en = vlSelf->dproc__DOT__ctu__DOT__instr_load_en;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__sync.enable 
        = vlSelf->dproc__DOT__ctu__DOT__sync_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.enable 
        = vlSelf->dproc__DOT__ctu__DOT__fproc_enable;
    vlSelf->dproc__DOT__reg_write_en = vlSelf->dproc__DOT__ctu__DOT__reg_write_en;
    vlSelf->dproc__DOT__qclk_load_en = vlSelf->dproc__DOT__ctu__DOT__qclk_load_en;
    vlSelf->dproc__DOT__regs__DOT__write_data = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myclk__DOT__in_val = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_in = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_reset_ctrl = vlSelf->dproc__DOT__ctu__DOT__qclk_reset;
    vlSelf->dproc__DOT__qclk_reset = ((IData)(vlSelf->dproc__DOT__ctu__DOT__qclk_reset) 
                                      | (0U != (0xfU 
                                                & (IData)(vlSelf->dproc__DOT__reset_sr))));
    vlSelf->dproc__DOT__alu_in0_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel;
    vlSelf->dproc__DOT__qclk_out = vlSelf->dproc__DOT__myclk__DOT__out;
    vlSelf->dproc__DOT__alu_in1_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel;
    vlSelf->dproc__DOT__myalu__DOT__ctrl = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__alu_opcode = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__instr__DOT__load_val = vlSelf->dproc__DOT__instr_ptr_load_val;
    vlSelf->dproc__DOT__regs__DOT__read_addr_1 = vlSelf->dproc__DOT__reg_addr_in1;
    vlSelf->dproc__DOT__regs__DOT__reg_1_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in1];
    vlSelf->dproc__DOT__inst_ptr_enable = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en;
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x13U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 0x19U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 6U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 0x1bU) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 9U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__write_pulse_en = vlSelf->dproc__DOT__ctu__DOT__write_pulse_en;
    vlSelf->dproc__DOT__inst_ptr_load_en_sel = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSelf->dproc__DOT__inst_ptr_load_en = (1U & ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en))
                                                   ? vlSelf->dproc__DOT__myalu__DOT__out
                                                   : (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en)));
    vlSelf->stbend = vlSelf->dproc__DOT__ctu__DOT__done_gate;
    vlSelf->dproc__DOT__regs__DOT__read_addr_0 = vlSelf->dproc__DOT__reg_addr_in0;
    vlSelf->dproc__DOT__regs__DOT__reg_0_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in0];
    vlSelf->dproc__DOT__myalu__DOT__eq = (0U == vlSelf->dproc__DOT__myalu__DOT__sub);
    vlSelf->dproc__DOT__myalu__DOT__sub_oflow = (1U 
                                                 & (((~ 
                                                      (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                       >> 0x1fU)) 
                                                     & ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                         & vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                        >> 0x1fU)) 
                                                    | ((~ 
                                                        ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                          | vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                         >> 0x1fU)) 
                                                       & (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                          >> 0x1fU))));
    vlSelf->dproc__DOT__instr__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__regs__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__ctu__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__myalu__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__myclk__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__pulsereg__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__regs__DOT__write_enable = vlSelf->dproc__DOT__reg_write_en;
    vlSelf->dproc__DOT__myclk__DOT__load_enable = vlSelf->dproc__DOT__qclk_load_en;
    vlSelf->dproc__DOT__myclk__DOT__rst = vlSelf->dproc__DOT__qclk_reset;
    vlSelf->dproc__DOT__reg_file_out1 = vlSelf->dproc__DOT__regs__DOT__reg_1_out;
    vlSelf->dproc__DOT__alu_in1 = ((2U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                    ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.data
                                    : ((1U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                        ? vlSelf->dproc__DOT__regs__DOT__reg_1_out
                                        : vlSelf->dproc__DOT__myclk__DOT__out));
    vlSelf->dproc__DOT__instr__DOT__enable = vlSelf->dproc__DOT__inst_ptr_enable;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlSelf->dproc__DOT__write_pulse_en;
    if (vlSelf->dproc__DOT__inst_ptr_load_en) {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 1U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = vlSelf->dproc__DOT__instr_ptr_load_val;
    } else {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 0U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en)
                ? (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val));
    }
    vlSelf->procdone = vlSelf->stbend;
    vlSelf->dproc__DOT__done_gate = vlSelf->stbend;
    vlSelf->procdone_mon = vlSelf->stbend;
    vlSelf->dproc__DOT__pulsereg__DOT__reg_in = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__reg_file_out0 = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__pulsereg__DOT__env_in = (0xffffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : vlSelf->dproc__DOT__pulsereg__DOT__env_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_in = (0x1ffffU 
                                                   & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel)
                                                       ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                       : vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_in = (0x1ffU 
                                                  & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel)
                                                      ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                      : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_in = (0xffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlSelf->dproc__DOT__alu_in0 = ((IData)(vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel)
                                    ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                    : vlSelf->dproc__DOT__alu_cmd_data_in0);
    vlSelf->dproc__DOT__myalu__DOT__le = ((vlSelf->dproc__DOT__myalu__DOT__sub 
                                           >> 0x1fU) 
                                          ^ (IData)(vlSelf->dproc__DOT__myalu__DOT__sub_oflow));
    vlSelf->dproc__DOT__myalu__DOT__in1 = vlSelf->dproc__DOT__alu_in1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.instr_ptr 
        = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__ptr_out = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__cur_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__myalu__DOT__in0 = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__ge = (1U & (~ (IData)(vlSelf->dproc__DOT__myalu__DOT__le)));
    vlSelf->dproc__DOT__myalu__DOT__local_out = ((4U 
                                                  & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? 0U
                                                    : vlSelf->dproc__DOT__myalu__DOT__id1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__ge)
                                                    : (IData)(vlSelf->dproc__DOT__myalu__DOT__le)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__eq)
                                                    : vlSelf->dproc__DOT__myalu__DOT__sub)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? vlSelf->dproc__DOT__myalu__DOT__add
                                                    : vlSelf->dproc__DOT__myalu__DOT__id0)));
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__1(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__1\n"); );
    // Body
    vlSelf->dproc__DOT__cmd_buf_out[0U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.cmd_read[0U];
    vlSelf->dproc__DOT__cmd_buf_out[1U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.cmd_read[1U];
    vlSelf->dproc__DOT__cmd_buf_out[2U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.cmd_read[2U];
    vlSelf->dproc__DOT__cmd_buf_out[3U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.cmd_read[3U];
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__0\n"); );
    // Body
    vlSelf->dproc__DOT__ctu__DOT__fproc_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.ready;
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__1(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__1\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvval__dproc__DOT__regs__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 0;
    // Body
    __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 0U;
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cstrobe) 
         & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.envstart 
            = (0xfffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.freq;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.envlength 
            = (0xfffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.env_word 
                         >> 0xcU));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.envstart 
            = (0xfffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.envlength 
            = (0xfffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.env_word 
                         >> 0xcU));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.freq;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.envstart 
            = (0xffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.envlength 
            = (0xffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.env_word 
                        >> 0xcU));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.freq;
    }
    vlSelf->dproc__DOT__myclk__DOT__value = ((IData)(vlSelf->dproc__DOT__qclk_reset)
                                              ? 0U : 
                                             ((IData)(vlSelf->dproc__DOT__qclk_load_en)
                                               ? ((IData)(3U) 
                                                  + vlSelf->dproc__DOT__alu_out)
                                               : ((IData)(1U) 
                                                  + vlSelf->dproc__DOT__myclk__DOT__value)));
    if (vlSelf->dproc__DOT__reset_reg) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles = 0U;
        vlSelf->dproc__DOT__instr__DOT__prev_val = 0U;
        vlSelf->dproc__DOT__instr__DOT__prev_val_inc = 1U;
        vlSelf->dproc__DOT__ctu__DOT__state = 0U;
    } else {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst)
                ? 0U : ((IData)(1U) + vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
        vlSelf->dproc__DOT__instr__DOT__prev_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
        vlSelf->dproc__DOT__instr__DOT__prev_val_inc 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->dproc__DOT____Vcellout__instr__ptr_out)));
        vlSelf->dproc__DOT__ctu__DOT__state = vlSelf->dproc__DOT__ctu__DOT__next_state;
    }
    if (vlSelf->dproc__DOT__reg_write_en) {
        __Vdlyvval__dproc__DOT__regs__DOT__data__v0 
            = vlSelf->dproc__DOT__alu_out;
        __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 1U;
        __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0 
            = vlSelf->dproc__DOT__reg_write_addr;
    }
    vlSelf->noop = (1U & (~ (IData)((0U != (((vlSelf->command[0U] 
                                              | vlSelf->command[1U]) 
                                             | vlSelf->command[2U]) 
                                            | vlSelf->command[3U])))));
    if (vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__amp = vlSelf->dproc__DOT__pulsereg__DOT__amp_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__freq = vlSelf->dproc__DOT__pulsereg__DOT__freq_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__phase = vlSelf->dproc__DOT__pulsereg__DOT__phase_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__env_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__env_word 
            = vlSelf->dproc__DOT__pulsereg__DOT__env_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__cfg = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    }
    vlSelf->command_d2[0U] = vlSelf->command_d[0U];
    vlSelf->command_d2[1U] = vlSelf->command_d[1U];
    vlSelf->command_d2[2U] = vlSelf->command_d[2U];
    vlSelf->command_d2[3U] = vlSelf->command_d[3U];
    vlSelf->nobusy = (1U & (~ ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.busy) 
                               | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.busy) 
                                  | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.busy)))));
    vlSelf->addr_command = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.instr_ptr;
    vlSelf->dproc__DOT__qclk_trig = ((vlSelf->dproc__DOT__myclk__DOT__out 
                                      == vlSelf->dproc__DOT__pulse_cmd_time) 
                                     & (IData)(vlSelf->dproc__DOT__qclk_trig_enable));
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe = vlSelf->dproc__DOT__cstrobe;
    vlSelf->dproc__DOT__dummy_resetsr = (1U & ((IData)(vlSelf->dproc__DOT__reset_sr) 
                                               >> 4U));
    vlSelf->dproc__DOT__reset_sr = ((0x1eU & ((IData)(vlSelf->dproc__DOT__reset_sr) 
                                              << 1U)) 
                                    | (IData)(vlSelf->dproc__DOT__reset_reg));
    vlSelf->dproc__DOT__myalu__DOT__out = vlSelf->dproc__DOT__myalu__DOT__local_out;
    vlSelf->dproc__DOT__myalu__DOT__in0_reg = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__in1_reg = vlSelf->dproc__DOT__alu_in1;
    if (vlSelf->dproc__DOT__instr_load_en) {
        vlSelf->dproc__DOT__local_cmd[0U] = vlSelf->dproc__DOT__cmd_buf_out[0U];
        vlSelf->dproc__DOT__local_cmd[1U] = vlSelf->dproc__DOT__cmd_buf_out[1U];
        vlSelf->dproc__DOT__local_cmd[2U] = vlSelf->dproc__DOT__cmd_buf_out[2U];
        vlSelf->dproc__DOT__local_cmd[3U] = vlSelf->dproc__DOT__cmd_buf_out[3U];
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__1__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cstrobe) 
           & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cfg))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__1__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cstrobe) 
           & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cfg))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__1__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cstrobe) 
           & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cfg))));
    if (__Vdlyvset__dproc__DOT__regs__DOT__data__v0) {
        vlSelf->dproc__DOT__regs__DOT__data[__Vdlyvdim0__dproc__DOT__regs__DOT__data__v0] 
            = __Vdlyvval__dproc__DOT__regs__DOT__data__v0;
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.amp 
        = vlSelf->dproc__DOT__pulsereg__DOT__amp;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.freq 
        = vlSelf->dproc__DOT__pulsereg__DOT__freq;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.phase 
        = vlSelf->dproc__DOT__pulsereg__DOT__phase;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.env_word 
        = vlSelf->dproc__DOT__pulsereg__DOT__env_word;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cfg 
        = vlSelf->dproc__DOT__pulsereg__DOT__cfg;
    vlSelf->command_d[0U] = vlSelf->command[0U];
    vlSelf->command_d[1U] = vlSelf->command[1U];
    vlSelf->command_d[2U] = vlSelf->command[2U];
    vlSelf->command_d[3U] = vlSelf->command[3U];
    vlSelf->nobusy_mon = vlSelf->nobusy;
    vlSelf->cmd_read_addr = vlSelf->addr_command;
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_in = vlSelf->dproc__DOT__qclk_trig;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.cstrobe 
        = vlSelf->dproc__DOT__pulsereg__DOT__cstrobe;
    vlSelf->dproc__DOT__cstrobe = ((vlSelf->dproc__DOT__myclk__DOT__out 
                                    == vlSelf->dproc__DOT__pulse_cmd_time) 
                                   & (IData)(vlSelf->dproc__DOT__c_strobe_enable));
    vlSelf->dproc__DOT__alu_out = vlSelf->dproc__DOT__myalu__DOT__out;
    vlSelf->dproc__DOT__myalu__DOT__id0 = vlSelf->dproc__DOT__myalu__DOT__in0_reg;
    vlSelf->dproc__DOT__myalu__DOT__id1 = vlSelf->dproc__DOT__myalu__DOT__in1_reg;
    vlSelf->dproc__DOT__myalu__DOT__add = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           + vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__myalu__DOT__sub = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           - vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__reset_reg = vlSelf->reset;
    vlSelf->dproc__DOT__ctu__DOT__instr_load_en = (
                                                   (0U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & (2U 
                                                      <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__qclk_reset = ((0U 
                                                 != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                & ((1U 
                                                    != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                         & ((4U 
                                                             != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))))))));
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en = ((0U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & (2U 
                                                     <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__done_gate = ((0U 
                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((6U 
                                                               != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                                 & (9U 
                                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)))))))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.id 
        = (0xffU & (vlSelf->dproc__DOT__local_cmd[1U] 
                    >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__opcode = (0xffU & 
                                            (((0U == 0x18U)
                                               ? 0U
                                               : (vlSelf->dproc__DOT__local_cmd[
                                                  (((IData)(7U) 
                                                    + (IData)(0x78U)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x18U)))) 
                                             | (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x18U)));
    if ((0U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles);
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        if ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & (IData)((0x20000000U == (0x70000000U 
                                                 & vlSelf->dproc__DOT__local_cmd[3U]))));
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
        } else {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                             >> 0x1eU)) & ((0x20000000U 
                                            & vlSelf->dproc__DOT__local_cmd[3U])
                                            ? (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU))
                                            : (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU)))));
            if ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel 
                    = ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 1U : 0U) : 1U);
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
                    = ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 0U : 1U) : 0U);
            }
        }
    } else if ((2U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((3U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->dproc__DOT__local_cmd[3U])
                                        ? (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])))
                                        : (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U]))))));
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
            = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)
                ? 0U : ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                         ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x10000000U & 
                                      vlSelf->dproc__DOT__local_cmd[3U])
                                      ? 2U : 0U)) : 
                        ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                          ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                              ? 2U : 0U) : 0U)));
    } else {
        if ((4U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((6U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((7U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
        } else {
            if ((9U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            }
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        }
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    }
    vlSelf->dproc__DOT__reg_write_addr = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                  >> 0x10U));
    vlSelf->dproc__DOT__pulse_cmd_i[0U] = ((vlSelf->dproc__DOT__local_cmd[2U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[1U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[1U] = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[2U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[2U] = (0x7fffU 
                                           & (vlSelf->dproc__DOT__local_cmd[3U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in = (0xfU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 5U));
    vlSelf->dproc__DOT__ctu__DOT__pulse_reset = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0xb0000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable 
        = ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
           & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
              & ((vlSelf->dproc__DOT__local_cmd[3U] 
                  >> 0x1fU) & ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                ? (IData)((0U == (0x30000000U 
                                                  & vlSelf->dproc__DOT__local_cmd[3U])))
                                : (IData)((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x90000000U == (0xf0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__sync_enable = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0x70000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__fproc_enable = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & (IData)(
                                                               (0x40000000U 
                                                                == 
                                                                (0xe0000000U 
                                                                 & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__pulsereg__DOT__env_i_in = (0xffffffU 
                                                   & ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                       << 6U) 
                                                      | (vlSelf->dproc__DOT__local_cmd[2U] 
                                                         >> 0x1aU)));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in = 
        (0x1ffffU & (vlSelf->dproc__DOT__local_cmd[2U] 
                     >> 7U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in = 
        (0x1ffU & ((vlSelf->dproc__DOT__local_cmd[2U] 
                    << 4U) | (vlSelf->dproc__DOT__local_cmd[1U] 
                              >> 0x1cU)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in = (0xffffU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 0xaU));
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[3U] 
                 >> 0x12U));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 0x18U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[1U] 
                 >> 0x1aU));
    vlSelf->dproc__DOT__ctu__DOT__reg_write_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((~ 
                                                               (vlSelf->dproc__DOT__local_cmd[3U] 
                                                                >> 0x1fU)) 
                                                              & ((0x40000000U 
                                                                  & vlSelf->dproc__DOT__local_cmd[3U])
                                                                  ? (IData)(
                                                                            (0U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))
                                                                  : (IData)(
                                                                            (0x10000000U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))))))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_load_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & (IData)(
                                                                     (0x60000000U 
                                                                      == 
                                                                      (0xf0000000U 
                                                                       & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__alu_cmd_data_in0 = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                             << 8U) 
                                            | (vlSelf->dproc__DOT__local_cmd[2U] 
                                               >> 0x18U));
    vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel = (1U 
                                                 & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                    >> 0x1bU));
    vlSelf->dproc__DOT__ctu__DOT__alu_opcode = (7U 
                                                & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x18U));
    vlSelf->dproc__DOT__instr_ptr_load_val = (0xffffU 
                                              & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                 >> 4U));
    vlSelf->dproc__DOT__reg_addr_in1 = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__write_pulse_en = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x80000000U == (0xe0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__reg_addr_in0 = (0xfU & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__pulse_cmd_time = ((vlSelf->dproc__DOT__local_cmd[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->dproc__DOT__local_cmd[0U] 
                                             >> 5U));
    vlSelf->dproc__DOT__myclk__DOT__out = vlSelf->dproc__DOT__myclk__DOT__value;
    vlSelf->dproc__DOT__regs__DOT__write_data = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myclk__DOT__in_val = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_in = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myalu__DOT__eq = (0U == vlSelf->dproc__DOT__myalu__DOT__sub);
    vlSelf->dproc__DOT__myalu__DOT__sub_oflow = (1U 
                                                 & (((~ 
                                                      (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                       >> 0x1fU)) 
                                                     & ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                         & vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                        >> 0x1fU)) 
                                                    | ((~ 
                                                        ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                          | vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                         >> 0x1fU)) 
                                                       & (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                          >> 0x1fU))));
    vlSelf->dproc__DOT__instr_load_en = vlSelf->dproc__DOT__ctu__DOT__instr_load_en;
    vlSelf->dproc__DOT__qclk_reset_ctrl = vlSelf->dproc__DOT__ctu__DOT__qclk_reset;
    vlSelf->dproc__DOT__qclk_reset = ((IData)(vlSelf->dproc__DOT__ctu__DOT__qclk_reset) 
                                      | (0U != (0xfU 
                                                & (IData)(vlSelf->dproc__DOT__reset_sr))));
    vlSelf->dproc__DOT__inst_ptr_enable = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en;
    vlSelf->stbend = vlSelf->dproc__DOT__ctu__DOT__done_gate;
    vlSelf->dproc__DOT__regs__DOT__write_addr = vlSelf->dproc__DOT__reg_write_addr;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[0U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[1U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[2U];
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_in = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__pulseout.reset 
        = vlSelf->dproc__DOT__ctu__DOT__pulse_reset;
    vlSelf->dproc__DOT__qclk_trig_enable = vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable;
    vlSelf->dproc__DOT__c_strobe_enable = vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__sync.enable 
        = vlSelf->dproc__DOT__ctu__DOT__sync_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.enable 
        = vlSelf->dproc__DOT__ctu__DOT__fproc_enable;
    vlSelf->dproc__DOT__reg_write_en = vlSelf->dproc__DOT__ctu__DOT__reg_write_en;
    vlSelf->dproc__DOT__qclk_load_en = vlSelf->dproc__DOT__ctu__DOT__qclk_load_en;
    vlSelf->dproc__DOT__alu_in0_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel;
    vlSelf->dproc__DOT__alu_in1_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel;
    vlSelf->dproc__DOT__myalu__DOT__ctrl = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__alu_opcode = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__instr__DOT__load_val = vlSelf->dproc__DOT__instr_ptr_load_val;
    vlSelf->dproc__DOT__regs__DOT__read_addr_1 = vlSelf->dproc__DOT__reg_addr_in1;
    vlSelf->dproc__DOT__regs__DOT__reg_1_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in1];
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x13U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 0x19U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 6U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 0x1bU) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 9U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__write_pulse_en = vlSelf->dproc__DOT__ctu__DOT__write_pulse_en;
    vlSelf->dproc__DOT__inst_ptr_load_en_sel = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSelf->dproc__DOT__inst_ptr_load_en = (1U & ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en))
                                                   ? vlSelf->dproc__DOT__myalu__DOT__out
                                                   : (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en)));
    vlSelf->dproc__DOT__regs__DOT__read_addr_0 = vlSelf->dproc__DOT__reg_addr_in0;
    vlSelf->dproc__DOT__regs__DOT__reg_0_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in0];
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe_in = vlSelf->dproc__DOT__cstrobe;
    vlSelf->dproc__DOT__qclk_out = vlSelf->dproc__DOT__myclk__DOT__out;
    vlSelf->dproc__DOT__myalu__DOT__le = ((vlSelf->dproc__DOT__myalu__DOT__sub 
                                           >> 0x1fU) 
                                          ^ (IData)(vlSelf->dproc__DOT__myalu__DOT__sub_oflow));
    vlSelf->dproc__DOT__instr__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__myclk__DOT__rst = vlSelf->dproc__DOT__qclk_reset;
    vlSelf->dproc__DOT__instr__DOT__enable = vlSelf->dproc__DOT__inst_ptr_enable;
    vlSelf->procdone = vlSelf->stbend;
    vlSelf->dproc__DOT__done_gate = vlSelf->stbend;
    vlSelf->procdone_mon = vlSelf->stbend;
    vlSelf->dproc__DOT__regs__DOT__write_enable = vlSelf->dproc__DOT__reg_write_en;
    vlSelf->dproc__DOT__myclk__DOT__load_enable = vlSelf->dproc__DOT__qclk_load_en;
    vlSelf->dproc__DOT__reg_file_out1 = vlSelf->dproc__DOT__regs__DOT__reg_1_out;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlSelf->dproc__DOT__write_pulse_en;
    if (vlSelf->dproc__DOT__inst_ptr_load_en) {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 1U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = vlSelf->dproc__DOT__instr_ptr_load_val;
    } else {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 0U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en)
                ? (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val));
    }
    vlSelf->dproc__DOT__pulsereg__DOT__reg_in = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__reg_file_out0 = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__pulsereg__DOT__env_in = (0xffffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : vlSelf->dproc__DOT__pulsereg__DOT__env_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_in = (0x1ffffU 
                                                   & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel)
                                                       ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                       : vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_in = (0x1ffU 
                                                  & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel)
                                                      ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                      : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_in = (0xffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlSelf->dproc__DOT__alu_in0 = ((IData)(vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel)
                                    ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                    : vlSelf->dproc__DOT__alu_cmd_data_in0);
    vlSelf->dproc__DOT__myalu__DOT__ge = (1U & (~ (IData)(vlSelf->dproc__DOT__myalu__DOT__le)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.instr_ptr 
        = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__ptr_out = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__cur_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__myalu__DOT__in0 = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__local_out = ((4U 
                                                  & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? 0U
                                                    : vlSelf->dproc__DOT__myalu__DOT__id1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__ge)
                                                    : (IData)(vlSelf->dproc__DOT__myalu__DOT__le)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__eq)
                                                    : vlSelf->dproc__DOT__myalu__DOT__sub)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? vlSelf->dproc__DOT__myalu__DOT__add
                                                    : vlSelf->dproc__DOT__myalu__DOT__id0)));
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__3(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__3\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.mem_bus[0U][0U] 
        = vlSelf->command[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.mem_bus[0U][1U] 
        = vlSelf->command[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.mem_bus[0U][2U] 
        = vlSelf->command[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__memif.mem_bus[0U][3U] 
        = vlSelf->command[3U];
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__0\n"); );
    // Body
    vlSelf->dproc__DOT__ctu__DOT__next_state = ((0U 
                                                 == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                 ? 
                                                ((2U 
                                                  > vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles)
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                  ? 
                                                 ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x1fU)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 1U
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                                       ? 0U
                                                       : 1U)))
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 0U
                                                      : 9U)
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 
                                                     ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                                       ? 0U
                                                       : 1U)
                                                      : 0U)))
                                                   : 
                                                  ((0x40000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 6U
                                                      : 2U)
                                                     : 4U)
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 2U
                                                      : 0U)
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 2U
                                                      : 9U))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.ready)
                                                      ? 2U
                                                      : 4U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__1__KET____DOT__proc_core__sync.ready)
                                                       ? 7U
                                                       : 6U)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                       ? 0U
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                        ? 9U
                                                        : 0U))))))));
    vlSelf->dproc__DOT__alu_in1 = ((2U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                    ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__1__KET__.data
                                    : ((1U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                        ? vlSelf->dproc__DOT__regs__DOT__reg_1_out
                                        : vlSelf->dproc__DOT__myclk__DOT__out));
    vlSelf->dproc__DOT__myalu__DOT__in1 = vlSelf->dproc__DOT__alu_in1;
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.id 
        = (0xffU & (vlSelf->dproc__DOT__local_cmd[1U] 
                    >> 0x14U));
    vlSelf->dproc__DOT__instr__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__opcode = (0xffU & 
                                            (((0U == 0x18U)
                                               ? 0U
                                               : (vlSelf->dproc__DOT__local_cmd[
                                                  (((IData)(7U) 
                                                    + (IData)(0x78U)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x18U)))) 
                                             | (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x18U)));
    vlSelf->dproc__DOT__ctu__DOT__fproc_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.ready;
    vlSelf->dproc__DOT__ctu__DOT__sync_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__sync.ready;
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_in = vlSelf->dproc__DOT__qclk_trig;
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe_in = vlSelf->dproc__DOT__cstrobe;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.env_word 
        = vlSelf->dproc__DOT__pulsereg__DOT__env_word;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.phase 
        = vlSelf->dproc__DOT__pulsereg__DOT__phase;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.freq 
        = vlSelf->dproc__DOT__pulsereg__DOT__freq;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.amp 
        = vlSelf->dproc__DOT__pulsereg__DOT__amp;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cfg 
        = vlSelf->dproc__DOT__pulsereg__DOT__cfg;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cstrobe 
        = vlSelf->dproc__DOT__pulsereg__DOT__cstrobe;
    vlSelf->dproc__DOT__pulse_cmd_time = ((vlSelf->dproc__DOT__local_cmd[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->dproc__DOT__local_cmd[0U] 
                                             >> 5U));
    if ((0U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles);
        vlSelf->dproc__DOT__ctu__DOT__next_state = 
            ((2U > vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles)
              ? 0U : 1U);
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        if ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & (IData)((0x20000000U == (0x70000000U 
                                                 & vlSelf->dproc__DOT__local_cmd[3U]))));
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                    ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? 1U : ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                 ? 1U : ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                          ? 0U : 1U)))
                    : ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 0U : 9U) : ((0x10000000U 
                                           & vlSelf->dproc__DOT__local_cmd[3U])
                                           ? ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                               ? 0U
                                               : 1U)
                                           : 0U)));
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
        } else {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                             >> 0x1eU)) & ((0x20000000U 
                                            & vlSelf->dproc__DOT__local_cmd[3U])
                                            ? (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU))
                                            : (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU)))));
            if ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                if ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                    if ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 6U;
                        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                    } else {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 2U;
                        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
                    }
                } else {
                    vlSelf->dproc__DOT__ctu__DOT__next_state = 4U;
                    vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                }
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                if ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                    if ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 2U;
                        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                    } else {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
                        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 1U;
                    }
                } else {
                    vlSelf->dproc__DOT__ctu__DOT__next_state 
                        = ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 2U : 9U);
                    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                }
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
        vlSelf->dproc__DOT__ctu__DOT__next_state = 3U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((3U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->dproc__DOT__local_cmd[3U])
                                        ? (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])))
                                        : (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U]))))));
        vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
            = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)
                ? 0U : ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                         ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x10000000U & 
                                      vlSelf->dproc__DOT__local_cmd[3U])
                                      ? 2U : 0U)) : 
                        ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                          ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                              ? 2U : 0U) : 0U)));
    } else {
        if ((4U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.ready)
                    ? 2U : 4U);
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((6U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__sync.ready)
                    ? 7U : 6U);
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((7U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
        } else {
            if ((9U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__next_state = 9U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
            }
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        }
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    }
    vlSelf->dproc__DOT__reg_write_addr = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                  >> 0x10U));
    vlSelf->dproc__DOT__pulse_cmd_i[0U] = ((vlSelf->dproc__DOT__local_cmd[2U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[1U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[1U] = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[2U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[2U] = (0x7fffU 
                                           & (vlSelf->dproc__DOT__local_cmd[3U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in = (0xfU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 5U));
    vlSelf->dproc__DOT__ctu__DOT__pulse_reset = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0xb0000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable 
        = ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
           & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
              & ((vlSelf->dproc__DOT__local_cmd[3U] 
                  >> 0x1fU) & ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                ? (IData)((0U == (0x30000000U 
                                                  & vlSelf->dproc__DOT__local_cmd[3U])))
                                : (IData)((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x90000000U == (0xf0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__instr_load_en = (
                                                   (0U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & (2U 
                                                      <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__sync_enable = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0x70000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__fproc_enable = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & (IData)(
                                                               (0x40000000U 
                                                                == 
                                                                (0xe0000000U 
                                                                 & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__pulsereg__DOT__env_i_in = (0xffffffU 
                                                   & ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                       << 6U) 
                                                      | (vlSelf->dproc__DOT__local_cmd[2U] 
                                                         >> 0x1aU)));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in = 
        (0x1ffffU & (vlSelf->dproc__DOT__local_cmd[2U] 
                     >> 7U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in = 
        (0x1ffU & ((vlSelf->dproc__DOT__local_cmd[2U] 
                    << 4U) | (vlSelf->dproc__DOT__local_cmd[1U] 
                              >> 0x1cU)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in = (0xffffU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 0xaU));
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[3U] 
                 >> 0x12U));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 0x18U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[1U] 
                 >> 0x1aU));
    vlSelf->dproc__DOT__ctu__DOT__reg_write_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((~ 
                                                               (vlSelf->dproc__DOT__local_cmd[3U] 
                                                                >> 0x1fU)) 
                                                              & ((0x40000000U 
                                                                  & vlSelf->dproc__DOT__local_cmd[3U])
                                                                  ? (IData)(
                                                                            (0U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))
                                                                  : (IData)(
                                                                            (0x10000000U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))))))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_load_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & (IData)(
                                                                     (0x60000000U 
                                                                      == 
                                                                      (0xf0000000U 
                                                                       & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__alu_cmd_data_in0 = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                             << 8U) 
                                            | (vlSelf->dproc__DOT__local_cmd[2U] 
                                               >> 0x18U));
    vlSelf->dproc__DOT__alu_out = vlSelf->dproc__DOT__myalu__DOT__out;
    vlSelf->dproc__DOT__ctu__DOT__qclk_reset = ((0U 
                                                 != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                & ((1U 
                                                    != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                         & ((4U 
                                                             != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))))))));
    vlSelf->nobusy_mon = vlSelf->nobusy;
    vlSelf->dproc__DOT__myalu__DOT__id0 = vlSelf->dproc__DOT__myalu__DOT__in0_reg;
    vlSelf->dproc__DOT__myalu__DOT__id1 = vlSelf->dproc__DOT__myalu__DOT__in1_reg;
    vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel = (1U 
                                                 & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                    >> 0x1bU));
    vlSelf->dproc__DOT__myalu__DOT__add = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           + vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__myclk__DOT__out = vlSelf->dproc__DOT__myclk__DOT__value;
    vlSelf->dproc__DOT__ctu__DOT__alu_opcode = (7U 
                                                & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x18U));
    vlSelf->cmd_read_addr = vlSelf->addr_command;
    vlSelf->dproc__DOT__instr_ptr_load_val = (0xffffU 
                                              & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                 >> 4U));
    vlSelf->dproc__DOT__reg_addr_in1 = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en = ((0U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & (2U 
                                                     <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__write_pulse_en = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x80000000U == (0xe0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__done_gate = ((0U 
                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((6U 
                                                               != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                                 & (9U 
                                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)))))))));
    vlSelf->dproc__DOT__reg_addr_in0 = (0xfU & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__myalu__DOT__sub = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           - vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__reset = vlSelf->reset;
    vlSelf->dproc__DOT__clk = vlSelf->clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.mem_bus[0U][0U] 
        = vlSelf->command[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.mem_bus[0U][1U] 
        = vlSelf->command[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.mem_bus[0U][2U] 
        = vlSelf->command[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.mem_bus[0U][3U] 
        = vlSelf->command[3U];
    vlSelf->dproc__DOT__regs__DOT__write_addr = vlSelf->dproc__DOT__reg_write_addr;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[0U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[1U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[2U];
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_in = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.reset 
        = vlSelf->dproc__DOT__ctu__DOT__pulse_reset;
    vlSelf->dproc__DOT__qclk_trig_enable = vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable;
    vlSelf->dproc__DOT__c_strobe_enable = vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSelf->dproc__DOT__instr_load_en = vlSelf->dproc__DOT__ctu__DOT__instr_load_en;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__sync.enable 
        = vlSelf->dproc__DOT__ctu__DOT__sync_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.enable 
        = vlSelf->dproc__DOT__ctu__DOT__fproc_enable;
    vlSelf->dproc__DOT__reg_write_en = vlSelf->dproc__DOT__ctu__DOT__reg_write_en;
    vlSelf->dproc__DOT__qclk_load_en = vlSelf->dproc__DOT__ctu__DOT__qclk_load_en;
    vlSelf->dproc__DOT__regs__DOT__write_data = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myclk__DOT__in_val = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_in = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_reset_ctrl = vlSelf->dproc__DOT__ctu__DOT__qclk_reset;
    vlSelf->dproc__DOT__qclk_reset = ((IData)(vlSelf->dproc__DOT__ctu__DOT__qclk_reset) 
                                      | (0U != (0xfU 
                                                & (IData)(vlSelf->dproc__DOT__reset_sr))));
    vlSelf->dproc__DOT__alu_in0_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel;
    vlSelf->dproc__DOT__qclk_out = vlSelf->dproc__DOT__myclk__DOT__out;
    vlSelf->dproc__DOT__alu_in1_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel;
    vlSelf->dproc__DOT__myalu__DOT__ctrl = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__alu_opcode = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__instr__DOT__load_val = vlSelf->dproc__DOT__instr_ptr_load_val;
    vlSelf->dproc__DOT__regs__DOT__read_addr_1 = vlSelf->dproc__DOT__reg_addr_in1;
    vlSelf->dproc__DOT__regs__DOT__reg_1_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in1];
    vlSelf->dproc__DOT__inst_ptr_enable = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en;
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x13U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 0x19U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 6U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 0x1bU) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 9U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__write_pulse_en = vlSelf->dproc__DOT__ctu__DOT__write_pulse_en;
    vlSelf->dproc__DOT__inst_ptr_load_en_sel = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSelf->dproc__DOT__inst_ptr_load_en = (1U & ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en))
                                                   ? vlSelf->dproc__DOT__myalu__DOT__out
                                                   : (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en)));
    vlSelf->stbend = vlSelf->dproc__DOT__ctu__DOT__done_gate;
    vlSelf->dproc__DOT__regs__DOT__read_addr_0 = vlSelf->dproc__DOT__reg_addr_in0;
    vlSelf->dproc__DOT__regs__DOT__reg_0_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in0];
    vlSelf->dproc__DOT__myalu__DOT__eq = (0U == vlSelf->dproc__DOT__myalu__DOT__sub);
    vlSelf->dproc__DOT__myalu__DOT__sub_oflow = (1U 
                                                 & (((~ 
                                                      (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                       >> 0x1fU)) 
                                                     & ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                         & vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                        >> 0x1fU)) 
                                                    | ((~ 
                                                        ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                          | vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                         >> 0x1fU)) 
                                                       & (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                          >> 0x1fU))));
    vlSelf->dproc__DOT__instr__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__regs__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__ctu__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__myalu__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__myclk__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__pulsereg__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__regs__DOT__write_enable = vlSelf->dproc__DOT__reg_write_en;
    vlSelf->dproc__DOT__myclk__DOT__load_enable = vlSelf->dproc__DOT__qclk_load_en;
    vlSelf->dproc__DOT__myclk__DOT__rst = vlSelf->dproc__DOT__qclk_reset;
    vlSelf->dproc__DOT__reg_file_out1 = vlSelf->dproc__DOT__regs__DOT__reg_1_out;
    vlSelf->dproc__DOT__alu_in1 = ((2U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                    ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.data
                                    : ((1U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                        ? vlSelf->dproc__DOT__regs__DOT__reg_1_out
                                        : vlSelf->dproc__DOT__myclk__DOT__out));
    vlSelf->dproc__DOT__instr__DOT__enable = vlSelf->dproc__DOT__inst_ptr_enable;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlSelf->dproc__DOT__write_pulse_en;
    if (vlSelf->dproc__DOT__inst_ptr_load_en) {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 1U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = vlSelf->dproc__DOT__instr_ptr_load_val;
    } else {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 0U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en)
                ? (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val));
    }
    vlSelf->procdone = vlSelf->stbend;
    vlSelf->dproc__DOT__done_gate = vlSelf->stbend;
    vlSelf->procdone_mon = vlSelf->stbend;
    vlSelf->dproc__DOT__pulsereg__DOT__reg_in = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__reg_file_out0 = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__pulsereg__DOT__env_in = (0xffffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : vlSelf->dproc__DOT__pulsereg__DOT__env_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_in = (0x1ffffU 
                                                   & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel)
                                                       ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                       : vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_in = (0x1ffU 
                                                  & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel)
                                                      ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                      : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_in = (0xffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlSelf->dproc__DOT__alu_in0 = ((IData)(vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel)
                                    ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                    : vlSelf->dproc__DOT__alu_cmd_data_in0);
    vlSelf->dproc__DOT__myalu__DOT__le = ((vlSelf->dproc__DOT__myalu__DOT__sub 
                                           >> 0x1fU) 
                                          ^ (IData)(vlSelf->dproc__DOT__myalu__DOT__sub_oflow));
    vlSelf->dproc__DOT__myalu__DOT__in1 = vlSelf->dproc__DOT__alu_in1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.instr_ptr 
        = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__ptr_out = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__cur_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__myalu__DOT__in0 = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__ge = (1U & (~ (IData)(vlSelf->dproc__DOT__myalu__DOT__le)));
    vlSelf->dproc__DOT__myalu__DOT__local_out = ((4U 
                                                  & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? 0U
                                                    : vlSelf->dproc__DOT__myalu__DOT__id1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__ge)
                                                    : (IData)(vlSelf->dproc__DOT__myalu__DOT__le)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__eq)
                                                    : vlSelf->dproc__DOT__myalu__DOT__sub)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? vlSelf->dproc__DOT__myalu__DOT__add
                                                    : vlSelf->dproc__DOT__myalu__DOT__id0)));
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__1(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__1\n"); );
    // Body
    vlSelf->dproc__DOT__cmd_buf_out[0U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.cmd_read[0U];
    vlSelf->dproc__DOT__cmd_buf_out[1U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.cmd_read[1U];
    vlSelf->dproc__DOT__cmd_buf_out[2U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.cmd_read[2U];
    vlSelf->dproc__DOT__cmd_buf_out[3U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.cmd_read[3U];
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__0\n"); );
    // Body
    vlSelf->dproc__DOT__ctu__DOT__fproc_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.ready;
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__1(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__1\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvval__dproc__DOT__regs__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 0;
    // Body
    __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 0U;
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cstrobe) 
         & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.envstart 
            = (0xfffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.freq;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.envlength 
            = (0xfffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.env_word 
                         >> 0xcU));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.envstart 
            = (0xfffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.envlength 
            = (0xfffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.env_word 
                         >> 0xcU));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.freq;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.envstart 
            = (0xffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.envlength 
            = (0xffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.env_word 
                        >> 0xcU));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.freq;
    }
    vlSelf->dproc__DOT__myclk__DOT__value = ((IData)(vlSelf->dproc__DOT__qclk_reset)
                                              ? 0U : 
                                             ((IData)(vlSelf->dproc__DOT__qclk_load_en)
                                               ? ((IData)(3U) 
                                                  + vlSelf->dproc__DOT__alu_out)
                                               : ((IData)(1U) 
                                                  + vlSelf->dproc__DOT__myclk__DOT__value)));
    if (vlSelf->dproc__DOT__reset_reg) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles = 0U;
        vlSelf->dproc__DOT__instr__DOT__prev_val = 0U;
        vlSelf->dproc__DOT__instr__DOT__prev_val_inc = 1U;
        vlSelf->dproc__DOT__ctu__DOT__state = 0U;
    } else {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst)
                ? 0U : ((IData)(1U) + vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
        vlSelf->dproc__DOT__instr__DOT__prev_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
        vlSelf->dproc__DOT__instr__DOT__prev_val_inc 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->dproc__DOT____Vcellout__instr__ptr_out)));
        vlSelf->dproc__DOT__ctu__DOT__state = vlSelf->dproc__DOT__ctu__DOT__next_state;
    }
    if (vlSelf->dproc__DOT__reg_write_en) {
        __Vdlyvval__dproc__DOT__regs__DOT__data__v0 
            = vlSelf->dproc__DOT__alu_out;
        __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 1U;
        __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0 
            = vlSelf->dproc__DOT__reg_write_addr;
    }
    vlSelf->noop = (1U & (~ (IData)((0U != (((vlSelf->command[0U] 
                                              | vlSelf->command[1U]) 
                                             | vlSelf->command[2U]) 
                                            | vlSelf->command[3U])))));
    if (vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__amp = vlSelf->dproc__DOT__pulsereg__DOT__amp_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__freq = vlSelf->dproc__DOT__pulsereg__DOT__freq_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__phase = vlSelf->dproc__DOT__pulsereg__DOT__phase_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__env_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__env_word 
            = vlSelf->dproc__DOT__pulsereg__DOT__env_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__cfg = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    }
    vlSelf->command_d2[0U] = vlSelf->command_d[0U];
    vlSelf->command_d2[1U] = vlSelf->command_d[1U];
    vlSelf->command_d2[2U] = vlSelf->command_d[2U];
    vlSelf->command_d2[3U] = vlSelf->command_d[3U];
    vlSelf->nobusy = (1U & (~ ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.busy) 
                               | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.busy) 
                                  | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.busy)))));
    vlSelf->addr_command = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.instr_ptr;
    vlSelf->dproc__DOT__qclk_trig = ((vlSelf->dproc__DOT__myclk__DOT__out 
                                      == vlSelf->dproc__DOT__pulse_cmd_time) 
                                     & (IData)(vlSelf->dproc__DOT__qclk_trig_enable));
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe = vlSelf->dproc__DOT__cstrobe;
    vlSelf->dproc__DOT__dummy_resetsr = (1U & ((IData)(vlSelf->dproc__DOT__reset_sr) 
                                               >> 4U));
    vlSelf->dproc__DOT__reset_sr = ((0x1eU & ((IData)(vlSelf->dproc__DOT__reset_sr) 
                                              << 1U)) 
                                    | (IData)(vlSelf->dproc__DOT__reset_reg));
    vlSelf->dproc__DOT__myalu__DOT__out = vlSelf->dproc__DOT__myalu__DOT__local_out;
    vlSelf->dproc__DOT__myalu__DOT__in0_reg = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__in1_reg = vlSelf->dproc__DOT__alu_in1;
    if (vlSelf->dproc__DOT__instr_load_en) {
        vlSelf->dproc__DOT__local_cmd[0U] = vlSelf->dproc__DOT__cmd_buf_out[0U];
        vlSelf->dproc__DOT__local_cmd[1U] = vlSelf->dproc__DOT__cmd_buf_out[1U];
        vlSelf->dproc__DOT__local_cmd[2U] = vlSelf->dproc__DOT__cmd_buf_out[2U];
        vlSelf->dproc__DOT__local_cmd[3U] = vlSelf->dproc__DOT__cmd_buf_out[3U];
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cstrobe) 
           & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cfg))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__2__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cstrobe) 
           & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cfg))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__2__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cstrobe) 
           & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cfg))));
    if (__Vdlyvset__dproc__DOT__regs__DOT__data__v0) {
        vlSelf->dproc__DOT__regs__DOT__data[__Vdlyvdim0__dproc__DOT__regs__DOT__data__v0] 
            = __Vdlyvval__dproc__DOT__regs__DOT__data__v0;
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.amp 
        = vlSelf->dproc__DOT__pulsereg__DOT__amp;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.freq 
        = vlSelf->dproc__DOT__pulsereg__DOT__freq;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.phase 
        = vlSelf->dproc__DOT__pulsereg__DOT__phase;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.env_word 
        = vlSelf->dproc__DOT__pulsereg__DOT__env_word;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cfg 
        = vlSelf->dproc__DOT__pulsereg__DOT__cfg;
    vlSelf->command_d[0U] = vlSelf->command[0U];
    vlSelf->command_d[1U] = vlSelf->command[1U];
    vlSelf->command_d[2U] = vlSelf->command[2U];
    vlSelf->command_d[3U] = vlSelf->command[3U];
    vlSelf->nobusy_mon = vlSelf->nobusy;
    vlSelf->cmd_read_addr = vlSelf->addr_command;
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_in = vlSelf->dproc__DOT__qclk_trig;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.cstrobe 
        = vlSelf->dproc__DOT__pulsereg__DOT__cstrobe;
    vlSelf->dproc__DOT__cstrobe = ((vlSelf->dproc__DOT__myclk__DOT__out 
                                    == vlSelf->dproc__DOT__pulse_cmd_time) 
                                   & (IData)(vlSelf->dproc__DOT__c_strobe_enable));
    vlSelf->dproc__DOT__alu_out = vlSelf->dproc__DOT__myalu__DOT__out;
    vlSelf->dproc__DOT__myalu__DOT__id0 = vlSelf->dproc__DOT__myalu__DOT__in0_reg;
    vlSelf->dproc__DOT__myalu__DOT__id1 = vlSelf->dproc__DOT__myalu__DOT__in1_reg;
    vlSelf->dproc__DOT__myalu__DOT__add = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           + vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__myalu__DOT__sub = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           - vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__reset_reg = vlSelf->reset;
    vlSelf->dproc__DOT__ctu__DOT__instr_load_en = (
                                                   (0U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & (2U 
                                                      <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__qclk_reset = ((0U 
                                                 != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                & ((1U 
                                                    != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                         & ((4U 
                                                             != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))))))));
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en = ((0U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & (2U 
                                                     <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__done_gate = ((0U 
                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((6U 
                                                               != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                                 & (9U 
                                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)))))))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.id 
        = (0xffU & (vlSelf->dproc__DOT__local_cmd[1U] 
                    >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__opcode = (0xffU & 
                                            (((0U == 0x18U)
                                               ? 0U
                                               : (vlSelf->dproc__DOT__local_cmd[
                                                  (((IData)(7U) 
                                                    + (IData)(0x78U)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x18U)))) 
                                             | (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x18U)));
    if ((0U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles);
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        if ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & (IData)((0x20000000U == (0x70000000U 
                                                 & vlSelf->dproc__DOT__local_cmd[3U]))));
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
        } else {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                             >> 0x1eU)) & ((0x20000000U 
                                            & vlSelf->dproc__DOT__local_cmd[3U])
                                            ? (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU))
                                            : (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU)))));
            if ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel 
                    = ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 1U : 0U) : 1U);
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
                    = ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 0U : 1U) : 0U);
            }
        }
    } else if ((2U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((3U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->dproc__DOT__local_cmd[3U])
                                        ? (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])))
                                        : (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U]))))));
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
            = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)
                ? 0U : ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                         ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x10000000U & 
                                      vlSelf->dproc__DOT__local_cmd[3U])
                                      ? 2U : 0U)) : 
                        ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                          ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                              ? 2U : 0U) : 0U)));
    } else {
        if ((4U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((6U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((7U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
        } else {
            if ((9U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            }
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        }
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    }
    vlSelf->dproc__DOT__reg_write_addr = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                  >> 0x10U));
    vlSelf->dproc__DOT__pulse_cmd_i[0U] = ((vlSelf->dproc__DOT__local_cmd[2U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[1U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[1U] = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[2U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[2U] = (0x7fffU 
                                           & (vlSelf->dproc__DOT__local_cmd[3U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in = (0xfU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 5U));
    vlSelf->dproc__DOT__ctu__DOT__pulse_reset = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0xb0000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable 
        = ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
           & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
              & ((vlSelf->dproc__DOT__local_cmd[3U] 
                  >> 0x1fU) & ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                ? (IData)((0U == (0x30000000U 
                                                  & vlSelf->dproc__DOT__local_cmd[3U])))
                                : (IData)((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x90000000U == (0xf0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__sync_enable = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0x70000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__fproc_enable = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & (IData)(
                                                               (0x40000000U 
                                                                == 
                                                                (0xe0000000U 
                                                                 & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__pulsereg__DOT__env_i_in = (0xffffffU 
                                                   & ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                       << 6U) 
                                                      | (vlSelf->dproc__DOT__local_cmd[2U] 
                                                         >> 0x1aU)));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in = 
        (0x1ffffU & (vlSelf->dproc__DOT__local_cmd[2U] 
                     >> 7U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in = 
        (0x1ffU & ((vlSelf->dproc__DOT__local_cmd[2U] 
                    << 4U) | (vlSelf->dproc__DOT__local_cmd[1U] 
                              >> 0x1cU)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in = (0xffffU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 0xaU));
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[3U] 
                 >> 0x12U));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 0x18U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[1U] 
                 >> 0x1aU));
    vlSelf->dproc__DOT__ctu__DOT__reg_write_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((~ 
                                                               (vlSelf->dproc__DOT__local_cmd[3U] 
                                                                >> 0x1fU)) 
                                                              & ((0x40000000U 
                                                                  & vlSelf->dproc__DOT__local_cmd[3U])
                                                                  ? (IData)(
                                                                            (0U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))
                                                                  : (IData)(
                                                                            (0x10000000U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))))))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_load_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & (IData)(
                                                                     (0x60000000U 
                                                                      == 
                                                                      (0xf0000000U 
                                                                       & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__alu_cmd_data_in0 = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                             << 8U) 
                                            | (vlSelf->dproc__DOT__local_cmd[2U] 
                                               >> 0x18U));
    vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel = (1U 
                                                 & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                    >> 0x1bU));
    vlSelf->dproc__DOT__ctu__DOT__alu_opcode = (7U 
                                                & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x18U));
    vlSelf->dproc__DOT__instr_ptr_load_val = (0xffffU 
                                              & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                 >> 4U));
    vlSelf->dproc__DOT__reg_addr_in1 = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__write_pulse_en = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x80000000U == (0xe0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__reg_addr_in0 = (0xfU & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__pulse_cmd_time = ((vlSelf->dproc__DOT__local_cmd[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->dproc__DOT__local_cmd[0U] 
                                             >> 5U));
    vlSelf->dproc__DOT__myclk__DOT__out = vlSelf->dproc__DOT__myclk__DOT__value;
    vlSelf->dproc__DOT__regs__DOT__write_data = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myclk__DOT__in_val = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_in = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myalu__DOT__eq = (0U == vlSelf->dproc__DOT__myalu__DOT__sub);
    vlSelf->dproc__DOT__myalu__DOT__sub_oflow = (1U 
                                                 & (((~ 
                                                      (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                       >> 0x1fU)) 
                                                     & ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                         & vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                        >> 0x1fU)) 
                                                    | ((~ 
                                                        ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                          | vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                         >> 0x1fU)) 
                                                       & (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                          >> 0x1fU))));
    vlSelf->dproc__DOT__instr_load_en = vlSelf->dproc__DOT__ctu__DOT__instr_load_en;
    vlSelf->dproc__DOT__qclk_reset_ctrl = vlSelf->dproc__DOT__ctu__DOT__qclk_reset;
    vlSelf->dproc__DOT__qclk_reset = ((IData)(vlSelf->dproc__DOT__ctu__DOT__qclk_reset) 
                                      | (0U != (0xfU 
                                                & (IData)(vlSelf->dproc__DOT__reset_sr))));
    vlSelf->dproc__DOT__inst_ptr_enable = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en;
    vlSelf->stbend = vlSelf->dproc__DOT__ctu__DOT__done_gate;
    vlSelf->dproc__DOT__regs__DOT__write_addr = vlSelf->dproc__DOT__reg_write_addr;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[0U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[1U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[2U];
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_in = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__pulseout.reset 
        = vlSelf->dproc__DOT__ctu__DOT__pulse_reset;
    vlSelf->dproc__DOT__qclk_trig_enable = vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable;
    vlSelf->dproc__DOT__c_strobe_enable = vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__sync.enable 
        = vlSelf->dproc__DOT__ctu__DOT__sync_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.enable 
        = vlSelf->dproc__DOT__ctu__DOT__fproc_enable;
    vlSelf->dproc__DOT__reg_write_en = vlSelf->dproc__DOT__ctu__DOT__reg_write_en;
    vlSelf->dproc__DOT__qclk_load_en = vlSelf->dproc__DOT__ctu__DOT__qclk_load_en;
    vlSelf->dproc__DOT__alu_in0_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel;
    vlSelf->dproc__DOT__alu_in1_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel;
    vlSelf->dproc__DOT__myalu__DOT__ctrl = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__alu_opcode = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__instr__DOT__load_val = vlSelf->dproc__DOT__instr_ptr_load_val;
    vlSelf->dproc__DOT__regs__DOT__read_addr_1 = vlSelf->dproc__DOT__reg_addr_in1;
    vlSelf->dproc__DOT__regs__DOT__reg_1_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in1];
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x13U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 0x19U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 6U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 0x1bU) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 9U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__write_pulse_en = vlSelf->dproc__DOT__ctu__DOT__write_pulse_en;
    vlSelf->dproc__DOT__inst_ptr_load_en_sel = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSelf->dproc__DOT__inst_ptr_load_en = (1U & ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en))
                                                   ? vlSelf->dproc__DOT__myalu__DOT__out
                                                   : (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en)));
    vlSelf->dproc__DOT__regs__DOT__read_addr_0 = vlSelf->dproc__DOT__reg_addr_in0;
    vlSelf->dproc__DOT__regs__DOT__reg_0_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in0];
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe_in = vlSelf->dproc__DOT__cstrobe;
    vlSelf->dproc__DOT__qclk_out = vlSelf->dproc__DOT__myclk__DOT__out;
    vlSelf->dproc__DOT__myalu__DOT__le = ((vlSelf->dproc__DOT__myalu__DOT__sub 
                                           >> 0x1fU) 
                                          ^ (IData)(vlSelf->dproc__DOT__myalu__DOT__sub_oflow));
    vlSelf->dproc__DOT__instr__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__myclk__DOT__rst = vlSelf->dproc__DOT__qclk_reset;
    vlSelf->dproc__DOT__instr__DOT__enable = vlSelf->dproc__DOT__inst_ptr_enable;
    vlSelf->procdone = vlSelf->stbend;
    vlSelf->dproc__DOT__done_gate = vlSelf->stbend;
    vlSelf->procdone_mon = vlSelf->stbend;
    vlSelf->dproc__DOT__regs__DOT__write_enable = vlSelf->dproc__DOT__reg_write_en;
    vlSelf->dproc__DOT__myclk__DOT__load_enable = vlSelf->dproc__DOT__qclk_load_en;
    vlSelf->dproc__DOT__reg_file_out1 = vlSelf->dproc__DOT__regs__DOT__reg_1_out;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlSelf->dproc__DOT__write_pulse_en;
    if (vlSelf->dproc__DOT__inst_ptr_load_en) {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 1U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = vlSelf->dproc__DOT__instr_ptr_load_val;
    } else {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 0U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en)
                ? (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val));
    }
    vlSelf->dproc__DOT__pulsereg__DOT__reg_in = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__reg_file_out0 = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__pulsereg__DOT__env_in = (0xffffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : vlSelf->dproc__DOT__pulsereg__DOT__env_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_in = (0x1ffffU 
                                                   & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel)
                                                       ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                       : vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_in = (0x1ffU 
                                                  & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel)
                                                      ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                      : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_in = (0xffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlSelf->dproc__DOT__alu_in0 = ((IData)(vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel)
                                    ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                    : vlSelf->dproc__DOT__alu_cmd_data_in0);
    vlSelf->dproc__DOT__myalu__DOT__ge = (1U & (~ (IData)(vlSelf->dproc__DOT__myalu__DOT__le)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.instr_ptr 
        = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__ptr_out = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__cur_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__myalu__DOT__in0 = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__local_out = ((4U 
                                                  & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? 0U
                                                    : vlSelf->dproc__DOT__myalu__DOT__id1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__ge)
                                                    : (IData)(vlSelf->dproc__DOT__myalu__DOT__le)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__eq)
                                                    : vlSelf->dproc__DOT__myalu__DOT__sub)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? vlSelf->dproc__DOT__myalu__DOT__add
                                                    : vlSelf->dproc__DOT__myalu__DOT__id0)));
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__3(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__3\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.mem_bus[0U][0U] 
        = vlSelf->command[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.mem_bus[0U][1U] 
        = vlSelf->command[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.mem_bus[0U][2U] 
        = vlSelf->command[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__memif.mem_bus[0U][3U] 
        = vlSelf->command[3U];
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__0\n"); );
    // Body
    vlSelf->dproc__DOT__ctu__DOT__next_state = ((0U 
                                                 == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                 ? 
                                                ((2U 
                                                  > vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles)
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                  ? 
                                                 ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x1fU)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 1U
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                                       ? 0U
                                                       : 1U)))
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 0U
                                                      : 9U)
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 
                                                     ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                                       ? 0U
                                                       : 1U)
                                                      : 0U)))
                                                   : 
                                                  ((0x40000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 6U
                                                      : 2U)
                                                     : 4U)
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 2U
                                                      : 0U)
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 2U
                                                      : 9U))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.ready)
                                                      ? 2U
                                                      : 4U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__2__KET____DOT__proc_core__sync.ready)
                                                       ? 7U
                                                       : 6U)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                       ? 0U
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                        ? 9U
                                                        : 0U))))))));
    vlSelf->dproc__DOT__alu_in1 = ((2U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                    ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__2__KET__.data
                                    : ((1U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                        ? vlSelf->dproc__DOT__regs__DOT__reg_1_out
                                        : vlSelf->dproc__DOT__myclk__DOT__out));
    vlSelf->dproc__DOT__myalu__DOT__in1 = vlSelf->dproc__DOT__alu_in1;
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__.id 
        = (0xffU & (vlSelf->dproc__DOT__local_cmd[1U] 
                    >> 0x14U));
    vlSelf->dproc__DOT__instr__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__opcode = (0xffU & 
                                            (((0U == 0x18U)
                                               ? 0U
                                               : (vlSelf->dproc__DOT__local_cmd[
                                                  (((IData)(7U) 
                                                    + (IData)(0x78U)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x18U)))) 
                                             | (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x18U)));
    vlSelf->dproc__DOT__ctu__DOT__fproc_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__.ready;
    vlSelf->dproc__DOT__ctu__DOT__sync_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__sync.ready;
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_in = vlSelf->dproc__DOT__qclk_trig;
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe_in = vlSelf->dproc__DOT__cstrobe;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.env_word 
        = vlSelf->dproc__DOT__pulsereg__DOT__env_word;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.phase 
        = vlSelf->dproc__DOT__pulsereg__DOT__phase;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.freq 
        = vlSelf->dproc__DOT__pulsereg__DOT__freq;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.amp 
        = vlSelf->dproc__DOT__pulsereg__DOT__amp;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cfg 
        = vlSelf->dproc__DOT__pulsereg__DOT__cfg;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cstrobe 
        = vlSelf->dproc__DOT__pulsereg__DOT__cstrobe;
    vlSelf->dproc__DOT__pulse_cmd_time = ((vlSelf->dproc__DOT__local_cmd[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->dproc__DOT__local_cmd[0U] 
                                             >> 5U));
    if ((0U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles);
        vlSelf->dproc__DOT__ctu__DOT__next_state = 
            ((2U > vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles)
              ? 0U : 1U);
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        if ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & (IData)((0x20000000U == (0x70000000U 
                                                 & vlSelf->dproc__DOT__local_cmd[3U]))));
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                    ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? 1U : ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                 ? 1U : ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                          ? 0U : 1U)))
                    : ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 0U : 9U) : ((0x10000000U 
                                           & vlSelf->dproc__DOT__local_cmd[3U])
                                           ? ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                               ? 0U
                                               : 1U)
                                           : 0U)));
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
        } else {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                             >> 0x1eU)) & ((0x20000000U 
                                            & vlSelf->dproc__DOT__local_cmd[3U])
                                            ? (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU))
                                            : (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU)))));
            if ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                if ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                    if ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 6U;
                        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                    } else {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 2U;
                        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
                    }
                } else {
                    vlSelf->dproc__DOT__ctu__DOT__next_state = 4U;
                    vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                }
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                if ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                    if ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 2U;
                        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                    } else {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
                        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 1U;
                    }
                } else {
                    vlSelf->dproc__DOT__ctu__DOT__next_state 
                        = ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 2U : 9U);
                    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                }
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
        vlSelf->dproc__DOT__ctu__DOT__next_state = 3U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((3U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->dproc__DOT__local_cmd[3U])
                                        ? (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])))
                                        : (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U]))))));
        vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
            = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)
                ? 0U : ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                         ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x10000000U & 
                                      vlSelf->dproc__DOT__local_cmd[3U])
                                      ? 2U : 0U)) : 
                        ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                          ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                              ? 2U : 0U) : 0U)));
    } else {
        if ((4U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__.ready)
                    ? 2U : 4U);
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((6U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__sync.ready)
                    ? 7U : 6U);
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((7U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
        } else {
            if ((9U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__next_state = 9U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
            }
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        }
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    }
    vlSelf->dproc__DOT__reg_write_addr = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                  >> 0x10U));
    vlSelf->dproc__DOT__pulse_cmd_i[0U] = ((vlSelf->dproc__DOT__local_cmd[2U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[1U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[1U] = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[2U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[2U] = (0x7fffU 
                                           & (vlSelf->dproc__DOT__local_cmd[3U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in = (0xfU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 5U));
    vlSelf->dproc__DOT__ctu__DOT__pulse_reset = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0xb0000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable 
        = ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
           & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
              & ((vlSelf->dproc__DOT__local_cmd[3U] 
                  >> 0x1fU) & ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                ? (IData)((0U == (0x30000000U 
                                                  & vlSelf->dproc__DOT__local_cmd[3U])))
                                : (IData)((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x90000000U == (0xf0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__instr_load_en = (
                                                   (0U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & (2U 
                                                      <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__sync_enable = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0x70000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__fproc_enable = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & (IData)(
                                                               (0x40000000U 
                                                                == 
                                                                (0xe0000000U 
                                                                 & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__pulsereg__DOT__env_i_in = (0xffffffU 
                                                   & ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                       << 6U) 
                                                      | (vlSelf->dproc__DOT__local_cmd[2U] 
                                                         >> 0x1aU)));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in = 
        (0x1ffffU & (vlSelf->dproc__DOT__local_cmd[2U] 
                     >> 7U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in = 
        (0x1ffU & ((vlSelf->dproc__DOT__local_cmd[2U] 
                    << 4U) | (vlSelf->dproc__DOT__local_cmd[1U] 
                              >> 0x1cU)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in = (0xffffU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 0xaU));
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[3U] 
                 >> 0x12U));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 0x18U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[1U] 
                 >> 0x1aU));
    vlSelf->dproc__DOT__ctu__DOT__reg_write_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((~ 
                                                               (vlSelf->dproc__DOT__local_cmd[3U] 
                                                                >> 0x1fU)) 
                                                              & ((0x40000000U 
                                                                  & vlSelf->dproc__DOT__local_cmd[3U])
                                                                  ? (IData)(
                                                                            (0U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))
                                                                  : (IData)(
                                                                            (0x10000000U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))))))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_load_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & (IData)(
                                                                     (0x60000000U 
                                                                      == 
                                                                      (0xf0000000U 
                                                                       & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__alu_cmd_data_in0 = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                             << 8U) 
                                            | (vlSelf->dproc__DOT__local_cmd[2U] 
                                               >> 0x18U));
    vlSelf->dproc__DOT__alu_out = vlSelf->dproc__DOT__myalu__DOT__out;
    vlSelf->dproc__DOT__ctu__DOT__qclk_reset = ((0U 
                                                 != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                & ((1U 
                                                    != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                         & ((4U 
                                                             != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))))))));
    vlSelf->nobusy_mon = vlSelf->nobusy;
    vlSelf->dproc__DOT__myalu__DOT__id0 = vlSelf->dproc__DOT__myalu__DOT__in0_reg;
    vlSelf->dproc__DOT__myalu__DOT__id1 = vlSelf->dproc__DOT__myalu__DOT__in1_reg;
    vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel = (1U 
                                                 & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                    >> 0x1bU));
    vlSelf->dproc__DOT__myalu__DOT__add = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           + vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__myclk__DOT__out = vlSelf->dproc__DOT__myclk__DOT__value;
    vlSelf->dproc__DOT__ctu__DOT__alu_opcode = (7U 
                                                & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x18U));
    vlSelf->cmd_read_addr = vlSelf->addr_command;
    vlSelf->dproc__DOT__instr_ptr_load_val = (0xffffU 
                                              & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                 >> 4U));
    vlSelf->dproc__DOT__reg_addr_in1 = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en = ((0U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & (2U 
                                                     <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__write_pulse_en = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x80000000U == (0xe0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__done_gate = ((0U 
                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((6U 
                                                               != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                                 & (9U 
                                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)))))))));
    vlSelf->dproc__DOT__reg_addr_in0 = (0xfU & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__myalu__DOT__sub = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           - vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__reset = vlSelf->reset;
    vlSelf->dproc__DOT__clk = vlSelf->clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.mem_bus[0U][0U] 
        = vlSelf->command[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.mem_bus[0U][1U] 
        = vlSelf->command[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.mem_bus[0U][2U] 
        = vlSelf->command[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.mem_bus[0U][3U] 
        = vlSelf->command[3U];
    vlSelf->dproc__DOT__regs__DOT__write_addr = vlSelf->dproc__DOT__reg_write_addr;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[0U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[1U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[2U];
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_in = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.reset 
        = vlSelf->dproc__DOT__ctu__DOT__pulse_reset;
    vlSelf->dproc__DOT__qclk_trig_enable = vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable;
    vlSelf->dproc__DOT__c_strobe_enable = vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSelf->dproc__DOT__instr_load_en = vlSelf->dproc__DOT__ctu__DOT__instr_load_en;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__sync.enable 
        = vlSelf->dproc__DOT__ctu__DOT__sync_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__.enable 
        = vlSelf->dproc__DOT__ctu__DOT__fproc_enable;
    vlSelf->dproc__DOT__reg_write_en = vlSelf->dproc__DOT__ctu__DOT__reg_write_en;
    vlSelf->dproc__DOT__qclk_load_en = vlSelf->dproc__DOT__ctu__DOT__qclk_load_en;
    vlSelf->dproc__DOT__regs__DOT__write_data = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myclk__DOT__in_val = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_in = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_reset_ctrl = vlSelf->dproc__DOT__ctu__DOT__qclk_reset;
    vlSelf->dproc__DOT__qclk_reset = ((IData)(vlSelf->dproc__DOT__ctu__DOT__qclk_reset) 
                                      | (0U != (0xfU 
                                                & (IData)(vlSelf->dproc__DOT__reset_sr))));
    vlSelf->dproc__DOT__alu_in0_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel;
    vlSelf->dproc__DOT__qclk_out = vlSelf->dproc__DOT__myclk__DOT__out;
    vlSelf->dproc__DOT__alu_in1_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel;
    vlSelf->dproc__DOT__myalu__DOT__ctrl = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__alu_opcode = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__instr__DOT__load_val = vlSelf->dproc__DOT__instr_ptr_load_val;
    vlSelf->dproc__DOT__regs__DOT__read_addr_1 = vlSelf->dproc__DOT__reg_addr_in1;
    vlSelf->dproc__DOT__regs__DOT__reg_1_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in1];
    vlSelf->dproc__DOT__inst_ptr_enable = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en;
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x13U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 0x19U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 6U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 0x1bU) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 9U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__write_pulse_en = vlSelf->dproc__DOT__ctu__DOT__write_pulse_en;
    vlSelf->dproc__DOT__inst_ptr_load_en_sel = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSelf->dproc__DOT__inst_ptr_load_en = (1U & ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en))
                                                   ? vlSelf->dproc__DOT__myalu__DOT__out
                                                   : (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en)));
    vlSelf->stbend = vlSelf->dproc__DOT__ctu__DOT__done_gate;
    vlSelf->dproc__DOT__regs__DOT__read_addr_0 = vlSelf->dproc__DOT__reg_addr_in0;
    vlSelf->dproc__DOT__regs__DOT__reg_0_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in0];
    vlSelf->dproc__DOT__myalu__DOT__eq = (0U == vlSelf->dproc__DOT__myalu__DOT__sub);
    vlSelf->dproc__DOT__myalu__DOT__sub_oflow = (1U 
                                                 & (((~ 
                                                      (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                       >> 0x1fU)) 
                                                     & ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                         & vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                        >> 0x1fU)) 
                                                    | ((~ 
                                                        ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                          | vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                         >> 0x1fU)) 
                                                       & (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                          >> 0x1fU))));
    vlSelf->dproc__DOT__instr__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__regs__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__ctu__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__myalu__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__myclk__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__pulsereg__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__regs__DOT__write_enable = vlSelf->dproc__DOT__reg_write_en;
    vlSelf->dproc__DOT__myclk__DOT__load_enable = vlSelf->dproc__DOT__qclk_load_en;
    vlSelf->dproc__DOT__myclk__DOT__rst = vlSelf->dproc__DOT__qclk_reset;
    vlSelf->dproc__DOT__reg_file_out1 = vlSelf->dproc__DOT__regs__DOT__reg_1_out;
    vlSelf->dproc__DOT__alu_in1 = ((2U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                    ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__.data
                                    : ((1U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                        ? vlSelf->dproc__DOT__regs__DOT__reg_1_out
                                        : vlSelf->dproc__DOT__myclk__DOT__out));
    vlSelf->dproc__DOT__instr__DOT__enable = vlSelf->dproc__DOT__inst_ptr_enable;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlSelf->dproc__DOT__write_pulse_en;
    if (vlSelf->dproc__DOT__inst_ptr_load_en) {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 1U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = vlSelf->dproc__DOT__instr_ptr_load_val;
    } else {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 0U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en)
                ? (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val));
    }
    vlSelf->procdone = vlSelf->stbend;
    vlSelf->dproc__DOT__done_gate = vlSelf->stbend;
    vlSelf->procdone_mon = vlSelf->stbend;
    vlSelf->dproc__DOT__pulsereg__DOT__reg_in = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__reg_file_out0 = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__pulsereg__DOT__env_in = (0xffffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : vlSelf->dproc__DOT__pulsereg__DOT__env_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_in = (0x1ffffU 
                                                   & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel)
                                                       ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                       : vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_in = (0x1ffU 
                                                  & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel)
                                                      ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                      : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_in = (0xffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlSelf->dproc__DOT__alu_in0 = ((IData)(vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel)
                                    ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                    : vlSelf->dproc__DOT__alu_cmd_data_in0);
    vlSelf->dproc__DOT__myalu__DOT__le = ((vlSelf->dproc__DOT__myalu__DOT__sub 
                                           >> 0x1fU) 
                                          ^ (IData)(vlSelf->dproc__DOT__myalu__DOT__sub_oflow));
    vlSelf->dproc__DOT__myalu__DOT__in1 = vlSelf->dproc__DOT__alu_in1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.instr_ptr 
        = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__ptr_out = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__cur_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__myalu__DOT__in0 = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__ge = (1U & (~ (IData)(vlSelf->dproc__DOT__myalu__DOT__le)));
    vlSelf->dproc__DOT__myalu__DOT__local_out = ((4U 
                                                  & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? 0U
                                                    : vlSelf->dproc__DOT__myalu__DOT__id1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__ge)
                                                    : (IData)(vlSelf->dproc__DOT__myalu__DOT__le)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__eq)
                                                    : vlSelf->dproc__DOT__myalu__DOT__sub)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? vlSelf->dproc__DOT__myalu__DOT__add
                                                    : vlSelf->dproc__DOT__myalu__DOT__id0)));
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__1(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__1\n"); );
    // Body
    vlSelf->dproc__DOT__cmd_buf_out[0U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.cmd_read[0U];
    vlSelf->dproc__DOT__cmd_buf_out[1U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.cmd_read[1U];
    vlSelf->dproc__DOT__cmd_buf_out[2U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.cmd_read[2U];
    vlSelf->dproc__DOT__cmd_buf_out[3U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.cmd_read[3U];
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__0\n"); );
    // Body
    vlSelf->dproc__DOT__ctu__DOT__fproc_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__.ready;
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__1(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__1\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvval__dproc__DOT__regs__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 0;
    // Body
    __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 0U;
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cstrobe) 
         & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.envstart 
            = (0xfffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.freq;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.envlength 
            = (0xfffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.env_word 
                         >> 0xcU));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.envstart 
            = (0xfffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.envlength 
            = (0xfffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.env_word 
                         >> 0xcU));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.freq;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.envstart 
            = (0xffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.envlength 
            = (0xffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.env_word 
                        >> 0xcU));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.freq;
    }
    vlSelf->dproc__DOT__myclk__DOT__value = ((IData)(vlSelf->dproc__DOT__qclk_reset)
                                              ? 0U : 
                                             ((IData)(vlSelf->dproc__DOT__qclk_load_en)
                                               ? ((IData)(3U) 
                                                  + vlSelf->dproc__DOT__alu_out)
                                               : ((IData)(1U) 
                                                  + vlSelf->dproc__DOT__myclk__DOT__value)));
    if (vlSelf->dproc__DOT__reset_reg) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles = 0U;
        vlSelf->dproc__DOT__instr__DOT__prev_val = 0U;
        vlSelf->dproc__DOT__instr__DOT__prev_val_inc = 1U;
        vlSelf->dproc__DOT__ctu__DOT__state = 0U;
    } else {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst)
                ? 0U : ((IData)(1U) + vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
        vlSelf->dproc__DOT__instr__DOT__prev_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
        vlSelf->dproc__DOT__instr__DOT__prev_val_inc 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->dproc__DOT____Vcellout__instr__ptr_out)));
        vlSelf->dproc__DOT__ctu__DOT__state = vlSelf->dproc__DOT__ctu__DOT__next_state;
    }
    if (vlSelf->dproc__DOT__reg_write_en) {
        __Vdlyvval__dproc__DOT__regs__DOT__data__v0 
            = vlSelf->dproc__DOT__alu_out;
        __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 1U;
        __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0 
            = vlSelf->dproc__DOT__reg_write_addr;
    }
    vlSelf->noop = (1U & (~ (IData)((0U != (((vlSelf->command[0U] 
                                              | vlSelf->command[1U]) 
                                             | vlSelf->command[2U]) 
                                            | vlSelf->command[3U])))));
    if (vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__amp = vlSelf->dproc__DOT__pulsereg__DOT__amp_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__freq = vlSelf->dproc__DOT__pulsereg__DOT__freq_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__phase = vlSelf->dproc__DOT__pulsereg__DOT__phase_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__env_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__env_word 
            = vlSelf->dproc__DOT__pulsereg__DOT__env_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__cfg = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    }
    vlSelf->command_d2[0U] = vlSelf->command_d[0U];
    vlSelf->command_d2[1U] = vlSelf->command_d[1U];
    vlSelf->command_d2[2U] = vlSelf->command_d[2U];
    vlSelf->command_d2[3U] = vlSelf->command_d[3U];
    vlSelf->nobusy = (1U & (~ ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.busy) 
                               | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.busy) 
                                  | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.busy)))));
    vlSelf->addr_command = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.instr_ptr;
    vlSelf->dproc__DOT__qclk_trig = ((vlSelf->dproc__DOT__myclk__DOT__out 
                                      == vlSelf->dproc__DOT__pulse_cmd_time) 
                                     & (IData)(vlSelf->dproc__DOT__qclk_trig_enable));
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe = vlSelf->dproc__DOT__cstrobe;
    vlSelf->dproc__DOT__dummy_resetsr = (1U & ((IData)(vlSelf->dproc__DOT__reset_sr) 
                                               >> 4U));
    vlSelf->dproc__DOT__reset_sr = ((0x1eU & ((IData)(vlSelf->dproc__DOT__reset_sr) 
                                              << 1U)) 
                                    | (IData)(vlSelf->dproc__DOT__reset_reg));
    vlSelf->dproc__DOT__myalu__DOT__out = vlSelf->dproc__DOT__myalu__DOT__local_out;
    vlSelf->dproc__DOT__myalu__DOT__in0_reg = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__in1_reg = vlSelf->dproc__DOT__alu_in1;
    if (vlSelf->dproc__DOT__instr_load_en) {
        vlSelf->dproc__DOT__local_cmd[0U] = vlSelf->dproc__DOT__cmd_buf_out[0U];
        vlSelf->dproc__DOT__local_cmd[1U] = vlSelf->dproc__DOT__cmd_buf_out[1U];
        vlSelf->dproc__DOT__local_cmd[2U] = vlSelf->dproc__DOT__cmd_buf_out[2U];
        vlSelf->dproc__DOT__local_cmd[3U] = vlSelf->dproc__DOT__cmd_buf_out[3U];
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__3__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cstrobe) 
           & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cfg))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__3__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cstrobe) 
           & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cfg))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__3__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cstrobe) 
           & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cfg))));
    if (__Vdlyvset__dproc__DOT__regs__DOT__data__v0) {
        vlSelf->dproc__DOT__regs__DOT__data[__Vdlyvdim0__dproc__DOT__regs__DOT__data__v0] 
            = __Vdlyvval__dproc__DOT__regs__DOT__data__v0;
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.amp 
        = vlSelf->dproc__DOT__pulsereg__DOT__amp;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.freq 
        = vlSelf->dproc__DOT__pulsereg__DOT__freq;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.phase 
        = vlSelf->dproc__DOT__pulsereg__DOT__phase;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.env_word 
        = vlSelf->dproc__DOT__pulsereg__DOT__env_word;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cfg 
        = vlSelf->dproc__DOT__pulsereg__DOT__cfg;
    vlSelf->command_d[0U] = vlSelf->command[0U];
    vlSelf->command_d[1U] = vlSelf->command[1U];
    vlSelf->command_d[2U] = vlSelf->command[2U];
    vlSelf->command_d[3U] = vlSelf->command[3U];
    vlSelf->nobusy_mon = vlSelf->nobusy;
    vlSelf->cmd_read_addr = vlSelf->addr_command;
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_in = vlSelf->dproc__DOT__qclk_trig;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.cstrobe 
        = vlSelf->dproc__DOT__pulsereg__DOT__cstrobe;
    vlSelf->dproc__DOT__cstrobe = ((vlSelf->dproc__DOT__myclk__DOT__out 
                                    == vlSelf->dproc__DOT__pulse_cmd_time) 
                                   & (IData)(vlSelf->dproc__DOT__c_strobe_enable));
    vlSelf->dproc__DOT__alu_out = vlSelf->dproc__DOT__myalu__DOT__out;
    vlSelf->dproc__DOT__myalu__DOT__id0 = vlSelf->dproc__DOT__myalu__DOT__in0_reg;
    vlSelf->dproc__DOT__myalu__DOT__id1 = vlSelf->dproc__DOT__myalu__DOT__in1_reg;
    vlSelf->dproc__DOT__myalu__DOT__add = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           + vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__myalu__DOT__sub = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           - vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__reset_reg = vlSelf->reset;
    vlSelf->dproc__DOT__ctu__DOT__instr_load_en = (
                                                   (0U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & (2U 
                                                      <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__qclk_reset = ((0U 
                                                 != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                & ((1U 
                                                    != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                         & ((4U 
                                                             != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))))))));
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en = ((0U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & (2U 
                                                     <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__done_gate = ((0U 
                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((6U 
                                                               != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                                 & (9U 
                                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)))))))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__.id 
        = (0xffU & (vlSelf->dproc__DOT__local_cmd[1U] 
                    >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__opcode = (0xffU & 
                                            (((0U == 0x18U)
                                               ? 0U
                                               : (vlSelf->dproc__DOT__local_cmd[
                                                  (((IData)(7U) 
                                                    + (IData)(0x78U)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x18U)))) 
                                             | (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x18U)));
    if ((0U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles);
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        if ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & (IData)((0x20000000U == (0x70000000U 
                                                 & vlSelf->dproc__DOT__local_cmd[3U]))));
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
        } else {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                             >> 0x1eU)) & ((0x20000000U 
                                            & vlSelf->dproc__DOT__local_cmd[3U])
                                            ? (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU))
                                            : (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU)))));
            if ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel 
                    = ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 1U : 0U) : 1U);
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
                    = ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 0U : 1U) : 0U);
            }
        }
    } else if ((2U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((3U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->dproc__DOT__local_cmd[3U])
                                        ? (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])))
                                        : (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U]))))));
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
            = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)
                ? 0U : ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                         ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x10000000U & 
                                      vlSelf->dproc__DOT__local_cmd[3U])
                                      ? 2U : 0U)) : 
                        ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                          ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                              ? 2U : 0U) : 0U)));
    } else {
        if ((4U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((6U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((7U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
        } else {
            if ((9U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            }
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        }
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    }
    vlSelf->dproc__DOT__reg_write_addr = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                  >> 0x10U));
    vlSelf->dproc__DOT__pulse_cmd_i[0U] = ((vlSelf->dproc__DOT__local_cmd[2U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[1U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[1U] = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[2U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[2U] = (0x7fffU 
                                           & (vlSelf->dproc__DOT__local_cmd[3U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in = (0xfU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 5U));
    vlSelf->dproc__DOT__ctu__DOT__pulse_reset = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0xb0000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable 
        = ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
           & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
              & ((vlSelf->dproc__DOT__local_cmd[3U] 
                  >> 0x1fU) & ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                ? (IData)((0U == (0x30000000U 
                                                  & vlSelf->dproc__DOT__local_cmd[3U])))
                                : (IData)((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x90000000U == (0xf0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__sync_enable = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0x70000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__fproc_enable = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & (IData)(
                                                               (0x40000000U 
                                                                == 
                                                                (0xe0000000U 
                                                                 & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__pulsereg__DOT__env_i_in = (0xffffffU 
                                                   & ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                       << 6U) 
                                                      | (vlSelf->dproc__DOT__local_cmd[2U] 
                                                         >> 0x1aU)));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in = 
        (0x1ffffU & (vlSelf->dproc__DOT__local_cmd[2U] 
                     >> 7U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in = 
        (0x1ffU & ((vlSelf->dproc__DOT__local_cmd[2U] 
                    << 4U) | (vlSelf->dproc__DOT__local_cmd[1U] 
                              >> 0x1cU)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in = (0xffffU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 0xaU));
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[3U] 
                 >> 0x12U));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 0x18U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[1U] 
                 >> 0x1aU));
    vlSelf->dproc__DOT__ctu__DOT__reg_write_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((~ 
                                                               (vlSelf->dproc__DOT__local_cmd[3U] 
                                                                >> 0x1fU)) 
                                                              & ((0x40000000U 
                                                                  & vlSelf->dproc__DOT__local_cmd[3U])
                                                                  ? (IData)(
                                                                            (0U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))
                                                                  : (IData)(
                                                                            (0x10000000U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))))))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_load_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & (IData)(
                                                                     (0x60000000U 
                                                                      == 
                                                                      (0xf0000000U 
                                                                       & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__alu_cmd_data_in0 = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                             << 8U) 
                                            | (vlSelf->dproc__DOT__local_cmd[2U] 
                                               >> 0x18U));
    vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel = (1U 
                                                 & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                    >> 0x1bU));
    vlSelf->dproc__DOT__ctu__DOT__alu_opcode = (7U 
                                                & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x18U));
    vlSelf->dproc__DOT__instr_ptr_load_val = (0xffffU 
                                              & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                 >> 4U));
    vlSelf->dproc__DOT__reg_addr_in1 = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__write_pulse_en = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x80000000U == (0xe0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__reg_addr_in0 = (0xfU & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__pulse_cmd_time = ((vlSelf->dproc__DOT__local_cmd[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->dproc__DOT__local_cmd[0U] 
                                             >> 5U));
    vlSelf->dproc__DOT__myclk__DOT__out = vlSelf->dproc__DOT__myclk__DOT__value;
    vlSelf->dproc__DOT__regs__DOT__write_data = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myclk__DOT__in_val = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_in = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myalu__DOT__eq = (0U == vlSelf->dproc__DOT__myalu__DOT__sub);
    vlSelf->dproc__DOT__myalu__DOT__sub_oflow = (1U 
                                                 & (((~ 
                                                      (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                       >> 0x1fU)) 
                                                     & ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                         & vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                        >> 0x1fU)) 
                                                    | ((~ 
                                                        ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                          | vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                         >> 0x1fU)) 
                                                       & (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                          >> 0x1fU))));
    vlSelf->dproc__DOT__instr_load_en = vlSelf->dproc__DOT__ctu__DOT__instr_load_en;
    vlSelf->dproc__DOT__qclk_reset_ctrl = vlSelf->dproc__DOT__ctu__DOT__qclk_reset;
    vlSelf->dproc__DOT__qclk_reset = ((IData)(vlSelf->dproc__DOT__ctu__DOT__qclk_reset) 
                                      | (0U != (0xfU 
                                                & (IData)(vlSelf->dproc__DOT__reset_sr))));
    vlSelf->dproc__DOT__inst_ptr_enable = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en;
    vlSelf->stbend = vlSelf->dproc__DOT__ctu__DOT__done_gate;
    vlSelf->dproc__DOT__regs__DOT__write_addr = vlSelf->dproc__DOT__reg_write_addr;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[0U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[1U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[2U];
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_in = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__pulseout.reset 
        = vlSelf->dproc__DOT__ctu__DOT__pulse_reset;
    vlSelf->dproc__DOT__qclk_trig_enable = vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable;
    vlSelf->dproc__DOT__c_strobe_enable = vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__sync.enable 
        = vlSelf->dproc__DOT__ctu__DOT__sync_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__.enable 
        = vlSelf->dproc__DOT__ctu__DOT__fproc_enable;
    vlSelf->dproc__DOT__reg_write_en = vlSelf->dproc__DOT__ctu__DOT__reg_write_en;
    vlSelf->dproc__DOT__qclk_load_en = vlSelf->dproc__DOT__ctu__DOT__qclk_load_en;
    vlSelf->dproc__DOT__alu_in0_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel;
    vlSelf->dproc__DOT__alu_in1_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel;
    vlSelf->dproc__DOT__myalu__DOT__ctrl = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__alu_opcode = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__instr__DOT__load_val = vlSelf->dproc__DOT__instr_ptr_load_val;
    vlSelf->dproc__DOT__regs__DOT__read_addr_1 = vlSelf->dproc__DOT__reg_addr_in1;
    vlSelf->dproc__DOT__regs__DOT__reg_1_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in1];
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x13U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 0x19U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 6U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 0x1bU) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 9U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__write_pulse_en = vlSelf->dproc__DOT__ctu__DOT__write_pulse_en;
    vlSelf->dproc__DOT__inst_ptr_load_en_sel = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSelf->dproc__DOT__inst_ptr_load_en = (1U & ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en))
                                                   ? vlSelf->dproc__DOT__myalu__DOT__out
                                                   : (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en)));
    vlSelf->dproc__DOT__regs__DOT__read_addr_0 = vlSelf->dproc__DOT__reg_addr_in0;
    vlSelf->dproc__DOT__regs__DOT__reg_0_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in0];
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe_in = vlSelf->dproc__DOT__cstrobe;
    vlSelf->dproc__DOT__qclk_out = vlSelf->dproc__DOT__myclk__DOT__out;
    vlSelf->dproc__DOT__myalu__DOT__le = ((vlSelf->dproc__DOT__myalu__DOT__sub 
                                           >> 0x1fU) 
                                          ^ (IData)(vlSelf->dproc__DOT__myalu__DOT__sub_oflow));
    vlSelf->dproc__DOT__instr__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__myclk__DOT__rst = vlSelf->dproc__DOT__qclk_reset;
    vlSelf->dproc__DOT__instr__DOT__enable = vlSelf->dproc__DOT__inst_ptr_enable;
    vlSelf->procdone = vlSelf->stbend;
    vlSelf->dproc__DOT__done_gate = vlSelf->stbend;
    vlSelf->procdone_mon = vlSelf->stbend;
    vlSelf->dproc__DOT__regs__DOT__write_enable = vlSelf->dproc__DOT__reg_write_en;
    vlSelf->dproc__DOT__myclk__DOT__load_enable = vlSelf->dproc__DOT__qclk_load_en;
    vlSelf->dproc__DOT__reg_file_out1 = vlSelf->dproc__DOT__regs__DOT__reg_1_out;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlSelf->dproc__DOT__write_pulse_en;
    if (vlSelf->dproc__DOT__inst_ptr_load_en) {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 1U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = vlSelf->dproc__DOT__instr_ptr_load_val;
    } else {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 0U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en)
                ? (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val));
    }
    vlSelf->dproc__DOT__pulsereg__DOT__reg_in = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__reg_file_out0 = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__pulsereg__DOT__env_in = (0xffffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : vlSelf->dproc__DOT__pulsereg__DOT__env_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_in = (0x1ffffU 
                                                   & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel)
                                                       ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                       : vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_in = (0x1ffU 
                                                  & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel)
                                                      ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                      : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_in = (0xffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlSelf->dproc__DOT__alu_in0 = ((IData)(vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel)
                                    ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                    : vlSelf->dproc__DOT__alu_cmd_data_in0);
    vlSelf->dproc__DOT__myalu__DOT__ge = (1U & (~ (IData)(vlSelf->dproc__DOT__myalu__DOT__le)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.instr_ptr 
        = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__ptr_out = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__cur_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__myalu__DOT__in0 = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__local_out = ((4U 
                                                  & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? 0U
                                                    : vlSelf->dproc__DOT__myalu__DOT__id1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__ge)
                                                    : (IData)(vlSelf->dproc__DOT__myalu__DOT__le)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__eq)
                                                    : vlSelf->dproc__DOT__myalu__DOT__sub)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? vlSelf->dproc__DOT__myalu__DOT__add
                                                    : vlSelf->dproc__DOT__myalu__DOT__id0)));
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__3(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__3\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.mem_bus[0U][0U] 
        = vlSelf->command[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.mem_bus[0U][1U] 
        = vlSelf->command[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.mem_bus[0U][2U] 
        = vlSelf->command[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__memif.mem_bus[0U][3U] 
        = vlSelf->command[3U];
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__0\n"); );
    // Body
    vlSelf->dproc__DOT__ctu__DOT__next_state = ((0U 
                                                 == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                 ? 
                                                ((2U 
                                                  > vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles)
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                  ? 
                                                 ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x1fU)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 1U
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                                       ? 0U
                                                       : 1U)))
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 0U
                                                      : 9U)
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 
                                                     ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                                       ? 0U
                                                       : 1U)
                                                      : 0U)))
                                                   : 
                                                  ((0x40000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 6U
                                                      : 2U)
                                                     : 4U)
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 2U
                                                      : 0U)
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 2U
                                                      : 9U))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__.ready)
                                                      ? 2U
                                                      : 4U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__3__KET____DOT__proc_core__sync.ready)
                                                       ? 7U
                                                       : 6U)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                       ? 0U
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                        ? 9U
                                                        : 0U))))))));
    vlSelf->dproc__DOT__alu_in1 = ((2U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                    ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__3__KET__.data
                                    : ((1U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                        ? vlSelf->dproc__DOT__regs__DOT__reg_1_out
                                        : vlSelf->dproc__DOT__myclk__DOT__out));
    vlSelf->dproc__DOT__myalu__DOT__in1 = vlSelf->dproc__DOT__alu_in1;
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__.id 
        = (0xffU & (vlSelf->dproc__DOT__local_cmd[1U] 
                    >> 0x14U));
    vlSelf->dproc__DOT__instr__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__opcode = (0xffU & 
                                            (((0U == 0x18U)
                                               ? 0U
                                               : (vlSelf->dproc__DOT__local_cmd[
                                                  (((IData)(7U) 
                                                    + (IData)(0x78U)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x18U)))) 
                                             | (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x18U)));
    vlSelf->dproc__DOT__ctu__DOT__fproc_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__.ready;
    vlSelf->dproc__DOT__ctu__DOT__sync_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__sync.ready;
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_in = vlSelf->dproc__DOT__qclk_trig;
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe_in = vlSelf->dproc__DOT__cstrobe;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.env_word 
        = vlSelf->dproc__DOT__pulsereg__DOT__env_word;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.phase 
        = vlSelf->dproc__DOT__pulsereg__DOT__phase;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.freq 
        = vlSelf->dproc__DOT__pulsereg__DOT__freq;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.amp 
        = vlSelf->dproc__DOT__pulsereg__DOT__amp;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cfg 
        = vlSelf->dproc__DOT__pulsereg__DOT__cfg;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cstrobe 
        = vlSelf->dproc__DOT__pulsereg__DOT__cstrobe;
    vlSelf->dproc__DOT__pulse_cmd_time = ((vlSelf->dproc__DOT__local_cmd[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->dproc__DOT__local_cmd[0U] 
                                             >> 5U));
    if ((0U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles);
        vlSelf->dproc__DOT__ctu__DOT__next_state = 
            ((2U > vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles)
              ? 0U : 1U);
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        if ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & (IData)((0x20000000U == (0x70000000U 
                                                 & vlSelf->dproc__DOT__local_cmd[3U]))));
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                    ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? 1U : ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                 ? 1U : ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                          ? 0U : 1U)))
                    : ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 0U : 9U) : ((0x10000000U 
                                           & vlSelf->dproc__DOT__local_cmd[3U])
                                           ? ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                               ? 0U
                                               : 1U)
                                           : 0U)));
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
        } else {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                             >> 0x1eU)) & ((0x20000000U 
                                            & vlSelf->dproc__DOT__local_cmd[3U])
                                            ? (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU))
                                            : (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU)))));
            if ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                if ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                    if ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 6U;
                        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                    } else {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 2U;
                        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
                    }
                } else {
                    vlSelf->dproc__DOT__ctu__DOT__next_state = 4U;
                    vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                }
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                if ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                    if ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 2U;
                        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                    } else {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
                        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 1U;
                    }
                } else {
                    vlSelf->dproc__DOT__ctu__DOT__next_state 
                        = ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 2U : 9U);
                    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                }
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
        vlSelf->dproc__DOT__ctu__DOT__next_state = 3U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((3U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->dproc__DOT__local_cmd[3U])
                                        ? (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])))
                                        : (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U]))))));
        vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
            = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)
                ? 0U : ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                         ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x10000000U & 
                                      vlSelf->dproc__DOT__local_cmd[3U])
                                      ? 2U : 0U)) : 
                        ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                          ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                              ? 2U : 0U) : 0U)));
    } else {
        if ((4U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__.ready)
                    ? 2U : 4U);
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((6U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__sync.ready)
                    ? 7U : 6U);
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((7U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
        } else {
            if ((9U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__next_state = 9U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
            }
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        }
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    }
    vlSelf->dproc__DOT__reg_write_addr = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                  >> 0x10U));
    vlSelf->dproc__DOT__pulse_cmd_i[0U] = ((vlSelf->dproc__DOT__local_cmd[2U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[1U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[1U] = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[2U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[2U] = (0x7fffU 
                                           & (vlSelf->dproc__DOT__local_cmd[3U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in = (0xfU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 5U));
    vlSelf->dproc__DOT__ctu__DOT__pulse_reset = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0xb0000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable 
        = ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
           & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
              & ((vlSelf->dproc__DOT__local_cmd[3U] 
                  >> 0x1fU) & ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                ? (IData)((0U == (0x30000000U 
                                                  & vlSelf->dproc__DOT__local_cmd[3U])))
                                : (IData)((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x90000000U == (0xf0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__instr_load_en = (
                                                   (0U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & (2U 
                                                      <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__sync_enable = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0x70000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__fproc_enable = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & (IData)(
                                                               (0x40000000U 
                                                                == 
                                                                (0xe0000000U 
                                                                 & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__pulsereg__DOT__env_i_in = (0xffffffU 
                                                   & ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                       << 6U) 
                                                      | (vlSelf->dproc__DOT__local_cmd[2U] 
                                                         >> 0x1aU)));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in = 
        (0x1ffffU & (vlSelf->dproc__DOT__local_cmd[2U] 
                     >> 7U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in = 
        (0x1ffU & ((vlSelf->dproc__DOT__local_cmd[2U] 
                    << 4U) | (vlSelf->dproc__DOT__local_cmd[1U] 
                              >> 0x1cU)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in = (0xffffU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 0xaU));
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[3U] 
                 >> 0x12U));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 0x18U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[1U] 
                 >> 0x1aU));
    vlSelf->dproc__DOT__ctu__DOT__reg_write_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((~ 
                                                               (vlSelf->dproc__DOT__local_cmd[3U] 
                                                                >> 0x1fU)) 
                                                              & ((0x40000000U 
                                                                  & vlSelf->dproc__DOT__local_cmd[3U])
                                                                  ? (IData)(
                                                                            (0U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))
                                                                  : (IData)(
                                                                            (0x10000000U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))))))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_load_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & (IData)(
                                                                     (0x60000000U 
                                                                      == 
                                                                      (0xf0000000U 
                                                                       & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__alu_cmd_data_in0 = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                             << 8U) 
                                            | (vlSelf->dproc__DOT__local_cmd[2U] 
                                               >> 0x18U));
    vlSelf->dproc__DOT__alu_out = vlSelf->dproc__DOT__myalu__DOT__out;
    vlSelf->dproc__DOT__ctu__DOT__qclk_reset = ((0U 
                                                 != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                & ((1U 
                                                    != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                         & ((4U 
                                                             != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))))))));
    vlSelf->nobusy_mon = vlSelf->nobusy;
    vlSelf->dproc__DOT__myalu__DOT__id0 = vlSelf->dproc__DOT__myalu__DOT__in0_reg;
    vlSelf->dproc__DOT__myalu__DOT__id1 = vlSelf->dproc__DOT__myalu__DOT__in1_reg;
    vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel = (1U 
                                                 & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                    >> 0x1bU));
    vlSelf->dproc__DOT__myalu__DOT__add = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           + vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__myclk__DOT__out = vlSelf->dproc__DOT__myclk__DOT__value;
    vlSelf->dproc__DOT__ctu__DOT__alu_opcode = (7U 
                                                & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x18U));
    vlSelf->cmd_read_addr = vlSelf->addr_command;
    vlSelf->dproc__DOT__instr_ptr_load_val = (0xffffU 
                                              & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                 >> 4U));
    vlSelf->dproc__DOT__reg_addr_in1 = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en = ((0U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & (2U 
                                                     <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__write_pulse_en = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x80000000U == (0xe0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__done_gate = ((0U 
                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((6U 
                                                               != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                                 & (9U 
                                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)))))))));
    vlSelf->dproc__DOT__reg_addr_in0 = (0xfU & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__myalu__DOT__sub = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           - vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__reset = vlSelf->reset;
    vlSelf->dproc__DOT__clk = vlSelf->clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.mem_bus[0U][0U] 
        = vlSelf->command[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.mem_bus[0U][1U] 
        = vlSelf->command[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.mem_bus[0U][2U] 
        = vlSelf->command[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.mem_bus[0U][3U] 
        = vlSelf->command[3U];
    vlSelf->dproc__DOT__regs__DOT__write_addr = vlSelf->dproc__DOT__reg_write_addr;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[0U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[1U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[2U];
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_in = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.reset 
        = vlSelf->dproc__DOT__ctu__DOT__pulse_reset;
    vlSelf->dproc__DOT__qclk_trig_enable = vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable;
    vlSelf->dproc__DOT__c_strobe_enable = vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSelf->dproc__DOT__instr_load_en = vlSelf->dproc__DOT__ctu__DOT__instr_load_en;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__sync.enable 
        = vlSelf->dproc__DOT__ctu__DOT__sync_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__.enable 
        = vlSelf->dproc__DOT__ctu__DOT__fproc_enable;
    vlSelf->dproc__DOT__reg_write_en = vlSelf->dproc__DOT__ctu__DOT__reg_write_en;
    vlSelf->dproc__DOT__qclk_load_en = vlSelf->dproc__DOT__ctu__DOT__qclk_load_en;
    vlSelf->dproc__DOT__regs__DOT__write_data = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myclk__DOT__in_val = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_in = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_reset_ctrl = vlSelf->dproc__DOT__ctu__DOT__qclk_reset;
    vlSelf->dproc__DOT__qclk_reset = ((IData)(vlSelf->dproc__DOT__ctu__DOT__qclk_reset) 
                                      | (0U != (0xfU 
                                                & (IData)(vlSelf->dproc__DOT__reset_sr))));
    vlSelf->dproc__DOT__alu_in0_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel;
    vlSelf->dproc__DOT__qclk_out = vlSelf->dproc__DOT__myclk__DOT__out;
    vlSelf->dproc__DOT__alu_in1_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel;
    vlSelf->dproc__DOT__myalu__DOT__ctrl = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__alu_opcode = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__instr__DOT__load_val = vlSelf->dproc__DOT__instr_ptr_load_val;
    vlSelf->dproc__DOT__regs__DOT__read_addr_1 = vlSelf->dproc__DOT__reg_addr_in1;
    vlSelf->dproc__DOT__regs__DOT__reg_1_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in1];
    vlSelf->dproc__DOT__inst_ptr_enable = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en;
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x13U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 0x19U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 6U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 0x1bU) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 9U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__write_pulse_en = vlSelf->dproc__DOT__ctu__DOT__write_pulse_en;
    vlSelf->dproc__DOT__inst_ptr_load_en_sel = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSelf->dproc__DOT__inst_ptr_load_en = (1U & ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en))
                                                   ? vlSelf->dproc__DOT__myalu__DOT__out
                                                   : (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en)));
    vlSelf->stbend = vlSelf->dproc__DOT__ctu__DOT__done_gate;
    vlSelf->dproc__DOT__regs__DOT__read_addr_0 = vlSelf->dproc__DOT__reg_addr_in0;
    vlSelf->dproc__DOT__regs__DOT__reg_0_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in0];
    vlSelf->dproc__DOT__myalu__DOT__eq = (0U == vlSelf->dproc__DOT__myalu__DOT__sub);
    vlSelf->dproc__DOT__myalu__DOT__sub_oflow = (1U 
                                                 & (((~ 
                                                      (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                       >> 0x1fU)) 
                                                     & ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                         & vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                        >> 0x1fU)) 
                                                    | ((~ 
                                                        ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                          | vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                         >> 0x1fU)) 
                                                       & (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                          >> 0x1fU))));
    vlSelf->dproc__DOT__instr__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__regs__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__ctu__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__myalu__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__myclk__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__pulsereg__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__regs__DOT__write_enable = vlSelf->dproc__DOT__reg_write_en;
    vlSelf->dproc__DOT__myclk__DOT__load_enable = vlSelf->dproc__DOT__qclk_load_en;
    vlSelf->dproc__DOT__myclk__DOT__rst = vlSelf->dproc__DOT__qclk_reset;
    vlSelf->dproc__DOT__reg_file_out1 = vlSelf->dproc__DOT__regs__DOT__reg_1_out;
    vlSelf->dproc__DOT__alu_in1 = ((2U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                    ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__.data
                                    : ((1U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                        ? vlSelf->dproc__DOT__regs__DOT__reg_1_out
                                        : vlSelf->dproc__DOT__myclk__DOT__out));
    vlSelf->dproc__DOT__instr__DOT__enable = vlSelf->dproc__DOT__inst_ptr_enable;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlSelf->dproc__DOT__write_pulse_en;
    if (vlSelf->dproc__DOT__inst_ptr_load_en) {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 1U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = vlSelf->dproc__DOT__instr_ptr_load_val;
    } else {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 0U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en)
                ? (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val));
    }
    vlSelf->procdone = vlSelf->stbend;
    vlSelf->dproc__DOT__done_gate = vlSelf->stbend;
    vlSelf->procdone_mon = vlSelf->stbend;
    vlSelf->dproc__DOT__pulsereg__DOT__reg_in = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__reg_file_out0 = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__pulsereg__DOT__env_in = (0xffffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : vlSelf->dproc__DOT__pulsereg__DOT__env_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_in = (0x1ffffU 
                                                   & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel)
                                                       ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                       : vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_in = (0x1ffU 
                                                  & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel)
                                                      ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                      : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_in = (0xffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlSelf->dproc__DOT__alu_in0 = ((IData)(vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel)
                                    ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                    : vlSelf->dproc__DOT__alu_cmd_data_in0);
    vlSelf->dproc__DOT__myalu__DOT__le = ((vlSelf->dproc__DOT__myalu__DOT__sub 
                                           >> 0x1fU) 
                                          ^ (IData)(vlSelf->dproc__DOT__myalu__DOT__sub_oflow));
    vlSelf->dproc__DOT__myalu__DOT__in1 = vlSelf->dproc__DOT__alu_in1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.instr_ptr 
        = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__ptr_out = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__cur_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__myalu__DOT__in0 = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__ge = (1U & (~ (IData)(vlSelf->dproc__DOT__myalu__DOT__le)));
    vlSelf->dproc__DOT__myalu__DOT__local_out = ((4U 
                                                  & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? 0U
                                                    : vlSelf->dproc__DOT__myalu__DOT__id1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__ge)
                                                    : (IData)(vlSelf->dproc__DOT__myalu__DOT__le)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__eq)
                                                    : vlSelf->dproc__DOT__myalu__DOT__sub)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? vlSelf->dproc__DOT__myalu__DOT__add
                                                    : vlSelf->dproc__DOT__myalu__DOT__id0)));
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__1(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__1\n"); );
    // Body
    vlSelf->dproc__DOT__cmd_buf_out[0U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.cmd_read[0U];
    vlSelf->dproc__DOT__cmd_buf_out[1U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.cmd_read[1U];
    vlSelf->dproc__DOT__cmd_buf_out[2U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.cmd_read[2U];
    vlSelf->dproc__DOT__cmd_buf_out[3U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.cmd_read[3U];
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__0\n"); );
    // Body
    vlSelf->dproc__DOT__ctu__DOT__fproc_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__.ready;
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__1(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__1\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvval__dproc__DOT__regs__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 0;
    // Body
    __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 0U;
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cstrobe) 
         & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.envstart 
            = (0xfffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.freq;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.envlength 
            = (0xfffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.env_word 
                         >> 0xcU));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.envstart 
            = (0xfffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.envlength 
            = (0xfffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.env_word 
                         >> 0xcU));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.freq;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.envstart 
            = (0xffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.envlength 
            = (0xffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.env_word 
                        >> 0xcU));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.freq;
    }
    vlSelf->dproc__DOT__myclk__DOT__value = ((IData)(vlSelf->dproc__DOT__qclk_reset)
                                              ? 0U : 
                                             ((IData)(vlSelf->dproc__DOT__qclk_load_en)
                                               ? ((IData)(3U) 
                                                  + vlSelf->dproc__DOT__alu_out)
                                               : ((IData)(1U) 
                                                  + vlSelf->dproc__DOT__myclk__DOT__value)));
    if (vlSelf->dproc__DOT__reset_reg) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles = 0U;
        vlSelf->dproc__DOT__instr__DOT__prev_val = 0U;
        vlSelf->dproc__DOT__instr__DOT__prev_val_inc = 1U;
        vlSelf->dproc__DOT__ctu__DOT__state = 0U;
    } else {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst)
                ? 0U : ((IData)(1U) + vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
        vlSelf->dproc__DOT__instr__DOT__prev_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
        vlSelf->dproc__DOT__instr__DOT__prev_val_inc 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->dproc__DOT____Vcellout__instr__ptr_out)));
        vlSelf->dproc__DOT__ctu__DOT__state = vlSelf->dproc__DOT__ctu__DOT__next_state;
    }
    if (vlSelf->dproc__DOT__reg_write_en) {
        __Vdlyvval__dproc__DOT__regs__DOT__data__v0 
            = vlSelf->dproc__DOT__alu_out;
        __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 1U;
        __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0 
            = vlSelf->dproc__DOT__reg_write_addr;
    }
    vlSelf->noop = (1U & (~ (IData)((0U != (((vlSelf->command[0U] 
                                              | vlSelf->command[1U]) 
                                             | vlSelf->command[2U]) 
                                            | vlSelf->command[3U])))));
    if (vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__amp = vlSelf->dproc__DOT__pulsereg__DOT__amp_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__freq = vlSelf->dproc__DOT__pulsereg__DOT__freq_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__phase = vlSelf->dproc__DOT__pulsereg__DOT__phase_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__env_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__env_word 
            = vlSelf->dproc__DOT__pulsereg__DOT__env_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__cfg = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    }
    vlSelf->command_d2[0U] = vlSelf->command_d[0U];
    vlSelf->command_d2[1U] = vlSelf->command_d[1U];
    vlSelf->command_d2[2U] = vlSelf->command_d[2U];
    vlSelf->command_d2[3U] = vlSelf->command_d[3U];
    vlSelf->nobusy = (1U & (~ ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.busy) 
                               | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.busy) 
                                  | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.busy)))));
    vlSelf->addr_command = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.instr_ptr;
    vlSelf->dproc__DOT__qclk_trig = ((vlSelf->dproc__DOT__myclk__DOT__out 
                                      == vlSelf->dproc__DOT__pulse_cmd_time) 
                                     & (IData)(vlSelf->dproc__DOT__qclk_trig_enable));
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe = vlSelf->dproc__DOT__cstrobe;
    vlSelf->dproc__DOT__dummy_resetsr = (1U & ((IData)(vlSelf->dproc__DOT__reset_sr) 
                                               >> 4U));
    vlSelf->dproc__DOT__reset_sr = ((0x1eU & ((IData)(vlSelf->dproc__DOT__reset_sr) 
                                              << 1U)) 
                                    | (IData)(vlSelf->dproc__DOT__reset_reg));
    vlSelf->dproc__DOT__myalu__DOT__out = vlSelf->dproc__DOT__myalu__DOT__local_out;
    vlSelf->dproc__DOT__myalu__DOT__in0_reg = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__in1_reg = vlSelf->dproc__DOT__alu_in1;
    if (vlSelf->dproc__DOT__instr_load_en) {
        vlSelf->dproc__DOT__local_cmd[0U] = vlSelf->dproc__DOT__cmd_buf_out[0U];
        vlSelf->dproc__DOT__local_cmd[1U] = vlSelf->dproc__DOT__cmd_buf_out[1U];
        vlSelf->dproc__DOT__local_cmd[2U] = vlSelf->dproc__DOT__cmd_buf_out[2U];
        vlSelf->dproc__DOT__local_cmd[3U] = vlSelf->dproc__DOT__cmd_buf_out[3U];
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__4__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cstrobe) 
           & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cfg))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__4__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cstrobe) 
           & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cfg))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__4__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cstrobe) 
           & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cfg))));
    if (__Vdlyvset__dproc__DOT__regs__DOT__data__v0) {
        vlSelf->dproc__DOT__regs__DOT__data[__Vdlyvdim0__dproc__DOT__regs__DOT__data__v0] 
            = __Vdlyvval__dproc__DOT__regs__DOT__data__v0;
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.amp 
        = vlSelf->dproc__DOT__pulsereg__DOT__amp;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.freq 
        = vlSelf->dproc__DOT__pulsereg__DOT__freq;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.phase 
        = vlSelf->dproc__DOT__pulsereg__DOT__phase;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.env_word 
        = vlSelf->dproc__DOT__pulsereg__DOT__env_word;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cfg 
        = vlSelf->dproc__DOT__pulsereg__DOT__cfg;
    vlSelf->command_d[0U] = vlSelf->command[0U];
    vlSelf->command_d[1U] = vlSelf->command[1U];
    vlSelf->command_d[2U] = vlSelf->command[2U];
    vlSelf->command_d[3U] = vlSelf->command[3U];
    vlSelf->nobusy_mon = vlSelf->nobusy;
    vlSelf->cmd_read_addr = vlSelf->addr_command;
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_in = vlSelf->dproc__DOT__qclk_trig;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.cstrobe 
        = vlSelf->dproc__DOT__pulsereg__DOT__cstrobe;
    vlSelf->dproc__DOT__cstrobe = ((vlSelf->dproc__DOT__myclk__DOT__out 
                                    == vlSelf->dproc__DOT__pulse_cmd_time) 
                                   & (IData)(vlSelf->dproc__DOT__c_strobe_enable));
    vlSelf->dproc__DOT__alu_out = vlSelf->dproc__DOT__myalu__DOT__out;
    vlSelf->dproc__DOT__myalu__DOT__id0 = vlSelf->dproc__DOT__myalu__DOT__in0_reg;
    vlSelf->dproc__DOT__myalu__DOT__id1 = vlSelf->dproc__DOT__myalu__DOT__in1_reg;
    vlSelf->dproc__DOT__myalu__DOT__add = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           + vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__myalu__DOT__sub = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           - vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__reset_reg = vlSelf->reset;
    vlSelf->dproc__DOT__ctu__DOT__instr_load_en = (
                                                   (0U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & (2U 
                                                      <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__qclk_reset = ((0U 
                                                 != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                & ((1U 
                                                    != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                         & ((4U 
                                                             != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))))))));
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en = ((0U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & (2U 
                                                     <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__done_gate = ((0U 
                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((6U 
                                                               != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                                 & (9U 
                                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)))))))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__.id 
        = (0xffU & (vlSelf->dproc__DOT__local_cmd[1U] 
                    >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__opcode = (0xffU & 
                                            (((0U == 0x18U)
                                               ? 0U
                                               : (vlSelf->dproc__DOT__local_cmd[
                                                  (((IData)(7U) 
                                                    + (IData)(0x78U)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x18U)))) 
                                             | (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x18U)));
    if ((0U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles);
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        if ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & (IData)((0x20000000U == (0x70000000U 
                                                 & vlSelf->dproc__DOT__local_cmd[3U]))));
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
        } else {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                             >> 0x1eU)) & ((0x20000000U 
                                            & vlSelf->dproc__DOT__local_cmd[3U])
                                            ? (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU))
                                            : (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU)))));
            if ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel 
                    = ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 1U : 0U) : 1U);
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
                    = ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 0U : 1U) : 0U);
            }
        }
    } else if ((2U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((3U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->dproc__DOT__local_cmd[3U])
                                        ? (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])))
                                        : (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U]))))));
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
            = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)
                ? 0U : ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                         ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x10000000U & 
                                      vlSelf->dproc__DOT__local_cmd[3U])
                                      ? 2U : 0U)) : 
                        ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                          ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                              ? 2U : 0U) : 0U)));
    } else {
        if ((4U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((6U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((7U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
        } else {
            if ((9U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            }
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        }
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    }
    vlSelf->dproc__DOT__reg_write_addr = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                  >> 0x10U));
    vlSelf->dproc__DOT__pulse_cmd_i[0U] = ((vlSelf->dproc__DOT__local_cmd[2U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[1U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[1U] = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[2U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[2U] = (0x7fffU 
                                           & (vlSelf->dproc__DOT__local_cmd[3U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in = (0xfU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 5U));
    vlSelf->dproc__DOT__ctu__DOT__pulse_reset = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0xb0000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable 
        = ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
           & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
              & ((vlSelf->dproc__DOT__local_cmd[3U] 
                  >> 0x1fU) & ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                ? (IData)((0U == (0x30000000U 
                                                  & vlSelf->dproc__DOT__local_cmd[3U])))
                                : (IData)((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x90000000U == (0xf0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__sync_enable = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0x70000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__fproc_enable = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & (IData)(
                                                               (0x40000000U 
                                                                == 
                                                                (0xe0000000U 
                                                                 & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__pulsereg__DOT__env_i_in = (0xffffffU 
                                                   & ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                       << 6U) 
                                                      | (vlSelf->dproc__DOT__local_cmd[2U] 
                                                         >> 0x1aU)));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in = 
        (0x1ffffU & (vlSelf->dproc__DOT__local_cmd[2U] 
                     >> 7U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in = 
        (0x1ffU & ((vlSelf->dproc__DOT__local_cmd[2U] 
                    << 4U) | (vlSelf->dproc__DOT__local_cmd[1U] 
                              >> 0x1cU)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in = (0xffffU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 0xaU));
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[3U] 
                 >> 0x12U));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 0x18U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[1U] 
                 >> 0x1aU));
    vlSelf->dproc__DOT__ctu__DOT__reg_write_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((~ 
                                                               (vlSelf->dproc__DOT__local_cmd[3U] 
                                                                >> 0x1fU)) 
                                                              & ((0x40000000U 
                                                                  & vlSelf->dproc__DOT__local_cmd[3U])
                                                                  ? (IData)(
                                                                            (0U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))
                                                                  : (IData)(
                                                                            (0x10000000U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))))))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_load_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & (IData)(
                                                                     (0x60000000U 
                                                                      == 
                                                                      (0xf0000000U 
                                                                       & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__alu_cmd_data_in0 = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                             << 8U) 
                                            | (vlSelf->dproc__DOT__local_cmd[2U] 
                                               >> 0x18U));
    vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel = (1U 
                                                 & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                    >> 0x1bU));
    vlSelf->dproc__DOT__ctu__DOT__alu_opcode = (7U 
                                                & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x18U));
    vlSelf->dproc__DOT__instr_ptr_load_val = (0xffffU 
                                              & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                 >> 4U));
    vlSelf->dproc__DOT__reg_addr_in1 = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__write_pulse_en = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x80000000U == (0xe0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__reg_addr_in0 = (0xfU & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__pulse_cmd_time = ((vlSelf->dproc__DOT__local_cmd[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->dproc__DOT__local_cmd[0U] 
                                             >> 5U));
    vlSelf->dproc__DOT__myclk__DOT__out = vlSelf->dproc__DOT__myclk__DOT__value;
    vlSelf->dproc__DOT__regs__DOT__write_data = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myclk__DOT__in_val = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_in = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myalu__DOT__eq = (0U == vlSelf->dproc__DOT__myalu__DOT__sub);
    vlSelf->dproc__DOT__myalu__DOT__sub_oflow = (1U 
                                                 & (((~ 
                                                      (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                       >> 0x1fU)) 
                                                     & ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                         & vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                        >> 0x1fU)) 
                                                    | ((~ 
                                                        ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                          | vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                         >> 0x1fU)) 
                                                       & (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                          >> 0x1fU))));
    vlSelf->dproc__DOT__instr_load_en = vlSelf->dproc__DOT__ctu__DOT__instr_load_en;
    vlSelf->dproc__DOT__qclk_reset_ctrl = vlSelf->dproc__DOT__ctu__DOT__qclk_reset;
    vlSelf->dproc__DOT__qclk_reset = ((IData)(vlSelf->dproc__DOT__ctu__DOT__qclk_reset) 
                                      | (0U != (0xfU 
                                                & (IData)(vlSelf->dproc__DOT__reset_sr))));
    vlSelf->dproc__DOT__inst_ptr_enable = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en;
    vlSelf->stbend = vlSelf->dproc__DOT__ctu__DOT__done_gate;
    vlSelf->dproc__DOT__regs__DOT__write_addr = vlSelf->dproc__DOT__reg_write_addr;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[0U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[1U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[2U];
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_in = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__pulseout.reset 
        = vlSelf->dproc__DOT__ctu__DOT__pulse_reset;
    vlSelf->dproc__DOT__qclk_trig_enable = vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable;
    vlSelf->dproc__DOT__c_strobe_enable = vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__sync.enable 
        = vlSelf->dproc__DOT__ctu__DOT__sync_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__.enable 
        = vlSelf->dproc__DOT__ctu__DOT__fproc_enable;
    vlSelf->dproc__DOT__reg_write_en = vlSelf->dproc__DOT__ctu__DOT__reg_write_en;
    vlSelf->dproc__DOT__qclk_load_en = vlSelf->dproc__DOT__ctu__DOT__qclk_load_en;
    vlSelf->dproc__DOT__alu_in0_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel;
    vlSelf->dproc__DOT__alu_in1_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel;
    vlSelf->dproc__DOT__myalu__DOT__ctrl = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__alu_opcode = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__instr__DOT__load_val = vlSelf->dproc__DOT__instr_ptr_load_val;
    vlSelf->dproc__DOT__regs__DOT__read_addr_1 = vlSelf->dproc__DOT__reg_addr_in1;
    vlSelf->dproc__DOT__regs__DOT__reg_1_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in1];
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x13U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 0x19U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 6U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 0x1bU) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 9U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__write_pulse_en = vlSelf->dproc__DOT__ctu__DOT__write_pulse_en;
    vlSelf->dproc__DOT__inst_ptr_load_en_sel = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSelf->dproc__DOT__inst_ptr_load_en = (1U & ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en))
                                                   ? vlSelf->dproc__DOT__myalu__DOT__out
                                                   : (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en)));
    vlSelf->dproc__DOT__regs__DOT__read_addr_0 = vlSelf->dproc__DOT__reg_addr_in0;
    vlSelf->dproc__DOT__regs__DOT__reg_0_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in0];
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe_in = vlSelf->dproc__DOT__cstrobe;
    vlSelf->dproc__DOT__qclk_out = vlSelf->dproc__DOT__myclk__DOT__out;
    vlSelf->dproc__DOT__myalu__DOT__le = ((vlSelf->dproc__DOT__myalu__DOT__sub 
                                           >> 0x1fU) 
                                          ^ (IData)(vlSelf->dproc__DOT__myalu__DOT__sub_oflow));
    vlSelf->dproc__DOT__instr__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__myclk__DOT__rst = vlSelf->dproc__DOT__qclk_reset;
    vlSelf->dproc__DOT__instr__DOT__enable = vlSelf->dproc__DOT__inst_ptr_enable;
    vlSelf->procdone = vlSelf->stbend;
    vlSelf->dproc__DOT__done_gate = vlSelf->stbend;
    vlSelf->procdone_mon = vlSelf->stbend;
    vlSelf->dproc__DOT__regs__DOT__write_enable = vlSelf->dproc__DOT__reg_write_en;
    vlSelf->dproc__DOT__myclk__DOT__load_enable = vlSelf->dproc__DOT__qclk_load_en;
    vlSelf->dproc__DOT__reg_file_out1 = vlSelf->dproc__DOT__regs__DOT__reg_1_out;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlSelf->dproc__DOT__write_pulse_en;
    if (vlSelf->dproc__DOT__inst_ptr_load_en) {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 1U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = vlSelf->dproc__DOT__instr_ptr_load_val;
    } else {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 0U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en)
                ? (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val));
    }
    vlSelf->dproc__DOT__pulsereg__DOT__reg_in = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__reg_file_out0 = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__pulsereg__DOT__env_in = (0xffffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : vlSelf->dproc__DOT__pulsereg__DOT__env_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_in = (0x1ffffU 
                                                   & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel)
                                                       ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                       : vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_in = (0x1ffU 
                                                  & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel)
                                                      ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                      : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_in = (0xffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlSelf->dproc__DOT__alu_in0 = ((IData)(vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel)
                                    ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                    : vlSelf->dproc__DOT__alu_cmd_data_in0);
    vlSelf->dproc__DOT__myalu__DOT__ge = (1U & (~ (IData)(vlSelf->dproc__DOT__myalu__DOT__le)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.instr_ptr 
        = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__ptr_out = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__cur_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__myalu__DOT__in0 = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__local_out = ((4U 
                                                  & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? 0U
                                                    : vlSelf->dproc__DOT__myalu__DOT__id1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__ge)
                                                    : (IData)(vlSelf->dproc__DOT__myalu__DOT__le)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__eq)
                                                    : vlSelf->dproc__DOT__myalu__DOT__sub)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? vlSelf->dproc__DOT__myalu__DOT__add
                                                    : vlSelf->dproc__DOT__myalu__DOT__id0)));
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__3(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__3\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.mem_bus[0U][0U] 
        = vlSelf->command[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.mem_bus[0U][1U] 
        = vlSelf->command[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.mem_bus[0U][2U] 
        = vlSelf->command[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__memif.mem_bus[0U][3U] 
        = vlSelf->command[3U];
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_comb__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__0\n"); );
    // Body
    vlSelf->dproc__DOT__ctu__DOT__next_state = ((0U 
                                                 == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                 ? 
                                                ((2U 
                                                  > vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles)
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                  ? 
                                                 ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x1fU)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 1U
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                                       ? 0U
                                                       : 1U)))
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 0U
                                                      : 9U)
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 
                                                     ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                                       ? 0U
                                                       : 1U)
                                                      : 0U)))
                                                   : 
                                                  ((0x40000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 6U
                                                      : 2U)
                                                     : 4U)
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->dproc__DOT__local_cmd[3U])
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 2U
                                                      : 0U)
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->dproc__DOT__local_cmd[3U])
                                                      ? 2U
                                                      : 9U))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__.ready)
                                                      ? 2U
                                                      : 4U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__4__KET____DOT__proc_core__sync.ready)
                                                       ? 7U
                                                       : 6U)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                       ? 0U
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))
                                                        ? 9U
                                                        : 0U))))))));
    vlSelf->dproc__DOT__alu_in1 = ((2U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                    ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__4__KET__.data
                                    : ((1U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                        ? vlSelf->dproc__DOT__regs__DOT__reg_1_out
                                        : vlSelf->dproc__DOT__myclk__DOT__out));
    vlSelf->dproc__DOT__myalu__DOT__in1 = vlSelf->dproc__DOT__alu_in1;
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__0\n"); );
    // Body
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__5__KET__.id 
        = (0xffU & (vlSelf->dproc__DOT__local_cmd[1U] 
                    >> 0x14U));
    vlSelf->dproc__DOT__instr__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__opcode = (0xffU & 
                                            (((0U == 0x18U)
                                               ? 0U
                                               : (vlSelf->dproc__DOT__local_cmd[
                                                  (((IData)(7U) 
                                                    + (IData)(0x78U)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x18U)))) 
                                             | (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x18U)));
    vlSelf->dproc__DOT__ctu__DOT__fproc_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__5__KET__.ready;
    vlSelf->dproc__DOT__ctu__DOT__sync_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__sync.ready;
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_in = vlSelf->dproc__DOT__qclk_trig;
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe_in = vlSelf->dproc__DOT__cstrobe;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.env_word 
        = vlSelf->dproc__DOT__pulsereg__DOT__env_word;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.phase 
        = vlSelf->dproc__DOT__pulsereg__DOT__phase;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.freq 
        = vlSelf->dproc__DOT__pulsereg__DOT__freq;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.amp 
        = vlSelf->dproc__DOT__pulsereg__DOT__amp;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cfg 
        = vlSelf->dproc__DOT__pulsereg__DOT__cfg;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cstrobe 
        = vlSelf->dproc__DOT__pulsereg__DOT__cstrobe;
    vlSelf->dproc__DOT__pulse_cmd_time = ((vlSelf->dproc__DOT__local_cmd[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->dproc__DOT__local_cmd[0U] 
                                             >> 5U));
    if ((0U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles);
        vlSelf->dproc__DOT__ctu__DOT__next_state = 
            ((2U > vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles)
              ? 0U : 1U);
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        if ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & (IData)((0x20000000U == (0x70000000U 
                                                 & vlSelf->dproc__DOT__local_cmd[3U]))));
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                    ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? 1U : ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                 ? 1U : ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                          ? 0U : 1U)))
                    : ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 0U : 9U) : ((0x10000000U 
                                           & vlSelf->dproc__DOT__local_cmd[3U])
                                           ? ((IData)(vlSelf->dproc__DOT__qclk_trig)
                                               ? 0U
                                               : 1U)
                                           : 0U)));
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
        } else {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                             >> 0x1eU)) & ((0x20000000U 
                                            & vlSelf->dproc__DOT__local_cmd[3U])
                                            ? (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU))
                                            : (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU)))));
            if ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                if ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                    if ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 6U;
                        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                    } else {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 2U;
                        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
                    }
                } else {
                    vlSelf->dproc__DOT__ctu__DOT__next_state = 4U;
                    vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                }
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                if ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                    if ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 2U;
                        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                    } else {
                        vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
                        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 1U;
                    }
                } else {
                    vlSelf->dproc__DOT__ctu__DOT__next_state 
                        = ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 2U : 9U);
                    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
                }
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            }
        }
    } else if ((2U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
        vlSelf->dproc__DOT__ctu__DOT__next_state = 3U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((3U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->dproc__DOT__local_cmd[3U])
                                        ? (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])))
                                        : (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U]))))));
        vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
            = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)
                ? 0U : ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                         ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x10000000U & 
                                      vlSelf->dproc__DOT__local_cmd[3U])
                                      ? 2U : 0U)) : 
                        ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                          ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                              ? 2U : 0U) : 0U)));
    } else {
        if ((4U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__5__KET__.ready)
                    ? 2U : 4U);
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((6U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state 
                = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__sync.ready)
                    ? 7U : 6U);
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((7U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
        } else {
            if ((9U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__next_state = 9U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__next_state = 0U;
            }
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        }
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    }
    vlSelf->dproc__DOT__reg_write_addr = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                  >> 0x10U));
    vlSelf->dproc__DOT__pulse_cmd_i[0U] = ((vlSelf->dproc__DOT__local_cmd[2U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[1U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[1U] = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[2U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[2U] = (0x7fffU 
                                           & (vlSelf->dproc__DOT__local_cmd[3U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in = (0xfU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 5U));
    vlSelf->dproc__DOT__ctu__DOT__pulse_reset = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0xb0000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable 
        = ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
           & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
              & ((vlSelf->dproc__DOT__local_cmd[3U] 
                  >> 0x1fU) & ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                ? (IData)((0U == (0x30000000U 
                                                  & vlSelf->dproc__DOT__local_cmd[3U])))
                                : (IData)((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x90000000U == (0xf0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__instr_load_en = (
                                                   (0U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & (2U 
                                                      <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__sync_enable = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0x70000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__fproc_enable = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & (IData)(
                                                               (0x40000000U 
                                                                == 
                                                                (0xe0000000U 
                                                                 & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__pulsereg__DOT__env_i_in = (0xffffffU 
                                                   & ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                       << 6U) 
                                                      | (vlSelf->dproc__DOT__local_cmd[2U] 
                                                         >> 0x1aU)));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in = 
        (0x1ffffU & (vlSelf->dproc__DOT__local_cmd[2U] 
                     >> 7U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in = 
        (0x1ffU & ((vlSelf->dproc__DOT__local_cmd[2U] 
                    << 4U) | (vlSelf->dproc__DOT__local_cmd[1U] 
                              >> 0x1cU)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in = (0xffffU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 0xaU));
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[3U] 
                 >> 0x12U));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 0x18U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[1U] 
                 >> 0x1aU));
    vlSelf->dproc__DOT__ctu__DOT__reg_write_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((~ 
                                                               (vlSelf->dproc__DOT__local_cmd[3U] 
                                                                >> 0x1fU)) 
                                                              & ((0x40000000U 
                                                                  & vlSelf->dproc__DOT__local_cmd[3U])
                                                                  ? (IData)(
                                                                            (0U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))
                                                                  : (IData)(
                                                                            (0x10000000U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))))))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_load_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & (IData)(
                                                                     (0x60000000U 
                                                                      == 
                                                                      (0xf0000000U 
                                                                       & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__alu_cmd_data_in0 = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                             << 8U) 
                                            | (vlSelf->dproc__DOT__local_cmd[2U] 
                                               >> 0x18U));
    vlSelf->dproc__DOT__alu_out = vlSelf->dproc__DOT__myalu__DOT__out;
    vlSelf->dproc__DOT__ctu__DOT__qclk_reset = ((0U 
                                                 != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                & ((1U 
                                                    != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                         & ((4U 
                                                             != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))))))));
    vlSelf->nobusy_mon = vlSelf->nobusy;
    vlSelf->dproc__DOT__myalu__DOT__id0 = vlSelf->dproc__DOT__myalu__DOT__in0_reg;
    vlSelf->dproc__DOT__myalu__DOT__id1 = vlSelf->dproc__DOT__myalu__DOT__in1_reg;
    vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel = (1U 
                                                 & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                    >> 0x1bU));
    vlSelf->dproc__DOT__myalu__DOT__add = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           + vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__myclk__DOT__out = vlSelf->dproc__DOT__myclk__DOT__value;
    vlSelf->dproc__DOT__ctu__DOT__alu_opcode = (7U 
                                                & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x18U));
    vlSelf->cmd_read_addr = vlSelf->addr_command;
    vlSelf->dproc__DOT__instr_ptr_load_val = (0xffffU 
                                              & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                 >> 4U));
    vlSelf->dproc__DOT__reg_addr_in1 = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en = ((0U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & (2U 
                                                     <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__write_pulse_en = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x80000000U == (0xe0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__done_gate = ((0U 
                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((6U 
                                                               != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                                 & (9U 
                                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)))))))));
    vlSelf->dproc__DOT__reg_addr_in0 = (0xfU & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__myalu__DOT__sub = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           - vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__reset = vlSelf->reset;
    vlSelf->dproc__DOT__clk = vlSelf->clk;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__memif.mem_bus[0U][0U] 
        = vlSelf->command[0U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__memif.mem_bus[0U][1U] 
        = vlSelf->command[1U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__memif.mem_bus[0U][2U] 
        = vlSelf->command[2U];
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__memif.mem_bus[0U][3U] 
        = vlSelf->command[3U];
    vlSelf->dproc__DOT__regs__DOT__write_addr = vlSelf->dproc__DOT__reg_write_addr;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[0U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[1U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[2U];
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_in = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.reset 
        = vlSelf->dproc__DOT__ctu__DOT__pulse_reset;
    vlSelf->dproc__DOT__qclk_trig_enable = vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable;
    vlSelf->dproc__DOT__c_strobe_enable = vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSelf->dproc__DOT__instr_load_en = vlSelf->dproc__DOT__ctu__DOT__instr_load_en;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__sync.enable 
        = vlSelf->dproc__DOT__ctu__DOT__sync_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__5__KET__.enable 
        = vlSelf->dproc__DOT__ctu__DOT__fproc_enable;
    vlSelf->dproc__DOT__reg_write_en = vlSelf->dproc__DOT__ctu__DOT__reg_write_en;
    vlSelf->dproc__DOT__qclk_load_en = vlSelf->dproc__DOT__ctu__DOT__qclk_load_en;
    vlSelf->dproc__DOT__regs__DOT__write_data = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myclk__DOT__in_val = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_in = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_reset_ctrl = vlSelf->dproc__DOT__ctu__DOT__qclk_reset;
    vlSelf->dproc__DOT__qclk_reset = ((IData)(vlSelf->dproc__DOT__ctu__DOT__qclk_reset) 
                                      | (0U != (0xfU 
                                                & (IData)(vlSelf->dproc__DOT__reset_sr))));
    vlSelf->dproc__DOT__alu_in0_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel;
    vlSelf->dproc__DOT__qclk_out = vlSelf->dproc__DOT__myclk__DOT__out;
    vlSelf->dproc__DOT__alu_in1_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel;
    vlSelf->dproc__DOT__myalu__DOT__ctrl = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__alu_opcode = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__instr__DOT__load_val = vlSelf->dproc__DOT__instr_ptr_load_val;
    vlSelf->dproc__DOT__regs__DOT__read_addr_1 = vlSelf->dproc__DOT__reg_addr_in1;
    vlSelf->dproc__DOT__regs__DOT__reg_1_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in1];
    vlSelf->dproc__DOT__inst_ptr_enable = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en;
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x13U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 0x19U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 6U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 0x1bU) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 9U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__write_pulse_en = vlSelf->dproc__DOT__ctu__DOT__write_pulse_en;
    vlSelf->dproc__DOT__inst_ptr_load_en_sel = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSelf->dproc__DOT__inst_ptr_load_en = (1U & ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en))
                                                   ? vlSelf->dproc__DOT__myalu__DOT__out
                                                   : (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en)));
    vlSelf->stbend = vlSelf->dproc__DOT__ctu__DOT__done_gate;
    vlSelf->dproc__DOT__regs__DOT__read_addr_0 = vlSelf->dproc__DOT__reg_addr_in0;
    vlSelf->dproc__DOT__regs__DOT__reg_0_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in0];
    vlSelf->dproc__DOT__myalu__DOT__eq = (0U == vlSelf->dproc__DOT__myalu__DOT__sub);
    vlSelf->dproc__DOT__myalu__DOT__sub_oflow = (1U 
                                                 & (((~ 
                                                      (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                       >> 0x1fU)) 
                                                     & ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                         & vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                        >> 0x1fU)) 
                                                    | ((~ 
                                                        ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                          | vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                         >> 0x1fU)) 
                                                       & (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                          >> 0x1fU))));
    vlSelf->dproc__DOT__instr__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__regs__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__ctu__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__myalu__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__myclk__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__pulsereg__DOT__clk = vlSelf->dproc__DOT__clk;
    vlSelf->dproc__DOT__regs__DOT__write_enable = vlSelf->dproc__DOT__reg_write_en;
    vlSelf->dproc__DOT__myclk__DOT__load_enable = vlSelf->dproc__DOT__qclk_load_en;
    vlSelf->dproc__DOT__myclk__DOT__rst = vlSelf->dproc__DOT__qclk_reset;
    vlSelf->dproc__DOT__reg_file_out1 = vlSelf->dproc__DOT__regs__DOT__reg_1_out;
    vlSelf->dproc__DOT__alu_in1 = ((2U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                    ? vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__5__KET__.data
                                    : ((1U & (IData)(vlSelf->dproc__DOT__alu_in1_sel))
                                        ? vlSelf->dproc__DOT__regs__DOT__reg_1_out
                                        : vlSelf->dproc__DOT__myclk__DOT__out));
    vlSelf->dproc__DOT__instr__DOT__enable = vlSelf->dproc__DOT__inst_ptr_enable;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlSelf->dproc__DOT__write_pulse_en;
    if (vlSelf->dproc__DOT__inst_ptr_load_en) {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 1U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = vlSelf->dproc__DOT__instr_ptr_load_val;
    } else {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 0U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en)
                ? (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val));
    }
    vlSelf->procdone = vlSelf->stbend;
    vlSelf->dproc__DOT__done_gate = vlSelf->stbend;
    vlSelf->procdone_mon = vlSelf->stbend;
    vlSelf->dproc__DOT__pulsereg__DOT__reg_in = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__reg_file_out0 = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__pulsereg__DOT__env_in = (0xffffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : vlSelf->dproc__DOT__pulsereg__DOT__env_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_in = (0x1ffffU 
                                                   & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel)
                                                       ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                       : vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_in = (0x1ffU 
                                                  & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel)
                                                      ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                      : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_in = (0xffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlSelf->dproc__DOT__alu_in0 = ((IData)(vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel)
                                    ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                    : vlSelf->dproc__DOT__alu_cmd_data_in0);
    vlSelf->dproc__DOT__myalu__DOT__le = ((vlSelf->dproc__DOT__myalu__DOT__sub 
                                           >> 0x1fU) 
                                          ^ (IData)(vlSelf->dproc__DOT__myalu__DOT__sub_oflow));
    vlSelf->dproc__DOT__myalu__DOT__in1 = vlSelf->dproc__DOT__alu_in1;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__memif.instr_ptr 
        = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__ptr_out = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__cur_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__myalu__DOT__in0 = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__ge = (1U & (~ (IData)(vlSelf->dproc__DOT__myalu__DOT__le)));
    vlSelf->dproc__DOT__myalu__DOT__local_out = ((4U 
                                                  & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? 0U
                                                    : vlSelf->dproc__DOT__myalu__DOT__id1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__ge)
                                                    : (IData)(vlSelf->dproc__DOT__myalu__DOT__le)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__eq)
                                                    : vlSelf->dproc__DOT__myalu__DOT__sub)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? vlSelf->dproc__DOT__myalu__DOT__add
                                                    : vlSelf->dproc__DOT__myalu__DOT__id0)));
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__1(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___ico_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__1\n"); );
    // Body
    vlSelf->dproc__DOT__cmd_buf_out[0U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__memif.cmd_read[0U];
    vlSelf->dproc__DOT__cmd_buf_out[1U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__memif.cmd_read[1U];
    vlSelf->dproc__DOT__cmd_buf_out[2U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__memif.cmd_read[2U];
    vlSelf->dproc__DOT__cmd_buf_out[3U] = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__memif.cmd_read[3U];
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__0(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__0\n"); );
    // Body
    vlSelf->dproc__DOT__ctu__DOT__fproc_ready = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__5__KET__.ready;
}

VL_INLINE_OPT void Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__1(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___nba_sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__1\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0 = 0;
    IData/*31:0*/ __Vdlyvval__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvval__dproc__DOT__regs__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__dproc__DOT__regs__DOT__data__v0;
    __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 0;
    // Body
    __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 0U;
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cstrobe) 
         & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.envstart 
            = (0xfffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.freq;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.envlength 
            = (0xfffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.env_word 
                         >> 0xcU));
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cstrobe) 
         & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.envstart 
            = (0xfffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.envlength 
            = (0xfffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.env_word 
                         >> 0xcU));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.freq;
    }
    if (((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cstrobe) 
         & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cfg))))) {
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.ampy = 0U;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.mode 
            = (3U & ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cfg) 
                     >> 2U));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.pini 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.phase;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.ampx 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.amp;
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.envstart 
            = (0xffU & vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.env_word);
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.envlength 
            = (0xffU & (vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.env_word 
                        >> 0xcU));
        vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.freqaddr 
            = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.freq;
    }
    vlSelf->dproc__DOT__myclk__DOT__value = ((IData)(vlSelf->dproc__DOT__qclk_reset)
                                              ? 0U : 
                                             ((IData)(vlSelf->dproc__DOT__qclk_load_en)
                                               ? ((IData)(3U) 
                                                  + vlSelf->dproc__DOT__alu_out)
                                               : ((IData)(1U) 
                                                  + vlSelf->dproc__DOT__myclk__DOT__value)));
    if (vlSelf->dproc__DOT__reset_reg) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles = 0U;
        vlSelf->dproc__DOT__instr__DOT__prev_val = 0U;
        vlSelf->dproc__DOT__instr__DOT__prev_val_inc = 1U;
        vlSelf->dproc__DOT__ctu__DOT__state = 0U;
    } else {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst)
                ? 0U : ((IData)(1U) + vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
        vlSelf->dproc__DOT__instr__DOT__prev_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
        vlSelf->dproc__DOT__instr__DOT__prev_val_inc 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->dproc__DOT____Vcellout__instr__ptr_out)));
        vlSelf->dproc__DOT__ctu__DOT__state = vlSelf->dproc__DOT__ctu__DOT__next_state;
    }
    if (vlSelf->dproc__DOT__reg_write_en) {
        __Vdlyvval__dproc__DOT__regs__DOT__data__v0 
            = vlSelf->dproc__DOT__alu_out;
        __Vdlyvset__dproc__DOT__regs__DOT__data__v0 = 1U;
        __Vdlyvdim0__dproc__DOT__regs__DOT__data__v0 
            = vlSelf->dproc__DOT__reg_write_addr;
    }
    vlSelf->noop = (1U & (~ (IData)((0U != (((vlSelf->command[0U] 
                                              | vlSelf->command[1U]) 
                                             | vlSelf->command[2U]) 
                                            | vlSelf->command[3U])))));
    if (vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__amp = vlSelf->dproc__DOT__pulsereg__DOT__amp_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__freq = vlSelf->dproc__DOT__pulsereg__DOT__freq_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__phase = vlSelf->dproc__DOT__pulsereg__DOT__phase_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__env_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__env_word 
            = vlSelf->dproc__DOT__pulsereg__DOT__env_in;
    }
    if (vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en) {
        vlSelf->dproc__DOT__pulsereg__DOT__cfg = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    }
    vlSelf->command_d2[0U] = vlSelf->command_d[0U];
    vlSelf->command_d2[1U] = vlSelf->command_d[1U];
    vlSelf->command_d2[2U] = vlSelf->command_d[2U];
    vlSelf->command_d2[3U] = vlSelf->command_d[3U];
    vlSelf->nobusy = (1U & (~ ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.busy) 
                               | ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.busy) 
                                  | (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.busy)))));
    vlSelf->addr_command = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__memif.instr_ptr;
    vlSelf->dproc__DOT__qclk_trig = ((vlSelf->dproc__DOT__myclk__DOT__out 
                                      == vlSelf->dproc__DOT__pulse_cmd_time) 
                                     & (IData)(vlSelf->dproc__DOT__qclk_trig_enable));
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe = vlSelf->dproc__DOT__cstrobe;
    vlSelf->dproc__DOT__dummy_resetsr = (1U & ((IData)(vlSelf->dproc__DOT__reset_sr) 
                                               >> 4U));
    vlSelf->dproc__DOT__reset_sr = ((0x1eU & ((IData)(vlSelf->dproc__DOT__reset_sr) 
                                              << 1U)) 
                                    | (IData)(vlSelf->dproc__DOT__reset_reg));
    vlSelf->dproc__DOT__myalu__DOT__out = vlSelf->dproc__DOT__myalu__DOT__local_out;
    vlSelf->dproc__DOT__myalu__DOT__in0_reg = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__in1_reg = vlSelf->dproc__DOT__alu_in1;
    if (vlSelf->dproc__DOT__instr_load_en) {
        vlSelf->dproc__DOT__local_cmd[0U] = vlSelf->dproc__DOT__cmd_buf_out[0U];
        vlSelf->dproc__DOT__local_cmd[1U] = vlSelf->dproc__DOT__cmd_buf_out[1U];
        vlSelf->dproc__DOT__local_cmd[2U] = vlSelf->dproc__DOT__cmd_buf_out[2U];
        vlSelf->dproc__DOT__local_cmd[3U] = vlSelf->dproc__DOT__cmd_buf_out[3U];
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__5__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cstrobe) 
           & (2U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cfg))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__qdrvelem__BRA__5__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cstrobe) 
           & (0U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cfg))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.reset 
        = vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.reset;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdrvelem__BRA__5__KET__.cmdstb 
        = ((IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cstrobe) 
           & (1U == (3U & (IData)(vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cfg))));
    if (__Vdlyvset__dproc__DOT__regs__DOT__data__v0) {
        vlSelf->dproc__DOT__regs__DOT__data[__Vdlyvdim0__dproc__DOT__regs__DOT__data__v0] 
            = __Vdlyvval__dproc__DOT__regs__DOT__data__v0;
    }
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.amp 
        = vlSelf->dproc__DOT__pulsereg__DOT__amp;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.freq 
        = vlSelf->dproc__DOT__pulsereg__DOT__freq;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.phase 
        = vlSelf->dproc__DOT__pulsereg__DOT__phase;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.env_word 
        = vlSelf->dproc__DOT__pulsereg__DOT__env_word;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cfg 
        = vlSelf->dproc__DOT__pulsereg__DOT__cfg;
    vlSelf->command_d[0U] = vlSelf->command[0U];
    vlSelf->command_d[1U] = vlSelf->command[1U];
    vlSelf->command_d[2U] = vlSelf->command[2U];
    vlSelf->command_d[3U] = vlSelf->command[3U];
    vlSelf->nobusy_mon = vlSelf->nobusy;
    vlSelf->cmd_read_addr = vlSelf->addr_command;
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_in = vlSelf->dproc__DOT__qclk_trig;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.cstrobe 
        = vlSelf->dproc__DOT__pulsereg__DOT__cstrobe;
    vlSelf->dproc__DOT__cstrobe = ((vlSelf->dproc__DOT__myclk__DOT__out 
                                    == vlSelf->dproc__DOT__pulse_cmd_time) 
                                   & (IData)(vlSelf->dproc__DOT__c_strobe_enable));
    vlSelf->dproc__DOT__alu_out = vlSelf->dproc__DOT__myalu__DOT__out;
    vlSelf->dproc__DOT__myalu__DOT__id0 = vlSelf->dproc__DOT__myalu__DOT__in0_reg;
    vlSelf->dproc__DOT__myalu__DOT__id1 = vlSelf->dproc__DOT__myalu__DOT__in1_reg;
    vlSelf->dproc__DOT__myalu__DOT__add = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           + vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__myalu__DOT__sub = (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                           - vlSelf->dproc__DOT__myalu__DOT__in1_reg);
    vlSelf->dproc__DOT__reset_reg = vlSelf->reset;
    vlSelf->dproc__DOT__ctu__DOT__instr_load_en = (
                                                   (0U 
                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & (2U 
                                                      <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__qclk_reset = ((0U 
                                                 != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                & ((1U 
                                                    != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                         & ((4U 
                                                             != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                            & ((6U 
                                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                               & (7U 
                                                                  == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))))))));
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en = ((0U 
                                                   == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & (2U 
                                                     <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles));
    vlSelf->dproc__DOT__ctu__DOT__done_gate = ((0U 
                                                != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                               & ((1U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((6U 
                                                               != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                              & ((7U 
                                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                                 & (9U 
                                                                    == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)))))))));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__5__KET__.id 
        = (0xffU & (vlSelf->dproc__DOT__local_cmd[1U] 
                    >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__opcode = (0xffU & 
                                            (((0U == 0x18U)
                                               ? 0U
                                               : (vlSelf->dproc__DOT__local_cmd[
                                                  (((IData)(7U) 
                                                    + (IData)(0x78U)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - (IData)(0x18U)))) 
                                             | (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x18U)));
    if ((0U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (2U <= vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles);
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        if ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & (IData)((0x20000000U == (0x70000000U 
                                                 & vlSelf->dproc__DOT__local_cmd[3U]))));
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
            vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
        } else {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
                = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                             >> 0x1eU)) & ((0x20000000U 
                                            & vlSelf->dproc__DOT__local_cmd[3U])
                                            ? (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU))
                                            : (~ (vlSelf->dproc__DOT__local_cmd[3U] 
                                                  >> 0x1cU)))));
            if ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])) {
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel 
                    = ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 1U : 0U) : 1U);
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
                vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
                    = ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                        ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                            ? 0U : 1U) : 0U);
            }
        }
    } else if ((2U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    } else if ((3U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
        vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst 
            = (1U & ((~ (vlSelf->dproc__DOT__local_cmd[3U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->dproc__DOT__local_cmd[3U])
                                        ? (IData)((0x10000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U])))
                                        : (IData)((0x30000000U 
                                                   == 
                                                   (0x30000000U 
                                                    & vlSelf->dproc__DOT__local_cmd[3U]))))));
        vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en 
            = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x1fU)
                ? 0U : ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                         ? ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                             ? 0U : ((0x10000000U & 
                                      vlSelf->dproc__DOT__local_cmd[3U])
                                      ? 2U : 0U)) : 
                        ((0x20000000U & vlSelf->dproc__DOT__local_cmd[3U])
                          ? ((0x10000000U & vlSelf->dproc__DOT__local_cmd[3U])
                              ? 2U : 0U) : 0U)));
    } else {
        if ((4U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((6U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 2U;
        } else if ((7U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
            vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 0U;
        } else {
            if ((9U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state))) {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            } else {
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
                vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = 0U;
            }
            vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = 1U;
        }
        vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = 0U;
    }
    vlSelf->dproc__DOT__reg_write_addr = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                  >> 0x10U));
    vlSelf->dproc__DOT__pulse_cmd_i[0U] = ((vlSelf->dproc__DOT__local_cmd[2U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[1U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[1U] = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                            << 0x1bU) 
                                           | (vlSelf->dproc__DOT__local_cmd[2U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulse_cmd_i[2U] = (0x7fffU 
                                           & (vlSelf->dproc__DOT__local_cmd[3U] 
                                              >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in = (0xfU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 5U));
    vlSelf->dproc__DOT__ctu__DOT__pulse_reset = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0xb0000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable 
        = ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
           & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
              & ((vlSelf->dproc__DOT__local_cmd[3U] 
                  >> 0x1fU) & ((0x40000000U & vlSelf->dproc__DOT__local_cmd[3U])
                                ? (IData)((0U == (0x30000000U 
                                                  & vlSelf->dproc__DOT__local_cmd[3U])))
                                : (IData)((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x90000000U == (0xf0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__sync_enable = ((0U 
                                                  != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                 & ((1U 
                                                     == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                    & (IData)(
                                                              (0x70000000U 
                                                               == 
                                                               (0xf0000000U 
                                                                & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__ctu__DOT__fproc_enable = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & (IData)(
                                                               (0x40000000U 
                                                                == 
                                                                (0xe0000000U 
                                                                 & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__pulsereg__DOT__env_i_in = (0xffffffU 
                                                   & ((vlSelf->dproc__DOT__local_cmd[3U] 
                                                       << 6U) 
                                                      | (vlSelf->dproc__DOT__local_cmd[2U] 
                                                         >> 0x1aU)));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in = 
        (0x1ffffU & (vlSelf->dproc__DOT__local_cmd[2U] 
                     >> 7U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in = 
        (0x1ffU & ((vlSelf->dproc__DOT__local_cmd[2U] 
                    << 4U) | (vlSelf->dproc__DOT__local_cmd[1U] 
                              >> 0x1cU)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in = (0xffffU 
                                                   & (vlSelf->dproc__DOT__local_cmd[1U] 
                                                      >> 0xaU));
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[3U] 
                 >> 0x12U));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 0x18U));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[2U] 
                 >> 5U));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel 
        = (1U & (vlSelf->dproc__DOT__local_cmd[1U] 
                 >> 0x1aU));
    vlSelf->dproc__DOT__ctu__DOT__reg_write_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & ((~ 
                                                               (vlSelf->dproc__DOT__local_cmd[3U] 
                                                                >> 0x1fU)) 
                                                              & ((0x40000000U 
                                                                  & vlSelf->dproc__DOT__local_cmd[3U])
                                                                  ? (IData)(
                                                                            (0U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))
                                                                  : (IData)(
                                                                            (0x10000000U 
                                                                             == 
                                                                             (0x30000000U 
                                                                              & vlSelf->dproc__DOT__local_cmd[3U])))))))));
    vlSelf->dproc__DOT__ctu__DOT__qclk_load_en = ((0U 
                                                   != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                  & ((1U 
                                                      != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                     & ((2U 
                                                         != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
                                                           & (IData)(
                                                                     (0x60000000U 
                                                                      == 
                                                                      (0xf0000000U 
                                                                       & vlSelf->dproc__DOT__local_cmd[3U])))))));
    vlSelf->dproc__DOT__alu_cmd_data_in0 = ((vlSelf->dproc__DOT__local_cmd[3U] 
                                             << 8U) 
                                            | (vlSelf->dproc__DOT__local_cmd[2U] 
                                               >> 0x18U));
    vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel = (1U 
                                                 & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                    >> 0x1bU));
    vlSelf->dproc__DOT__ctu__DOT__alu_opcode = (7U 
                                                & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                   >> 0x18U));
    vlSelf->dproc__DOT__instr_ptr_load_val = (0xffffU 
                                              & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                 >> 4U));
    vlSelf->dproc__DOT__reg_addr_in1 = (0xfU & (vlSelf->dproc__DOT__local_cmd[2U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__ctu__DOT__write_pulse_en = 
        ((0U != (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
         & ((1U == (IData)(vlSelf->dproc__DOT__ctu__DOT__state)) 
            & (IData)((0x80000000U == (0xe0000000U 
                                       & vlSelf->dproc__DOT__local_cmd[3U])))));
    vlSelf->dproc__DOT__reg_addr_in0 = (0xfU & (vlSelf->dproc__DOT__local_cmd[3U] 
                                                >> 0x14U));
    vlSelf->dproc__DOT__pulse_cmd_time = ((vlSelf->dproc__DOT__local_cmd[1U] 
                                           << 0x1bU) 
                                          | (vlSelf->dproc__DOT__local_cmd[0U] 
                                             >> 5U));
    vlSelf->dproc__DOT__myclk__DOT__out = vlSelf->dproc__DOT__myclk__DOT__value;
    vlSelf->dproc__DOT__regs__DOT__write_data = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myclk__DOT__in_val = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__qclk_in = vlSelf->dproc__DOT__alu_out;
    vlSelf->dproc__DOT__myalu__DOT__eq = (0U == vlSelf->dproc__DOT__myalu__DOT__sub);
    vlSelf->dproc__DOT__myalu__DOT__sub_oflow = (1U 
                                                 & (((~ 
                                                      (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                       >> 0x1fU)) 
                                                     & ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                         & vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                        >> 0x1fU)) 
                                                    | ((~ 
                                                        ((vlSelf->dproc__DOT__myalu__DOT__in1_reg 
                                                          | vlSelf->dproc__DOT__myalu__DOT__sub) 
                                                         >> 0x1fU)) 
                                                       & (vlSelf->dproc__DOT__myalu__DOT__in0_reg 
                                                          >> 0x1fU))));
    vlSelf->dproc__DOT__instr_load_en = vlSelf->dproc__DOT__ctu__DOT__instr_load_en;
    vlSelf->dproc__DOT__qclk_reset_ctrl = vlSelf->dproc__DOT__ctu__DOT__qclk_reset;
    vlSelf->dproc__DOT__qclk_reset = ((IData)(vlSelf->dproc__DOT__ctu__DOT__qclk_reset) 
                                      | (0U != (0xfU 
                                                & (IData)(vlSelf->dproc__DOT__reset_sr))));
    vlSelf->dproc__DOT__inst_ptr_enable = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en;
    vlSelf->stbend = vlSelf->dproc__DOT__ctu__DOT__done_gate;
    vlSelf->dproc__DOT__regs__DOT__write_addr = vlSelf->dproc__DOT__reg_write_addr;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[0U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[0U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[1U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[1U];
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in[2U] 
        = vlSelf->dproc__DOT__pulse_cmd_i[2U];
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_in = vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__pulseout.reset 
        = vlSelf->dproc__DOT__ctu__DOT__pulse_reset;
    vlSelf->dproc__DOT__qclk_trig_enable = vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable;
    vlSelf->dproc__DOT__c_strobe_enable = vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__sync.enable 
        = vlSelf->dproc__DOT__ctu__DOT__sync_enable;
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__fproc_if__BRA__5__KET__.enable 
        = vlSelf->dproc__DOT__ctu__DOT__fproc_enable;
    vlSelf->dproc__DOT__reg_write_en = vlSelf->dproc__DOT__ctu__DOT__reg_write_en;
    vlSelf->dproc__DOT__qclk_load_en = vlSelf->dproc__DOT__ctu__DOT__qclk_load_en;
    vlSelf->dproc__DOT__alu_in0_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel;
    vlSelf->dproc__DOT__alu_in1_sel = vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel;
    vlSelf->dproc__DOT__myalu__DOT__ctrl = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__alu_opcode = vlSelf->dproc__DOT__ctu__DOT__alu_opcode;
    vlSelf->dproc__DOT__instr__DOT__load_val = vlSelf->dproc__DOT__instr_ptr_load_val;
    vlSelf->dproc__DOT__regs__DOT__read_addr_1 = vlSelf->dproc__DOT__reg_addr_in1;
    vlSelf->dproc__DOT__regs__DOT__reg_1_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in1];
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[3U] >> 0x13U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 0x19U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[2U] >> 6U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 0x1bU) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en 
        = ((vlSelf->dproc__DOT__local_cmd[1U] >> 9U) 
           & (IData)(vlSelf->dproc__DOT__ctu__DOT__write_pulse_en));
    vlSelf->dproc__DOT__write_pulse_en = vlSelf->dproc__DOT__ctu__DOT__write_pulse_en;
    vlSelf->dproc__DOT__inst_ptr_load_en_sel = vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en;
    vlSelf->dproc__DOT__inst_ptr_load_en = (1U & ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en))
                                                   ? vlSelf->dproc__DOT__myalu__DOT__out
                                                   : (IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en)));
    vlSelf->dproc__DOT__regs__DOT__read_addr_0 = vlSelf->dproc__DOT__reg_addr_in0;
    vlSelf->dproc__DOT__regs__DOT__reg_0_out = vlSelf->dproc__DOT__regs__DOT__data
        [vlSelf->dproc__DOT__reg_addr_in0];
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe_in = vlSelf->dproc__DOT__cstrobe;
    vlSelf->dproc__DOT__qclk_out = vlSelf->dproc__DOT__myclk__DOT__out;
    vlSelf->dproc__DOT__myalu__DOT__le = ((vlSelf->dproc__DOT__myalu__DOT__sub 
                                           >> 0x1fU) 
                                          ^ (IData)(vlSelf->dproc__DOT__myalu__DOT__sub_oflow));
    vlSelf->dproc__DOT__instr__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__ctu__DOT__reset = vlSelf->dproc__DOT__reset_reg;
    vlSelf->dproc__DOT__myclk__DOT__rst = vlSelf->dproc__DOT__qclk_reset;
    vlSelf->dproc__DOT__instr__DOT__enable = vlSelf->dproc__DOT__inst_ptr_enable;
    vlSelf->procdone = vlSelf->stbend;
    vlSelf->dproc__DOT__done_gate = vlSelf->stbend;
    vlSelf->procdone_mon = vlSelf->stbend;
    vlSelf->dproc__DOT__regs__DOT__write_enable = vlSelf->dproc__DOT__reg_write_en;
    vlSelf->dproc__DOT__myclk__DOT__load_enable = vlSelf->dproc__DOT__qclk_load_en;
    vlSelf->dproc__DOT__reg_file_out1 = vlSelf->dproc__DOT__regs__DOT__reg_1_out;
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_write_en 
        = vlSelf->dproc__DOT__write_pulse_en;
    if (vlSelf->dproc__DOT__inst_ptr_load_en) {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 1U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = vlSelf->dproc__DOT__instr_ptr_load_val;
    } else {
        vlSelf->dproc__DOT__instr__DOT__load_enable = 0U;
        vlSelf->dproc__DOT____Vcellout__instr__ptr_out 
            = ((IData)(vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en)
                ? (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val_inc)
                : (IData)(vlSelf->dproc__DOT__instr__DOT__prev_val));
    }
    vlSelf->dproc__DOT__pulsereg__DOT__reg_in = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__reg_file_out0 = vlSelf->dproc__DOT__regs__DOT__reg_0_out;
    vlSelf->dproc__DOT__pulsereg__DOT__env_in = (0xffffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : vlSelf->dproc__DOT__pulsereg__DOT__env_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__phase_in = (0x1ffffU 
                                                   & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel)
                                                       ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                       : vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in));
    vlSelf->dproc__DOT__pulsereg__DOT__freq_in = (0x1ffU 
                                                  & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel)
                                                      ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                      : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in)));
    vlSelf->dproc__DOT__pulsereg__DOT__amp_in = (0xffffU 
                                                 & ((IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel)
                                                     ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                                     : (IData)(vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in)));
    vlSelf->dproc__DOT__alu_in0 = ((IData)(vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel)
                                    ? vlSelf->dproc__DOT__regs__DOT__reg_0_out
                                    : vlSelf->dproc__DOT__alu_cmd_data_in0);
    vlSelf->dproc__DOT__myalu__DOT__ge = (1U & (~ (IData)(vlSelf->dproc__DOT__myalu__DOT__le)));
    vlSymsp->TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__5__KET____DOT__proc_core__memif.instr_ptr 
        = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__ptr_out = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__instr__DOT__cur_val = vlSelf->dproc__DOT____Vcellout__instr__ptr_out;
    vlSelf->dproc__DOT__myalu__DOT__in0 = vlSelf->dproc__DOT__alu_in0;
    vlSelf->dproc__DOT__myalu__DOT__local_out = ((4U 
                                                  & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? 0U
                                                    : vlSelf->dproc__DOT__myalu__DOT__id1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__ge)
                                                    : (IData)(vlSelf->dproc__DOT__myalu__DOT__le)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? (IData)(vlSelf->dproc__DOT__myalu__DOT__eq)
                                                    : vlSelf->dproc__DOT__myalu__DOT__sub)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->dproc__DOT__ctu__DOT__alu_opcode))
                                                    ? vlSelf->dproc__DOT__myalu__DOT__add
                                                    : vlSelf->dproc__DOT__myalu__DOT__id0)));
}
