//ADC LMFSK: 4 2 1 1 32
//DAC LMFSK: 8 4 1 1 32
module fmc120 #(
    parameter [0:0] CLK_MASTER=1'b1,
    parameter [7:0] BASE_ADDR = 8'h05,
    parameter [7:0] BASE2_SFR = 8'h10
) (
    input  clk,
    input  rst,
    input  [68:0] mem_packed_fwd,
    output [32:0] mem_packed_ret,

    // fmc120 logic
    input         core_clk_in       ,
    output        core_clk_out      ,   // dclk
    output        sysref_out    	,   // sclk
    output        trigger_out       ,   // ext_trigger signal
    input         lmk_sysref_in     ,   // from dsp to two lmk sysref pin (CLK0)
    input         lmk_sync_in       ,   // from dsp to two lmk sync pin	(SYNC)

    output [63:0] adc_data0         ,
    output        adc_data0_valid   ,
    output [63:0] adc_data1         ,
    output        adc_data1_valid   ,
    output [63:0] adc_data2         ,
    output        adc_data2_valid   ,
    output [63:0] adc_data3         ,
    output        adc_data3_valid   ,
     input [63:0] dac_data0         ,
     input        dac_data0_valid   ,
     input [63:0] dac_data1         ,
     input        dac_data1_valid   ,
     input [63:0] dac_data2         ,
     input        dac_data2_valid   ,
     input [63:0] dac_data3         ,
     input        dac_data3_valid   ,

    // fmc120 hardware
      input [1:0] adc_a_over_range  ,
      input [1:0] adc_b_over_range  ,
     output [1:0] adc_syncb         ,
      input       dac_syncb_n       ,
      input       dac_syncb_p       ,
     output       dac_tx_en         ,
      input       ext_trigger_n     ,
      input       ext_trigger_p     ,
     output       fpga_trigger      ,   // not used
     output       lmk_sync          ,   // sync out to lmk SYNC pin (not used)
      input [1:0] lmkclk_n          ,   // 0: dclk (core_clk), 1: sclk
      input [1:0] lmkclk_p          ,   // 0: dclk (core_clk), 1: sclk
      input       pg_m2c            ,
      input       prsnt_m2c_l       ,
      input       refclk_n          ,   // gtx refclk
      input       refclk_p          ,
      input [7:0] serdin_n          ,
      input [7:0] serdin_p          ,
     output [7:0] serdout_n         ,
     output [7:0] serdout_p         ,
     output       trig_sync_n       ,   // sysref out to lmk (clk0)
     output       trig_sync_p
);

wire dac_tx_en_i;
wire dac_tpat_en; // test pattern enable

wire [32:0] mem_packed_ret_jesd;
wire [32:0] mem_packed_ret_sfr;
assign mem_packed_ret = mem_packed_ret_jesd | mem_packed_ret_sfr;

wire [31:0] sfRegsWrStr;
wire [31:0] sfRegsOut, sfRegsInp;

sfr_pack #(
    .BASE_ADDR      ( BASE_ADDR ),
    .BASE2_ADDR     ( BASE2_SFR )
) sfr_reset (
    .clk            ( clk        ),
    .rst            ( rst        ),
    .mem_packed_fwd ( mem_packed_fwd ),
    .mem_packed_ret ( mem_packed_ret_sfr ),
    .sfRegsOut      ( sfRegsOut ),
    .sfRegsIn       ( sfRegsInp ),
    .sfRegsWrStr    ( sfRegsWrStr )
);

/// #define SFR_BIT_DAC_TX_EN         0
/// #define SFR_BIT_DAC_TP_EN         4
/// #define SFR_BIT_STAT_PG           16
/// #define SFR_BIT_STAT_PRSNT_L      17
/// #define SFR_BIT_STAT_ADC_A_OVER0  18
/// #define SFR_BIT_STAT_ADC_A_OVER1  19
/// #define SFR_BIT_STAT_ADC_B_OVER0  20
/// #define SFR_BIT_STAT_ADC_B_OVER1  21

