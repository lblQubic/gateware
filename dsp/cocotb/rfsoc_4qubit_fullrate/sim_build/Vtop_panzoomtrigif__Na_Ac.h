// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_PANZOOMTRIGIF__NA_AC_H_
#define VERILATED_VTOP_PANZOOMTRIGIF__NA_AC_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_panzoomtrigif__Na_Ac final : public VerilatedModule {
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
    SData/*11:0*/ addr;
    SData/*11:0*/ nextaddr;
    IData/*31:0*/ state;
    IData/*31:0*/ nextstate;
    QData/*63:0*/ data;
    QData/*63:0*/ datasel;
    VlUnpacked<QData/*63:0*/, 10> chan;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ NCHAN = 0x0000000aU;
    static constexpr IData/*31:0*/ ADDRWIDTH = 0x0000000cU;
    static constexpr IData/*31:0*/ DATAWIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ SELWIDTH = 5U;

    // CONSTRUCTORS
    Vtop_panzoomtrigif__Na_Ac(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_panzoomtrigif__Na_Ac();
    VL_UNCOPYABLE(Vtop_panzoomtrigif__Na_Ac);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_panzoomtrigif__Na_Ac* obj);

#endif  // guard
