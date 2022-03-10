// printf "0" | nc -q 1 -u 192.168.8.2 1000
module client_tx_s #(
	parameter JUMBO_DW=14
) (
    input           clk,
    input           rx_ready, // trigger, for test
    input           tx_ack,
	input           tx_warn,
	output reg      tx_req,
	output [JUMBO_DW-1:0] tx_len,
	output [7:0]    packet_out,

    // stream in
    input [7:0]     s_tdata,
    input           s_tvalid,
    output          s_tready
);

wire full, empty;
wire re = tx_warn & ~empty;
wire [JUMBO_DW-1:0] depth;
fifo_1c #(.aw(JUMBO_DW), .dw(8)) buffr(
    .clk    (clk),
	.din    (s_tdata),
    .we     (s_tvalid), // overflow without looking at full
	.dout   (packet_out),
    .re     (re),
	.full   (full),
    .empty  (empty),
    .depth  (depth)
);
assign s_tready = !full;

// when tx_req, count tx_len by fifo pointers
initial tx_req = 0;
reg [JUMBO_DW-1:0] tx_len_r=0;
always @(posedge clk) begin
    if (rx_ready) begin
        tx_req <= 1'b1;
        tx_len_r <= depth;
    end
    if (tx_ack) tx_req <= 1'b0;
end
assign tx_len = tx_len_r;

endmodule
