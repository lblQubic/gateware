// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_PROC_CORE__QZ1_RZ2_RBZ3_H_
#define VERILATED_VTOP_PROC_CORE__QZ1_RZ2_RBZ3_H_  // guard

#include "verilated.h"
class Vtop_cmd_mem_iface__C10_M80_MB1;
class Vtop_pulse_iface;
class Vtop_sync_iface;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_proc_core__Qz1_Rz2_RBz3 final : public VerilatedModule {
  public:
    // CELLS
    Vtop_cmd_mem_iface__C10_M80_MB1* __PVT__memif;
    Vtop_sync_iface* __PVT__sync;
    Vtop_pulse_iface* __PVT__pulseout;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(state_dbg,3,0);
        VL_OUT8(nextstate_dbg,3,0);
        VL_OUT8(stbend,0,0);
        VL_OUT8(procdone_mon,0,0);
        VL_OUT8(nobusy_mon,0,0);
        CData/*0:0*/ procdone;
        CData/*0:0*/ noop;
        CData/*0:0*/ nobusy;
        CData/*0:0*/ dproc__DOT__clk;
        CData/*0:0*/ dproc__DOT__reset;
        CData/*0:0*/ dproc__DOT__done_gate;
        CData/*0:0*/ dproc__DOT__phase_write_en;
        CData/*0:0*/ dproc__DOT__phase_write_en_cmd;
        CData/*0:0*/ dproc__DOT__freq_write_en;
        CData/*0:0*/ dproc__DOT__freq_write_en_cmd;
        CData/*0:0*/ dproc__DOT__env_write_en;
        CData/*0:0*/ dproc__DOT__env_write_en_cmd;
        CData/*0:0*/ dproc__DOT__phase_write_sel;
        CData/*0:0*/ dproc__DOT__freq_write_sel;
        CData/*0:0*/ dproc__DOT__env_write_sel;
        CData/*2:0*/ dproc__DOT__alu_opcode;
        CData/*0:0*/ dproc__DOT__c_strobe_enable;
        CData/*0:0*/ dproc__DOT__qclk_trig_enable;
        CData/*0:0*/ dproc__DOT__alu_in0_sel;
        CData/*1:0*/ dproc__DOT__alu_in1_sel;
        CData/*0:0*/ dproc__DOT__reg_write_en;
        CData/*1:0*/ dproc__DOT__inst_ptr_en_sel;
        CData/*1:0*/ dproc__DOT__inst_ptr_load_en_sel;
        CData/*0:0*/ dproc__DOT__qclk_load_en;
        CData/*0:0*/ dproc__DOT__cstrobe;
        CData/*0:0*/ dproc__DOT__qclk_trig;
        CData/*0:0*/ dproc__DOT__write_pulse_en;
        CData/*0:0*/ dproc__DOT__instr_load_en;
        CData/*0:0*/ dproc__DOT__qclk_reset;
        CData/*0:0*/ dproc__DOT__qclk_reset_ctrl;
        CData/*0:0*/ dproc__DOT__inst_ptr_load_en;
        CData/*0:0*/ dproc__DOT__inst_ptr_enable;
        CData/*3:0*/ dproc__DOT__reg_addr_in0;
        CData/*3:0*/ dproc__DOT__reg_addr_in1;
        CData/*3:0*/ dproc__DOT__reg_write_addr;
        CData/*0:0*/ dproc__DOT__reset_reg;
        CData/*4:0*/ dproc__DOT__reset_sr;
        CData/*0:0*/ dproc__DOT__dummy_resetsr;
        CData/*0:0*/ dproc__DOT__instr__DOT__clk;
        CData/*0:0*/ dproc__DOT__instr__DOT__enable;
        CData/*0:0*/ dproc__DOT__instr__DOT__reset;
        CData/*0:0*/ dproc__DOT__instr__DOT__load_enable;
        CData/*0:0*/ dproc__DOT__regs__DOT__clk;
        CData/*3:0*/ dproc__DOT__regs__DOT__read_addr_0;
        CData/*3:0*/ dproc__DOT__regs__DOT__read_addr_1;
        CData/*0:0*/ dproc__DOT__regs__DOT__write_enable;
        CData/*3:0*/ dproc__DOT__regs__DOT__write_addr;
        CData/*0:0*/ dproc__DOT__ctu__DOT__clk;
        CData/*0:0*/ dproc__DOT__ctu__DOT__reset;
        CData/*7:0*/ dproc__DOT__ctu__DOT__opcode;
        CData/*0:0*/ dproc__DOT__ctu__DOT__fproc_ready;
        CData/*0:0*/ dproc__DOT__ctu__DOT__sync_ready;
        CData/*0:0*/ dproc__DOT__ctu__DOT__qclk_trig_in;
        CData/*2:0*/ dproc__DOT__ctu__DOT__alu_opcode;
        CData/*0:0*/ dproc__DOT__ctu__DOT__c_strobe_enable;
        CData/*0:0*/ dproc__DOT__ctu__DOT__qclk_trig_enable;
        CData/*0:0*/ dproc__DOT__ctu__DOT__done_gate;
    };
    struct {
        CData/*0:0*/ dproc__DOT__ctu__DOT__alu_in0_sel;
        CData/*1:0*/ dproc__DOT__ctu__DOT__alu_in1_sel;
        CData/*0:0*/ dproc__DOT__ctu__DOT__reg_write_en;
        CData/*0:0*/ dproc__DOT__ctu__DOT__instr_ptr_en;
        CData/*1:0*/ dproc__DOT__ctu__DOT__instr_ptr_load_en;
        CData/*0:0*/ dproc__DOT__ctu__DOT__instr_load_en;
        CData/*0:0*/ dproc__DOT__ctu__DOT__qclk_load_en;
        CData/*0:0*/ dproc__DOT__ctu__DOT__qclk_reset;
        CData/*0:0*/ dproc__DOT__ctu__DOT__sync_enable;
        CData/*0:0*/ dproc__DOT__ctu__DOT__fproc_enable;
        CData/*0:0*/ dproc__DOT__ctu__DOT__write_pulse_en;
        CData/*0:0*/ dproc__DOT__ctu__DOT__pulse_reset;
        CData/*4:0*/ dproc__DOT__ctu__DOT__state;
        CData/*4:0*/ dproc__DOT__ctu__DOT__next_state;
        CData/*0:0*/ dproc__DOT__ctu__DOT__mem_wait_rst;
        CData/*0:0*/ dproc__DOT__myalu__DOT__clk;
        CData/*2:0*/ dproc__DOT__myalu__DOT__ctrl;
        CData/*0:0*/ dproc__DOT__myalu__DOT__eq;
        CData/*0:0*/ dproc__DOT__myalu__DOT__le;
        CData/*0:0*/ dproc__DOT__myalu__DOT__ge;
        CData/*0:0*/ dproc__DOT__myalu__DOT__sub_oflow;
        CData/*0:0*/ dproc__DOT__myclk__DOT__clk;
        CData/*0:0*/ dproc__DOT__myclk__DOT__rst;
        CData/*0:0*/ dproc__DOT__myclk__DOT__load_enable;
        CData/*0:0*/ dproc__DOT__pulsereg__DOT__clk;
        CData/*0:0*/ dproc__DOT__pulsereg__DOT__pulse_write_en;
        CData/*0:0*/ dproc__DOT__pulsereg__DOT__cstrobe_in;
        CData/*3:0*/ dproc__DOT__pulsereg__DOT__cfg;
        CData/*0:0*/ dproc__DOT__pulsereg__DOT__cstrobe;
        CData/*3:0*/ dproc__DOT__pulsereg__DOT__cfg_i_in;
        CData/*3:0*/ dproc__DOT__pulsereg__DOT__cfg_in;
        CData/*0:0*/ dproc__DOT__pulsereg__DOT__env_write_en;
        CData/*0:0*/ dproc__DOT__pulsereg__DOT__phase_write_en;
        CData/*0:0*/ dproc__DOT__pulsereg__DOT__freq_write_en;
        CData/*0:0*/ dproc__DOT__pulsereg__DOT__amp_write_en;
        CData/*0:0*/ dproc__DOT__pulsereg__DOT__cfg_write_en;
        CData/*0:0*/ dproc__DOT__pulsereg__DOT__env_write_sel;
        CData/*0:0*/ dproc__DOT__pulsereg__DOT__phase_write_sel;
        CData/*0:0*/ dproc__DOT__pulsereg__DOT__freq_write_sel;
        CData/*0:0*/ dproc__DOT__pulsereg__DOT__amp_write_sel;
        VL_OUT16(cmd_read_addr,15,0);
        SData/*15:0*/ addr_command;
        SData/*15:0*/ dproc__DOT__cmd_buf_read_addr;
        SData/*15:0*/ dproc__DOT__instr_ptr_load_val;
        SData/*15:0*/ dproc__DOT____Vcellout__instr__ptr_out;
        SData/*15:0*/ dproc__DOT__instr__DOT__load_val;
        SData/*15:0*/ dproc__DOT__instr__DOT__ptr_out;
        SData/*15:0*/ dproc__DOT__instr__DOT__prev_val_inc;
        SData/*15:0*/ dproc__DOT__instr__DOT__prev_val;
        SData/*15:0*/ dproc__DOT__instr__DOT__cur_val;
        SData/*8:0*/ dproc__DOT__pulsereg__DOT__freq;
        SData/*15:0*/ dproc__DOT__pulsereg__DOT__amp;
        SData/*8:0*/ dproc__DOT__pulsereg__DOT__freq_i_in;
        SData/*8:0*/ dproc__DOT__pulsereg__DOT__freq_in;
        SData/*15:0*/ dproc__DOT__pulsereg__DOT__amp_i_in;
        SData/*15:0*/ dproc__DOT__pulsereg__DOT__amp_in;
        VL_INW(command,127,0,4);
        VlWide<4>/*127:0*/ command_d;
        VlWide<4>/*127:0*/ command_d2;
        VlWide<4>/*127:0*/ dproc__DOT__cmd_buf_out;
        IData/*31:0*/ dproc__DOT__alu_out;
        IData/*31:0*/ dproc__DOT__reg_file_out0;
        IData/*31:0*/ dproc__DOT__reg_file_out1;
        IData/*31:0*/ dproc__DOT__alu_in0;
    };
    struct {
        IData/*31:0*/ dproc__DOT__alu_in1;
        IData/*31:0*/ dproc__DOT__qclk_out;
        IData/*31:0*/ dproc__DOT__qclk_in;
        VlWide<3>/*78:0*/ dproc__DOT__pulse_cmd_i;
        VlWide<4>/*127:0*/ dproc__DOT__local_cmd;
        IData/*31:0*/ dproc__DOT__alu_cmd_data_in0;
        IData/*31:0*/ dproc__DOT__pulse_cmd_time;
        IData/*31:0*/ dproc__DOT__regs__DOT__write_data;
        IData/*31:0*/ dproc__DOT__regs__DOT__reg_0_out;
        IData/*31:0*/ dproc__DOT__regs__DOT__reg_1_out;
        IData/*31:0*/ dproc__DOT__ctu__DOT__mem_wait_cycles;
        IData/*31:0*/ dproc__DOT__myalu__DOT__in0;
        IData/*31:0*/ dproc__DOT__myalu__DOT__in1;
        IData/*31:0*/ dproc__DOT__myalu__DOT__out;
        IData/*31:0*/ dproc__DOT__myalu__DOT__id0;
        IData/*31:0*/ dproc__DOT__myalu__DOT__id1;
        IData/*31:0*/ dproc__DOT__myalu__DOT__add;
        IData/*31:0*/ dproc__DOT__myalu__DOT__sub;
        IData/*31:0*/ dproc__DOT__myalu__DOT__in0_reg;
        IData/*31:0*/ dproc__DOT__myalu__DOT__in1_reg;
        IData/*31:0*/ dproc__DOT__myalu__DOT__local_out;
        IData/*31:0*/ dproc__DOT__myclk__DOT__in_val;
        IData/*31:0*/ dproc__DOT__myclk__DOT__out;
        IData/*31:0*/ dproc__DOT__myclk__DOT__value;
        VlWide<3>/*78:0*/ dproc__DOT__pulsereg__DOT__pulse_cmd_in;
        IData/*31:0*/ dproc__DOT__pulsereg__DOT__reg_in;
        IData/*16:0*/ dproc__DOT__pulsereg__DOT__phase;
        IData/*23:0*/ dproc__DOT__pulsereg__DOT__env_word;
        IData/*23:0*/ dproc__DOT__pulsereg__DOT__env_i_in;
        IData/*23:0*/ dproc__DOT__pulsereg__DOT__env_in;
        IData/*16:0*/ dproc__DOT__pulsereg__DOT__phase_i_in;
        IData/*16:0*/ dproc__DOT__pulsereg__DOT__phase_in;
        VlUnpacked<IData/*31:0*/, 16> dproc__DOT__regs__DOT__data;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*1:0*/ dproc__DOT__ctu__DOT__INST_PTR_DEFAULT_EN = 0U;
    static constexpr CData/*1:0*/ dproc__DOT__ctu__DOT__INST_PTR_SYNC_EN = 1U;
    static constexpr CData/*1:0*/ dproc__DOT__ctu__DOT__INST_PTR_FPROC_EN = 2U;
    static constexpr CData/*1:0*/ dproc__DOT__ctu__DOT__INST_PTR_PULSE_EN = 3U;
    static constexpr CData/*1:0*/ dproc__DOT__ctu__DOT__ALU_IN1_QCLK_SEL = 0U;
    static constexpr CData/*1:0*/ dproc__DOT__ctu__DOT__ALU_IN1_REG_SEL = 1U;
    static constexpr CData/*1:0*/ dproc__DOT__ctu__DOT__ALU_IN1_FPROC_SEL = 2U;
    static constexpr CData/*1:0*/ dproc__DOT__ctu__DOT__INSTR_PTR_LOAD_EN_ALU = 2U;
    static constexpr CData/*1:0*/ dproc__DOT__ctu__DOT__INSTR_PTR_LOAD_EN_TRUE = 1U;
    static constexpr CData/*1:0*/ dproc__DOT__ctu__DOT__INSTR_PTR_LOAD_EN_FALSE = 0U;
    static constexpr CData/*2:0*/ dproc__DOT__ctu__DOT__ALU_ID0 = 0U;
    static constexpr CData/*2:0*/ dproc__DOT__ctu__DOT__ALU_ID1 = 6U;
    static constexpr CData/*2:0*/ dproc__DOT__ctu__DOT__ALU_ADD = 1U;
    static constexpr CData/*2:0*/ dproc__DOT__ctu__DOT__ALU_SUB = 2U;
    static constexpr CData/*2:0*/ dproc__DOT__ctu__DOT__ALU_EQ = 3U;
    static constexpr CData/*2:0*/ dproc__DOT__ctu__DOT__ALU_LE = 4U;
    static constexpr CData/*2:0*/ dproc__DOT__ctu__DOT__ALU_GE = 5U;
    static constexpr CData/*2:0*/ dproc__DOT__ctu__DOT__ALU_0 = 7U;
    static constexpr CData/*3:0*/ dproc__DOT__ctu__DOT__REG_ALU = 1U;
    static constexpr CData/*3:0*/ dproc__DOT__ctu__DOT__JUMP_I = 2U;
    static constexpr CData/*3:0*/ dproc__DOT__ctu__DOT__JUMP_COND = 3U;
    static constexpr CData/*3:0*/ dproc__DOT__ctu__DOT__ALU_FPROC = 4U;
    static constexpr CData/*3:0*/ dproc__DOT__ctu__DOT__JUMP_FPROC = 5U;
    static constexpr CData/*3:0*/ dproc__DOT__ctu__DOT__INC_QCLK = 6U;
    static constexpr CData/*3:0*/ dproc__DOT__ctu__DOT__SYNC = 7U;
    static constexpr CData/*3:0*/ dproc__DOT__ctu__DOT__PULSE_WRITE = 8U;
    static constexpr CData/*3:0*/ dproc__DOT__ctu__DOT__PULSE_WRITE_TRIG = 9U;
    static constexpr CData/*3:0*/ dproc__DOT__ctu__DOT__DONE = 0x0aU;
    static constexpr CData/*3:0*/ dproc__DOT__ctu__DOT__PULSE_RESET = 0x0bU;
    static constexpr CData/*3:0*/ dproc__DOT__ctu__DOT__IDLE = 0x0cU;
    static constexpr IData/*31:0*/ ENV_WIDTH = 0x00000018U;
    static constexpr IData/*31:0*/ PHASE_WIDTH = 0x00000011U;
    static constexpr IData/*31:0*/ FREQ_WIDTH = 9U;
    static constexpr IData/*31:0*/ AMP_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ CFG_WIDTH = 4U;
    static constexpr IData/*31:0*/ SYNC_BARRIER_WIDTH = 8U;
    static constexpr IData/*31:0*/ REG_ADDR_WIDTH = 4U;
    static constexpr IData/*31:0*/ CMD_WIDTH = 0x00000080U;
    static constexpr IData/*31:0*/ CMD_ADDR_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ dproc__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ dproc__DOT__CMD_WIDTH = 0x00000080U;
    static constexpr IData/*31:0*/ dproc__DOT__CMD_ADDR_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ dproc__DOT__REG_ADDR_WIDTH = 4U;
    static constexpr IData/*31:0*/ dproc__DOT__SYNC_BARRIER_WIDTH = 8U;
    static constexpr IData/*31:0*/ dproc__DOT__DAC_SAMPLES_PER_CLK = 4U;
    static constexpr IData/*31:0*/ dproc__DOT__CMD_MEM_READ_LATENCY = 3U;
    static constexpr IData/*31:0*/ dproc__DOT__OPCODE_WIDTH = 8U;
    static constexpr IData/*31:0*/ dproc__DOT__ALU_OPCODE_WIDTH = 3U;
    static constexpr IData/*31:0*/ dproc__DOT__PULSE_CMD_I_WIDTH = 0x0000004fU;
    static constexpr IData/*31:0*/ dproc__DOT__INSTR_PTR_LSB = 0x00000044U;
    static constexpr IData/*31:0*/ dproc__DOT__FPROC_LSB = 0x00000034U;
    static constexpr IData/*31:0*/ dproc__DOT__ALU_INPUT_SPACE = 0x0000002cU;
    static constexpr IData/*31:0*/ dproc__DOT__instr__DOT__WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ dproc__DOT__regs__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ dproc__DOT__regs__DOT__ADDR_WIDTH = 4U;
    static constexpr IData/*31:0*/ dproc__DOT__ctu__DOT__MEM_READ_CYCLES = 3U;
    static constexpr IData/*31:0*/ dproc__DOT__ctu__DOT__MEM_WAIT_STATE = 0U;
    static constexpr IData/*31:0*/ dproc__DOT__ctu__DOT__DECODE_STATE = 1U;
    static constexpr IData/*31:0*/ dproc__DOT__ctu__DOT__ALU_PROC_STATE_0 = 2U;
    static constexpr IData/*31:0*/ dproc__DOT__ctu__DOT__ALU_PROC_STATE_1 = 3U;
    static constexpr IData/*31:0*/ dproc__DOT__ctu__DOT__FPROC_WAIT_STATE = 4U;
    static constexpr IData/*31:0*/ dproc__DOT__ctu__DOT__SYNC_WAIT_STATE = 6U;
    static constexpr IData/*31:0*/ dproc__DOT__ctu__DOT__QCLK_RST_STATE = 7U;
    static constexpr IData/*31:0*/ dproc__DOT__ctu__DOT__DONE_STATE = 9U;
    static constexpr IData/*31:0*/ dproc__DOT__ctu__DOT__CMD_BUFFER_REGWRITE_SEL = 0U;
    static constexpr IData/*31:0*/ dproc__DOT__ctu__DOT__ALU_REGWRITE_SEL = 1U;
    static constexpr IData/*31:0*/ dproc__DOT__ctu__DOT__ALU_IN0_CMD_SEL = 0U;
    static constexpr IData/*31:0*/ dproc__DOT__ctu__DOT__ALU_IN0_REG_SEL = 1U;
    static constexpr IData/*31:0*/ dproc__DOT__myalu__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ dproc__DOT__myclk__DOT__WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ dproc__DOT__myclk__DOT__ALU_ADD_LATENCY = 3U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__ENV_WORD_WIDTH = 0x00000018U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__FREQ_WIDTH = 9U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__AMP_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__PHASE_WIDTH = 0x00000011U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__CFG_WIDTH = 4U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__PULSE_CMD_WIDTH = 0x0000004fU;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__ENV_INPUT_MSB = 0x0000004cU;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__ENV_INPUT_LSB = 0x00000035U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__PHASE_INPUT_MSB = 0x00000032U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__PHASE_INPUT_LSB = 0x00000022U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__FREQ_INPUT_MSB = 0x0000001fU;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__FREQ_INPUT_LSB = 0x00000017U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__AMP_INPUT_MSB = 0x00000014U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__AMP_INPUT_LSB = 5U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__CFG_INPUT_MSB = 3U;
    static constexpr IData/*31:0*/ dproc__DOT__pulsereg__DOT__CFG_INPUT_LSB = 0U;

    // CONSTRUCTORS
    Vtop_proc_core__Qz1_Rz2_RBz3(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_proc_core__Qz1_Rz2_RBz3();
    VL_UNCOPYABLE(Vtop_proc_core__Qz1_Rz2_RBz3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
