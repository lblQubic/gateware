module jesd204_fmc120 #(
    parameter [0:0] CLK_MASTER=1'b1,
    parameter [7:0] BASE2_ADC0 = 8'h01,
    parameter [7:0] BASE2_ADC1 = 8'h02,
    parameter [7:0] BASE2_DAC = 8'h03,
    parameter [7:0] BASE2_SFR = 8'h00,
    parameter [7:0] BASE_ADDR = 8'h05
) (
    // PicoRV32 packed MEM Bus interface
    input           clk,
    input           rst,
    input  [68:0]   mem_packed_fwd,
    output [32:0]   mem_packed_ret,

    output          core_clk_out,
    input           core_clk_in,
    output          sysref,

    // data interface
(* mark_debug = "true" *) 
    input [63:0]    dac_data0,
(* mark_debug = "true" *)     input           dac_valid0,
    (* mark_debug = "true" *) input [63:0]    dac_data1,
    (* mark_debug = "true" *) input           dac_valid1,
    (* mark_debug = "true" *) input [63:0]    dac_data2,
    (* mark_debug = "true" *) input           dac_valid2,
    (* mark_debug = "true" *) input [63:0]    dac_data3,
    (* mark_debug = "true" *) input           dac_valid3,

    output [63:0]   adc_data0,
    output          adc_valid0,
    output [63:0]   adc_data1,
    output          adc_valid1,
    output [63:0]   adc_data2,
    output          adc_valid2,
    output [63:0]   adc_data3,
    output          adc_valid3,

    // Physical interface
    input  [7:0]    rxp_in,
    input  [7:0]    rxn_in,
    output [7:0]    txp_out,
    output [7:0]    txn_out,
    input           tx_sync,        // Active Low
    output [1:0]    rx_sync,        // Active Low

    input           sysref_p,
    input           sysref_n,
    input           gtx_refclk_n,
    input           gtx_refclk_p,
    input           dclk_n,
    input           dclk_p
);

jesd204_clocking i_jesd204_clocks (
    .refclk_pad_n   (gtx_refclk_n),
    .refclk_pad_p   (gtx_refclk_p),
    .glblclk_pad_n  (dclk_n),
    .glblclk_pad_p  (dclk_p),
    .sysref_pad_n   (sysref_n),
    .sysref_pad_p   (sysref_p),
    .refclk         (qpll_refclk),   //Used to drive GT Ref clock
    .coreclk        (core_clk_out),  //Clock used by JESD204 core and usrclk2 input for GT module
    .sysref         (sysref)        //Common SYSREF for all
);

wire core_clk;
assign core_clk = (CLK_MASTER) ? core_clk_out : core_clk_in;
wire tx_reset;
wire rx_reset;
wire tx_sys_reset;
wire rx_sys_reset;

wire [1:0] rx_aresetn;
wire tx_aresetn;
wire tx_tready;

