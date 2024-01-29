// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_ifdsp.h"

// Parameter definitions for Vtop_ifdsp
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_acqbuf0;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_acqbuf1;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_command0;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_command1;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_command2;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_command3;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_command4;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_command5;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_command6;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_command7;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvfreq0;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvfreq1;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvfreq2;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvfreq3;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvfreq4;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvfreq5;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvfreq6;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvfreq7;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvfreq0;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvfreq1;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvfreq2;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvfreq3;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvfreq4;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvfreq5;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvfreq6;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvfreq7;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_dacmon0;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_dacmon1;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_dacmon2;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_dacmon3;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvenv0;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvenv1;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvenv2;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvenv3;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvenv4;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvenv5;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvenv6;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_qdrvenv7;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdloenv0;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdloenv1;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdloenv2;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdloenv3;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdloenv4;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdloenv5;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdloenv6;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdloenv7;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvenv0;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvenv1;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvenv2;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvenv3;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvenv4;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvenv5;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvenv6;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdrvenv7;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_accbuf0;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_accbuf1;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_accbuf2;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_accbuf3;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_accbuf4;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_accbuf5;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_accbuf6;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_accbuf7;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdlofreq0;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdlofreq1;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdlofreq2;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdlofreq3;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdlofreq4;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdlofreq5;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdlofreq6;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_rdlofreq7;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_sdbuf0;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_sdbuf1;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_sdbuf2;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_sdbuf3;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_sdbuf4;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_sdbuf5;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_sdbuf6;
constexpr CData/*7:0*/ Vtop_ifdsp::INIT_sdbuf7;
constexpr IData/*31:0*/ Vtop_ifdsp::DEBUG;
constexpr IData/*31:0*/ Vtop_ifdsp::LB1_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::LB1_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::LB2_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::LB2_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::LB3_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::LB3_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::LB4_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::LB4_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::DAC_AXIS_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::ADC_AXIS_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::BRAMADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::NPROC;
constexpr IData/*31:0*/ Vtop_ifdsp::NADC;
constexpr IData/*31:0*/ Vtop_ifdsp::NDLO1;
constexpr IData/*31:0*/ Vtop_ifdsp::NDLO2;
constexpr IData/*31:0*/ Vtop_ifdsp::NDAC;
constexpr IData/*31:0*/ Vtop_ifdsp::NDACMON;
constexpr IData/*31:0*/ Vtop_ifdsp::NACQ;
constexpr IData/*31:0*/ Vtop_ifdsp::RDLOINTPRATIO;
constexpr IData/*31:0*/ Vtop_ifdsp::RDRVINTPRATIO;
constexpr IData/*31:0*/ Vtop_ifdsp::NCFGRESETN;
constexpr IData/*31:0*/ Vtop_ifdsp::NDSPRESETN;
constexpr IData/*31:0*/ Vtop_ifdsp::NPSRESETN;
constexpr IData/*31:0*/ Vtop_ifdsp::NADC3RESETN;
constexpr IData/*31:0*/ Vtop_ifdsp::ACCBUF_R_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::ACCBUF_R_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::ACCBUF_R_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::ACCBUF_W_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::ACCBUF_W_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::ACCBUF_W_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::ACQBUF_R_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::ACQBUF_R_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::ACQBUF_R_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::ACQBUF_W_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::ACQBUF_W_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::ACQBUF_W_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::COMMAND_R_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::COMMAND_R_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::COMMAND_R_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::COMMAND_W_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::COMMAND_W_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::COMMAND_W_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::DACMON_R_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::DACMON_R_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::DACMON_R_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::DACMON_W_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::DACMON_W_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::DACMON_W_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::QDRVENV_R_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::QDRVENV_R_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::QDRVENV_R_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::QDRVENV_W_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::QDRVENV_W_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::QDRVENV_W_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::QDRVFREQ_R_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::QDRVFREQ_R_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::QDRVFREQ_R_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::QDRVFREQ_W_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::QDRVFREQ_W_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::QDRVFREQ_W_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDLOENV_R_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDLOENV_R_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDLOENV_R_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDLOENV_W_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDLOENV_W_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDLOENV_W_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDLOFREQ_R_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDLOFREQ_R_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDLOFREQ_R_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDLOFREQ_W_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDLOFREQ_W_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDLOFREQ_W_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDRVENV_R_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDRVENV_R_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDRVENV_R_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDRVENV_W_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDRVENV_W_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDRVENV_W_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDRVFREQ_R_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDRVFREQ_R_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDRVFREQ_R_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDRVFREQ_W_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDRVFREQ_W_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::RDRVFREQ_W_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::SDBUF_R_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::SDBUF_R_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::SDBUF_R_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::SDBUF_W_ADDRWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::SDBUF_W_DATAWIDTH;
constexpr IData/*31:0*/ Vtop_ifdsp::SDBUF_W_DEPTH;
constexpr IData/*31:0*/ Vtop_ifdsp::NDLO;


void Vtop_ifdsp___ctor_var_reset(Vtop_ifdsp* vlSelf);

Vtop_ifdsp::Vtop_ifdsp(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_ifdsp___ctor_var_reset(this);
}

void Vtop_ifdsp::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_ifdsp::~Vtop_ifdsp() {
}
