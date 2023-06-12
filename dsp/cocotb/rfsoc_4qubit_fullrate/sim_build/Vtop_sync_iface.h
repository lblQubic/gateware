// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_SYNC_IFACE_H_
#define _VTOP_SYNC_IFACE_H_  // guard

#include "verilated.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedFst;


//----------

VL_MODULE(Vtop_sync_iface) {
  public:
    
    // LOCAL SIGNALS
    CData/*7:0*/ barrier;
    CData/*0:0*/ enable;
    CData/*0:0*/ ready;
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_sync_iface);  ///< Copying not allowed
  public:
    Vtop_sync_iface(const char* name = "TOP");
    ~Vtop_sync_iface();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
