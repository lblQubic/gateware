// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_PULSE_IFACE_H_
#define _VTOP_PULSE_IFACE_H_  // guard

#include "verilated.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedFst;


//----------

VL_MODULE(Vtop_pulse_iface) {
  public:
    
    // LOCAL SIGNALS
    CData/*3:0*/ cfg;
    CData/*0:0*/ cstrobe;
    CData/*0:0*/ reset;
    SData/*8:0*/ freq;
    SData/*15:0*/ amp;
    IData/*16:0*/ phase;
    IData/*23:0*/ env_word;
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_pulse_iface);  ///< Copying not allowed
  public:
    Vtop_pulse_iface(const char* name = "TOP");
    ~Vtop_pulse_iface();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
