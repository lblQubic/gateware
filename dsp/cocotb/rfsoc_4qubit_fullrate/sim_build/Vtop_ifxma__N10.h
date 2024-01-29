// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_IFXMA__N10_H_
#define VERILATED_VTOP_IFXMA__N10_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_ifxma__N10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VlUnpacked<VlUnpacked<IData/*31:0*/, 16>, 16> coef;
    VlUnpacked<VlWide<8>/*255:0*/, 16> sumcplxx;
    VlUnpacked<VlWide<8>/*255:0*/, 16> sumcplxy;
    VlUnpacked<VlWide<8>/*255:0*/, 16> daccplxx;
    VlUnpacked<VlWide<8>/*255:0*/, 16> daccplxy;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ NDAC = 0x00000010U;
    static constexpr IData/*31:0*/ DAC_AXIS_DATAWIDTH = 0x00000100U;

    // CONSTRUCTORS
    Vtop_ifxma__N10(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_ifxma__N10();
    VL_UNCOPYABLE(Vtop_ifxma__N10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_ifxma__N10* obj);

#endif  // guard