wire drpclk;       // 125MHz
wire tx_reset_gt;
wire rx_reset_gt;
wire tx_core_clk;  // core_clk
wire rx_core_clk;  // core_clk
wire txoutclk;     // NC
wire rxoutclk;     // NC
wire [2 : 0] gt_prbssel;
(* mark_debug = "true" *) wire [31 : 0] gt0_txdata;
wire [3 : 0] gt0_txcharisk;
(* mark_debug = "true" *) wire [31 : 0] gt1_txdata;
wire [3 : 0] gt1_txcharisk;
(* mark_debug = "true" *) wire [31 : 0] gt2_txdata;
wire [3 : 0] gt2_txcharisk;
(* mark_debug = "true" *) wire [31 : 0] gt3_txdata;
wire [3 : 0] gt3_txcharisk;
(* mark_debug = "true" *) wire [31 : 0] gt4_txdata;
wire [3 : 0] gt4_txcharisk;
(* mark_debug = "true" *) wire [31 : 0] gt5_txdata;
wire [3 : 0] gt5_txcharisk;
(* mark_debug = "true" *) wire [31 : 0] gt6_txdata;
wire [3 : 0] gt6_txcharisk;
(* mark_debug = "true" *) wire [31 : 0] gt7_txdata;
wire [3 : 0] gt7_txcharisk;
wire tx_reset_done;
(* mark_debug = "true" *) wire [31 : 0] gt0_rxdata;
wire [3 : 0] gt0_rxcharisk;
wire [3 : 0] gt0_rxdisperr;
wire [3 : 0] gt0_rxnotintable;
(* mark_debug = "true" *) wire [31 : 0] gt1_rxdata;
wire [3 : 0] gt1_rxcharisk;
wire [3 : 0] gt1_rxdisperr;
wire [3 : 0] gt1_rxnotintable;
(* mark_debug = "true" *) wire [31 : 0] gt2_rxdata;
wire [3 : 0] gt2_rxcharisk;
wire [3 : 0] gt2_rxdisperr;
wire [3 : 0] gt2_rxnotintable;
(* mark_debug = "true" *) wire [31 : 0] gt3_rxdata;
wire [3 : 0] gt3_rxcharisk;
wire [3 : 0] gt3_rxdisperr;
wire [3 : 0] gt3_rxnotintable;
(* mark_debug = "true" *) wire [31 : 0] gt4_rxdata;
wire [3 : 0] gt4_rxcharisk;
wire [3 : 0] gt4_rxdisperr;
wire [3 : 0] gt4_rxnotintable;
(* mark_debug = "true" *) wire [31 : 0] gt5_rxdata;
wire [3 : 0] gt5_rxcharisk;
wire [3 : 0] gt5_rxdisperr;
wire [3 : 0] gt5_rxnotintable;
(* mark_debug = "true" *) wire [31 : 0] gt6_rxdata;
wire [3 : 0] gt6_rxcharisk;
wire [3 : 0] gt6_rxdisperr;
wire [3 : 0] gt6_rxnotintable;
(* mark_debug = "true" *) wire [31 : 0] gt7_rxdata;
wire [3 : 0] gt7_rxcharisk;
wire [3 : 0] gt7_rxdisperr;
wire [3 : 0] gt7_rxnotintable;
wire rx_reset_done;
wire rxencommaalign;
wire common0_qpll_clk_out;
wire common0_qpll_refclk_out;
wire common0_qpll_lock_out;
wire common1_qpll_clk_out;
wire common1_qpll_refclk_out;
wire common1_qpll_lock_out;

