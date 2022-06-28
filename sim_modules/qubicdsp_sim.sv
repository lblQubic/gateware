module qubicdsp_sim #(parameter DEBUG="false"
)(cmd_mem_iface memif,
    dsp.dsp dsp
);
    assign d_write=phalanx_gstrobe;
    
    // Command memory - temporary placeholder for a real program generator
    //wire phalanx_cstrobe = d_write & (d_addr[19:CMDAW]==2'b10);// 0x80000 to 0xbffff
    localparam CMD_ADDR_WIDTH = 8; //CMD address width inside individual proc
    localparam MEM_TO_CMD = 4;
    localparam MEM_WIDTH = 32;
    
    wire cstrobe;
    wire [7:0] cmda;
    wire [63:0] command;
    wire  [31:0]  extra;
    reg cstrobe_d=0;
    reg [7:0] cmda_d=0;
    reg [63:0] command_d=0;
    reg  [31:0]  extra_d=0;
    wire cstrobe_w;
    wire [7:0] cmda_w;
    wire [63:0] command_w;
    wire  [31:0]  extra_w;
    wire collision;
    
    wire [71:0] command_raw_w;
    assign command_w = command_raw_w[63:0];
    assign cmda_w = command_raw_w[71:64];
    
    proc dpr(.clk(dsp.clk), .reset(trig_chan), .cmd_iface(memif),
        .cmd_out(command_raw_w), .cstrobe_out(cstrobe_w));
    
    always @(posedge dsp.clk) begin
    	command_d <= command_w;
    	cmda_d <= cmda_w;
    	cstrobe_d <= cstrobe_w;
    	extra_d <= extra_w;
    end
    assign cstrobe=cstrobe_d;
    assign cmda=cmda_d;
    assign command=command_d;
    assign extra=extra_d;

    element el(.clk(dsp.clk), .command(command_w), .cstrobe(cstrobe), 
        .collision(collision), .xout(dsp.dac0), .yout(dsp.dac1));



//    wire daczero=extra[0]&resultx[0];
//    localparam dw=16;
//    localparam nel=8;  // maybe move to 16 later
//    localparam nell=3;  // maybe move to 16 later
//    localparam qbits=4;
//    localparam tslice=4;
//    wire fault0;
//    wire [qbits*2*tslice*dw-1:0] dacout;
//    //wire phalanx_wstrobe = d_write & (d_addr[19:15]==6'b00111);  // 0x38000
//    wire phalanx_wstrobe = d_write & ((d_addr[19:12]==8'h06)|(d_addr[19:12]==8'h07)|(d_addr[19:12]==8'h08)|(d_addr[19:12]==8'h09)|(d_addr[19:12]==8'h0a)|(d_addr[19:12]==8'h0b)|(d_addr[19:12]==8'h0c)|(d_addr[19:12]==8'h0d));  // 0x6000,0x7000,0x8000,0x9000,0xa000,0xb000,0xc000,0xd000
//    phalanx #(.aw(10), .dw(dw), .nel(nel), .qbits(qbits), .tslice(tslice)) phalanx(
//    	.clk(dsp.clk), .fault(fault0),
//    	.command(command), .cmda(cmda[nell-1:0]), .cstrobe(cstrobe&~cmda[nell]),
//    	.waddr(d_addr[10+3+2-1:0]), .wdata(d_wdata), .wstrobe(phalanx_wstrobe),
//    	.dacout(dacout), .daczero(daczero)
//    );
//    
//    wire [qbits*2*tslice*dw-1:0] dacout_d;
//    wire [16*8-1:0] dac_dc;
//    assign dac_dc={lbreg.dac7_dc,lbreg.dac6_dc,lbreg.dac5_dc,lbreg.dac4_dc,lbreg.dac3_dc,lbreg.dac2_dc,lbreg.dac1_dc,lbreg.dac0_dc};
//    genvar idac;
//    genvar islice;
//    generate
//    for (idac=0; idac<8; idac=idac+1) begin: gen_dac
//    	for (islice=0; islice<4; islice=islice+1) begin: gen_slice
//    		wire signed [15:0] dacout_16=dacout[(idac)*64+(islice+1)*16-1:(idac*64)+islice*16];
//    		wire signed [15:0] dacdc_16 = dac_dc[(idac+1)*16-1:idac*16];
//    		reg signed [15:0] dacout_d16=0;
//    		always @(posedge dsp.clk) begin
//    			dacout_d16 <= dacout_16+dacdc_16;
//    		end
//    		assign dacout_d[(idac)*64+(islice+1)*16-1:(idac*64)+islice*16] = dacout_d16;
//    	end
//    end
//    endgenerate

endmodule

interface dsp#(parameter DEBUG="false")();
wire clk;
wire [63:0] adc0;
wire [63:0] adc1;
wire [63:0] adc2;
wire [63:0] adc3;
wire [63:0] adc4;
wire [63:0] adc5;
wire [63:0] adc6;
wire [63:0] adc7;
wire [63:0] dac0;
wire [63:0] dac1;
wire [63:0] dac2;
wire [63:0] dac3;
wire [63:0] dac4;
wire [63:0] dac5;
wire [63:0] dac6;
wire [63:0] dac7;
wire user_sma_gpio_p;
wire user_sma_gpio_n;

modport dsp(input clk,adc0,adc1,adc2,adc3,adc4,adc5,adc6,adc7
,output dac0,dac1,dac2,dac3,dac4,dac5,dac6,dac7,user_sma_gpio_p,user_sma_gpio_n
);
modport cfg(output clk,adc0,adc1,adc2,adc3,adc4,adc5,adc6,adc7
,input dac0,dac1,dac2,dac3,dac4,dac5,dac6,dac7,user_sma_gpio_p,user_sma_gpio_n
);
endinterface

