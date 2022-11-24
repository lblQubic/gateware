input aresetn
,input pl_clk0
,output cfgresetn00
,output cfgresetn01
,output cfgresetn02
,output cfgresetn03
,output cfgresetn04
,output cfgresetn05
,output cfgresetn06
,output cfgresetn07
,output cfgresetn08
,output cfgresetn09
,output cfgresetn10
,output cfgresetn11
,output cfgresetn12
,output cfgresetn13
,output cfgresetn14
,output cfgresetn15
,output cfgresetn16
,output cfgresetn17
,output cfgresetn18
,output cfgresetn19
,output cfgresetn20
,output cfgresetn21
,output cfgresetn22
,output cfgresetn23
,output cfgresetn24
,output cfgresetn25
,output cfgresetn26
,output cfgresetn27
,output cfgresetn28
,output cfgresetn29
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
,input [1:0] lb1_rden
,input [LB_ADDRWIDTH-1:0] lb1_waddr
,input [LB_DATAWIDTH-1:0] lb1_wdata
,input [LB_ADDRWIDTH-1:0] lb1_raddr
,output [LB_DATAWIDTH-1:0] lb1_rdata
,output [1:0] lb1_rvalid
,input lb1_clk
,input  lb1_aresetn


,input [0:0] lb2_wren
,input [1:0] lb2_rden
,input [LB_ADDRWIDTH-1:0] lb2_waddr
,input [LB_DATAWIDTH-1:0] lb2_wdata
,input [LB_ADDRWIDTH-1:0] lb2_raddr
,output [LB_DATAWIDTH-1:0] lb2_rdata
,output [1:0] lb2_rvalid
,input lb2_clk
,input  lb2_aresetn

,output BRAM_TOHOST0_clk
,output BRAM_TOHOST0_rst
,output [32-1:0] BRAM_TOHOST0_addr
,output [BRAMTOHOST_DATAWIDTH-1:0] BRAM_TOHOST0_din
,input [BRAMTOHOST_DATAWIDTH-1:0] BRAM_TOHOST0_dout
,output BRAM_TOHOST0_en
,output [BRAMTOHOST_DATAWIDTH/8-1:0] BRAM_TOHOST0_we

//,input bram_rsta_busy
//,input bram_rstb_busy

,output BRAM_TOHOST1_clk
,output BRAM_TOHOST1_rst
,output [32-1:0] BRAM_TOHOST1_addr
,output [BRAMTOHOST_DATAWIDTH-1:0] BRAM_TOHOST1_din
,input [BRAMTOHOST_DATAWIDTH-1:0] BRAM_TOHOST1_dout
,output BRAM_TOHOST1_en
,output [BRAMTOHOST_DATAWIDTH/8-1:0] BRAM_TOHOST1_we


,output BRAM_FROMHOST0_clk
,output BRAM_FROMHOST0_rst
,output [32-1:0] BRAM_FROMHOST0_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST0_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST0_dout
,output BRAM_FROMHOST0_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_FROMHOST0_we


,output BRAM_FROMHOST1_clk
,output BRAM_FROMHOST1_rst
,output [32-1:0] BRAM_FROMHOST1_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST1_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST1_dout
,output BRAM_FROMHOST1_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_FROMHOST1_we


,output BRAM_FROMHOST2_clk
,output BRAM_FROMHOST2_rst
,output [32-1:0] BRAM_FROMHOST2_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST2_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST2_dout
,output BRAM_FROMHOST2_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_FROMHOST2_we


,output BRAM_FROMHOST3_clk
,output BRAM_FROMHOST3_rst
,output [32-1:0] BRAM_FROMHOST3_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST3_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST3_dout
,output BRAM_FROMHOST3_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_FROMHOST3_we


,output BRAM_FROMHOST4_clk
,output BRAM_FROMHOST4_rst
,output [32-1:0] BRAM_FROMHOST4_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST4_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST4_dout
,output BRAM_FROMHOST4_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_FROMHOST4_we

,output BRAM_FROMHOST5_clk
,output BRAM_FROMHOST5_rst
,output [32-1:0] BRAM_FROMHOST5_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST5_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST5_dout
,output BRAM_FROMHOST5_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_FROMHOST5_we

,output BRAM_FROMHOST6_clk
,output BRAM_FROMHOST6_rst
,output [32-1:0] BRAM_FROMHOST6_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST6_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST6_dout
,output BRAM_FROMHOST6_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_FROMHOST6_we

,output BRAM_FROMHOST7_clk
,output BRAM_FROMHOST7_rst
,output [32-1:0] BRAM_FROMHOST7_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST7_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_FROMHOST7_dout
,output BRAM_FROMHOST7_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_FROMHOST7_we

,output BRAM_ACCBUF_clk
,output BRAM_ACCBUF_rst
,output [32-1:0] BRAM_ACCBUF_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_ACCBUF_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_ACCBUF_dout
,output BRAM_ACCBUF_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_ACCBUF_we

,output BRAM_COMMAND_clk
,output BRAM_COMMAND_rst
,output [32-1:0] BRAM_COMMAND_addr
,output [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_COMMAND_din
,input [BRAMFROMHOST_DATAWIDTH-1:0] BRAM_COMMAND_dout
,output BRAM_COMMAND_en
,output [BRAMFROMHOST_DATAWIDTH/8-1:0] BRAM_COMMAND_we

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
