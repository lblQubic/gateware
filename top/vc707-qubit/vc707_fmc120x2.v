`timescale 1ns / 1ns

module vc707_fmc120x2 #(
    parameter [7:0] BASE_FMC120_0 = 8'h05,
    parameter [7:0] BASE_FMC120_1 = 8'h06,
    parameter IP ={8'd192, 8'd168, 8'd1, 8'd124},
    parameter MAC = {40'h00105ad155,8'd124},
    parameter LB_READ_DELAY = 3,
    parameter JUMBO_DW=14
) (
     input          CPU_RESET,
    output          UART_RTS,
     input          UART_CTS,

     inout          I2C_SCL,
     inout          I2C_SDA,
    output          I2C_MUX_RESET_B,
    output          UART_TX,
     input          UART_RX,

     input          SYSCLK_P,
     input          SYSCLK_N,

     input          SGMIICLK_Q0_P,
     input          SGMIICLK_Q0_N,
    output          SGMII_TX_P,
    output          SGMII_TX_N,
     input          SGMII_RX_P,
     input          SGMII_RX_N,

    output         USER_SMA_GPIO_P,
    output         USER_SMA_GPIO_N,

     inout          PHY_MDIO_LS,
    output          PHY_MDC_LS,
    output          PHY_RESET_LS,
    output          PHY_INT_LS,
    output [7:0]    GPIO_LED,

     // FMC1
     input [1:0]    adc_a_over_range_0,
     input [1:0]    adc_b_over_range_0,
    output [1:0]    adc_syncb_0       ,
     input          dac_syncb_n_0     ,
     input          dac_syncb_p_0     ,
    output          dac_tx_en_0       ,
     input          ext_trigger_n_0   ,
     input          ext_trigger_p_0   ,
    output          fpga_trigger_0    ,
    output          lmk_sync_0        ,
     input [1:0]    lmkclk_n_0        ,
     input [1:0]    lmkclk_p_0        ,
     input          pg_m2c_0          ,
     input          prsnt_m2c_l_0     ,
     input          refclk_n_0        ,
     input          refclk_p_0        ,
     input [7:0]    serdin_n_0        ,
     input [7:0]    serdin_p_0        ,
    output [7:0]    serdout_n_0       ,
    output [7:0]    serdout_p_0       ,
    output          trig_sync_n_0     ,
    output          trig_sync_p_0     ,
     // FMC2
     input [1:0]    adc_a_over_range_1,
     input [1:0]    adc_b_over_range_1,
    output [1:0]    adc_syncb_1       ,
     input          dac_syncb_n_1     ,
     input          dac_syncb_p_1     ,
    output          dac_tx_en_1       ,
     input          ext_trigger_n_1   ,
     input          ext_trigger_p_1   ,
    output          fpga_trigger_1    ,
    output          lmk_sync_1        ,
     input [1:0]    lmkclk_n_1        ,
     input [1:0]    lmkclk_p_1        ,
     input          pg_m2c_1          ,
     input          prsnt_m2c_l_1     ,
     input          refclk_n_1        ,
     input          refclk_p_1        ,
     input [7:0]    serdin_n_1        ,
     input [7:0]    serdin_p_1        ,
    output [7:0]    serdout_n_1       ,
    output [7:0]    serdout_p_1       ,
    output          trig_sync_n_1     ,
    output          trig_sync_p_1
);

// Clock IP
wire clk_100, clk_200;
wire pll_locked;

vc707_clocks clk_inst(
    .sysclk_p (SYSCLK_P),
    .sysclk_n (SYSCLK_N),
    .reset    (1'b0),
    .clk_out0 (clk_100),
    .clk_out1 (clk_200),
    .locked   (pll_locked)
);

`ifndef SIMULATE
wire idelayctrl_rdy;
// IDELAYCTRL
IDELAYCTRL idelayctrl_inst (
  .RST(1'b0),
  .RDY(idelayctrl_rdy),
  .REFCLK(clk_200)
);
`endif

wire          clk;
wire [23:0]   lb0_addr;
wire          lb0_write;
wire          lb0_read;
wire [31:0]   lb0_wdata;
wire [31:0]   lb0_rdata;
wire          lb0_rvalid;
wire          gt_rx_resetdone;
wire          gt_tx_resetdone;
wire [7:0]    mac_status;

wire [7:0] s_tx_tdata;      // byte stream data
wire s_tx_tvalid;
wire  s_tx_tready;

wire  mac_reset;

lbl_mac_sgmii #(
    .IP(IP), .MAC(MAC), .JUMBO_DW(JUMBO_DW),
    .LB_READ_DELAY(LB_READ_DELAY)
) gbe_sgmii (
    .reset          (mac_reset),
    .clk_100        (clk_100),

    .lb_clk         (clk            ),
    .lb_addr        (lb0_addr       ),
    .lb_write       (lb0_write      ),
    .lb_read        (lb0_read       ),
    .lb_wdata       (lb0_wdata      ),
    .lb_rdata       (lb0_rdata      ),
    .lb_rvalid      (lb0_rvalid     ),
    .gt_rx_resetdone(gt_rx_resetdone),
    .gt_tx_resetdone(gt_tx_resetdone),
    .mac_status     (mac_status     ),

    .s_tx_tdata     (s_tx_tdata),
    .s_tx_tvalid    (s_tx_tvalid),
    .s_tx_tready    (s_tx_tready),

    .sgmiiclk_q0_p  (SGMIICLK_Q0_P  ),
    .sgmiiclk_q0_n  (SGMIICLK_Q0_N  ),
    .sgmii_tx_p     (SGMII_TX_P     ),
    .sgmii_tx_n     (SGMII_TX_N     ),
    .sgmii_rx_p     (SGMII_RX_P     ),
    .sgmii_rx_n     (SGMII_RX_N     ),

    .phy_mdio_ls    (PHY_MDIO_LS    ),
    .phy_mdc_ls     (PHY_MDC_LS     ),
    .phy_reset_ls   (PHY_RESET_LS   )
);

wire [31:0] gpio_z;
wire trap;
// merged localbus master
wire lb_write;
wire lb_read;
wire [23:0] lb_addr;
wire [31:0] lb_wdata;
wire [31:0] lb_rdata;
wire lb_rvalid;

assign UART_RTS = 1'b1;
wire reset_system = CPU_RESET;

wire rst;
wire [68:0]       mem_packed_fwd;
wire [32:0]       mem_packed_ret;

system #(
    .LB_ADW(24),
    .LB_READ_DELAY(LB_READ_DELAY),
    .SYSTEM_HEX_PATH("../../submodules/picorv32soc/project/vc707_fmc120/system32.hex")
) system_inst (
    .clk                (clk),
    .cpu_reset          (reset_system),  // TODO: add udp reset
    .gpio_z             (gpio_z),
    .uart_tx            (UART_TX),
    .uart_rx            (UART_RX),
    .trap               (trap ),
    .lb_write           (lb0_write),
    .lb_read            (lb0_read),
    .lb_addr            (lb0_addr),
    .lb_wdata           (lb0_wdata),
    .lb_rdata           (lb0_rdata),
    .lb_rvalid          (lb0_rvalid),
    .lb_merge_write     (lb_write),
    .lb_merge_read      (lb_read),
    .lb_merge_addr      (lb_addr),
    .lb_merge_wdata     (lb_wdata),
    .lb_merge_rdata     (lb_rdata),
    .lb_merge_rvalid    (lb_rvalid),
    .rst                (rst),
    .mem_packed_fwd     (mem_packed_fwd),
    .mem_packed_ret     (mem_packed_ret)
);

wire [32:0]       mem_packed_ret_0;
wire [32:0]       mem_packed_ret_1;
assign mem_packed_ret = mem_packed_ret_0 | mem_packed_ret_1;

wire       fmc_core_clk_0;
wire       fmc_trigger_0 ;
wire       fmc_sysref_0;
wire       fmc_aclk_1;
wire       fmc_trigger_1;
wire       fmc_sysref_1;
wire [1:0] dsp_trigger_out;

wire       common_lmk_sysref;
wire       common_lmk_sync;

wire [63:0] adc_data0;
wire        adc_data0_valid;
wire [63:0] adc_data1;
wire        adc_data1_valid;
wire [63:0] adc_data2;
wire        adc_data2_valid;
wire [63:0] adc_data3;
wire        adc_data3_valid;
wire [63:0] adc_data4;
wire        adc_data4_valid;
wire [63:0] adc_data5;
wire        adc_data5_valid;
wire [63:0] adc_data6;
wire        adc_data6_valid;
wire [63:0] adc_data7;
wire        adc_data7_valid;
wire [63:0] dac_data0;
wire        dac_data0_valid;
wire [63:0] dac_data1;
wire        dac_data1_valid;
wire [63:0] dac_data2;
wire        dac_data2_valid;
wire [63:0] dac_data3;
wire        dac_data3_valid;
wire [63:0] dac_data4;
wire        dac_data4_valid;
wire [63:0] dac_data5;
wire        dac_data5_valid;
wire [63:0] dac_data6;
wire        dac_data6_valid;
wire [63:0] dac_data7;
wire        dac_data7_valid;
wire        user_sma_gpio_p;
wire        user_sma_gpio_n;

// Master, generate dclk to fpga
fmc120 #(
    .CLK_MASTER     (1'b1),
    .BASE_ADDR      (BASE_FMC120_0)
) fmc120_0 (
    .clk                (clk            ),
    .rst                (rst            ),
    .mem_packed_fwd     (mem_packed_fwd ),
    .mem_packed_ret     (mem_packed_ret_0),

    .core_clk_out       (fmc_core_clk_0 ),  // From LMK lane 2, 250MHz
    .core_clk_in        (1'b0           ),
    .trigger_out        (fmc_trigger_0  ),  // From FMC120 ext trigger

    .sysref_out         (fmc_sysref_0   ),  // From LMK lane 3, burst
    .lmk_sysref_in      (common_lmk_sysref ),  // TO LMK CLK0
    .lmk_sync_in        (common_lmk_sync   ),  // TO LMK SYNC

    .adc_data0          (adc_data0      ),
    .adc_data0_valid    (adc_data0_valid),
    .adc_data1          (adc_data1      ),
    .adc_data1_valid    (adc_data1_valid),
    .adc_data2          (adc_data2      ),
    .adc_data2_valid    (adc_data2_valid),
    .adc_data3          (adc_data3      ),
    .adc_data3_valid    (adc_data3_valid),
    .dac_data0          (dac_data0      ),
    .dac_data0_valid    (dac_data0_valid),
    .dac_data1          (dac_data1      ),
    .dac_data1_valid    (dac_data1_valid),
    .dac_data2          (dac_data2      ),
    .dac_data2_valid    (dac_data2_valid),
    .dac_data3          (dac_data3      ),
    .dac_data3_valid    (dac_data3_valid),

    .adc_a_over_range   (adc_a_over_range_0),
    .adc_b_over_range   (adc_b_over_range_0),
    .adc_syncb          (adc_syncb_0       ),
    .dac_syncb_n        (dac_syncb_n_0     ),
    .dac_syncb_p        (dac_syncb_p_0     ),
    .dac_tx_en          (dac_tx_en_0       ),
    .ext_trigger_n      (ext_trigger_n_0   ),
    .ext_trigger_p      (ext_trigger_p_0   ),
    .fpga_trigger       (fpga_trigger_0    ),
    .lmk_sync           (lmk_sync_0        ),   // TO LMK SYNC
    .lmkclk_n           (lmkclk_n_0        ),   // From LMK lane[3,2], sclk, dclk
    .lmkclk_p           (lmkclk_p_0        ),   // From LMK lane[3,2], sclk, dclk
    .pg_m2c             (pg_m2c_0          ),
    .prsnt_m2c_l        (prsnt_m2c_l_0     ),
    .refclk_n           (refclk_n_0        ),   // From LMK lane 8, 500MHz
    .refclk_p           (refclk_p_0        ),   // From LMK lane 8, 500MHz
    .serdin_n           (serdin_n_0        ),
    .serdin_p           (serdin_p_0        ),
    .serdout_n          (serdout_n_0       ),
    .serdout_p          (serdout_p_0       ),
    .trig_sync_n        (trig_sync_n_0     ),  // To LMK CLK0
    .trig_sync_p        (trig_sync_p_0     )   // To LMK CLK0
);

// Slave, use dclk from fmc120_0
fmc120 #(
    .CLK_MASTER     (1'b0),
    .BASE_ADDR      (BASE_FMC120_1)
) fmc120_1 (
    .clk                (clk            ),
    .rst                (rst            ),
    .mem_packed_fwd     (mem_packed_fwd ),
    .mem_packed_ret     (mem_packed_ret_1),

    .core_clk_out       (fmc_core_clk_1 ),  // From LMK lane 2, 250MHz
    .core_clk_in        (fmc_core_clk_0 ),
    .trigger_out        (fmc_trigger_1  ),  // From FMC120 ext trigger

    .sysref_out         (fmc_sysref_1   ),  // From LMK lane 3, burst
    .lmk_sysref_in      (common_lmk_sysref ),  // TO LMK CLK0
    .lmk_sync_in        (common_lmk_sync   ),  // TO LMK SYNC

    .adc_data0          (adc_data4      ),
    .adc_data0_valid    (adc_data4_valid),
    .adc_data1          (adc_data5      ),
    .adc_data1_valid    (adc_data5_valid),
    .adc_data2          (adc_data6      ),
    .adc_data2_valid    (adc_data6_valid),
    .adc_data3          (adc_data7      ),
    .adc_data3_valid    (adc_data7_valid),
    .dac_data0          (dac_data4      ),
    .dac_data0_valid    (dac_data4_valid),
    .dac_data1          (dac_data5      ),
    .dac_data1_valid    (dac_data5_valid),
    .dac_data2          (dac_data6      ),
    .dac_data2_valid    (dac_data6_valid),
    .dac_data3          (dac_data7      ),
    .dac_data3_valid    (dac_data7_valid),

    .adc_a_over_range   (adc_a_over_range_1),
    .adc_b_over_range   (adc_b_over_range_1),
    .adc_syncb          (adc_syncb_1       ),
    .dac_syncb_n        (dac_syncb_n_1     ),
    .dac_syncb_p        (dac_syncb_p_1     ),
    .dac_tx_en          (dac_tx_en_1       ),
    .ext_trigger_n      (ext_trigger_n_1   ),
    .ext_trigger_p      (ext_trigger_p_1   ),
    .fpga_trigger       (fpga_trigger_1    ),
    .lmk_sync           (lmk_sync_1        ),   // TO LMK SYNC
    .lmkclk_n           (lmkclk_n_1        ),   // From LMK lane[3,2], sclk, dclk
    .lmkclk_p           (lmkclk_p_1        ),   // From LMK lane[3,2], sclk, dclk
    .pg_m2c             (pg_m2c_1          ),
    .prsnt_m2c_l        (prsnt_m2c_l_1     ),
    .refclk_n           (refclk_n_1        ),   // From LMK lane 8, 500MHz
    .refclk_p           (refclk_p_1        ),   // From LMK lane 8, 500MHz
    .serdin_n           (serdin_n_1        ),
    .serdin_p           (serdin_p_1        ),
    .serdout_n          (serdout_n_1       ),
    .serdout_p          (serdout_p_1       ),
    .trig_sync_n        (trig_sync_n_1     ),  // To LMK CLK0
    .trig_sync_p        (trig_sync_p_1     )   // To LMK CLK0
);

dsp_fmc120x2 dsp_fmc120x2_inst (
   .reset       (reset_system   ),
   .lb_clk      (clk            ),
   .lb_addr     (lb_addr[19:0]  ),
   .lb_write    (lb_write       ),
   .lb_read     (lb_read        ),
   .lb_wdata    (lb_wdata       ),
   .lb_rdata    (lb_rdata       ),
   .lb_rvalid   (lb_rvalid      ),

   .fmc_clk0    (fmc_core_clk_0 ),
   .fmc_trigger0(fmc_trigger_0  ),
   .fmc_sysref0 (fmc_sysref_0   ),
   .fmc_clk1    (fmc_core_clk_1 ),
   .fmc_trigger1(fmc_trigger_1  ),
   .fmc_sysref1 (fmc_sysref_1   ),
   .trigger_out (dsp_trigger_out),

   .adc0_out    (adc_data0      ),
   .adc0_val    (adc_data0_valid),
   .adc1_out    (adc_data1      ),
   .adc1_val    (adc_data1_valid),
   .adc2_out    (adc_data2      ),
   .adc2_val    (adc_data2_valid),
   .adc3_out    (adc_data3      ),
   .adc3_val    (adc_data3_valid),
   .adc4_out    (adc_data4      ),
   .adc4_val    (adc_data4_valid),
   .adc5_out    (adc_data5      ),
   .adc5_val    (adc_data5_valid),
   .adc6_out    (adc_data6      ),
   .adc6_val    (adc_data6_valid),
   .adc7_out    (adc_data7      ),
   .adc7_val    (adc_data7_valid),
   .dac0_in     (dac_data0      ),
   .dac0_val    (dac_data0_valid),
   .dac1_in     (dac_data1      ),
   .dac1_val    (dac_data1_valid),
   .dac2_in     (dac_data2      ),
   .dac2_val    (dac_data2_valid),
   .dac3_in     (dac_data3      ),
   .dac3_val    (dac_data3_valid),
   .dac4_in     (dac_data4      ),
   .dac4_val    (dac_data4_valid),
   .dac5_in     (dac_data5      ),
   .dac5_val    (dac_data5_valid),
   .dac6_in     (dac_data6      ),
   .dac6_val    (dac_data6_valid),
   .dac7_in     (dac_data7      ),
   .dac7_val    (dac_data7_valid),
   .user_sma_gpio_p(user_sma_gpio_p),
   .user_sma_gpio_n(user_sma_gpio_n)

/*
   .s_tx_tdata  (s_tx_tdata ),
   .s_tx_tvalid (s_tx_tvalid),
   .s_tx_tready (s_tx_tready)*/
);

// gpio_z pinout must be matching settings.h

////////////////////
// I2C GPIO CONTROL
assign I2C_SDA          = gpio_z[0];
assign I2C_SCL          = gpio_z[1];
assign I2C_MUX_RESET_B  = gpio_z[2]; // to enable I2C mux, set high

////////////////////
// GBE GPIO CONTROL
assign mac_reset        = gpio_z[3];
//assign gpio_z[23:16] = mac_status;
assign PHY_INT_LS = 1'b0;

////////////////////
// FMC120 GPIO CONTROL
/// #define PIN_LMK_SYNC  8
reg [25:0] fmc_clk0_cnt=0;
always @(posedge fmc_core_clk_0) fmc_clk0_cnt <= rst ? 0 : fmc_clk0_cnt+1'b1;
// for sysref, 1/64 * 250MHz = 3.9MHz
assign common_lmk_sysref    = fmc_clk0_cnt[5];
assign common_lmk_sync      = gpio_z[8];

assign GPIO_LED = {trap, mac_status[6:0]};
//assign USER_SMA_GPIO_P = dsp_trigger_out[0];
//assign USER_SMA_GPIO_N = dsp_trigger_out[1];
//assign USER_SMA_GPIO_P = dsp_sysref_out;
//assign USER_SMA_GPIO_N = dsp_sysref_out;
//assign USER_SMA_GPIO_P = fmc_sysref_0;
//assign USER_SMA_GPIO_N = fmc_sysref_1;
assign USER_SMA_GPIO_P = user_sma_gpio_p;
assign USER_SMA_GPIO_N = user_sma_gpio_n;
endmodule
