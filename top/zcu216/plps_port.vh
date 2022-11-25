input aresetn
,input pl_clk0
,output cfgresetn00,output cfgresetn01,output cfgresetn02,output cfgresetn03,output cfgresetn04,output cfgresetn05,output cfgresetn06,output cfgresetn07,output cfgresetn08,output cfgresetn09
,output cfgresetn10,output cfgresetn11,output cfgresetn12,output cfgresetn13,output cfgresetn14,output cfgresetn15,output cfgresetn16,output cfgresetn17,output cfgresetn18,output cfgresetn19
,output cfgresetn20,output cfgresetn21,output cfgresetn22,output cfgresetn23,output cfgresetn24,output cfgresetn25,output cfgresetn26,output cfgresetn27,output cfgresetn28,output cfgresetn29
,output cfgresetn30,output cfgresetn31,output cfgresetn32,output cfgresetn33,output cfgresetn34,output cfgresetn35,output cfgresetn36,output cfgresetn37,output cfgresetn38,output cfgresetn39
,output cfgresetn40,output cfgresetn41,output cfgresetn42,output cfgresetn43,output cfgresetn44,output cfgresetn45,output cfgresetn46,output cfgresetn47,output cfgresetn48,output cfgresetn49
,output cfgresetn50,output cfgresetn51,output cfgresetn52,output cfgresetn53,output cfgresetn54,output cfgresetn55,output cfgresetn56,output cfgresetn57,output cfgresetn58,output cfgresetn59
,output cfgresetn60,output cfgresetn61,output cfgresetn62,output cfgresetn63,output cfgresetn64,output cfgresetn65,output cfgresetn66,output cfgresetn67,output cfgresetn68,output cfgresetn69
,output cfgresetn70,output cfgresetn71,output cfgresetn72,output cfgresetn73,output cfgresetn74,output cfgresetn75,output cfgresetn76,output cfgresetn77,output cfgresetn78,output cfgresetn79
,output cfgresetn80,output cfgresetn81,output cfgresetn82,output cfgresetn83,output cfgresetn84,output cfgresetn85,output cfgresetn86,output cfgresetn87,output cfgresetn88,output cfgresetn89
,output cfgresetn90,output cfgresetn91
,output dspresetn00
,output dspresetn01
,output dspresetn02
,output dspresetn03
,output dspresetn04
,output dspresetn05
,output dspresetn06
,output dspresetn07
,output psresetn00
,output psresetn01
,output psresetn02
,output adc2resetn00
,output adc2resetn01
,output adc2resetn02

,input [0:0] lb1_wren
,input lb1_rden
,input lb1_rdenlast
,input [LB_ADDRWIDTH-1:0] lb1_waddr
,input [LB_DATAWIDTH-1:0] lb1_wdata
,input [LB_ADDRWIDTH-1:0] lb1_raddr
,output [LB_DATAWIDTH-1:0] lb1_rdata
,output lb1_rvalid
,output lb1_rvalidlast
,input lb1_clk
,input  lb1_aresetn


,input [0:0] lb2_wren,input lb2_rden,input lb2_rdenlast,input [LB_ADDRWIDTH-1:0] lb2_waddr,input [LB_DATAWIDTH-1:0] lb2_wdata,input [LB_ADDRWIDTH-1:0] lb2_raddr,output [LB_DATAWIDTH-1:0] lb2_rdata,output lb2_rvalid,output lb2_rvalidlast,input lb2_clk,input  lb2_aresetn
,input [0:0] lb3_wren,input lb3_rden,input lb3_rdenlast,input [LB3_ADDRWIDTH-1:0] lb3_waddr,input [LB3_DATAWIDTH-1:0] lb3_wdata,input [LB3_ADDRWIDTH-1:0] lb3_raddr,output [LB3_DATAWIDTH-1:0] lb3_rdata,output lb3_rvalid,output lb3_rvalidlast,input lb3_clk,input  lb3_aresetn
,input [0:0] lb4_wren,input lb4_rden,input lb4_rdenlast,input [LB_ADDRWIDTH-1:0] lb4_waddr,input [LB_DATAWIDTH-1:0] lb4_wdata,input [LB_ADDRWIDTH-1:0] lb4_raddr,output [LB_DATAWIDTH-1:0] lb4_rdata,output lb4_rvalid,output lb4_rvalidlast,input lb4_clk,input  lb4_aresetn
//,include "bram_port.vh"

,input  DAC20_M_AXIS_ACLK
,input  DAC20_M_AXIS_ARESETN
,input  DAC20_M_AXIS_TREADY
,output  DAC20_M_AXIS_TVALID
,output  [DAC_AXIS_DATAWIDTH-1 : 0] DAC20_M_AXIS_TDATA
,output  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] DAC20_M_AXIS_TSTRB
,output  DAC20_M_AXIS_TLAST
,input  DAC22_M_AXIS_ACLK
,input  DAC22_M_AXIS_ARESETN
,input  DAC22_M_AXIS_TREADY
,output  DAC22_M_AXIS_TVALID
,output  [DAC_AXIS_DATAWIDTH-1 : 0] DAC22_M_AXIS_TDATA
,output  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] DAC22_M_AXIS_TSTRB
,output  DAC22_M_AXIS_TLAST
,input clk_dac2

,input  DAC30_M_AXIS_ACLK
,input  DAC30_M_AXIS_ARESETN
,input  DAC30_M_AXIS_TREADY
,output  DAC30_M_AXIS_TVALID
,output  [DAC_AXIS_DATAWIDTH-1 : 0] DAC30_M_AXIS_TDATA
,output  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] DAC30_M_AXIS_TSTRB
,output  DAC30_M_AXIS_TLAST
,input  DAC32_M_AXIS_ACLK
,input  DAC32_M_AXIS_ARESETN
,input  DAC32_M_AXIS_TREADY
,output  DAC32_M_AXIS_TVALID
,output  [DAC_AXIS_DATAWIDTH-1 : 0] DAC32_M_AXIS_TDATA
,output  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] DAC32_M_AXIS_TSTRB
,output  DAC32_M_AXIS_TLAST
,input clk_dac3

,input  ADC20_S_AXIS_ACLK
,input  ADC20_S_AXIS_ARESETN
,output  ADC20_S_AXIS_TREADY
,input  ADC20_S_AXIS_TVALID
,input  [ADC_AXIS_DATAWIDTH-1 : 0] ADC20_S_AXIS_TDATA
,input  [(ADC_AXIS_DATAWIDTH/8)-1 : 0] ADC20_S_AXIS_TSTRB
,input  ADC20_S_AXIS_TLAST
,input clk_adc2

,input  ADC21_S_AXIS_ACLK
,input  ADC21_S_AXIS_ARESETN
,output  ADC21_S_AXIS_TREADY
,input  ADC21_S_AXIS_TVALID
,input  [ADC_AXIS_DATAWIDTH-1 : 0] ADC21_S_AXIS_TDATA
,input  [(ADC_AXIS_DATAWIDTH/8)-1 : 0] ADC21_S_AXIS_TSTRB
,input  ADC21_S_AXIS_TLAST


,output cfgclk
,output dspclk
