`timescale 1 ns / 1 ps
module plsv #(`include "plps_para.vh"
,`include "bram_para.vh"
,`include "braminit_para.vh"
)(	`include "plps_port.vh"
,hwif hw
,input clkadc2_300
,input clkadc2_600
,input dspclk
,input cfgclk
);

reg [127:0] cfgresetn_r=0;
reg [31:0] dspresetn_r=0;
reg [31:0] psresetn_r=0;
reg [31:0] adc2resetn_r=0;
wire cfgresetn127,cfgresetn126,cfgresetn125,cfgresetn124,cfgresetn123,cfgresetn122,cfgresetn121,cfgresetn120,cfgresetn119,cfgresetn118,cfgresetn117,cfgresetn116,cfgresetn115,cfgresetn114,cfgresetn113,cfgresetn112,cfgresetn111,cfgresetn110,cfgresetn109,cfgresetn108,cfgresetn107,cfgresetn106,cfgresetn105,cfgresetn104,cfgresetn103,cfgresetn102,cfgresetn101,cfgresetn100,cfgresetn99,cfgresetn98,cfgresetn97,cfgresetn96,cfgresetn95,cfgresetn94,cfgresetn93,cfgresetn92,cfgresetn91,cfgresetn90,cfgresetn89,cfgresetn88,cfgresetn87,cfgresetn86,cfgresetn85,cfgresetn84,cfgresetn83,cfgresetn82,cfgresetn81,cfgresetn80,cfgresetn79,cfgresetn78,cfgresetn77,cfgresetn76,cfgresetn75,cfgresetn74,cfgresetn73,cfgresetn72,cfgresetn71,cfgresetn70,cfgresetn69,cfgresetn68,cfgresetn67,cfgresetn66,cfgresetn65,cfgresetn64,cfgresetn63,cfgresetn62,cfgresetn61,cfgresetn60,cfgresetn59,cfgresetn58,cfgresetn57,cfgresetn56,cfgresetn55,cfgresetn54,cfgresetn53,cfgresetn52,cfgresetn51,cfgresetn50,cfgresetn49,cfgresetn48,cfgresetn47,cfgresetn46,cfgresetn45,cfgresetn44,cfgresetn43,cfgresetn42,cfgresetn41,cfgresetn40,cfgresetn39,cfgresetn38,cfgresetn37,cfgresetn36,cfgresetn35,cfgresetn34,cfgresetn33,cfgresetn32,cfgresetn31,cfgresetn30,cfgresetn29,cfgresetn28,cfgresetn27,cfgresetn26,cfgresetn25,cfgresetn24,cfgresetn23,cfgresetn22,cfgresetn21,cfgresetn20,cfgresetn19,cfgresetn18,cfgresetn17,cfgresetn16,cfgresetn15,cfgresetn14,cfgresetn13,cfgresetn12,cfgresetn11,cfgresetn10,cfgresetn09,cfgresetn08;//,cfgresetn07,cfgresetn06,cfgresetn05,cfgresetn04,cfgresetn03,cfgresetn02,cfgresetn01,cfgresetn00;
assign {cfgresetn127,cfgresetn126,cfgresetn125,cfgresetn124,cfgresetn123,cfgresetn122,cfgresetn121,cfgresetn120,cfgresetn119,cfgresetn118,cfgresetn117,cfgresetn116,cfgresetn115,cfgresetn114,cfgresetn113,cfgresetn112,cfgresetn111,cfgresetn110,cfgresetn109,cfgresetn108,cfgresetn107,cfgresetn106,cfgresetn105,cfgresetn104,cfgresetn103,cfgresetn102,cfgresetn101,cfgresetn100,cfgresetn99,cfgresetn98,cfgresetn97,cfgresetn96,cfgresetn95,cfgresetn94,cfgresetn93,cfgresetn92,cfgresetn91,cfgresetn90,cfgresetn89,cfgresetn88,cfgresetn87,cfgresetn86,cfgresetn85,cfgresetn84,cfgresetn83,cfgresetn82,cfgresetn81,cfgresetn80,cfgresetn79,cfgresetn78,cfgresetn77,cfgresetn76,cfgresetn75,cfgresetn74,cfgresetn73,cfgresetn72,cfgresetn71,cfgresetn70,cfgresetn69,cfgresetn68,cfgresetn67,cfgresetn66,cfgresetn65,cfgresetn64,cfgresetn63,cfgresetn62,cfgresetn61,cfgresetn60,cfgresetn59,cfgresetn58,cfgresetn57,cfgresetn56,cfgresetn55,cfgresetn54,cfgresetn53,cfgresetn52,cfgresetn51,cfgresetn50,cfgresetn49,cfgresetn48,cfgresetn47,cfgresetn46,cfgresetn45,cfgresetn44,cfgresetn43,cfgresetn42,cfgresetn41,cfgresetn40,cfgresetn39,cfgresetn38,cfgresetn37,cfgresetn36,cfgresetn35,cfgresetn34,cfgresetn33,cfgresetn32,cfgresetn31,cfgresetn30,cfgresetn29,cfgresetn28,cfgresetn27,cfgresetn26,cfgresetn25,cfgresetn24,cfgresetn23,cfgresetn22,cfgresetn21,cfgresetn20,cfgresetn19,cfgresetn18,cfgresetn17,cfgresetn16,cfgresetn15,cfgresetn14,cfgresetn13,cfgresetn12,cfgresetn11,cfgresetn10,cfgresetn09,cfgresetn08,cfgresetn07,cfgresetn06,cfgresetn05,cfgresetn04,cfgresetn03,cfgresetn02,cfgresetn01,cfgresetn00}=cfgresetn_r;
wire dspresetn31,dspresetn30,dspresetn29,dspresetn28,dspresetn27,dspresetn26,dspresetn25,dspresetn24,dspresetn23,dspresetn22;//,dspresetn21,dspresetn20,dspresetn19,dspresetn18,dspresetn17,dspresetn16,dspresetn15,dspresetn14,dspresetn13,dspresetn12,dspresetn11,dspresetn10,dspresetn09,dspresetn08,dspresetn07,dspresetn06,dspresetn05,dspresetn04,dspresetn03,dspresetn02,dspresetn01,dspresetn00;
assign {dspresetn31,dspresetn30,dspresetn29,dspresetn28,dspresetn27,dspresetn26,dspresetn25,dspresetn24,dspresetn23,dspresetn22,dspresetn21,dspresetn20,dspresetn19,dspresetn18,dspresetn17,dspresetn16,dspresetn15,dspresetn14,dspresetn13,dspresetn12,dspresetn11,dspresetn10,dspresetn09,dspresetn08,dspresetn07,dspresetn06,dspresetn05,dspresetn04,dspresetn03,dspresetn02,dspresetn01,dspresetn00}=dspresetn_r;
wire psresetn31,psresetn30,psresetn29,psresetn28,psresetn27,psresetn26,psresetn25,psresetn24,psresetn23,psresetn22,psresetn21,psresetn20,psresetn19,psresetn18,psresetn17,psresetn16,psresetn15,psresetn14,psresetn13,psresetn12,psresetn11,psresetn10,psresetn09,psresetn08,psresetn07,psresetn06,psresetn05,psresetn04,psresetn03;//,psresetn02,psresetn01,psresetn00;
assign {psresetn31,psresetn30,psresetn29,psresetn28,psresetn27,psresetn26,psresetn25,psresetn24,psresetn23,psresetn22,psresetn21,psresetn20,psresetn19,psresetn18,psresetn17,psresetn16,psresetn15,psresetn14,psresetn13,psresetn12,psresetn11,psresetn10,psresetn09,psresetn08,psresetn07,psresetn06,psresetn05,psresetn04,psresetn03,psresetn02,psresetn01,psresetn00}=psresetn_r;
wire adc2resetn31,adc2resetn30,adc2resetn29,adc2resetn28,adc2resetn27,adc2resetn26,adc2resetn25,adc2resetn24,adc2resetn23,adc2resetn22,adc2resetn21,adc2resetn20,adc2resetn19,adc2resetn18,adc2resetn17,adc2resetn16,adc2resetn15,adc2resetn14,adc2resetn13,adc2resetn12,adc2resetn11,adc2resetn10,adc2resetn09,adc2resetn08,adc2resetn07,adc2resetn06,adc2resetn05,adc2resetn04,adc2resetn03;//,adc2resetn02,adc2resetn01,adc2resetn00;
assign {adc2resetn31,adc2resetn30,adc2resetn29,adc2resetn28,adc2resetn27,adc2resetn26,adc2resetn25,adc2resetn24,adc2resetn23,adc2resetn22,adc2resetn21,adc2resetn20,adc2resetn19,adc2resetn18,adc2resetn17,adc2resetn16,adc2resetn15,adc2resetn14,adc2resetn13,adc2resetn12,adc2resetn11,adc2resetn10,adc2resetn09,adc2resetn08,adc2resetn07,adc2resetn06,adc2resetn05,adc2resetn04,adc2resetn03,adc2resetn02,adc2resetn01,adc2resetn00}=adc2resetn_r;

iflocalbus #(.DATA_WIDTH(LB1_DATAWIDTH),.ADDR_WIDTH(LB1_ADDRWIDTH))
lb1();
iflocalbus #(.DATA_WIDTH(LB2_DATAWIDTH),.ADDR_WIDTH(LB2_ADDRWIDTH))
lb2();
iflocalbus #(.DATA_WIDTH(LB3_DATAWIDTH),.ADDR_WIDTH(LB3_ADDRWIDTH))
lb3();
iflocalbus #(.DATA_WIDTH(LB4_DATAWIDTH),.ADDR_WIDTH(LB4_ADDRWIDTH))
lb4();

localbus_mappin #(.DATA_WIDTH(LB1_DATAWIDTH),.ADDR_WIDTH(LB1_ADDRWIDTH))
lb1map(.lb(lb1),.wren(lb1_wren),.rden(lb1_rden),.rdenlast(lb1_rdenlast),.waddr(lb1_waddr),.rvalid(lb1_rvalid),.rvalidlast(lb1_rvalidlast),.wdata(lb1_wdata),.raddr(lb1_raddr),.rdata(lb1_rdata),.clk(lb1_clk),.aresetn(lb1_aresetn));

localbus_mappin #(.DATA_WIDTH(LB2_DATAWIDTH),.ADDR_WIDTH(LB2_ADDRWIDTH))
lb2map(.lb(lb2),.wren(lb2_wren),.rden(lb2_rden),.rdenlast(lb2_rdenlast),.waddr(lb2_waddr),.rvalid(lb2_rvalid),.rvalidlast(lb2_rvalidlast),.wdata(lb2_wdata),.raddr(lb2_raddr),.rdata(lb2_rdata),.clk(lb2_clk),.aresetn(lb2_aresetn));

localbus_mappin #(.DATA_WIDTH(LB3_DATAWIDTH),.ADDR_WIDTH(LB3_ADDRWIDTH))
lb3map(.lb(lb3),.wren(lb3_wren),.rden(lb3_rden),.rdenlast(lb3_rdenlast),.waddr(lb3_waddr),.rvalid(lb3_rvalid),.rvalidlast(lb3_rvalidlast),.wdata(lb3_wdata),.raddr(lb3_raddr),.rdata(lb3_rdata),.clk(lb3_clk),.aresetn(lb3_aresetn));

localbus_mappin #(.DATA_WIDTH(LB4_DATAWIDTH),.ADDR_WIDTH(LB4_ADDRWIDTH))
lb4map(.lb(lb4),.wren(lb4_wren),.rden(lb4_rden),.rdenlast(lb4_rdenlast),.waddr(lb4_waddr),.rvalid(lb4_rvalid),.rvalidlast(lb4_rvalidlast),.wdata(lb4_wdata),.raddr(lb4_raddr),.rdata(lb4_rdata),.clk(lb4_clk),.aresetn(lb4_aresetn));

`include "bram_plsv.vh"

ifbramctrl#(.DATA_WIDTH(LB3_DATAWIDTH),.ADDR_WIDTH(LB3_ADDRWIDTH),.READDELAY(3)
,`include "bram_parainst.vh"
,`include "braminit_parainst.vh"
)
ifbramctrl(.lb(lb3)
,`include "bramif_lbportinst.vh"
);


/*axi4stream #(.DATA_WIDTH(DAC_AXIS_DATAWIDTH))	dac30axis();
axi4stream_clkrst dac30axisclkrst(.axi4(dac30axis.clkrst),.clk(DAC30_M_AXIS_ACLK),.resetn(DAC30_M_AXIS_ARESETN));
axi4stream_master_map #(.DATA_WIDTH(DAC_AXIS_DATAWIDTH))
dac30axismap(.axis(dac30axis),.ready(DAC30_M_AXIS_TREADY),.valid(DAC30_M_AXIS_TVALID),.data(DAC30_M_AXIS_TDATA),.strb(DAC30_M_AXIS_TSTRB),.last(DAC30_M_AXIS_TLAST));

axi4stream #(.DATA_WIDTH(DAC_AXIS_DATAWIDTH))	dac20axis();
axi4stream #(.DATA_WIDTH(DAC_AXIS_DATAWIDTH))	dac32axis();
axi4stream #(.DATA_WIDTH(DAC_AXIS_DATAWIDTH))	dac22axis();
axi4stream_clkrst dac32axisclkrst(.axi4(dac32axis.clkrst),.clk(DAC32_M_AXIS_ACLK),.resetn(DAC32_M_AXIS_ARESETN));
axi4stream_clkrst dac22axisclkrst(.axi4(dac22axis.clkrst),.clk(DAC22_M_AXIS_ACLK),.resetn(DAC22_M_AXIS_ARESETN));
axi4stream_clkrst dac30axisclkrst(.axi4(dac30axis.clkrst),.clk(DAC30_M_AXIS_ACLK),.resetn(DAC30_M_AXIS_ARESETN));
axi4stream_clkrst dac20axisclkrst(.axi4(dac20axis.clkrst),.clk(DAC20_M_AXIS_ACLK),.resetn(DAC20_M_AXIS_ARESETN));


axi4stream #(.DATA_WIDTH(ADC_AXIS_DATAWIDTH))	adc20axis();
axi4stream_clkrst adc20axisclkrst(.axi4(adc20axis.clkrst),.clk(ADC20_S_AXIS_ACLK),.resetn(ADC20_S_AXIS_ARESETN));
axi4stream_slave_map #(.DATA_WIDTH(ADC_AXIS_DATAWIDTH))
adc20axismap(.axis(adc20axis),.ready(ADC20_S_AXIS_TREADY),.valid(ADC20_S_AXIS_TVALID),.data(ADC20_S_AXIS_TDATA),.strb(ADC20_S_AXIS_TSTRB),.last(ADC20_S_AXIS_TLAST));

axi4stream #(.DATA_WIDTH(ADC_AXIS_DATAWIDTH))	adc21axis();
axi4stream_clkrst adc21axisclkrst(.axi4(adc21axis.clkrst),.clk(ADC21_S_AXIS_ACLK),.resetn(ADC21_S_AXIS_ARESETN));
axi4stream_slave_map #(.DATA_WIDTH(ADC_AXIS_DATAWIDTH))
adc21axismap(.axis(adc21axis),.ready(ADC21_S_AXIS_TREADY),.valid(ADC21_S_AXIS_TVALID),.data(ADC21_S_AXIS_TDATA),.strb(ADC21_S_AXIS_TSTRB),.last(ADC21_S_AXIS_TLAST));

axi4stream_master_map #(.DATA_WIDTH(DAC_AXIS_DATAWIDTH))
dac20axismap(.axis(dac20axis),.ready(DAC20_M_AXIS_TREADY),.valid(DAC20_M_AXIS_TVALID),.data(DAC20_M_AXIS_TDATA),.strb(DAC20_M_AXIS_TSTRB),.last(DAC20_M_AXIS_TLAST));

axi4stream_master_map #(.DATA_WIDTH(DAC_AXIS_DATAWIDTH))
dac32axismap(.axis(dac32axis),.ready(DAC32_M_AXIS_TREADY),.valid(DAC32_M_AXIS_TVALID),.data(DAC32_M_AXIS_TDATA),.strb(DAC32_M_AXIS_TSTRB),.last(DAC32_M_AXIS_TLAST));

axi4stream_master_map #(.DATA_WIDTH(DAC_AXIS_DATAWIDTH))
dac22axismap(.axis(dac22axis),.ready(DAC22_M_AXIS_TREADY),.valid(DAC22_M_AXIS_TVALID),.data(DAC22_M_AXIS_TDATA),.strb(DAC22_M_AXIS_TSTRB),.last(DAC22_M_AXIS_TLAST));
*/
`include "rfdc_plsv.vh"
/*

pltop #(
`include "plps_parainst.vh"
,`include "bram_parainst.vh"
,`include "braminit_parainst.vh"
)
pltop(
`include "bramif_portinst.vh"	
,.lb1(lb1)
,.lb2(lb2)
,.hw(hw)
,`include "rfdcif_portinst.vh"
,.cfgresetn(cfgresetn_r)
,.dspresetn(dspresetn_r)
,.psresetn(psresetn_r)
,.adc2resetn(adc2resetn_r)
,.aresetn(aresetn)
,.pl_clk0(pl_clk0)
,.cfgclk(cfgclk)
,.dspclk(dspclk)
,.clk_dac2(clk_dac2)
,.clk_dac3(clk_dac3)
,.clk_adc2(clk_adc2)
,.clkadc2_300(clkadc2_300)
,.clkadc2_600(clkadc2_600)
);
*/


wire cfgreset;
wire dspreset;
wire psreset;
wire adc2reset;

always @(posedge cfgclk) begin
	cfgresetn_r<={128{~cfgreset}};
end
always @(posedge dspclk) begin
	dspresetn_r<={32{~dspreset}};
end
always @(posedge pl_clk0) begin
	psresetn_r<={32{~psreset}};
end
always @(posedge clkadc2_600) begin
	adc2resetn_r<={32{~adc2reset}};
end
/*assign cfgresetn=cfgresetn_r;
assign dspresetn=dspresetn_r;
assign psresetn=psresetn_r;
assign adc2resetn=adc2resetn_r;
*/

ifcfgregs #(.DATA_WIDTH(LB1_DATAWIDTH),.ADDR_WIDTH(LB1_ADDRWIDTH))
cfgregs(.lb(lb1));
ifdspregs #(.DATA_WIDTH(LB2_DATAWIDTH),.ADDR_WIDTH(LB2_ADDRWIDTH))
dspregs(.lb(lb2));


ifdsp #(
	`include "plps_parainst.vh"
,`include "bram_parainst.vh"
,`include "braminit_parainst.vh"
)
dspif();
boardcfg #(
	`include "plps_parainst.vh"
,`include "bram_parainst.vh"
,`include "braminit_parainst.vh"
)
boardcfg(.hw(hw),.cfgregs(cfgregs.regs)
,`include "bramif_portinst.vh"
,`include "rfdcif_portinst.vh"
,.dspif(dspif.cfg)
,.pl_clk0(pl_clk0)
,.cfgclk(cfgclk)
,.dspclk(dspclk)
,.clk_dac2(clk_dac2)
,.clk_dac3(clk_dac3)
,.clk_adc2(clk_adc2)
,.clkadc2_300(clkadc2_300)
,.clkadc2_600(clkadc2_600)
,.aresetn(aresetn)
,.cfgreset(cfgreset)
,.dspreset(dspreset)
,.psreset(psreset)
,.adc2reset(adc2reset)
);
dsp #(
	`include "plps_parainst.vh"
,`include "bram_parainst.vh"
,`include "braminit_parainst.vh"
)
dsp(.regs(dspregs.regs)
,.dspif(dspif)
);

endmodule
