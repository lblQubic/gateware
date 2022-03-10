module dpram_Nto1 #(
	parameter aw=8,  // address width on the narrow side
	parameter dw=8,  // data width on the narrow side
	parameter expand=3  // log2 of the expansion ratio
) (
	// Port A, read/write, wide
	input clka,
	input  [awb-1:0] addra,
	output [dwb-1:0] douta,
	input  [dwb-1:0] dina,
	input wena,
	// Port B, read-only, narrow
	input clkb,
	input  [aw-1:0] addrb,
	output [dw-1:0] doutb
);

localparam awb = aw - expand;
localparam dwb = dw << expand;
localparam exn = 32'b1 << expand;  // number of output sub-ports

// label the two components of addra
wire [awb-1:0] addrb_h = addrb[aw-1:expand];
wire [expand-1:0] addrb_l = addrb[expand-1:0];

// generate loop instantiating dpram
wire [dw-1:0] dout_bank [exn-1:0];
genvar ix;
generate for (ix=0; ix<exn; ix=ix+1) begin: foo
	wire [dw-1:0] dina_bank;
	wire [dw-1:0] doutb_bank;
    assign dina_bank = dina[(ix+1)*dw-1:ix*dw];
	dpram #(
        .aw(awb),
        .dw(dw)
    ) ram (
        .clka   (clka),
        .clkb   (clkb),
		.addra  (addra),
        .dina   (dina_bank),
        .wena   (wena),
		.addrb  (addrb_h),
        .doutb  (doutb_bank)
	);
    assign dout_bank[ix] = doutb_bank;
end endgenerate

reg [dw-1:0] dout_r=0;
integer jx;
reg [expand-1:0] addrb_l1=0;
always @(posedge clkb) begin
    addrb_l1 <= addrb_l;
	for (jx=0; jx<exn; jx=jx+1)
		if (addrb_l1 == jx) dout_r <= dout_bank[jx];
end

assign doutb = dout_r;
assign douta = dina;

endmodule
