// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_FPROC_IFACE_H_
#define VERILATED_VTOP_FPROC_IFACE_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_fproc_iface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ id;
    CData/*0:0*/ enable;
    CData/*0:0*/ ready;
    IData/*31:0*/ data;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ FPROC_ID_WIDTH = 8U;
    static constexpr IData/*31:0*/ FPROC_RESULT_WIDTH = 0x00000020U;

    // CONSTRUCTORS
    Vtop_fproc_iface(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_fproc_iface();
    VL_UNCOPYABLE(Vtop_fproc_iface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_fproc_iface* obj);

#endif  // guard
