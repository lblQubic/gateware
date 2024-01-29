// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_IFELEMENT__EC_F9_FB80_H_
#define VERILATED_VTOP_IFELEMENT__EC_F9_FB80_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_ifelement__Ec_F9_FB80 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
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
    VlWide<4>/*127:0*/ command;
    VlWide<4>/*127:0*/ command_d;
    VlWide<4>/*127:0*/ command_d2;
    IData/*26:0*/ trigt;
    QData/*63:0*/ multix;
    QData/*63:0*/ multiy;
    QData/*63:0*/ multix_r;
    QData/*63:0*/ multiy_r;
    VlUnpacked<SData/*15:0*/, 4> multix_check;
    VlUnpacked<SData/*15:0*/, 4> multiy_check;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ ENV_ADDRWIDTH = 0x0000000cU;
    static constexpr IData/*31:0*/ ENV_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ TCNTWIDTH = 0x0000001bU;
    static constexpr IData/*31:0*/ FREQ_ADDRWIDTH = 9U;
    static constexpr IData/*31:0*/ FREQ_DATAWIDTH = 0x00000080U;
    static constexpr IData/*31:0*/ NSLICE = 4U;

    // CONSTRUCTORS
    Vtop_ifelement__Ec_F9_FB80(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_ifelement__Ec_F9_FB80();
    VL_UNCOPYABLE(Vtop_ifelement__Ec_F9_FB80);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_ifelement__Ec_F9_FB80* obj);

#endif  // guard
