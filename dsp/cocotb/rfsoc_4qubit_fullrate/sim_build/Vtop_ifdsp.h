// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef _VTOP_IFDSP_H_
#define _VTOP_IFDSP_H_  // guard

#include "verilated.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedFst;


//----------

VL_MODULE(Vtop_ifdsp) {
  public:
    
    // LOCAL SIGNALS
    CData/*0:0*/ clk;
    CData/*0:0*/ reset;
    CData/*0:0*/ stb_start;
    CData/*0:0*/ start;
    CData/*0:0*/ resetacc;
    CData/*0:0*/ stb_reset_bram_read;
    CData/*0:0*/ lastshotdone;
    CData/*0:0*/ acqbufreset;
    CData/*0:0*/ dacmonreset;
    CData/*4:0*/ shift;
    CData/*2:0*/ procdone;
    SData/*9:0*/ addr_accbuf_mon0;
    SData/*9:0*/ addr_accbuf_mon1;
    SData/*9:0*/ addr_accbuf_mon2;
    SData/*9:0*/ addr_accbuf_mon3;
    SData/*15:0*/ decimator;
    SData/*15:0*/ mixbb1sel;
    SData/*15:0*/ mixbb2sel;
    SData/*15:0*/ test_amp;
    IData/*31:0*/ nshot;
    IData/*31:0*/ shotcnt;
    IData/*31:0*/ delayaftertrig;
    IData/*23:0*/ test_freq;
    QData/*63:0*/ adc[2];
    WData/*255:0*/ dac[4][8];
    QData/*63:0*/ dlo[3];
    WData/*255:0*/ data_dacmon[4][8];
    SData/*8:0*/ addr_dacmon[4];
    CData/*0:0*/ we_dacmon[4];
    QData/*63:0*/ data_accbuf[3];
    SData/*9:0*/ addr_accbuf[3];
    CData/*0:0*/ we_accbuf[3];
    QData/*63:0*/ data_acqbuf[2];
    SData/*11:0*/ addr_acqbuf[2];
    CData/*0:0*/ we_acqbuf[2];
    WData/*127:0*/ data_command[3][4];
    SData/*10:0*/ addr_command[3];
    CData/*0:0*/ we_command[3];
    WData/*511:0*/ data_qdrvenv[3][16];
    CData/*7:0*/ addr_qdrvenv[3];
    CData/*0:0*/ we_qdrvenv[3];
    IData/*31:0*/ data_rdloenv[3];
    SData/*11:0*/ addr_rdloenv[3];
    CData/*0:0*/ we_rdloenv[3];
    IData/*31:0*/ data_rdrvenv[3];
    SData/*11:0*/ addr_rdrvenv[3];
    CData/*0:0*/ we_rdrvenv[3];
    WData/*511:0*/ data_rdrvfreq[3][16];
    SData/*8:0*/ addr_rdrvfreq[3];
    CData/*0:0*/ we_rdrvfreq[3];
    WData/*127:0*/ data_rdlofreq[3][4];
    SData/*8:0*/ addr_rdlofreq[3];
    CData/*0:0*/ we_rdlofreq[3];
    WData/*511:0*/ data_qdrvfreq[3][16];
    SData/*8:0*/ addr_qdrvfreq[3];
    CData/*0:0*/ we_qdrvfreq[3];
    IData/*31:0*/ coef[4][4];
    SData/*15:0*/ acqchansel[2];
    SData/*15:0*/ dacmonchansel[2];
    
    // INTERNAL VARIABLES
  private:
    Vtop__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_ifdsp);  ///< Copying not allowed
  public:
    Vtop_ifdsp(const char* name = "TOP");
    ~Vtop_ifdsp();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
