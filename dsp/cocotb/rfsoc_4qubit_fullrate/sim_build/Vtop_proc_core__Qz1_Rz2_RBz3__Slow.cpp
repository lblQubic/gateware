// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_proc_core__Qz1_Rz2_RBz3.h"

// Parameter definitions for Vtop_proc_core__Qz1_Rz2_RBz3
constexpr CData/*1:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__INST_PTR_DEFAULT_EN;
constexpr CData/*1:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__INST_PTR_SYNC_EN;
constexpr CData/*1:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__INST_PTR_FPROC_EN;
constexpr CData/*1:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__INST_PTR_PULSE_EN;
constexpr CData/*1:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_IN1_QCLK_SEL;
constexpr CData/*1:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_IN1_REG_SEL;
constexpr CData/*1:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_IN1_FPROC_SEL;
constexpr CData/*1:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__INSTR_PTR_LOAD_EN_ALU;
constexpr CData/*1:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__INSTR_PTR_LOAD_EN_TRUE;
constexpr CData/*1:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__INSTR_PTR_LOAD_EN_FALSE;
constexpr CData/*2:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_ID0;
constexpr CData/*2:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_ID1;
constexpr CData/*2:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_ADD;
constexpr CData/*2:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_SUB;
constexpr CData/*2:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_EQ;
constexpr CData/*2:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_LE;
constexpr CData/*2:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_GE;
constexpr CData/*2:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_0;
constexpr CData/*3:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__REG_ALU;
constexpr CData/*3:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__JUMP_I;
constexpr CData/*3:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__JUMP_COND;
constexpr CData/*3:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_FPROC;
constexpr CData/*3:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__JUMP_FPROC;
constexpr CData/*3:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__INC_QCLK;
constexpr CData/*3:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__SYNC;
constexpr CData/*3:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__PULSE_WRITE;
constexpr CData/*3:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__PULSE_WRITE_TRIG;
constexpr CData/*3:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__DONE;
constexpr CData/*3:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__PULSE_RESET;
constexpr CData/*3:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__IDLE;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::ENV_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::PHASE_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::FREQ_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::AMP_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::CFG_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::SYNC_BARRIER_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::REG_ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::CMD_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::CMD_ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__CMD_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__CMD_ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__REG_ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__SYNC_BARRIER_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__DAC_SAMPLES_PER_CLK;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__CMD_MEM_READ_LATENCY;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__OPCODE_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ALU_OPCODE_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__PULSE_CMD_I_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__INSTR_PTR_LSB;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__FPROC_LSB;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ALU_INPUT_SPACE;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__instr__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__regs__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__regs__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__MEM_READ_CYCLES;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__MEM_WAIT_STATE;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__DECODE_STATE;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_PROC_STATE_0;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_PROC_STATE_1;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__FPROC_WAIT_STATE;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__SYNC_WAIT_STATE;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__QCLK_RST_STATE;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__DONE_STATE;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__CMD_BUFFER_REGWRITE_SEL;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_REGWRITE_SEL;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_IN0_CMD_SEL;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__ctu__DOT__ALU_IN0_REG_SEL;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__myalu__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__myclk__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__myclk__DOT__ALU_ADD_LATENCY;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__ENV_WORD_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__FREQ_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__AMP_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__PHASE_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__CFG_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__PULSE_CMD_WIDTH;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__ENV_INPUT_MSB;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__ENV_INPUT_LSB;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__PHASE_INPUT_MSB;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__PHASE_INPUT_LSB;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__FREQ_INPUT_MSB;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__FREQ_INPUT_LSB;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__AMP_INPUT_MSB;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__AMP_INPUT_LSB;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__CFG_INPUT_MSB;
constexpr IData/*31:0*/ Vtop_proc_core__Qz1_Rz2_RBz3::dproc__DOT__pulsereg__DOT__CFG_INPUT_LSB;


void Vtop_proc_core__Qz1_Rz2_RBz3___ctor_var_reset(Vtop_proc_core__Qz1_Rz2_RBz3* vlSelf);

Vtop_proc_core__Qz1_Rz2_RBz3::Vtop_proc_core__Qz1_Rz2_RBz3(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_proc_core__Qz1_Rz2_RBz3___ctor_var_reset(this);
}

void Vtop_proc_core__Qz1_Rz2_RBz3::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_proc_core__Qz1_Rz2_RBz3::~Vtop_proc_core__Qz1_Rz2_RBz3() {
}
