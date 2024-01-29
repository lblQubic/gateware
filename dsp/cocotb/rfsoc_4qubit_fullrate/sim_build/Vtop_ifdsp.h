// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_IFDSP_H_
#define VERILATED_VTOP_IFDSP_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_ifdsp final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
        CData/*7:0*/ procdone;
        SData/*9:0*/ addr_accbuf_mon0;
        SData/*9:0*/ addr_accbuf_mon1;
        SData/*9:0*/ addr_accbuf_mon2;
        SData/*9:0*/ addr_accbuf_mon3;
        SData/*9:0*/ addr_sdbuf_mon0;
        SData/*9:0*/ addr_sdbuf_mon1;
        SData/*15:0*/ decimator;
        SData/*15:0*/ mixbb1sel;
        SData/*15:0*/ mixbb2sel;
        SData/*15:0*/ test_amp;
        IData/*31:0*/ nshot;
        IData/*31:0*/ shotcnt;
        IData/*31:0*/ delayaftertrig;
        IData/*23:0*/ test_freq;
        VlUnpacked<QData/*63:0*/, 2> adc;
        VlUnpacked<VlWide<8>/*255:0*/, 16> dac;
        VlUnpacked<QData/*63:0*/, 8> dlo;
        VlUnpacked<VlWide<8>/*255:0*/, 4> data_dacmon;
        VlUnpacked<SData/*8:0*/, 4> addr_dacmon;
        VlUnpacked<CData/*0:0*/, 4> we_dacmon;
        VlUnpacked<QData/*63:0*/, 8> data_accbuf;
        VlUnpacked<SData/*9:0*/, 8> addr_accbuf;
        VlUnpacked<CData/*0:0*/, 8> we_accbuf;
        VlUnpacked<IData/*31:0*/, 8> data_sdbuf;
        VlUnpacked<SData/*9:0*/, 8> addr_sdbuf;
        VlUnpacked<CData/*0:0*/, 8> we_sdbuf;
        VlUnpacked<QData/*63:0*/, 2> data_acqbuf;
        VlUnpacked<SData/*11:0*/, 2> addr_acqbuf;
        VlUnpacked<CData/*0:0*/, 2> we_acqbuf;
        VlUnpacked<VlWide<4>/*127:0*/, 8> data_command;
        VlUnpacked<SData/*10:0*/, 8> addr_command;
        VlUnpacked<CData/*0:0*/, 8> we_command;
        VlUnpacked<VlWide<16>/*511:0*/, 8> data_qdrvenv;
        VlUnpacked<CData/*7:0*/, 8> addr_qdrvenv;
        VlUnpacked<CData/*0:0*/, 8> we_qdrvenv;
        VlUnpacked<IData/*31:0*/, 8> data_rdloenv;
        VlUnpacked<SData/*11:0*/, 8> addr_rdloenv;
        VlUnpacked<CData/*0:0*/, 8> we_rdloenv;
        VlUnpacked<IData/*31:0*/, 8> data_rdrvenv;
        VlUnpacked<SData/*11:0*/, 8> addr_rdrvenv;
        VlUnpacked<CData/*0:0*/, 8> we_rdrvenv;
        VlUnpacked<VlWide<16>/*511:0*/, 8> data_rdrvfreq;
        VlUnpacked<SData/*8:0*/, 8> addr_rdrvfreq;
        VlUnpacked<CData/*0:0*/, 8> we_rdrvfreq;
        VlUnpacked<VlWide<4>/*127:0*/, 8> data_rdlofreq;
        VlUnpacked<SData/*8:0*/, 8> addr_rdlofreq;
        VlUnpacked<CData/*0:0*/, 8> we_rdlofreq;
        VlUnpacked<VlWide<16>/*511:0*/, 8> data_qdrvfreq;
        VlUnpacked<SData/*8:0*/, 8> addr_qdrvfreq;
        VlUnpacked<CData/*0:0*/, 8> we_qdrvfreq;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 16>, 16> coef;
        VlUnpacked<VlUnpacked<IData/*17:0*/, 65>, 8> weight_bias;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 2>, 8> normalizer_min;
    };
    struct {
        VlUnpacked<SData/*15:0*/, 2> acqchansel;
        VlUnpacked<SData/*15:0*/, 2> dacmonchansel;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*7:0*/ INIT_acqbuf0 = 0U;
    static constexpr CData/*7:0*/ INIT_acqbuf1 = 0U;
    static constexpr CData/*7:0*/ INIT_command0 = 0U;
    static constexpr CData/*7:0*/ INIT_command1 = 0U;
    static constexpr CData/*7:0*/ INIT_command2 = 0U;
    static constexpr CData/*7:0*/ INIT_command3 = 0U;
    static constexpr CData/*7:0*/ INIT_command4 = 0U;
    static constexpr CData/*7:0*/ INIT_command5 = 0U;
    static constexpr CData/*7:0*/ INIT_command6 = 0U;
    static constexpr CData/*7:0*/ INIT_command7 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvfreq0 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvfreq1 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvfreq2 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvfreq3 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvfreq4 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvfreq5 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvfreq6 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvfreq7 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvfreq0 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvfreq1 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvfreq2 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvfreq3 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvfreq4 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvfreq5 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvfreq6 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvfreq7 = 0U;
    static constexpr CData/*7:0*/ INIT_dacmon0 = 0U;
    static constexpr CData/*7:0*/ INIT_dacmon1 = 0U;
    static constexpr CData/*7:0*/ INIT_dacmon2 = 0U;
    static constexpr CData/*7:0*/ INIT_dacmon3 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvenv0 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvenv1 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvenv2 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvenv3 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvenv4 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvenv5 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvenv6 = 0U;
    static constexpr CData/*7:0*/ INIT_qdrvenv7 = 0U;
    static constexpr CData/*7:0*/ INIT_rdloenv0 = 0U;
    static constexpr CData/*7:0*/ INIT_rdloenv1 = 0U;
    static constexpr CData/*7:0*/ INIT_rdloenv2 = 0U;
    static constexpr CData/*7:0*/ INIT_rdloenv3 = 0U;
    static constexpr CData/*7:0*/ INIT_rdloenv4 = 0U;
    static constexpr CData/*7:0*/ INIT_rdloenv5 = 0U;
    static constexpr CData/*7:0*/ INIT_rdloenv6 = 0U;
    static constexpr CData/*7:0*/ INIT_rdloenv7 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvenv0 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvenv1 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvenv2 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvenv3 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvenv4 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvenv5 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvenv6 = 0U;
    static constexpr CData/*7:0*/ INIT_rdrvenv7 = 0U;
    static constexpr CData/*7:0*/ INIT_accbuf0 = 0U;
    static constexpr CData/*7:0*/ INIT_accbuf1 = 0U;
    static constexpr CData/*7:0*/ INIT_accbuf2 = 0U;
    static constexpr CData/*7:0*/ INIT_accbuf3 = 0U;
    static constexpr CData/*7:0*/ INIT_accbuf4 = 0U;
    static constexpr CData/*7:0*/ INIT_accbuf5 = 0U;
    static constexpr CData/*7:0*/ INIT_accbuf6 = 0U;
    static constexpr CData/*7:0*/ INIT_accbuf7 = 0U;
    static constexpr CData/*7:0*/ INIT_rdlofreq0 = 0U;
    static constexpr CData/*7:0*/ INIT_rdlofreq1 = 0U;
    static constexpr CData/*7:0*/ INIT_rdlofreq2 = 0U;
    static constexpr CData/*7:0*/ INIT_rdlofreq3 = 0U;
    static constexpr CData/*7:0*/ INIT_rdlofreq4 = 0U;
    static constexpr CData/*7:0*/ INIT_rdlofreq5 = 0U;
    static constexpr CData/*7:0*/ INIT_rdlofreq6 = 0U;
    static constexpr CData/*7:0*/ INIT_rdlofreq7 = 0U;
    static constexpr CData/*7:0*/ INIT_sdbuf0 = 0U;
    static constexpr CData/*7:0*/ INIT_sdbuf1 = 0U;
    static constexpr CData/*7:0*/ INIT_sdbuf2 = 0U;
    static constexpr CData/*7:0*/ INIT_sdbuf3 = 0U;
    static constexpr CData/*7:0*/ INIT_sdbuf4 = 0U;
    static constexpr CData/*7:0*/ INIT_sdbuf5 = 0U;
    static constexpr CData/*7:0*/ INIT_sdbuf6 = 0U;
    static constexpr CData/*7:0*/ INIT_sdbuf7 = 0U;
    static constexpr IData/*31:0*/ DEBUG = 0x74727565U;
    static constexpr IData/*31:0*/ LB1_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ LB1_ADDRWIDTH = 0x0000000aU;
    static constexpr IData/*31:0*/ LB2_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ LB2_ADDRWIDTH = 0x0000000aU;
    static constexpr IData/*31:0*/ LB3_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ LB3_ADDRWIDTH = 0x00000014U;
    static constexpr IData/*31:0*/ LB4_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ LB4_ADDRWIDTH = 0x00000014U;
    static constexpr IData/*31:0*/ DAC_AXIS_DATAWIDTH = 0x00000100U;
    static constexpr IData/*31:0*/ ADC_AXIS_DATAWIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ BRAMADDRWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ NPROC = 8U;
    static constexpr IData/*31:0*/ NADC = 2U;
    static constexpr IData/*31:0*/ NDLO1 = 8U;
    static constexpr IData/*31:0*/ NDLO2 = 0U;
    static constexpr IData/*31:0*/ NDAC = 0x00000010U;
    static constexpr IData/*31:0*/ NDACMON = 4U;
    static constexpr IData/*31:0*/ NACQ = 2U;
    static constexpr IData/*31:0*/ RDLOINTPRATIO = 4U;
    static constexpr IData/*31:0*/ RDRVINTPRATIO = 0x00000010U;
    static constexpr IData/*31:0*/ NCFGRESETN = 8U;
    static constexpr IData/*31:0*/ NDSPRESETN = 0x0000002aU;
    static constexpr IData/*31:0*/ NPSRESETN = 3U;
    static constexpr IData/*31:0*/ NADC3RESETN = 1U;
    static constexpr IData/*31:0*/ ACCBUF_R_ADDRWIDTH = 0x0000000bU;
    static constexpr IData/*31:0*/ ACCBUF_R_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ ACCBUF_R_DEPTH = 0x00000800U;
    static constexpr IData/*31:0*/ ACCBUF_W_ADDRWIDTH = 0x0000000aU;
    static constexpr IData/*31:0*/ ACCBUF_W_DATAWIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ ACCBUF_W_DEPTH = 0x00000400U;
    static constexpr IData/*31:0*/ ACQBUF_R_ADDRWIDTH = 0x0000000dU;
    static constexpr IData/*31:0*/ ACQBUF_R_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ ACQBUF_R_DEPTH = 0x00002000U;
    static constexpr IData/*31:0*/ ACQBUF_W_ADDRWIDTH = 0x0000000cU;
    static constexpr IData/*31:0*/ ACQBUF_W_DATAWIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ ACQBUF_W_DEPTH = 0x00001000U;
    static constexpr IData/*31:0*/ COMMAND_R_ADDRWIDTH = 0x0000000bU;
    static constexpr IData/*31:0*/ COMMAND_R_DATAWIDTH = 0x00000080U;
    static constexpr IData/*31:0*/ COMMAND_R_DEPTH = 0x00000800U;
    static constexpr IData/*31:0*/ COMMAND_W_ADDRWIDTH = 0x0000000dU;
    static constexpr IData/*31:0*/ COMMAND_W_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ COMMAND_W_DEPTH = 0x00002000U;
    static constexpr IData/*31:0*/ DACMON_R_ADDRWIDTH = 0x0000000cU;
    static constexpr IData/*31:0*/ DACMON_R_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ DACMON_R_DEPTH = 0x00001000U;
    static constexpr IData/*31:0*/ DACMON_W_ADDRWIDTH = 9U;
    static constexpr IData/*31:0*/ DACMON_W_DATAWIDTH = 0x00000100U;
    static constexpr IData/*31:0*/ DACMON_W_DEPTH = 0x00000200U;
    static constexpr IData/*31:0*/ QDRVENV_R_ADDRWIDTH = 8U;
    static constexpr IData/*31:0*/ QDRVENV_R_DATAWIDTH = 0x00000200U;
    static constexpr IData/*31:0*/ QDRVENV_R_DEPTH = 0x00000100U;
    static constexpr IData/*31:0*/ QDRVENV_W_ADDRWIDTH = 0x0000000cU;
    static constexpr IData/*31:0*/ QDRVENV_W_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ QDRVENV_W_DEPTH = 0x00001000U;
    static constexpr IData/*31:0*/ QDRVFREQ_R_ADDRWIDTH = 9U;
    static constexpr IData/*31:0*/ QDRVFREQ_R_DATAWIDTH = 0x00000200U;
    static constexpr IData/*31:0*/ QDRVFREQ_R_DEPTH = 0x00000200U;
    static constexpr IData/*31:0*/ QDRVFREQ_W_ADDRWIDTH = 0x0000000dU;
    static constexpr IData/*31:0*/ QDRVFREQ_W_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ QDRVFREQ_W_DEPTH = 0x00002000U;
    static constexpr IData/*31:0*/ RDLOENV_R_ADDRWIDTH = 0x0000000cU;
    static constexpr IData/*31:0*/ RDLOENV_R_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ RDLOENV_R_DEPTH = 0x00001000U;
    static constexpr IData/*31:0*/ RDLOENV_W_ADDRWIDTH = 0x0000000cU;
    static constexpr IData/*31:0*/ RDLOENV_W_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ RDLOENV_W_DEPTH = 0x00001000U;
    static constexpr IData/*31:0*/ RDLOFREQ_R_ADDRWIDTH = 9U;
    static constexpr IData/*31:0*/ RDLOFREQ_R_DATAWIDTH = 0x00000080U;
    static constexpr IData/*31:0*/ RDLOFREQ_R_DEPTH = 0x00000200U;
    static constexpr IData/*31:0*/ RDLOFREQ_W_ADDRWIDTH = 0x0000000bU;
    static constexpr IData/*31:0*/ RDLOFREQ_W_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ RDLOFREQ_W_DEPTH = 0x00000800U;
    static constexpr IData/*31:0*/ RDRVENV_R_ADDRWIDTH = 0x0000000cU;
    static constexpr IData/*31:0*/ RDRVENV_R_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ RDRVENV_R_DEPTH = 0x00001000U;
    static constexpr IData/*31:0*/ RDRVENV_W_ADDRWIDTH = 0x0000000cU;
    static constexpr IData/*31:0*/ RDRVENV_W_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ RDRVENV_W_DEPTH = 0x00001000U;
    static constexpr IData/*31:0*/ RDRVFREQ_R_ADDRWIDTH = 9U;
    static constexpr IData/*31:0*/ RDRVFREQ_R_DATAWIDTH = 0x00000200U;
    static constexpr IData/*31:0*/ RDRVFREQ_R_DEPTH = 0x00000200U;
    static constexpr IData/*31:0*/ RDRVFREQ_W_ADDRWIDTH = 0x0000000dU;
    static constexpr IData/*31:0*/ RDRVFREQ_W_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ RDRVFREQ_W_DEPTH = 0x00002000U;
    static constexpr IData/*31:0*/ SDBUF_R_ADDRWIDTH = 0x0000000aU;
    static constexpr IData/*31:0*/ SDBUF_R_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ SDBUF_R_DEPTH = 0x00000400U;
    static constexpr IData/*31:0*/ SDBUF_W_ADDRWIDTH = 0x0000000aU;
    static constexpr IData/*31:0*/ SDBUF_W_DATAWIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ SDBUF_W_DEPTH = 0x00000400U;
    static constexpr IData/*31:0*/ NDLO = 8U;

    // CONSTRUCTORS
    Vtop_ifdsp(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_ifdsp();
    VL_UNCOPYABLE(Vtop_ifdsp);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_ifdsp* obj);

#endif  // guard
