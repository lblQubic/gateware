// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CMD_MEM_IFACE__C10_M80_MB1_H_
#define VERILATED_VTOP_CMD_MEM_IFACE__C10_M80_MB1_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_cmd_mem_iface__C10_M80_MB1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    SData/*15:0*/ instr_ptr;
    VlWide<4>/*127:0*/ cmd_read;
    VlUnpacked<VlWide<4>/*127:0*/, 1> mem_bus;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ CMD_ADDR_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ MEM_WIDTH = 0x00000080U;
    static constexpr IData/*31:0*/ MEM_TO_CMD = 1U;
    static constexpr IData/*31:0*/ CMD_WIDTH = 0x00000080U;

    // CONSTRUCTORS
    Vtop_cmd_mem_iface__C10_M80_MB1(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_cmd_mem_iface__C10_M80_MB1();
    VL_UNCOPYABLE(Vtop_cmd_mem_iface__C10_M80_MB1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_cmd_mem_iface__C10_M80_MB1* obj);

#endif  // guard
