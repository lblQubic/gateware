// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_IFELEMENT__EC_EB20_F9_FB80_H_
#define _VTOP_IFELEMENT__EC_EB20_F9_FB80_H_  // guard

#include "verilated.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedFst;


//----------

VL_MODULE(Vtop_ifelement__Ec_EB20_F9_FB80) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ reset;
    CData/*0:0*/ cmdstb;
    CData/*0:0*/ dummy_cmdstb_sr;
    CData/*1:0*/ mode;
    CData/*0:0*/ valid;
    CData/*0:0*/ valid_r;
    CData/*0:0*/ cw_d0;
    CData/*0:0*/ cw_d1;
    CData/*0:0*/ cw_d2;
    CData/*0:0*/ cw_d3;
    CData/*0:0*/ cw_d4;
    CData/*0:0*/ prepbusy;
    CData/*0:0*/ pulsebusy;
    CData/*0:0*/ postprobusy;
    CData/*0:0*/ busy_r;
    CData/*0:0*/ busy;
    CData/*0:0*/ cw;
    CData/*0:0*/ cw2;
    CData/*4:0*/ cw_sr;
    CData/*0:0*/ dummycw_sr;
    SData/*15:0*/ cmdstb_sr;
    SData/*15:0*/ reset_sr;
    SData/*11:0*/ envstart;
    SData/*11:0*/ envlength;
    SData/*15:0*/ ampx;
    SData/*15:0*/ ampy;
    SData/*8:0*/ freqaddr;
    IData/*16:0*/ pini;
    IData/*26:0*/ tcnt;
    WData/*127:0*/ command[4];
    WData/*127:0*/ command_d[4];
    WData/*127:0*/ command_d2[4];
    IData/*26:0*/ trigt;
    QData/*63:0*/ multix;
    QData/*63:0*/ multiy;
    QData/*63:0*/ multix_r;
    QData/*63:0*/ multiy_r;
    SData/*15:0*/ multix_check[4];
    SData/*15:0*/ multiy_check[4];
    
    // LOCAL VARIABLES
    SData/*15:0*/ __Vdly__reset_sr;
    SData/*15:0*/ __Vdly__cmdstb_sr;
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_ifelement__Ec_EB20_F9_FB80);  ///< Copying not allowed
  public:
    Vtop_ifelement__Ec_EB20_F9_FB80(const char* name = "TOP");
    ~Vtop_ifelement__Ec_EB20_F9_FB80();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _initial__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _multiclk__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____13(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____7(Vtop__Syms* __restrict vlSymsp);
    void _sequent__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____8(Vtop__Syms* __restrict vlSymsp);
    void _settle__TOP__dsp_sim_toplevel__DOT__dspmod__DOT__rdloelem__BRA__2__KET____4(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