jesd204_phy_fmc120 i_jesd204_phy (
  .qpll_refclk          (qpll_refclk),                  // input wire qpll_refclk
  .drpclk               (drpclk),                       // input wire drpclk
  .tx_reset_gt          (tx_reset_gt),                  // input wire tx_reset_gt
  .rx_reset_gt          (rx_reset_gt),                  // input wire rx_reset_gt
  .tx_sys_reset         (tx_sys_reset),                 // input wire tx_sys_reset
  .rx_sys_reset         (rx_sys_reset),                 // input wire rx_sys_reset
  .txp_out              (txp_out),                      // output wire [7 : 0] txp_out
  .txn_out              (txn_out),                      // output wire [7 : 0] txn_out
  .rxp_in               (rxp_in),                       // input wire [7 : 0] rxp_in
  .rxn_in               (rxn_in),                       // input wire [7 : 0] rxn_in
  .tx_core_clk          (tx_core_clk),                  // input wire tx_core_clk
  .rx_core_clk          (rx_core_clk),                  // input wire rx_core_clk
  .txoutclk             (txoutclk),                     // output wire txoutclk
  .rxoutclk             (rxoutclk),                     // output wire rxoutclk
  .gt_prbssel           (gt_prbssel),                   // input wire [2 : 0] gt_prbssel
  .gt0_txdata           (gt0_txdata),                   // input wire [31 : 0] gt0_txdata
  .gt0_txcharisk        (gt0_txcharisk),                // input wire [3 : 0] gt0_txcharisk
  .gt1_txdata           (gt1_txdata),                   // input wire [31 : 0] gt1_txdata
  .gt1_txcharisk        (gt1_txcharisk),                // input wire [3 : 0] gt1_txcharisk
  .gt2_txdata           (gt2_txdata),                   // input wire [31 : 0] gt2_txdata
  .gt2_txcharisk        (gt2_txcharisk),                // input wire [3 : 0] gt2_txcharisk
  .gt3_txdata           (gt3_txdata),                   // input wire [31 : 0] gt3_txdata
  .gt3_txcharisk        (gt3_txcharisk),                // input wire [3 : 0] gt3_txcharisk
  .gt4_txdata           (gt4_txdata),                   // input wire [31 : 0] gt4_txdata
  .gt4_txcharisk        (gt4_txcharisk),                // input wire [3 : 0] gt4_txcharisk
  .gt5_txdata           (gt5_txdata),                   // input wire [31 : 0] gt5_txdata
  .gt5_txcharisk        (gt5_txcharisk),                // input wire [3 : 0] gt5_txcharisk
  .gt6_txdata           (gt6_txdata),                   // input wire [31 : 0] gt6_txdata
  .gt6_txcharisk        (gt6_txcharisk),                // input wire [3 : 0] gt6_txcharisk
  .gt7_txdata           (gt7_txdata),                   // input wire [31 : 0] gt7_txdata
  .gt7_txcharisk        (gt7_txcharisk),                // input wire [3 : 0] gt7_txcharisk
  .tx_reset_done        (tx_reset_done),                // output wire tx_reset_done
  .gt0_rxdata           (gt0_rxdata),                   // output wire [31 : 0] gt0_rxdata
  .gt0_rxcharisk        (gt0_rxcharisk),                // output wire [3 : 0] gt0_rxcharisk
  .gt0_rxdisperr        (gt0_rxdisperr),                // output wire [3 : 0] gt0_rxdisperr
  .gt0_rxnotintable     (gt0_rxnotintable),             // output wire [3 : 0] gt0_rxnotintable
  .gt1_rxdata           (gt1_rxdata),                   // output wire [31 : 0] gt1_rxdata
  .gt1_rxcharisk        (gt1_rxcharisk),                // output wire [3 : 0] gt1_rxcharisk
  .gt1_rxdisperr        (gt1_rxdisperr),                // output wire [3 : 0] gt1_rxdisperr
  .gt1_rxnotintable     (gt1_rxnotintable),             // output wire [3 : 0] gt1_rxnotintable
  .gt2_rxdata           (gt2_rxdata),                   // output wire [31 : 0] gt2_rxdata
  .gt2_rxcharisk        (gt2_rxcharisk),                // output wire [3 : 0] gt2_rxcharisk
  .gt2_rxdisperr        (gt2_rxdisperr),                // output wire [3 : 0] gt2_rxdisperr
  .gt2_rxnotintable     (gt2_rxnotintable),             // output wire [3 : 0] gt2_rxnotintable
  .gt3_rxdata           (gt3_rxdata),                   // output wire [31 : 0] gt3_rxdata
  .gt3_rxcharisk        (gt3_rxcharisk),                // output wire [3 : 0] gt3_rxcharisk
  .gt3_rxdisperr        (gt3_rxdisperr),                // output wire [3 : 0] gt3_rxdisperr
  .gt3_rxnotintable     (gt3_rxnotintable),             // output wire [3 : 0] gt3_rxnotintable
  .gt4_rxdata           (gt4_rxdata),                   // output wire [31 : 0] gt4_rxdata
  .gt4_rxcharisk        (gt4_rxcharisk),                // output wire [3 : 0] gt4_rxcharisk
  .gt4_rxdisperr        (gt4_rxdisperr),                // output wire [3 : 0] gt4_rxdisperr
  .gt4_rxnotintable     (gt4_rxnotintable),             // output wire [3 : 0] gt4_rxnotintable
  .gt5_rxdata           (gt5_rxdata),                   // output wire [31 : 0] gt5_rxdata
  .gt5_rxcharisk        (gt5_rxcharisk),                // output wire [3 : 0] gt5_rxcharisk
  .gt5_rxdisperr        (gt5_rxdisperr),                // output wire [3 : 0] gt5_rxdisperr
  .gt5_rxnotintable     (gt5_rxnotintable),             // output wire [3 : 0] gt5_rxnotintable
  .gt6_rxdata           (gt6_rxdata),                   // output wire [31 : 0] gt6_rxdata
  .gt6_rxcharisk        (gt6_rxcharisk),                // output wire [3 : 0] gt6_rxcharisk
  .gt6_rxdisperr        (gt6_rxdisperr),                // output wire [3 : 0] gt6_rxdisperr
  .gt6_rxnotintable     (gt6_rxnotintable),             // output wire [3 : 0] gt6_rxnotintable
  .gt7_rxdata           (gt7_rxdata),                   // output wire [31 : 0] gt7_rxdata
  .gt7_rxcharisk        (gt7_rxcharisk),                // output wire [3 : 0] gt7_rxcharisk
  .gt7_rxdisperr        (gt7_rxdisperr),                // output wire [3 : 0] gt7_rxdisperr
  .gt7_rxnotintable     (gt7_rxnotintable),             // output wire [3 : 0] gt7_rxnotintable
  .rx_reset_done        (rx_reset_done),                // output wire rx_reset_done
  .rxencommaalign       (rxencommaalign),               // input wire rxencommaalign
  .common0_qpll_clk_out (common0_qpll_clk_out),         // output wire common0_qpll_clk_out
  .common0_qpll_refclk_out(common0_qpll_refclk_out),    // output wire common0_qpll_refclk_out
  .common0_qpll_lock_out(common0_qpll_lock_out),        // output wire common0_qpll_lock_out
  .common1_qpll_clk_out (common1_qpll_clk_out),         // output wire common1_qpll_clk_out
  .common1_qpll_refclk_out(common1_qpll_refclk_out),    // output wire common1_qpll_refclk_out
  .common1_qpll_lock_out(common1_qpll_lock_out)         // output wire common1_qpll_lock_out
);

