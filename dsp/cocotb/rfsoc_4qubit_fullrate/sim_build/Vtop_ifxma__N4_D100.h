// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_IFXMA__N4_D100_H_
#define _VTOP_IFXMA__N4_D100_H_  // guard

#include "verilated.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedFst;


//----------

VL_MODULE(Vtop_ifxma__N4_D100) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ coef[4][4];
    WData/*255:0*/ sumcplxx[4][8];
    WData/*255:0*/ sumcplxy[4][8];
    WData/*255:0*/ daccplxx[4][8];
    WData/*255:0*/ daccplxy[4][8];
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_ifxma__N4_D100);  ///< Copying not allowed
  public:
    Vtop_ifxma__N4_D100(const char* name = "TOP");
    ~Vtop_ifxma__N4_D100();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
