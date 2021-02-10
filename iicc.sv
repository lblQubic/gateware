interface igticc #(parameter DWIDTH=32
,localparam DBYTE=DWIDTH/8
)(
);
wire rxusrclk;
wire [DBYTE-1:0]rxcharisk;
wire [DBYTE-1:0] rxdisperr;
wire [DBYTE-1:0] rxnotintable;
wire [DWIDTH-1:0] rxdata;
wire rxuserrdy;
wire rxoutclkfabric;

wire txusrclk;
wire [DBYTE-1:0]txcharisk;
wire txuserrdy;
wire [DWIDTH-1:0] txdata;
wire reset;
wire resetdone;

modport gt (input reset,rxuserrdy,txuserrdy,txdata,txcharisk
,output txusrclk,rxusrclk,resetdone,rxdata,rxdisperr,rxnotintable,rxcharisk
);
endinterface

interface iicc #(parameter DWIDTH=32
,localparam DBYTE=DWIDTH/8
)(
);

igticc #(.DWIDTH(DWIDTH)) gticc ();
assign gticc.reset=sreset;
wire sreset;
wire [DWIDTH-1:0] txdata;
reg [DWIDTH-1:0] rxdata=0;
assign gticc.rxuserrdy=1'b1;
assign gticc.txuserrdy=1'b1;
assign resetdone=gticc.resetdone;

reg [31:0] txusrclkcnt=0;
always @(posedge gticc.txusrclk) begin
	txusrclkcnt<=sreset ? 0 : txusrclkcnt+1;
end

assign gticc.txdata=(~|txusrclkcnt[3:0]) ? 32'hbc : txdata;
assign gticc.txcharisk=(~|txusrclkcnt[3:0]) ? {DBYTE{1'b1}} : 0;

always @(posedge gticc.rxusrclk) begin
	if (~gticc.rxcharisk) begin
		rxdata<=gticc.rxdata;
	end
end
endinterface