wire [32:0] mem_packed_ret_0;
wire [32:0] mem_packed_ret_1;
wire [32:0] mem_packed_ret_2;

(* mark_debug = "true" *) wire [127:0] rx_tdata_0;
(* mark_debug = "true" *) wire rx_tvalid_0;
(* mark_debug = "true" *) wire [127:0] rx_tdata_1;
(* mark_debug = "true" *) wire rx_tvalid_1;
wire [1:0] rxencommaalign_out;
wire [1:0] rx_reset_gt_out;
wire [3:0] rx_start_of_frame [1:0];
wire [3:0] rx_end_of_frame [1:0];
wire [3:0] rx_start_of_multiframe [1:0];
wire [3:0] rx_end_of_multiframe [1:0];
wire [15:0] rx_frame_error [1:0];

jesd204_ads54j60_pack #(
    .BASE_ADDR  (BASE_ADDR),
    .BASE2_ADDR (BASE2_ADC0)
) i_ads54j60_0 (
    .clk                (clk),
    .rst                (rst),
    .mem_packed_fwd     (mem_packed_fwd),
    .mem_packed_ret     (mem_packed_ret_0),

    .gt0_rxdata         (gt0_rxdata),                  // input wire [31 : 0] gt0_rxdata
    .gt0_rxcharisk      (gt0_rxcharisk),               // input wire [3 : 0] gt0_rxcharisk
    .gt0_rxdisperr      (gt0_rxdisperr),               // input wire [3 : 0] gt0_rxdisperr
    .gt0_rxnotintable   (gt0_rxnotintable),            // input wire [3 : 0] gt0_rxnotintable
    .gt1_rxdata         (gt1_rxdata),                  // input wire [31 : 0] gt1_rxdata
    .gt1_rxcharisk      (gt1_rxcharisk),               // input wire [3 : 0] gt1_rxcharisk
    .gt1_rxdisperr      (gt1_rxdisperr),               // input wire [3 : 0] gt1_rxdisperr
    .gt1_rxnotintable   (gt1_rxnotintable),            // input wire [3 : 0] gt1_rxnotintable
    .gt2_rxdata         (gt2_rxdata),                  // input wire [31 : 0] gt2_rxdata
    .gt2_rxcharisk      (gt2_rxcharisk),               // input wire [3 : 0] gt2_rxcharisk
    .gt2_rxdisperr      (gt2_rxdisperr),               // input wire [3 : 0] gt2_rxdisperr
    .gt2_rxnotintable   (gt2_rxnotintable),            // input wire [3 : 0] gt2_rxnotintable
    .gt3_rxdata         (gt3_rxdata),                  // input wire [31 : 0] gt3_rxdata
    .gt3_rxcharisk      (gt3_rxcharisk),               // input wire [3 : 0] gt3_rxcharisk
    .gt3_rxdisperr      (gt3_rxdisperr),               // input wire [3 : 0] gt3_rxdisperr
    .gt3_rxnotintable   (gt3_rxnotintable),            // input wire [3 : 0] gt3_rxnotintable
    .rx_reset_done      (rx_reset_done),               // input wire rx_reset_done
    .rxencommaalign_out (rxencommaalign_out[0]),       // output wire rxencommaalign_out
    .rx_reset_gt        (rx_reset_gt_out[0]),          // output wire rx_reset_gt
    .rx_core_clk        (rx_core_clk),                 // input wire rx_core_clk

    .rx_reset           (rx_reset),                    // input wire rx_reset
    .rx_aresetn         (rx_aresetn[0]),               // output wire rx_aresetn
    .rx_tdata           (rx_tdata_0),                  // output wire [127 : 0] rx_tdata
    .rx_tvalid          (rx_tvalid_0),                 // output wire rx_tvalid
    .rx_start_of_frame  (rx_start_of_frame[0]),        // output wire [3 : 0] rx_start_of_frame
    .rx_end_of_frame    (rx_end_of_frame[0]),          // output wire [3 : 0] rx_end_of_frame
    .rx_start_of_multiframe(rx_start_of_multiframe[0]),// output wire [3 : 0] rx_start_of_multiframe
    .rx_end_of_multiframe(rx_end_of_multiframe[0]),    // output wire [3 : 0] rx_end_of_multiframe
    .rx_frame_error     (rx_frame_error[0]),           // output wire [15 : 0] rx_frame_error

    .rx_sysref          (sysref),                      // input wire rx_sysref
    .rx_sync            (rx_sync[0])                   // output wire rx_sync
);

