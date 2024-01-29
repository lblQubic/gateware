// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_SYNC_IFACE_H_
#define VERILATED_VTOP_SYNC_IFACE_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_sync_iface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ barrier;
    CData/*0:0*/ enable;
    CData/*0:0*/ ready;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ SYNC_BARRIER_WIDTH = 8U;

    // CONSTRUCTORS
    Vtop_sync_iface(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_sync_iface();
    VL_UNCOPYABLE(Vtop_sync_iface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_sync_iface* obj);

#endif  // guard
