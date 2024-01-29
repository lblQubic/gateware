// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_PULSE_IFACE_H_
#define VERILATED_VTOP_PULSE_IFACE_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_pulse_iface final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ cfg;
    CData/*0:0*/ cstrobe;
    CData/*0:0*/ reset;
    SData/*8:0*/ freq;
    SData/*15:0*/ amp;
    IData/*16:0*/ phase;
    IData/*23:0*/ env_word;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ PHASE_WIDTH = 0x00000011U;
    static constexpr IData/*31:0*/ FREQ_WIDTH = 9U;
    static constexpr IData/*31:0*/ AMP_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ CFG_WIDTH = 4U;
    static constexpr IData/*31:0*/ ENV_WORD_WIDTH = 0x00000018U;

    // CONSTRUCTORS
    Vtop_pulse_iface(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_pulse_iface();
    VL_UNCOPYABLE(Vtop_pulse_iface);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_pulse_iface* obj);

#endif  // guard