assign sfRegsInp = {10'h0, adc_b_over_range, adc_a_over_range, prsnt_m2c_l, pg_m2c, 11'h0, dac_tpat_en, 3'h0, dac_tx_en_i};
// 0x00: normal waveform
// 0x10: test pattern waveform
assign dac_tx_en_i = 1'b1;//sfRegsOut[0];
assign dac_tpat_en = 1'b0;//sfRegsOut[4];

// DAC short test pattern, transport layer:
// JESD204B standard section 5.1.6
//  F = 1 : 0xF1.
//  F = 2 : 0xF1, 0xE2
//  F = 4 : 0xF1, 0xE2, 0xD3, 0xC4
//  F = 8 : 0xF1, 0xE2, 0xD3, 0xC4, 0xB5, 0xA6, 0x97, 0x80

// Hardcoded for F=1:
wire [63:0] dac_data0_mux = dac_tpat_en ? 64'hF1F1_F1F1_F1F1_F1F1 : dac_data0;
wire [63:0] dac_data1_mux = dac_tpat_en ? 64'hF1F1_F1F1_F1F1_F1F1 : dac_data1;
wire [63:0] dac_data2_mux = dac_tpat_en ? 64'hF1F1_F1F1_F1F1_F1F1 : dac_data2;
wire [63:0] dac_data3_mux = dac_tpat_en ? 64'hF1F1_F1F1_F1F1_F1F1 : dac_data3;

wire tx_sync;
wire [1:0] rx_sync;

jesd204_fmc120 #(
    .CLK_MASTER (CLK_MASTER),
    .BASE_ADDR  (BASE_ADDR)
) jesd204_fmc120_i (
    .clk        (clk),
    .rst        (rst),
    .mem_packed_fwd (mem_packed_fwd),
    .mem_packed_ret (mem_packed_ret_jesd),

    .core_clk_out(core_clk_out),
    .core_clk_in(core_clk_in),
    .sysref     (sysref_out),

    .dac_data0  (dac_data0_mux),
    .dac_valid0 (dac_data0_valid),
    .dac_data1  (dac_data1_mux),
    .dac_valid1 (dac_data1_valid),
    .dac_data2  (dac_data2_mux),
    .dac_valid2 (dac_data2_valid),
    .dac_data3  (dac_data3_mux),
    .dac_valid3 (dac_data3_valid),
    .adc_data0  (adc_data0),
    .adc_valid0 (adc_data0_valid),
    .adc_data1  (adc_data1),
    .adc_valid1 (adc_data1_valid),
    .adc_data2  (adc_data2),
    .adc_valid2 (adc_data2_valid),
    .adc_data3  (adc_data3),
    .adc_valid3 (adc_data3_valid),

    .rxp_in     (serdin_p),
    .rxn_in     (serdin_n),
    .txp_out    (serdout_p),
    .txn_out    (serdout_n),
    .tx_sync    (tx_sync),
    .rx_sync    (rx_sync),

    .sysref_p       (lmkclk_p[1]),
    .sysref_n       (lmkclk_n[1]),
    .dclk_p         (lmkclk_p[0]),
    .dclk_n         (lmkclk_n[0]),
    .gtx_refclk_p   (refclk_p),
    .gtx_refclk_n   (refclk_n)
);

wire ext_trigger_i;
IBUFDS i_ext_trigger (
    .I  (ext_trigger_p),
    .IB (ext_trigger_n),
    .O  (ext_trigger_i)
);

wire core_clk;
assign core_clk = (CLK_MASTER) ? core_clk_out : core_clk_in;
reg [1:0] ext_trig_buf;
always @(posedge core_clk) begin
    ext_trig_buf[0] <= ext_trigger_i;
    ext_trig_buf[1] <= ext_trig_buf[0];
end
assign trigger_out = ext_trig_buf[1];

IBUFDS buf_dac_syncb (
    .I  (dac_syncb_p),
    .IB (dac_syncb_n),
    .O  (tx_sync)
);

wire rx_sync_all = &rx_sync;
OBUF buf_adc_syncb_0 (
    .I  (rx_sync_all),
    .O  (adc_syncb[0])
);

OBUF buf_adc_syncb_1 (
    .I  (rx_sync_all),
    .O  (adc_syncb[1])
);

OBUF buf_dac_tx_en (
    .I  (dac_tx_en_i),
    .O  (dac_tx_en)
);

OBUFDS buf_trig_sync (
    .I  (lmk_sysref_in),
    .O  (trig_sync_p),
    .OB (trig_sync_n)
);

OBUF buf_lmk_sync (
    .I  (lmk_sync_in),
    .O  (lmk_sync)
);

// Reserved pin according to fmc120 manual
assign fpga_trigger = 1'b0;

endmodule