jesd204_ads54j60_pack #(
    .BASE_ADDR  (BASE_ADDR),
    .BASE2_ADDR (BASE2_ADC1)
) i_ads54j60_1 (
    .clk                (clk),
    .rst                (rst),
    .mem_packed_fwd     (mem_packed_fwd),
    .mem_packed_ret     (mem_packed_ret_1),

    .gt0_rxdata         (gt4_rxdata),                  // input wire [31 : 0] gt0_rxdata
    .gt0_rxcharisk      (gt4_rxcharisk),               // input wire [3 : 0] gt0_rxcharisk
    .gt0_rxdisperr      (gt4_rxdisperr),               // input wire [3 : 0] gt0_rxdisperr
    .gt0_rxnotintable   (gt4_rxnotintable),            // input wire [3 : 0] gt0_rxnotintable
    .gt1_rxdata         (gt5_rxdata),                  // input wire [31 : 0] gt1_rxdata
    .gt1_rxcharisk      (gt5_rxcharisk),               // input wire [3 : 0] gt1_rxcharisk
    .gt1_rxdisperr      (gt5_rxdisperr),               // input wire [3 : 0] gt1_rxdisperr
    .gt1_rxnotintable   (gt5_rxnotintable),            // input wire [3 : 0] gt1_rxnotintable
    .gt2_rxdata         (gt6_rxdata),                  // input wire [31 : 0] gt2_rxdata
    .gt2_rxcharisk      (gt6_rxcharisk),               // input wire [3 : 0] gt2_rxcharisk
    .gt2_rxdisperr      (gt6_rxdisperr),               // input wire [3 : 0] gt2_rxdisperr
    .gt2_rxnotintable   (gt6_rxnotintable),            // input wire [3 : 0] gt2_rxnotintable
    .gt3_rxdata         (gt7_rxdata),                  // input wire [31 : 0] gt3_rxdata
    .gt3_rxcharisk      (gt7_rxcharisk),               // input wire [3 : 0] gt3_rxcharisk
    .gt3_rxdisperr      (gt7_rxdisperr),               // input wire [3 : 0] gt3_rxdisperr
    .gt3_rxnotintable   (gt7_rxnotintable),            // input wire [3 : 0] gt3_rxnotintable
    .rx_reset_done      (rx_reset_done),               // input wire rx_reset_done
    .rxencommaalign_out (rxencommaalign_out[1]),       // output wire rxencommaalign_out
    .rx_reset_gt        (rx_reset_gt_out[1]),          // output wire rx_reset_gt
    .rx_core_clk        (rx_core_clk),                 // input wire rx_core_clk

    .rx_reset           (rx_reset),                    // input wire rx_reset
    .rx_aresetn         (rx_aresetn[1]),               // output wire rx_aresetn
    .rx_tdata           (rx_tdata_1),                  // output wire [127 : 0] rx_tdata
    .rx_tvalid          (rx_tvalid_1),                 // output wire rx_tvalid
    .rx_start_of_frame  (rx_start_of_frame[1]),        // output wire [3 : 0] rx_start_of_frame
    .rx_end_of_frame    (rx_end_of_frame[1]),          // output wire [3 : 0] rx_end_of_frame
    .rx_start_of_multiframe(rx_start_of_multiframe[1]),// output wire [3 : 0] rx_start_of_multiframe
    .rx_end_of_multiframe(rx_end_of_multiframe[1]),    // output wire [3 : 0] rx_end_of_multiframe
    .rx_frame_error     (rx_frame_error[1]),           // output wire [15 : 0] rx_frame_error

    .rx_sysref          (sysref),                      // input wire rx_sysref
    .rx_sync            (rx_sync[1])                   // output wire rx_sync
);

