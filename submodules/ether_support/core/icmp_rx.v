// -------------------------------------------------------------------------------
//    Implementation of ICMP over IPv4. packet structure:
//      14 (Ether Header) + 20 (IP Header) + 4 (ICMP Header) + 4 (source quench)
//      + 32 (pay load)
// -------------------------------------------------------------------------------

module icmp_rx #(
    parameter [31:0] ip = {8'd192, 8'd168, 8'd7, 8'd2},
    parameter [47:0] mac = 48'h12555500012c
) (
    input clk,
    input [7:0] data,
    input h_data,
    input crc_strobe,    // follows end of h_data by a clock cycle
    input crc_ok,
    // port to set IP address during initialization
    input [8:0] address_set,
    output [10:0] icmp_bus
);


reg [6:0] pack_cnt=0;
wire icmp_chksum_gate = pack_cnt[6:1]==18;
reg icmp_chksum_gate1=0, chksum_h=0;
reg [7:0] data1=0, data2=0;
reg h_data1=0, keep=0, reply_write_r=0, deserves_response=0;
reg reply_strobe_r=0, reply_ok_r=0;

wire [3:0] ipn;
wire [7:0] ip1;
macip_config #(.ip(ip), .mac(mac)) macip(.clk(clk),
    .address_set(address_set),
    .ipn(ipn), .ip1(ip1));

// Template memory.
reg [7:0] template=0;
always @(posedge clk) case (pack_cnt[6:0])
    7'd12: template <= 8'h08;  // Ether type
    7'd13: template <= 8'h00;
    // Start of IP header
    7'd14: template <= 8'h45;  // Vers/IHL
    7'd15: template <= 8'h00;
    7'd22: template <= 8'h40;  // TTL
    7'd23: template <= 8'h01;  // Proto (ICMP)
    7'd34: template <= 8'h08;  // ICMP echo request
    7'd35: template <= 8'h00;  // ICMP code
    default: template <= 8'h55;
endcase

// 0: ignore
// 1: ignore, send to output
// 2: must match template
// 3: must match IP
reg [1:0] mode=0;
always @(posedge clk) case (pack_cnt[6:1])  // valid for first 128 octets
    6'd00, 6'd01, 6'd02: mode <= 3;  // start of dest MAC (us)
    6'd03, 6'd04, 6'd05: mode <= 1;  // start of source MAC (them)
    6'd04, 6'd05: mode <= 1;
    6'd06: mode <= 2;  // Ether type
    6'd07: mode <= 2;  // Vers/IHL
    6'd08: mode <= 1;  // Length
    6'd09: mode <= 1;  // Identification
    6'd10: mode <= 1;  // Flags/Fragment
    6'd11: mode <= pack_cnt[0] ? 2 : 1;  // ICMP, TTL
    6'd12: mode <= 1;  // IP checksum
    6'd13, 6'd14: mode <= 1;  // source IP (them)
    6'd15, 6'd16: mode <= 3;  // dest IP (us)
    6'd17: mode <= 2;  // ICMP Type + code
    default: mode <= 1;
endcase

// 3. Recalculate checksum:
//      1). Take the ones complement (inverse) of the existing checksum.
//      2). Subtract 0x0800.
//      3). Take the ones complement of the result. (eg 0x4d50 -> 0x5550)
reg [7:0] tx_chksum=0;
wire [7:0] rx_chksum = icmp_chksum_gate ? data : 7'b0;
always @(posedge clk) begin
    if (icmp_chksum_gate) begin
        chksum_h <= ~chksum_h;
        tx_chksum <= chksum_h ? rx_chksum : ~(~rx_chksum - 8'h8);
    end
    pack_cnt <= h_data ? pack_cnt+1'b1 : 7'b0;
    data1 <= h_data ? data : 8'b0;
    data2 <= icmp_chksum_gate1 ? tx_chksum : data1;
    icmp_chksum_gate1 <= icmp_chksum_gate;
    h_data1 <= h_data;
    if (h_data & !h_data1) keep <= 1;
    if (h_data1 & (mode==2) & (data1!=template)) keep <= 0;
    if (h_data1 & (mode==3) & (data1!=ip1)) keep <= 0;
    reply_write_r <= h_data & (mode==1) & keep;
    if (reply_write_r) deserves_response <= 1;
    if (reply_strobe_r) deserves_response <= 0;
    reply_strobe_r <= crc_strobe & deserves_response;
    reply_ok_r <= keep & crc_ok;
end


wire [3:0] ipn_off = pack_cnt>29 ? 4'd2 : 4'd10;
assign ipn = ~pack_cnt[3:0] + ipn_off;
assign icmp_bus = {reply_ok_r, reply_strobe_r, reply_write_r, data2};

endmodule
