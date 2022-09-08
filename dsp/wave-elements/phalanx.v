// Portable Verilog, no chip-specific primitives allowed!
module phalanx #(
	parameter aw=10,
	parameter dw=16,
	parameter nel=8,
	parameter qbits=4,
	parameter tslice=4,
	// Don't override these
	parameter nell=$clog2(nel),
	parameter tslicel=$clog2(tslice)
) (
	input clk,
	// commands passed on to one of the pulser modules
	(* mark_debug = "true" *) input [63:0] command,
	(* mark_debug = "true" *) input daczero,
	(* mark_debug = "true" *) input [nell-1:0] cmda,
	(* mark_debug = "true" *) input cstrobe,
	// Status of pulsers
	(* mark_debug = "true" *) output [nel-1:0] active,
	(* mark_debug = "true" *) output fault,
	// write access to waveform (envelope) memory
	(* mark_debug = "true" *) input [nell+aw+tslicel-1:0] waddr,
	(* mark_debug = "true" *) input [2*dw-1:0] wdata,
	(* mark_debug = "true" *) input wstrobe,
	// qbits*2*tslice output words (dw bits each), ready for DAC hardware.
	// This code attempts to use C-style multidimensional address arithmetic,
	// such that the rightmost index represents consecutive (bit) addresses.
	// So, dw bits of each word are grouped together, then time slices, then I and Q.
	(* mark_debug = "true" *) output [qbits*2*tslice*dw-1:0] dacout
);

// high bits of address are used to select element
// waddr_h must not be zero-width, thus restrict nel > 1
wire [nell-1:0] waddr_h = waddr[nell+aw+tslicel-1 : aw+tslicel];
wire [aw+tslicel-1:0] waddr_l = waddr[aw+tslicel-1 : 0];

// Pulser status
wire [nel-1:0] collision;
assign fault = |collision;

// massively parallel data flow
wire [dw*tslice*nel-1:0] xmid, ymid;
wire [qbits*nel-1:0] qsel;

// Instantiate nel elements
genvar jx;
generate for (jx=0; jx<nel; jx=jx+1) begin: jelement
	wire cs = cstrobe & (cmda == jx);
	wire wstrobe1 = wstrobe & (waddr_h == jx);
	element #(.tslice(tslice), .qbits(qbits),
		.aw(aw), .dw(dw)
	) el(.clk(clk),
		.command(command), .cstrobe(cs),
		.active(active[jx]), .collision(collision[jx]),
		.waddr(waddr_l), .wdata(wdata), .wstrobe(wstrobe1),
		.xout(xmid[jx*dw*tslice +: dw*tslice]),
		.yout(ymid[jx*dw*tslice +: dw*tslice]),
		.qsel(qsel[jx*qbits +: qbits])
		,.daczero(daczero)
	);
end endgenerate

// Universal definition; note: old and new are msb numbers, not bit widths.
`define SAT(x,old,new) ((~|x[old:new] | &x[old:new]) ? x[new:0] : {x[old],{new{~x[old]}}})

genvar kx, qx;
integer jp;
generate for (qx=0; qx<qbits; qx=qx+1) begin: qadder
	for (kx=0; kx<tslice; kx=kx+1) begin: k
		// Build 2*(nel-1) adders in a nell-deep tree
		// This would be so much easier with multi-dimensional arrays,
		// or at least python-style indexing.
		reg [nel*dw-1:0] xadd, yadd;
		always @(xmid, qsel) for (jp=0; jp<nel; jp=jp+1) xadd[jp*dw +: dw] = {dw{qsel[jp*qbits+qx]}} & xmid[(jp*tslice+kx)*dw +: dw];
		always @(ymid, qsel) for (jp=0; jp<nel; jp=jp+1) yadd[jp*dw +: dw] = {dw{qsel[jp*qbits+qx]}} & ymid[(jp*tslice+kx)*dw +: dw];
		// Long form
		wire [dw+nell-1:0] xout_l, yout_l;
		adder_bank #(.dw(dw), .n(nel)) ax(.clk(clk), .xin(xadd), .xout(xout_l));
		adder_bank #(.dw(dw), .n(nel)) ay(.clk(clk), .xin(yadd), .xout(yout_l));
		// Saturate
		reg [dw-1:0] xout_s=0, yout_s=0;
		always @(posedge clk) begin
			xout_s <= `SAT(xout_l, dw+nell-1, dw-1);
			yout_s <= `SAT(yout_l, dw+nell-1, dw-1);
		end
		// Push to output
		assign dacout[((qx*2+0)*tslice+kx)*dw +: dw] = xout_s;
		assign dacout[((qx*2+1)*tslice+kx)*dw +: dw] = yout_s;
	end
end endgenerate

endmodule