wire [2:0] gt_prbssel_out;
wire [3:0] tx_start_of_frame;
wire [3:0] tx_start_of_multiframe;
(* mark_debug = "true" *) wire [255:0] tx_tdata;

jesd204_dac39j84_pack #(
    .BASE_ADDR  (BASE_ADDR),
    .BASE2_ADDR (BASE2_DAC)
) i_dac39j84 (
    .clk                (clk),
    .rst                (rst),
    .mem_packed_fwd     (mem_packed_fwd),
    .mem_packed_ret     (mem_packed_ret_2),

    .gt0_txdata         (gt0_txdata),                   // output wire [31 : 0] gt0_txdata
    .gt0_txcharisk      (gt0_txcharisk),                // output wire [3 : 0] gt0_txcharisk
    .gt1_txdata         (gt1_txdata),                   // output wire [31 : 0] gt1_txdata
    .gt1_txcharisk      (gt1_txcharisk),                // output wire [3 : 0] gt1_txcharisk
    .gt2_txdata         (gt2_txdata),                   // output wire [31 : 0] gt2_txdata
    .gt2_txcharisk      (gt2_txcharisk),                // output wire [3 : 0] gt2_txcharisk
    .gt3_txdata         (gt3_txdata),                   // output wire [31 : 0] gt3_txdata
    .gt3_txcharisk      (gt3_txcharisk),                // output wire [3 : 0] gt3_txcharisk
    .gt4_txdata         (gt4_txdata),                   // output wire [31 : 0] gt4_txdata
    .gt4_txcharisk      (gt4_txcharisk),                // output wire [3 : 0] gt4_txcharisk
    .gt5_txdata         (gt5_txdata),                   // output wire [31 : 0] gt5_txdata
    .gt5_txcharisk      (gt5_txcharisk),                // output wire [3 : 0] gt5_txcharisk
    .gt6_txdata         (gt6_txdata),                   // output wire [31 : 0] gt6_txdata
    .gt6_txcharisk      (gt6_txcharisk),                // output wire [3 : 0] gt6_txcharisk
    .gt7_txdata         (gt7_txdata),                   // output wire [31 : 0] gt7_txdata
    .gt7_txcharisk      (gt7_txcharisk),                // output wire [3 : 0] gt7_txcharisk
    .tx_reset_done      (tx_reset_done),                // input wire tx_reset_done
    .gt_prbssel_out     (gt_prbssel_out),               // output wire [2 : 0] gt_prbssel_out
    .tx_reset_gt        (tx_reset_gt),                  // output wire tx_reset_gt
    .tx_core_clk        (tx_core_clk),                  // input wire tx_core_clk

    .tx_reset           (tx_reset),                     // input wire tx_reset
    .tx_sysref          (sysref),                       // input wire tx_sysref
    .tx_start_of_frame  (tx_start_of_frame),            // output wire [3 : 0] tx_start_of_frame
    .tx_start_of_multiframe(tx_start_of_multiframe),    // output wire [3 : 0] tx_start_of_multiframe
    .tx_aresetn         (tx_aresetn),                   // output wire tx_aresetn
    .tx_tdata           (tx_tdata),                     // input wire [255 : 0] tx_tdata
    .tx_tready          (tx_tready),                    // output wire tx_tready
    .tx_sync            (tx_sync)                       // input wire tx_sync
);
// Make Connections
assign drpclk = clk;
assign tx_core_clk = core_clk;
assign rx_core_clk = core_clk;

