// Asymmetric port RAM
// Read Wider than Write. Read Statement in loop
//asym_ram_sdp_read_wider.v
// from UG901

module asym_ram_sdp_read_wider (clkA, clkB, enaA, weA, enaB, addrA, addrB, diA, doB);
parameter integer DATAWIDTHA = 32;
parameter integer SIZEA = 16384;
parameter integer ADDRWIDTHA = 14;
parameter integer DATAWIDTHB = 512;
parameter integer SIZEB = 1024;
parameter integer ADDRWIDTHB = 10;
parameter RAM_STYLE= "block";
input clkA;
input clkB;
input weA;
input enaA, enaB;
input [ADDRWIDTHA-1:0] addrA;
input [ADDRWIDTHB-1:0] addrB;
input [DATAWIDTHA-1:0] diA;
output [DATAWIDTHB-1:0] doB;
`define max(a,b) ((a) > (b)) ? (a) : (b)
`define min(a,b) ((a) < (b)) ? (a) : (b)
function integer log2;
	input integer value;
	reg [31:0] shifted;
	integer res;
begin
	if (value < 2)
		log2 = value;
	else
	begin
		shifted = value-1;
		for (res=0; shifted>0; res=res+1)
			shifted = shifted>>1;
		log2 = res;
	end
end
endfunction

localparam maxSIZE = `max(SIZEA, SIZEB);
localparam maxWIDTH = `max(DATAWIDTHA, DATAWIDTHB);
localparam minWIDTH = `min(DATAWIDTHA, DATAWIDTHB);
localparam RATIO = maxWIDTH / minWIDTH;
localparam log2RATIO = log2(RATIO);
(* ram_style= RAM_STYLE *)
reg [minWIDTH-1:0] RAM [0:maxSIZE-1];
reg [DATAWIDTHB-1:0] readB;
always @(posedge clkA)
begin
	if (enaA) begin
		if (weA)
			RAM[addrA] <= diA;
	end
end
always @(posedge clkB)
begin : ramread
	integer i;
	reg [log2RATIO-1:0] lsbaddr;
	if (enaB) begin
		for (i = 0; i < RATIO; i = i+1) begin
			lsbaddr = i;
			readB[(i+1)*minWIDTH-1 -: minWIDTH] <= RAM[{addrB, lsbaddr}];
		end
	end
end
assign doB = readB;


integer i;
initial begin
	for (i=0;i<=SIZEA;i=i+1)
		RAM[i]=32'h7fff0000;
end

endmodule
