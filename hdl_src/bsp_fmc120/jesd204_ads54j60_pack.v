module jesd204_ads54j60_pack #(
    parameter [7:0] BASE_ADDR=8'h04,
    parameter [7:0] BASE2_ADDR=8'h00
)(
    // PicoRV32 packed MEM Bus interface
    input           clk,
    input           rst,
    input  [68:0]   mem_packed_fwd,
    output [32:0]   mem_packed_ret,

    input [31 : 0]  gt0_rxdata       ,
    input [3 : 0]   gt0_rxcharisk    ,
    input [3 : 0]   gt0_rxdisperr    ,
    input [3 : 0]   gt0_rxnotintable ,
    input [31 : 0]  gt1_rxdata       ,
    input [3 : 0]   gt1_rxcharisk    ,
    input [3 : 0]   gt1_rxdisperr    ,
    input [3 : 0]   gt1_rxnotintable ,
    input [31 : 0]  gt2_rxdata       ,
    input [3 : 0]   gt2_rxcharisk    ,
    input [3 : 0]   gt2_rxdisperr    ,
    input [3 : 0]   gt2_rxnotintable ,
    input [31 : 0]  gt3_rxdata       ,
    input [3 : 0]   gt3_rxcharisk    ,
    input [3 : 0]   gt3_rxdisperr    ,
    input [3 : 0]   gt3_rxnotintable ,
    input           rx_reset_done    ,
    output          rxencommaalign_out,
    output          rx_reset_gt      ,
    input           rx_core_clk      ,

    input           rx_reset         ,
    output          rx_aresetn       ,
    output [127 :0] rx_tdata         ,
    output          rx_tvalid        ,
    output [3 : 0]  rx_start_of_frame,
    output [3 : 0]  rx_end_of_frame  ,
    output [3 : 0]  rx_start_of_multiframe,
    output [3 : 0]  rx_end_of_multiframe,
    output [15 : 0] rx_frame_error   ,
    input           rx_sysref        ,
    output          rx_sync
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
// create_ip -name jesd204 -vendor xilinx.com -library ip -version 7.2 -module_name jesd204_ads54j60
// set_property -dict {
//     CONFIG.Component_Name {jesd204_ads54j60}
//     CONFIG.C_NODE_IS_TRANSMIT {0}
//     CONFIG.C_LANES {4}
//     CONFIG.GT_Line_Rate {10}
//     CONFIG.GT_REFCLK_FREQ {500.000}
//     CONFIG.DRPCLK_FREQ {125.0}
//     CONFIG.C_PLL_SELECTION {3}
//     CONFIG.Global_clk_sel {true}
//     CONFIG.C_DEFAULT_F {1}
//     CONFIG.C_DEFAULT_K {8}
//     CONFIG.AXICLK_FREQ {125.0}
// } [get_ips jesd204_ads54j60]
// generate_target {instantiation_template} [get_files jesd204_ads54j60.xci]
// generate_target all [get_files  jesd204_ads54j60.xci]
// catch { config_ip_cache -export [get_ips -all jesd204_ads54j60] }
// export_ip_user_files -of_objects [get_files jesd204_ads54j60.xci] -no_script -sync -force -quiet
// create_ip_run [get_files -of_objects [get_fileset sources_1] jesd204_ads54j60.xci]

jesd204_ads54j60 jesd204_i (
  .gt0_rxdata               (gt0_rxdata),                   // input wire [31 : 0] gt0_rxdata
  .gt0_rxcharisk            (gt0_rxcharisk),                // input wire [3 : 0] gt0_rxcharisk
  .gt0_rxdisperr            (gt0_rxdisperr),                // input wire [3 : 0] gt0_rxdisperr
  .gt0_rxnotintable         (gt0_rxnotintable),             // input wire [3 : 0] gt0_rxnotintable
  .gt1_rxdata               (gt1_rxdata),                   // input wire [31 : 0] gt1_rxdata
  .gt1_rxcharisk            (gt1_rxcharisk),                // input wire [3 : 0] gt1_rxcharisk
  .gt1_rxdisperr            (gt1_rxdisperr),                // input wire [3 : 0] gt1_rxdisperr
  .gt1_rxnotintable         (gt1_rxnotintable),             // input wire [3 : 0] gt1_rxnotintable
  .gt2_rxdata               (gt2_rxdata),                   // input wire [31 : 0] gt2_rxdata
  .gt2_rxcharisk            (gt2_rxcharisk),                // input wire [3 : 0] gt2_rxcharisk
  .gt2_rxdisperr            (gt2_rxdisperr),                // input wire [3 : 0] gt2_rxdisperr
  .gt2_rxnotintable         (gt2_rxnotintable),             // input wire [3 : 0] gt2_rxnotintable
  .gt3_rxdata               (gt3_rxdata),                   // input wire [31 : 0] gt3_rxdata
  .gt3_rxcharisk            (gt3_rxcharisk),                // input wire [3 : 0] gt3_rxcharisk
  .gt3_rxdisperr            (gt3_rxdisperr),                // input wire [3 : 0] gt3_rxdisperr
  .gt3_rxnotintable         (gt3_rxnotintable),             // input wire [3 : 0] gt3_rxnotintable
  .rx_reset_done            (rx_reset_done),                // input wire rx_reset_done
  .rxencommaalign_out       (rxencommaalign_out),           // output wire rxencommaalign_out
  .rx_reset_gt              (rx_reset_gt),                  // output wire rx_reset_gt
  .rx_core_clk              (rx_core_clk),                  // input wire rx_core_clk

  .s_axi_aclk               (clk),                          // input wire s_axi_aclk
  .s_axi_aresetn            (!rst),                         // input wire s_axi_aresetn
  .s_axi_awaddr             (mem_axi_awaddr[11:0]),         // input wire [11 : 0] s_axi_awaddr
  .s_axi_awvalid            (mem_axi_awvalid),              // input wire s_axi_awvalid
  .s_axi_awready            (mem_axi_awready),              // output wire s_axi_awready
  .s_axi_wdata              (mem_axi_wdata),                // input wire [31 : 0] s_axi_wdata
  .s_axi_wstrb              (mem_axi_wstrb),                // input wire [3 : 0] s_axi_wstrb
  .s_axi_wvalid             (mem_axi_wvalid),               // input wire s_axi_wvalid
  .s_axi_wready             (mem_axi_wready),               // output wire s_axi_wready
  .s_axi_bresp              (),                             // output wire [1 : 0] s_axi_bresp
  .s_axi_bvalid             (mem_axi_bvalid),               // output wire s_axi_bvalid
  .s_axi_bready             (mem_axi_bready),               // input wire s_axi_bready
  .s_axi_araddr             (mem_axi_araddr[11:0]),         // input wire [11 : 0] s_axi_araddr
  .s_axi_arvalid            (mem_axi_arvalid),              // input wire s_axi_arvalid
  .s_axi_arready            (mem_axi_arready),              // output wire s_axi_arready
  .s_axi_rdata              (mem_axi_rdata),                // output wire [31 : 0] s_axi_rdata
  .s_axi_rresp              (),                             // output wire [1 : 0] s_axi_rresp
  .s_axi_rvalid             (mem_axi_rvalid),               // output wire s_axi_rvalid
  .s_axi_rready             (mem_axi_rready),               // input wire s_axi_rready

  .rx_reset                 (rx_reset),                     // input wire rx_reset
  .rx_aresetn               (rx_aresetn),                   // output wire rx_aresetn
  .rx_tdata                 (rx_tdata),                     // output wire [127 : 0] rx_tdata
  .rx_tvalid                (rx_tvalid),                    // output wire rx_tvalid
  .rx_start_of_frame        (rx_start_of_frame),            // output wire [3 : 0] rx_start_of_frame
  .rx_end_of_frame          (rx_end_of_frame),              // output wire [3 : 0] rx_end_of_frame
  .rx_start_of_multiframe   (rx_start_of_multiframe),       // output wire [3 : 0] rx_start_of_multiframe
  .rx_end_of_multiframe     (rx_end_of_multiframe),         // output wire [3 : 0] rx_end_of_multiframe
  .rx_frame_error           (rx_frame_error),               // output wire [15 : 0] rx_frame_error
  .rx_sysref                (rx_sysref),                    // input wire rx_sysref
  .rx_sync                  (rx_sync)                       // output wire rx_sync
);

endmodule