// From manual page 57:
// https://www.xilinx.com/support/documentation/ip_documentation/jesd204/v7_2/pg066-jesd204.pdf
// wire [15:0] adc0_sample0 = {rx_tdata[7:0],   rx_tdata[39:32]};   // ADC0 sample N
// wire [15:0] adc0_sample1 = {rx_tdata[15:8],  rx_tdata[47:40]};   // ADC0 sample N+1
// wire [15:0] adc0_sample2 = {rx_tdata[23:16], rx_tdata[55:48]};   // ADC0 sample N+2
// wire [15:0] adc0_sample3 = {rx_tdata[31:24], rx_tdata[63:56]};   // ADC0 sample N+3
// wire [15:0] adc1_sample0 = {rx_tdata[71:64], rx_tdata[103:96]};  // ADC1 sample N
// wire [15:0] adc1_sample1 = {rx_tdata[79:72], rx_tdata[111:104]}; // ADC1 sample N+1
// wire [15:0] adc1_sample2 = {rx_tdata[87:80], rx_tdata[119:112]}; // ADC1 sample N+2
// wire [15:0] adc1_sample3 = {rx_tdata[95:88], rx_tdata[127:120]}; // ADC1 sample N+3

reg [63:0]   adc_data0_r=0;
reg          adc_valid0_r=0;
reg [63:0]   adc_data1_r=0;
reg          adc_valid1_r=0;
reg [63:0]   adc_data2_r=0;
reg          adc_valid2_r=0;
reg [63:0]   adc_data3_r=0;
reg          adc_valid3_r=0;

// ADS54J54 Table 11. I[7:0],I[15:8] Q[7:0]Q[15:8]
always @(posedge core_clk) begin
    adc_data0_r <= (rx_tvalid_0) ? {
        rx_tdata_0[63:56],	rx_tdata_0[31:24], // N+3
        rx_tdata_0[55:48],	rx_tdata_0[23:16], // N+2
        rx_tdata_0[47:40],	rx_tdata_0[15: 8], // N+1
        rx_tdata_0[39:32],	rx_tdata_0[ 7: 0]  // N+0
    } : 64'h0;
    adc_data1_r <= (rx_tvalid_0) ? {
        rx_tdata_0[127:120], rx_tdata_0[95:88], // N+3
        rx_tdata_0[119:112], rx_tdata_0[87:80], // N+2
        rx_tdata_0[111:104], rx_tdata_0[79:72], // N+1
        rx_tdata_0[103: 96], rx_tdata_0[71:64]  // N+0
    } : 64'h0;
    adc_valid0_r <= rx_tvalid_0;
    adc_valid1_r <= rx_tvalid_0;
    adc_data2_r <=  (rx_tvalid_1) ? {
        rx_tdata_1[63:56],	rx_tdata_1[31:24], // N+3
        rx_tdata_1[55:48],	rx_tdata_1[23:16], // N+2
        rx_tdata_1[47:40],	rx_tdata_1[15: 8], // N+1
        rx_tdata_1[39:32],	rx_tdata_1[ 7: 0]  // N+0
    } : 64'h0;
    adc_data3_r <=  (rx_tvalid_1) ? {
        rx_tdata_1[127:120], rx_tdata_1[95:88], // N+3
        rx_tdata_1[119:112], rx_tdata_1[87:80], // N+2
        rx_tdata_1[111:104], rx_tdata_1[79:72], // N+1
        rx_tdata_1[103: 96], rx_tdata_1[71:64]  // N+0
    } : 64'h0;
    adc_valid2_r <= rx_tvalid_1;
    adc_valid3_r <= rx_tvalid_1;
