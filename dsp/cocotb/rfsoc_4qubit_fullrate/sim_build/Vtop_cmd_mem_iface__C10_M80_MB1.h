// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_CMD_MEM_IFACE__C10_M80_MB1_H_
#define _VTOP_CMD_MEM_IFACE__C10_M80_MB1_H_  // guard

#include "verilated.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedFst;


//----------

VL_MODULE(Vtop_cmd_mem_iface__C10_M80_MB1) {
  public:
    
    // LOCAL SIGNALS
    SData/*15:0*/ instr_ptr;
    WData/*127:0*/ cmd_read[4];
    WData/*127:0*/ mem_bus[1][4];
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_cmd_mem_iface__C10_M80_MB1);  ///< Copying not allowed
  public:
    Vtop_cmd_mem_iface__C10_M80_MB1(const char* name = "TOP");
    ~Vtop_cmd_mem_iface__C10_M80_MB1();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__procinst__BRA__0__KET____DOT__proc_core__DOT__memif__1(Vtop__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
