// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_PANZOOMTRIGIF__N4_D100_H_
#define VERILATED_VTOP_PANZOOMTRIGIF__N4_D100_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_panzoomtrigif__N4_D100 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
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
    VlWide<8>/*255:0*/ data;
    VlWide<8>/*255:0*/ datasel;
    IData/*31:0*/ state;
    IData/*31:0*/ nextstate;
    VlUnpacked<VlWide<8>/*255:0*/, 4> chan;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ NCHAN = 4U;
    static constexpr IData/*31:0*/ ADDRWIDTH = 9U;
    static constexpr IData/*31:0*/ DATAWIDTH = 0x00000100U;
    static constexpr IData/*31:0*/ SELWIDTH = 3U;

    // CONSTRUCTORS
    Vtop_panzoomtrigif__N4_D100(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_panzoomtrigif__N4_D100();
    VL_UNCOPYABLE(Vtop_panzoomtrigif__N4_D100);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_panzoomtrigif__N4_D100* obj);

#endif  // guard
