// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_IFSD_H_
#define VERILATED_VTOP_IFSD_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_ifsd final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VlUnpacked<IData/*17:0*/, 65> weight_bias;
    VlUnpacked<IData/*31:0*/, 2> normalizer_min;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_ifsd(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_ifsd();
    VL_UNCOPYABLE(Vtop_ifsd);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_ifsd* obj);

#endif  // guard
