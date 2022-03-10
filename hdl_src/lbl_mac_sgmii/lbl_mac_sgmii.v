`timescale 1ns / 1ns

module lbl_mac_sgmii #(
    parameter IP ={8'd192, 8'd168, 8'd1, 8'd122},
    parameter MAC = 48'h00105ad155b2,
    parameter LB_READ_DELAY = 3,
    parameter JUMBO_DW=14
) (
    input           reset,
    input           clk_100,

    // stream tx
    input [7:0]     s_tx_tdata,
    input           s_tx_tvalid,
    output          s_tx_tready,

    // lb master
    output          lb_clk,
    output [23:0]   lb_addr,
    output          lb_write,
    output          lb_read,
    output [31:0]   lb_wdata,
    input [31:0]    lb_rdata,
    output          lb_rvalid,

    // diagnostics
    output [7:0]    mac_status,
    output          gt_rx_resetdone,
    output          gt_tx_resetdone,
    // external
    input           sgmiiclk_q0_p,
    input           sgmiiclk_q0_n,
    output          sgmii_tx_p,
    output          sgmii_tx_n,
    input           sgmii_rx_p,
    input           sgmii_rx_n,

    inout           phy_mdio_ls,
    output          phy_mdc_ls,
    output          phy_reset_ls
);

//////////////////////////////////////////////////////////////////////////////
wire gmii_tx_clk, gmii_rx_clk;
wire gt_rxfsm_resetdone, gt_txfsm_resetdone;
wire gt_cpll_locked;

k7_gtx_gige_mac #(
    .IP(IP), .MAC(MAC), .JUMBO_DW(JUMBO_DW),
    .LB_READ_DELAY(LB_READ_DELAY)
) sgmii_mac_0 (
    // physical pins
    .gtrefclk_p         (sgmiiclk_q0_p),
    .gtrefclk_n         (sgmiiclk_q0_n),
    .sfp_tx_p           (sgmii_tx_p),
    .sfp_tx_n           (sgmii_tx_n),
    .sfp_rx_p           (sgmii_rx_p),
    .sfp_rx_n           (sgmii_rx_n),
    // controls
    .soft_reset         (reset),
    .reset              (1'b0),
    .drp_clk            (clk_100),
    .gt_txfsm_resetdone (gt_txfsm_resetdone),
    .gt_rxfsm_resetdone (gt_rxfsm_resetdone),
    .gt_tx_resetdone    (gt_tx_resetdone),
    .gt_rx_resetdone    (gt_rx_resetdone),
    .gt_pll_locked      (gt_cpll_locked),
    .mac_status         (mac_status),
    .gmii_tx_clk        (gmii_tx_clk),
    .gmii_rx_clk        (gmii_rx_clk),

    .s_tx_tdata         (s_tx_tdata),
    .s_tx_tvalid        (s_tx_tvalid),
    .s_tx_tready        (s_tx_tready),

    .lb_clk             (lb_clk),
    .lb_addr            (lb_addr),
    .lb_write           (lb_write),
    .lb_read            (lb_read),
    .lb_rdata           (lb_rdata),
    .lb_wdata           (lb_wdata),
    .lb_rvalid          (lb_rvalid)
);

//////////////////////////////////////////////////////////////////////////////
// Initialization resets
reg [3:0] clk_ecnt=0;
reg sgmii_reset_b = 1'b0;
always @(posedge lb_clk) clk_ecnt <= clk_ecnt+1;
always @(posedge lb_clk) if (clk_ecnt[3]) sgmii_reset_b <= 1'b1;

////////////////////////////////////////////////////////////////////////////////
// SGMII PHY init Wait for 10ms to re-write PHY's configuration register (see
// mii.v) Marvell claims PHY is available for configuration reads and writes 5ms
// after a hardware reset,
reg [20:0] hw_rst_cnt=0;
reg hw_rst_done=1'b0, hw_rst_done_d=1'b0;
reg do_write_r=1'b0;
always @(posedge lb_clk) begin
    hw_rst_cnt <= sgmii_reset_b ? hw_rst_cnt+1'b1 : 0;
    if (hw_rst_cnt[20]) hw_rst_done <= 1'b1;
    hw_rst_done_d <= hw_rst_done;
    do_write_r <= hw_rst_done & ~hw_rst_done_d;
end

wire mii_strobe;
wire [4:0] mii_addr;
wire [15:0] mii_data;
// Hard-coded reads and writes to re-configure Marvell PHY in Altera's
// Stratix-IV (EP4SGX230KF40C2ES) Development kit mii uses the SMI (Serial
// Management interace) to re-write the configuration registers in the PHY in
// order to disable AN Configuration writes are done when do_write is asserted,
// at minimum 5ms after a hardware reset
mii mii_fp (
    .clk        (lb_clk),
    .MDC        (phy_mdc_ls),
    .MDIO       (phy_mdio_ls),
    .do_write   (do_write_r),
    .strobe     (mii_strobe),
    .addr       (mii_addr),
    .data       (mii_data)
);

// Marvell PHY hardware reset at turn-on (active low)
assign phy_reset_ls = sgmii_reset_b;

endmodule
