module jesd204_dac39j84_pack #(
    parameter [7:0] BASE_ADDR=8'h04,
    parameter [7:0] BASE2_ADDR=8'h00
)(
    // PicoRV32 packed MEM Bus interface
    input           clk,
    input           rst,
    input  [68:0]   mem_packed_fwd,
    output [32:0]   mem_packed_ret,

    output [31 : 0] gt0_txdata      ,
    output [3 : 0]  gt0_txcharisk   ,
    output [31 : 0] gt1_txdata      ,
    output [3 : 0]  gt1_txcharisk   ,
    output [31 : 0] gt2_txdata      ,
    output [3 : 0]  gt2_txcharisk   ,
    output [31 : 0] gt3_txdata      ,
    output [3 : 0]  gt3_txcharisk   ,
    output [31 : 0] gt4_txdata      ,
    output [3 : 0]  gt4_txcharisk   ,
    output [31 : 0] gt5_txdata      ,
    output [3 : 0]  gt5_txcharisk   ,
    output [31 : 0] gt6_txdata      ,
    output [3 : 0]  gt6_txcharisk   ,
    output [31 : 0] gt7_txdata      ,
    output [3 : 0]  gt7_txcharisk   ,
    input           tx_reset_done   ,
    output [2 : 0]  gt_prbssel_out  ,
    output          tx_reset_gt     ,
    input           tx_core_clk     ,

    input           tx_reset        ,
    input           tx_sysref       ,
    output [3 : 0]  tx_start_of_frame,
    output [3 : 0]  tx_start_of_multiframe,
    output          tx_aresetn      ,
    input  [255 :0] tx_tdata        ,
    output          tx_tready       ,
    input           tx_sync
);

// --------------------------------------------------------------
//  Unpack the MEM bus
// --------------------------------------------------------------
wire [31:0] mem_wdata;
wire [ 3:0] mem_wstrb;
wire        mem_valid;
wire [31:0] mem_addr;
wire        mem_ready;
wire [31:0] mem_rdata;
munpack mu (
    .mem_packed_fwd( mem_packed_fwd ),
    .mem_packed_ret( mem_packed_ret ),

    .mem_wdata ( mem_wdata    ),
    .mem_wstrb ( mem_wstrb    ),
    .mem_valid ( mem_valid  ),
    .mem_addr  ( mem_addr     ),
    .mem_ready ( mem_ready    ),
    .mem_rdata ( mem_rdata    )
);

// AXI4-lite
wire        mem_axi_awvalid;
wire        mem_axi_awready;
wire [31:0] mem_axi_awaddr;
wire [ 2:0] mem_axi_awprot;

wire        mem_axi_wvalid;
wire        mem_axi_wready;
wire [31:0] mem_axi_wdata;
wire [ 3:0] mem_axi_wstrb;

wire        mem_axi_bvalid;
wire        mem_axi_bready;

wire        mem_axi_arvalid;
wire        mem_axi_arready;
wire [31:0] mem_axi_araddr;
wire[ 2:0]  mem_axi_arprot;

wire        mem_axi_rvalid;
wire        mem_axi_rready;
wire [31:0] mem_axi_rdata;
wire axi_mem_valid = (mem_addr[31:16]=={BASE_ADDR, BASE2_ADDR}) && mem_valid;
wire axi_mem_instr = 1'b0;


picorv32_axi_adapter axi_adapter (
    .clk            (clk            ),
    .resetn         (!rst           ),
    .mem_axi_awvalid(mem_axi_awvalid),
    .mem_axi_awready(mem_axi_awready),
    .mem_axi_awaddr (mem_axi_awaddr ),
    .mem_axi_awprot (mem_axi_awprot ),
    .mem_axi_wvalid (mem_axi_wvalid ),
    .mem_axi_wready (mem_axi_wready ),
    .mem_axi_wdata  (mem_axi_wdata  ),
    .mem_axi_wstrb  (mem_axi_wstrb  ),
    .mem_axi_bvalid (mem_axi_bvalid ),
    .mem_axi_bready (mem_axi_bready ),
    .mem_axi_arvalid(mem_axi_arvalid),
    .mem_axi_arready(mem_axi_arready),
    .mem_axi_araddr (mem_axi_araddr ),
    .mem_axi_arprot (mem_axi_arprot ),
    .mem_axi_rvalid (mem_axi_rvalid ),
    .mem_axi_rready (mem_axi_rready ),
    .mem_axi_rdata  (mem_axi_rdata  ),
    .mem_valid      (axi_mem_valid  ),
    .mem_instr      (axi_mem_instr  ),
    .mem_ready      (mem_ready      ),
    .mem_addr       (mem_addr       ),
    .mem_wdata      (mem_wdata      ),
    .mem_wstrb      (mem_wstrb      ),
    .mem_rdata      (mem_rdata      )
);