end
assign adc_data0    = adc_data0_r;
assign adc_data1    = adc_data1_r;
assign adc_data2    = adc_data2_r;
assign adc_data3    = adc_data3_r;
assign adc_valid0   = adc_valid0_r;
assign adc_valid1   = adc_valid1_r;
assign adc_valid2   = adc_valid2_r;
assign adc_valid3   = adc_valid3_r;

reg [255:0] tx_tdata_r=0;
always @(posedge core_clk) begin
    tx_tdata_r[31: 0]   <= dac_valid0 ? {dac_data0[63:56], dac_data0[47:40], dac_data0[31:24], dac_data0[15:8]} : 32'h0; // msb (N+3, N+2, N+1, N+0)
    tx_tdata_r[63:32]   <= dac_valid0 ? {dac_data0[55:48], dac_data0[39:32], dac_data0[23:16], dac_data0[7: 0]} : 32'h0;  // lsb (N+3, N+2, N+1, N+0)
    tx_tdata_r[95:64]   <= dac_valid1 ? {dac_data1[63:56], dac_data1[47:40], dac_data1[31:24], dac_data1[15:8]} : 32'h0; // msb (N+3, N+2, N+1, N+0)
    tx_tdata_r[127:96]  <= dac_valid1 ? {dac_data1[55:48], dac_data1[39:32], dac_data1[23:16], dac_data1[7:0]} : 32'h0;  // lsb (N+3, N+2, N+1, N+0)
    tx_tdata_r[159:128] <= dac_valid2 ?  {dac_data2[63:56], dac_data2[47:40], dac_data2[31:24], dac_data2[15:8]} : 32'h0; // msb (N+3, N+2, N+1, N+0)
    tx_tdata_r[191:160] <= dac_valid2 ?  {dac_data2[55:48], dac_data2[39:32], dac_data2[23:16], dac_data2[7:0]} : 32'h0;  // lsb (N+3, N+2, N+1, N+0)
    tx_tdata_r[223:192] <= dac_valid3 ?  {dac_data3[63:56], dac_data3[47:40], dac_data3[31:24], dac_data3[15:8]} : 32'h0; // msb (N+3, N+2, N+1, N+0)
    tx_tdata_r[255:224] <= dac_valid3 ?  {dac_data3[55:48], dac_data3[39:32], dac_data3[23:16], dac_data3[7:0]} : 32'h0;  // lsb (N+3, N+2, N+1, N+0)
end
assign tx_tdata = tx_tdata_r;

assign gt_prbssel = gt_prbssel_out; // to PHY
assign rxencommaalign = |rxencommaalign_out;
assign rx_reset_gt = |rx_reset_gt_out;

//--------------------------------------------------------------
// PicoRV SFR (GPIO output pins)
//--------------------------------------------------------------
wire [32:0] mem_packed_ret_sfr;
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

/// #define BIT_STAT_TXTREADY   0
/// #define BIT_STAT_TXRESETN   1
/// #define BIT_STAT_RXRESETN_0 2
/// #define BIT_STAT_RXRESETN_1 3
/// #define BIT_STAT_RXRESET_DONE 4
/// #define BIT_STAT_TXRESET_DONE 5
/// #define BIT_STAT_QPLLLOCK_0 16
/// #define BIT_STAT_QPLLLOCK_1 17
/// #define BIT_STAT_RX_SYNC_0  18
/// #define BIT_STAT_RX_SYNC_1  19
/// #define BIT_STAT_TX_SYNC    20

/// #define BIT_TX_RESET        16
/// #define BIT_RX_RESET        17
/// #define BIT_TX_SYS_RESET    18
/// #define BIT_RX_SYS_RESET    19

assign sfRegsInp = {
    11'h0, tx_sync, rx_sync, common1_qpll_lock_out, common0_qpll_lock_out,
    10'h0, tx_reset_done, rx_reset_done, rx_aresetn, tx_aresetn, tx_tready};
assign tx_reset     = sfRegsWrStr[16];
assign rx_reset     = sfRegsWrStr[17];
assign tx_sys_reset = sfRegsWrStr[18];
assign rx_sys_reset = sfRegsWrStr[19];
assign mem_packed_ret = mem_packed_ret_0 | mem_packed_ret_1 | mem_packed_ret_2 | mem_packed_ret_sfr;
endmodule
