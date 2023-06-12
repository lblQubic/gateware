// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_PANZOOMTRIGIF__N4_A9_D100_H_
#define _VTOP_PANZOOMTRIGIF__N4_A9_D100_H_  // guard

#include "verilated.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedFst;


//----------

VL_MODULE(Vtop_panzoomtrigif__N4_A9_D100) {
  public:
    
    // LOCAL SIGNALS
    CData/*0:0*/ clk;
    CData/*0:0*/ reset;
    CData/*0:0*/ stb_start;
    CData/*0:0*/ trig;
    CData/*0:0*/ delayaftertrigcnt0;
    CData/*7:0*/ decimator;
    CData/*7:0*/ decimatorcnt;
    CData/*0:0*/ decimator0;
    CData/*0:0*/ we;
    CData/*4:0*/ chansel;
    CData/*0:0*/ buffull;
    SData/*15:0*/ delayaftertrigcnt;
    SData/*15:0*/ delayaftertrig;
    SData/*8:0*/ addr;
    SData/*8:0*/ nextaddr;
    WData/*255:0*/ data[8];
    WData/*255:0*/ datasel[8];
    IData/*31:0*/ state;
    IData/*31:0*/ nextstate;
    WData/*255:0*/ chan[4][8];
    
    // LOCAL VARIABLES
    CData/*7:0*/ __Vdly__decimatorcnt;
    SData/*15:0*/ __Vdly__delayaftertrigcnt;
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_panzoomtrigif__N4_A9_D100);  ///< Copying not allowed
  public:
    Vtop_panzoomtrigif__N4_A9_D100(const char* name = "TOP");
    ~Vtop_panzoomtrigif__N4_A9_D100();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____2(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__3__KET____15(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____11(Vtop__Syms* __restrict vlSymsp);
    void _settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__dacmonpztif__BRA__4__KET____6(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