// Vivado 2017.4
// create_ip -name jesd204 -vendor xilinx.com -library ip -version 7.2 -module_name jesd204_dac39j84
// set_property -dict {
//     CONFIG.Component_Name {jesd204_dac39j84}
//     CONFIG.C_NODE_IS_TRANSMIT {1}
//     CONFIG.C_LANES {8}
//     CONFIG.GT_Line_Rate {10}
//     CONFIG.GT_REFCLK_FREQ {500.000}
//     CONFIG.DRPCLK_FREQ {125.0}
//     CONFIG.C_PLL_SELECTION {3}
//     CONFIG.Global_clk_sel {true}
//     CONFIG.C_DEFAULT_F {1}
//     CONFIG.C_DEFAULT_K {8}
//     CONFIG.AXICLK_FREQ {125.0}
// } [get_ips jesd204_dac39j84]
// generate_target {instantiation_template} [get_files jesd204_dac39j84.xci]
// generate_target all [get_files  jesd204_dac39j84.xci]
// catch { config_ip_cache -export [get_ips -all jesd204_dac39j84] }
// export_ip_user_files -of_objects [get_files jesd204_dac39j84.xci] -no_script -sync -force -quiet
// create_ip_run [get_files -of_objects [get_fileset sources_1] jesd204_dac39j84.xci]

jesd204_dac39j84 jesd204_i (
  .gt0_txdata(gt0_txdata),                          // output wire [31 : 0] gt0_txdata
  .gt0_txcharisk(gt0_txcharisk),                    // output wire [3 : 0] gt0_txcharisk
  .gt1_txdata(gt1_txdata),                          // output wire [31 : 0] gt1_txdata
  .gt1_txcharisk(gt1_txcharisk),                    // output wire [3 : 0] gt1_txcharisk
  .gt2_txdata(gt2_txdata),                          // output wire [31 : 0] gt2_txdata
  .gt2_txcharisk(gt2_txcharisk),                    // output wire [3 : 0] gt2_txcharisk
  .gt3_txdata(gt3_txdata),                          // output wire [31 : 0] gt3_txdata
  .gt3_txcharisk(gt3_txcharisk),                    // output wire [3 : 0] gt3_txcharisk
  .gt4_txdata(gt4_txdata),                          // output wire [31 : 0] gt4_txdata
  .gt4_txcharisk(gt4_txcharisk),                    // output wire [3 : 0] gt4_txcharisk
  .gt5_txdata(gt5_txdata),                          // output wire [31 : 0] gt5_txdata
  .gt5_txcharisk(gt5_txcharisk),                    // output wire [3 : 0] gt5_txcharisk
  .gt6_txdata(gt6_txdata),                          // output wire [31 : 0] gt6_txdata
  .gt6_txcharisk(gt6_txcharisk),                    // output wire [3 : 0] gt6_txcharisk
  .gt7_txdata(gt7_txdata),                          // output wire [31 : 0] gt7_txdata
  .gt7_txcharisk(gt7_txcharisk),                    // output wire [3 : 0] gt7_txcharisk
  .tx_reset_done(tx_reset_done),                    // input wire tx_reset_done
  .gt_prbssel_out(gt_prbssel_out),                  // output wire [2 : 0] gt_prbssel_out
  .tx_reset_gt(tx_reset_gt),                        // output wire tx_reset_gt
  .tx_core_clk(tx_core_clk),                        // input wire tx_core_clk

  .s_axi_aclk       (clk),                          // input wire s_axi_aclk
  .s_axi_aresetn    (!rst),                          // input wire s_axi_aresetn
  .s_axi_awaddr     (mem_axi_awaddr[11:0]),         // input wire [11 : 0] s_axi_awaddr
  .s_axi_awvalid    (mem_axi_awvalid),              // input wire s_axi_awvalid
  .s_axi_awready    (mem_axi_awready),              // output wire s_axi_awready
  .s_axi_wdata      (mem_axi_wdata),                // input wire [31 : 0] s_axi_wdata
  .s_axi_wstrb      (mem_axi_wstrb),                // input wire [3 : 0] s_axi_wstrb
  .s_axi_wvalid     (mem_axi_wvalid),               // input wire s_axi_wvalid
  .s_axi_wready     (mem_axi_wready),               // output wire s_axi_wready
  .s_axi_bresp      (),                             // output wire [1 : 0] s_axi_bresp
  .s_axi_bvalid     (mem_axi_bvalid),               // output wire s_axi_bvalid
  .s_axi_bready     (mem_axi_bready),               // input wire s_axi_bready
  .s_axi_araddr     (mem_axi_araddr[11:0]),         // input wire [11 : 0] s_axi_araddr
  .s_axi_arvalid    (mem_axi_arvalid),              // input wire s_axi_arvalid
  .s_axi_arready    (mem_axi_arready),              // output wire s_axi_arready
  .s_axi_rdata      (mem_axi_rdata),                // output wire [31 : 0] s_axi_rdata
  .s_axi_rresp      (),                             // output wire [1 : 0] s_axi_rresp
  .s_axi_rvalid     (mem_axi_rvalid),               // output wire s_axi_rvalid
  .s_axi_rready     (mem_axi_rready),               // input wire s_axi_rready

  .tx_reset(tx_reset),                              // input wire tx_reset
  .tx_sysref(tx_sysref),                            // input wire tx_sysref
  .tx_start_of_frame(tx_start_of_frame),            // output wire [3 : 0] tx_start_of_frame
  .tx_start_of_multiframe(tx_start_of_multiframe),  // output wire [3 : 0] tx_start_of_multiframe
  .tx_aresetn(tx_aresetn),                          // output wire tx_aresetn
  .tx_tdata(tx_tdata),                              // input wire [255 : 0] tx_tdata
  .tx_tready(tx_tready),                            // output wire tx_tready
  .tx_sync(tx_sync)                                 // input wire tx_sync
);

endmodule
