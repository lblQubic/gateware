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
,output dspresetn00
,output dspresetn01
,output dspresetn02
,output dspresetn03
,output dspresetn04
,output dspresetn05
,output psresetn00
,output psresetn01
,output psresetn02
,output adc2resetn00
,output adc2resetn01
,output adc2resetn02

,input lb1_wvalid
,input [ADDR_WIDTH-1:0] lb1_waddr
,input [DATA_WIDTH/8-1:0] lb1_wstrb
,input [DATA_WIDTH-1:0] lb1_wdata
,input [ADDR_WIDTH-1:0] lb1_raddr
,output [DATA_WIDTH-1:0] lb1_rdata
,input lb1_clk
,input  lb1_aresetn
,input lb2_wvalid
,input [ADDR_WIDTH-1:0] lb2_waddr
,input [DATA_WIDTH/8-1:0] lb2_wstrb
,input [DATA_WIDTH-1:0] lb2_wdata
,input [ADDR_WIDTH-1:0] lb2_raddr
,output [DATA_WIDTH-1:0] lb2_rdata
,input lb2_clk
,input  lb2_aresetn

,output BRAM_READ0_clk
,output BRAM_READ0_rst
,output [BRAMREAD_ADDRWIDTH-1:0]BRAM_READ0_addr
,output [BRAMREAD_DATAWIDTH-1:0] BRAM_READ0_din
,input [BRAMREAD_DATAWIDTH-1:0] BRAM_READ0_dout
,output BRAM_READ0_en
,output [7:0] BRAM_READ0_we

//,input bram_rsta_busy
//,input bram_rstb_busy

,output BRAM_READ1_clk
,output BRAM_READ1_rst
,output [BRAMREAD_ADDRWIDTH-1:0]BRAM_READ1_addr
,output [BRAMREAD_DATAWIDTH-1:0] BRAM_READ1_din
,input [BRAMREAD_DATAWIDTH-1:0] BRAM_READ1_dout
,output BRAM_READ1_en
,output [7:0] BRAM_READ1_we


,output BRAM_WRITE0_clk
,output BRAM_WRITE0_rst
,output [BRAMWRITE_ADDRWIDTH-1:0]BRAM_WRITE0_addr
,output [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE0_din
,input [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE0_dout
,output BRAM_WRITE0_en
,output [7:0] BRAM_WRITE0_we


,output BRAM_WRITE1_clk
,output BRAM_WRITE1_rst
,output [BRAMWRITE_ADDRWIDTH-1:0]BRAM_WRITE1_addr
,output [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE1_din
,input [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE1_dout
,output BRAM_WRITE1_en
,output [7:0] BRAM_WRITE1_we


,output BRAM_WRITE2_clk
,output BRAM_WRITE2_rst
,output [BRAMWRITE_ADDRWIDTH-1:0]BRAM_WRITE2_addr
,output [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE2_din
,input [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE2_dout
,output BRAM_WRITE2_en
,output [7:0] BRAM_WRITE2_we


,output BRAM_WRITE3_clk
,output BRAM_WRITE3_rst
,output [BRAMWRITE_ADDRWIDTH-1:0]BRAM_WRITE3_addr
,output [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE3_din
,input [BRAMWRITE_DATAWIDTH-1:0] BRAM_WRITE3_dout
,output BRAM_WRITE3_en
,output [7:0] BRAM_WRITE3_we



,input  DAC20_M_AXIS_ACLK
,input  DAC20_M_AXIS_ARESETN
,input  DAC20_M_AXIS_TREADY
,output  DAC20_M_AXIS_TVALID
,output  [DAC_AXIS_DATAWIDTH-1 : 0] DAC20_M_AXIS_TDATA
,output  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] DAC20_M_AXIS_TSTRB
,output  DAC20_M_AXIS_TLAST
,input clk_dac2

,input  DAC30_M_AXIS_ACLK
,input  DAC30_M_AXIS_ARESETN
,input  DAC30_M_AXIS_TREADY
,output  DAC30_M_AXIS_TVALID
,output  [DAC_AXIS_DATAWIDTH-1 : 0] DAC30_M_AXIS_TDATA
,output  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] DAC30_M_AXIS_TSTRB
,output  DAC30_M_AXIS_TLAST
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
