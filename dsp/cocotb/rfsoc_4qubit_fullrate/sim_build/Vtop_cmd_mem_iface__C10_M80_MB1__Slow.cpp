// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_cmd_mem_iface__C10_M80_MB1.h"

// Parameter definitions for Vtop_cmd_mem_iface__C10_M80_MB1
constexpr IData/*31:0*/ Vtop_cmd_mem_iface__C10_M80_MB1::CMD_ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop_cmd_mem_iface__C10_M80_MB1::MEM_WIDTH;
constexpr IData/*31:0*/ Vtop_cmd_mem_iface__C10_M80_MB1::MEM_TO_CMD;
constexpr IData/*31:0*/ Vtop_cmd_mem_iface__C10_M80_MB1::CMD_WIDTH;


void Vtop_cmd_mem_iface__C10_M80_MB1___ctor_var_reset(Vtop_cmd_mem_iface__C10_M80_MB1* vlSelf);

Vtop_cmd_mem_iface__C10_M80_MB1::Vtop_cmd_mem_iface__C10_M80_MB1(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_cmd_mem_iface__C10_M80_MB1___ctor_var_reset(this);
}

void Vtop_cmd_mem_iface__C10_M80_MB1::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_cmd_mem_iface__C10_M80_MB1::~Vtop_cmd_mem_iface__C10_M80_MB1() {
}
