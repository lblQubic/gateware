// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_proc_core__Qz1_Rz2_RBz3.h"

VL_ATTR_COLD void Vtop_proc_core__Qz1_Rz2_RBz3___eval_static__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___eval_static__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core\n"); );
    // Body
    vlSelf->command_d[0U] = 0U;
    vlSelf->command_d[1U] = 0U;
    vlSelf->command_d[2U] = 0U;
    vlSelf->command_d[3U] = 0U;
    vlSelf->command_d2[0U] = 0U;
    vlSelf->command_d2[1U] = 0U;
    vlSelf->command_d2[2U] = 0U;
    vlSelf->command_d2[3U] = 0U;
    vlSelf->addr_command = 0U;
    vlSelf->noop = 0U;
    vlSelf->nobusy = 0U;
    vlSelf->dproc__DOT__reset_sr = 0U;
    vlSelf->dproc__DOT__dummy_resetsr = 0U;
}

VL_ATTR_COLD void Vtop_proc_core__Qz1_Rz2_RBz3___ctor_var_reset(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_proc_core__Qz1_Rz2_RBz3___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->command);
    vlSelf->cmd_read_addr = VL_RAND_RESET_I(16);
    vlSelf->state_dbg = VL_RAND_RESET_I(4);
    vlSelf->nextstate_dbg = VL_RAND_RESET_I(4);
    vlSelf->stbend = VL_RAND_RESET_I(1);
    vlSelf->procdone_mon = VL_RAND_RESET_I(1);
    vlSelf->nobusy_mon = VL_RAND_RESET_I(1);
    vlSelf->procdone = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->command_d);
    VL_RAND_RESET_W(128, vlSelf->command_d2);
    vlSelf->addr_command = VL_RAND_RESET_I(16);
    vlSelf->noop = VL_RAND_RESET_I(1);
    vlSelf->nobusy = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__done_gate = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->dproc__DOT__cmd_buf_out);
    vlSelf->dproc__DOT__cmd_buf_read_addr = VL_RAND_RESET_I(16);
    vlSelf->dproc__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__reg_file_out0 = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__reg_file_out1 = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__alu_in0 = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__alu_in1 = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__qclk_out = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__qclk_in = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(79, vlSelf->dproc__DOT__pulse_cmd_i);
    vlSelf->dproc__DOT__phase_write_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__phase_write_en_cmd = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__freq_write_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__freq_write_en_cmd = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__env_write_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__env_write_en_cmd = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__phase_write_sel = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__freq_write_sel = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__env_write_sel = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__alu_opcode = VL_RAND_RESET_I(3);
    vlSelf->dproc__DOT__c_strobe_enable = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__qclk_trig_enable = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__alu_in0_sel = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__alu_in1_sel = VL_RAND_RESET_I(2);
    vlSelf->dproc__DOT__reg_write_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__inst_ptr_en_sel = VL_RAND_RESET_I(2);
    vlSelf->dproc__DOT__inst_ptr_load_en_sel = VL_RAND_RESET_I(2);
    vlSelf->dproc__DOT__qclk_load_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__cstrobe = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__qclk_trig = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__write_pulse_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__instr_load_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__qclk_reset = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__qclk_reset_ctrl = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__inst_ptr_load_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__inst_ptr_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->dproc__DOT__local_cmd);
    vlSelf->dproc__DOT__instr_ptr_load_val = VL_RAND_RESET_I(16);
    vlSelf->dproc__DOT__alu_cmd_data_in0 = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__pulse_cmd_time = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__reg_addr_in0 = VL_RAND_RESET_I(4);
    vlSelf->dproc__DOT__reg_addr_in1 = VL_RAND_RESET_I(4);
    vlSelf->dproc__DOT__reg_write_addr = VL_RAND_RESET_I(4);
    vlSelf->dproc__DOT__reset_reg = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__reset_sr = VL_RAND_RESET_I(5);
    vlSelf->dproc__DOT__dummy_resetsr = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT____Vcellout__instr__ptr_out = VL_RAND_RESET_I(16);
    vlSelf->dproc__DOT__instr__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__instr__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__instr__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__instr__DOT__load_val = VL_RAND_RESET_I(16);
    vlSelf->dproc__DOT__instr__DOT__load_enable = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__instr__DOT__ptr_out = VL_RAND_RESET_I(16);
    vlSelf->dproc__DOT__instr__DOT__prev_val_inc = VL_RAND_RESET_I(16);
    vlSelf->dproc__DOT__instr__DOT__prev_val = VL_RAND_RESET_I(16);
    vlSelf->dproc__DOT__instr__DOT__cur_val = VL_RAND_RESET_I(16);
    vlSelf->dproc__DOT__regs__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__regs__DOT__read_addr_0 = VL_RAND_RESET_I(4);
    vlSelf->dproc__DOT__regs__DOT__read_addr_1 = VL_RAND_RESET_I(4);
    vlSelf->dproc__DOT__regs__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__regs__DOT__write_addr = VL_RAND_RESET_I(4);
    vlSelf->dproc__DOT__regs__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__regs__DOT__reg_0_out = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__regs__DOT__reg_1_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dproc__DOT__regs__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->dproc__DOT__ctu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__opcode = VL_RAND_RESET_I(8);
    vlSelf->dproc__DOT__ctu__DOT__fproc_ready = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__sync_ready = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_in = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__alu_opcode = VL_RAND_RESET_I(3);
    vlSelf->dproc__DOT__ctu__DOT__c_strobe_enable = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__qclk_trig_enable = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__done_gate = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__alu_in0_sel = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__alu_in1_sel = VL_RAND_RESET_I(2);
    vlSelf->dproc__DOT__ctu__DOT__reg_write_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__instr_ptr_load_en = VL_RAND_RESET_I(2);
    vlSelf->dproc__DOT__ctu__DOT__instr_load_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__qclk_load_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__qclk_reset = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__sync_enable = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__fproc_enable = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__write_pulse_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__pulse_reset = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__ctu__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->dproc__DOT__ctu__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->dproc__DOT__ctu__DOT__mem_wait_cycles = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__ctu__DOT__mem_wait_rst = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__myalu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__myalu__DOT__ctrl = VL_RAND_RESET_I(3);
    vlSelf->dproc__DOT__myalu__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__myalu__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__myalu__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__myalu__DOT__id0 = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__myalu__DOT__id1 = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__myalu__DOT__add = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__myalu__DOT__sub = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__myalu__DOT__eq = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__myalu__DOT__le = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__myalu__DOT__ge = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__myalu__DOT__sub_oflow = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__myalu__DOT__in0_reg = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__myalu__DOT__in1_reg = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__myalu__DOT__local_out = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__myclk__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__myclk__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__myclk__DOT__in_val = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__myclk__DOT__load_enable = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__myclk__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__myclk__DOT__value = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__pulsereg__DOT__clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(79, vlSelf->dproc__DOT__pulsereg__DOT__pulse_cmd_in);
    vlSelf->dproc__DOT__pulsereg__DOT__reg_in = VL_RAND_RESET_I(32);
    vlSelf->dproc__DOT__pulsereg__DOT__pulse_write_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe_in = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__pulsereg__DOT__phase = VL_RAND_RESET_I(17);
    vlSelf->dproc__DOT__pulsereg__DOT__freq = VL_RAND_RESET_I(9);
    vlSelf->dproc__DOT__pulsereg__DOT__amp = VL_RAND_RESET_I(16);
    vlSelf->dproc__DOT__pulsereg__DOT__env_word = VL_RAND_RESET_I(24);
    vlSelf->dproc__DOT__pulsereg__DOT__cfg = VL_RAND_RESET_I(4);
    vlSelf->dproc__DOT__pulsereg__DOT__cstrobe = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__pulsereg__DOT__env_i_in = VL_RAND_RESET_I(24);
    vlSelf->dproc__DOT__pulsereg__DOT__env_in = VL_RAND_RESET_I(24);
    vlSelf->dproc__DOT__pulsereg__DOT__phase_i_in = VL_RAND_RESET_I(17);
    vlSelf->dproc__DOT__pulsereg__DOT__phase_in = VL_RAND_RESET_I(17);
    vlSelf->dproc__DOT__pulsereg__DOT__freq_i_in = VL_RAND_RESET_I(9);
    vlSelf->dproc__DOT__pulsereg__DOT__freq_in = VL_RAND_RESET_I(9);
    vlSelf->dproc__DOT__pulsereg__DOT__amp_i_in = VL_RAND_RESET_I(16);
    vlSelf->dproc__DOT__pulsereg__DOT__amp_in = VL_RAND_RESET_I(16);
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_i_in = VL_RAND_RESET_I(4);
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_in = VL_RAND_RESET_I(4);
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__pulsereg__DOT__cfg_write_en = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__pulsereg__DOT__env_write_sel = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__pulsereg__DOT__phase_write_sel = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__pulsereg__DOT__freq_write_sel = VL_RAND_RESET_I(1);
    vlSelf->dproc__DOT__pulsereg__DOT__amp_write_sel = VL_RAND_RESET_I(1);
}
