// Asymmetric port RAM
// Write wider than Read. Write Statement in a loop.
// asym_ram_sdp_write_wider.v
// UG901
module asym_ram_sdp_write_wider (clkA, clkB, weA, addrA, addrB, diA, doB);
parameter DATAWIDTHB = 4;
parameter SIZEB = 1024;
parameter ADDRWIDTHB = 10;
parameter DATAWIDTHA = 16;
parameter SIZEA = 256;
parameter ADDRWIDTHA = 8;
input clkA;
input clkB;
input weA;
input [ADDRWIDTHA-1:0] addrA;
input [ADDRWIDTHB-1:0] addrB;
input [DATAWIDTHA-1:0] diA;
output [DATAWIDTHB-1:0] doB;
`define max(a,b) (a) > (b) ? (a) : (b)
`define min(a,b) (a) < (b) ? (a) : (b)
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
reg [minWIDTH-1:0] RAM [0:maxSIZE-1];
reg [DATAWIDTHB-1:0] readB;
reg [DATAWIDTHB-1:0] readB_d;
reg [DATAWIDTHB-1:0] readB_d2;
always @(posedge clkB) begin
		readB <= RAM[addrB];
		readB_d<=readB;
		readB_d2<=readB_d;
end
assign doB = readB_d2;
always @(posedge clkA)
begin : ramwrite
	integer i;
	reg [log2RATIO-1:0] lsbaddr;
	for (i=0; i< RATIO; i= i+ 1) begin : write1
		lsbaddr = i;
			if (weA)
				RAM[{addrA, lsbaddr}] <= diA[(i+1)*minWIDTH-1 -: minWIDTH];
	end
end
endmodule
