`timescale 1ns / 1ns

module ether_gmii #(
    parameter [31:0] IP = 32'h80038226,         //128.3.130.38 (rflab2) Bldg. 46
    parameter [47:0] MAC = 48'h00105ad155b4,
    parameter MEM_GATEWAY_PIPELINE=3,           // Read pipeline window in mem_gateway
    parameter JUMBO_DW = 14,
    parameter SET_IP_ENABLE = 0                 // Set last byte of IP address from DIP switch
) (
    input reset,

    // MII interface
    input       gmii_tx_clk,
    input       gmii_rx_clk,
    input [7:0] gmii_rxd,
    input       gmii_rx_dv,
    input       gmii_rx_er,
    output reg [7:0] gmii_txd,
    output reg  gmii_tx_en,
    output reg  gmii_tx_er,

    // Localbus
    output        lb_clk,
    output [23:0] lb_addr,
    output        lb_write,
    output        lb_read,
    output        lb_rvalid,
    input [31:0]  lb_data_in,
    output [31:0] lb_data_out,

    // stream tx
    input [7:0]   s_tx_tdata,
    input         s_tx_tvalid,
    output        s_tx_tready,

    input [7:0]   last_ip_byte,
    output        pwm_out0,
    output        pwm_out1,
    output [7:0]  status
);


wire [7:0] abst_in, abst_out;
wire abst_in_s, abst_out_s;

wire clk = gmii_tx_clk;   // at some point we want a ring clock instead
assign lb_clk = clk;

// Latch Rx input pins in IOB
reg [7:0] rxd=0;
reg rx_dv=0, rx_er=0;
always @(posedge gmii_rx_clk) begin
    rxd   <= gmii_rxd;
    rx_dv <= gmii_rx_dv;
    rx_er <= gmii_rx_er;
end

// FIFO from Rx clock domain to gtx clock domain
gmii_fifo rx2gtx(
    .clk_in(gmii_rx_clk), .d_in(rxd),   .strobe_in(rx_dv),
    .clk_out(clk),   .d_out(abst_in), .strobe_out(abst_in_s)
);

// Single clock domain, abstract Ethernet
wire rx_crc_ok;
wire [7:0] data_rx_1;  wire ready_1, strobe_rx_1, crc_rx_1;
wire [7:0] data_rx_2;  wire ready_2, strobe_rx_2, crc_rx_2;
wire [7:0] data_rx_3;  wire ready_3, strobe_rx_3, crc_rx_3;
wire [7:0] data_tx_1;  wire [JUMBO_DW-1:0] length_1;  wire req_1, ack_1, strobe_tx_1, warn_1;
wire [7:0] data_tx_2;  wire [JUMBO_DW-1:0] length_2;  wire req_2, ack_2, strobe_tx_2, warn_2;
wire [7:0] data_tx_3;  wire [JUMBO_DW-1:0] length_3;  wire req_3, ack_3, strobe_tx_3, warn_3;

wire [3:0] agg_leds;
wire [8:0] address_set;

aggregate #(
    .ip(IP), .mac(MAC)
) agg_i (
    .clk        (clk),
    .eth_in     (abst_in),
    .eth_in_s   (abst_in_s),
    .eth_out    (abst_out),
    .eth_out_s  (abst_out_s),
    .rx_crc_ok  (rx_crc_ok),
    .address_set(address_set),

    .data_rx_1  (data_rx_1),
    .ready_1    (ready_1),
    .strobe_rx_1(strobe_rx_1),
    .crc_rx_1   (crc_rx_1),

    .data_rx_2  (data_rx_2),
    .ready_2    (ready_2),
    .strobe_rx_2(strobe_rx_2),
    .crc_rx_2   (crc_rx_2),

    .data_rx_3  (data_rx_3),
    .ready_3    (ready_3),
    .strobe_rx_3(strobe_rx_3),
    .crc_rx_3   (crc_rx_3),

    .req_1      (req_1),
    .length_1   (length_1),
    .ack_1      (ack_1),
    .strobe_tx_1(strobe_tx_1),
    .warn_1     (warn_1),
    .data_tx_1  (data_tx_1),

    .req_2      (req_2),
    .length_2   (length_2),
    .ack_2      (ack_2),
    .strobe_tx_2(strobe_tx_2),
    .warn_2     (warn_2),
    .data_tx_2  (data_tx_2),

    .req_3      (req_3),
    .length_3   (length_3),
    .ack_3      (ack_3),
    .strobe_tx_3(strobe_tx_3),
    .warn_3     (warn_3),
    .data_tx_3  (data_tx_3),
    .leds(agg_leds)
);

generate
    if (SET_IP_ENABLE==1) begin : set_ip
        // last IP byte be replaced
        set_address #(.ip_net(IP), .mac(MAC)) setter(
            .clk(clk), .rst(reset),
            .last_ip_byte(last_ip_byte), .address_set(address_set)
        );
    end // End if (SET_IP_ENABLE==1)
    else begin
        assign address_set = 9'b0;
    end
endgenerate // End generate of SET_IP_ENABLE

// instantiate some test clients
// Tx only, but triggered by corresponding Rx ready
client_tx cl1tx(
    .clk        (clk),
    .ack        (ack_1),
    .strobe     (strobe_tx_1),
    .req        (req_1),
    .length     (length_1),
    .data_out   (data_tx_1),
    .srx        (ready_1)
);

client_rx cl1rx(
    .clk        (clk),
    .ready      (ready_1),
    .strobe     (strobe_rx_1),
    .crc        (crc_rx_1),
    .data_in    (data_rx_1),
    .led        ({pwm_out1,pwm_out0})
);

client_tx_s #(.JUMBO_DW(JUMBO_DW)) client_tx_s (
    .clk        (clk),
    .rx_ready   (ready_2),
    .tx_ack     (ack_2),
    .tx_warn    (warn_2),
    .tx_req     (req_2),
    .tx_len     (length_2),
    .packet_out (data_tx_2),
    .s_tdata    (s_tx_tdata),
    .s_tvalid   (s_tx_tvalid),
    .s_tready   (s_tx_tready)
);

//Client at port 3000: Local bus master
wire lb_ctl_stb, lb_ctl_rd, lb_ctl_rd_valid;
assign lb_write = lb_ctl_stb & ~lb_ctl_rd;
assign lb_read = lb_ctl_rd;
assign lb_rvalid = lb_ctl_rd_valid;

mem_gateway #(
    .read_pipe_len(MEM_GATEWAY_PIPELINE)
) cl3rxtx(
    .clk        (clk),
    // Interface to aggregate
    .rx_ready   (ready_3),
    .rx_strobe  (strobe_rx_3),
    .rx_crc     (crc_rx_3),
    .packet_in  (data_rx_3),
    .tx_ack     (ack_3),
    .tx_strobe  (warn_3),
    .tx_req     (req_3),
    .tx_len     (length_3),
    .packet_out (data_tx_3),
    // Localbus
    .addr           (lb_addr),
    .control_strobe (lb_ctl_stb),
    .control_rd     (lb_ctl_rd),
    .control_rd_valid(lb_ctl_rd_valid),
    .data_out       (lb_data_out),
    .data_in        (lb_data_in)
);

// Latch Tx output pins in IOB
always @(posedge clk) begin
    gmii_txd   <= abst_out;
    gmii_tx_en <= abst_out_s;
    gmii_tx_er <= 0;  // Our logic never needs this
end

assign status={2'b11, agg_leds, rx_crc_ok};

endmodule
