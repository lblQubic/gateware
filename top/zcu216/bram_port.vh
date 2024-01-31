output ACCBUF0_clk
,output ACCBUF0_rst
,output [BRAMADDRWIDTH-1:0] ACCBUF0_addr
,output [ACCBUF_DATAWIDTH-1:0] ACCBUF0_din
,input [ACCBUF_DATAWIDTH-1:0] ACCBUF0_dout
,output ACCBUF0_en
,output [ACCBUF_DATAWIDTH/8-1:0] ACCBUF0_we

,output ACCBUF1_clk
,output ACCBUF1_rst
,output [BRAMADDRWIDTH-1:0] ACCBUF1_addr
,output [ACCBUF_DATAWIDTH-1:0] ACCBUF1_din
,input [ACCBUF_DATAWIDTH-1:0] ACCBUF1_dout
,output ACCBUF1_en
,output [ACCBUF_DATAWIDTH/8-1:0] ACCBUF1_we

,output ACCBUF2_clk
,output ACCBUF2_rst
,output [BRAMADDRWIDTH-1:0] ACCBUF2_addr
,output [ACCBUF_DATAWIDTH-1:0] ACCBUF2_din
,input [ACCBUF_DATAWIDTH-1:0] ACCBUF2_dout
,output ACCBUF2_en
,output [ACCBUF_DATAWIDTH/8-1:0] ACCBUF2_we

,output ACQBUF0_clk
,output ACQBUF0_rst
,output [BRAMADDRWIDTH-1:0] ACQBUF0_addr
,output [ACQBUF_DATAWIDTH-1:0] ACQBUF0_din
,input [ACQBUF_DATAWIDTH-1:0] ACQBUF0_dout
,output ACQBUF0_en
,output [ACQBUF_DATAWIDTH/8-1:0] ACQBUF0_we

,output ACQBUF1_clk
,output ACQBUF1_rst
,output [BRAMADDRWIDTH-1:0] ACQBUF1_addr
,output [ACQBUF_DATAWIDTH-1:0] ACQBUF1_din
,input [ACQBUF_DATAWIDTH-1:0] ACQBUF1_dout
,output ACQBUF1_en
,output [ACQBUF_DATAWIDTH/8-1:0] ACQBUF1_we

,output COMMAND0_clk
,output COMMAND0_rst
,output [BRAMADDRWIDTH-1:0] COMMAND0_addr
,output [COMMAND_DATAWIDTH-1:0] COMMAND0_din
,input [COMMAND_DATAWIDTH-1:0] COMMAND0_dout
,output COMMAND0_en
,output [COMMAND_DATAWIDTH/8-1:0] COMMAND0_we

,output COMMAND1_clk
,output COMMAND1_rst
,output [BRAMADDRWIDTH-1:0] COMMAND1_addr
,output [COMMAND_DATAWIDTH-1:0] COMMAND1_din
,input [COMMAND_DATAWIDTH-1:0] COMMAND1_dout
,output COMMAND1_en
,output [COMMAND_DATAWIDTH/8-1:0] COMMAND1_we

,output COMMAND2_clk
,output COMMAND2_rst
,output [BRAMADDRWIDTH-1:0] COMMAND2_addr
,output [COMMAND_DATAWIDTH-1:0] COMMAND2_din
,input [COMMAND_DATAWIDTH-1:0] COMMAND2_dout
,output COMMAND2_en
,output [COMMAND_DATAWIDTH/8-1:0] COMMAND2_we

,output DACMON0_clk
,output DACMON0_rst
,output [BRAMADDRWIDTH-1:0] DACMON0_addr
,output [DACMON_DATAWIDTH-1:0] DACMON0_din
,input [DACMON_DATAWIDTH-1:0] DACMON0_dout
,output DACMON0_en
,output [DACMON_DATAWIDTH/8-1:0] DACMON0_we

,output DACMON1_clk
,output DACMON1_rst
,output [BRAMADDRWIDTH-1:0] DACMON1_addr
,output [DACMON_DATAWIDTH-1:0] DACMON1_din
,input [DACMON_DATAWIDTH-1:0] DACMON1_dout
,output DACMON1_en
,output [DACMON_DATAWIDTH/8-1:0] DACMON1_we

,output DACMON2_clk
,output DACMON2_rst
,output [BRAMADDRWIDTH-1:0] DACMON2_addr
,output [DACMON_DATAWIDTH-1:0] DACMON2_din
,input [DACMON_DATAWIDTH-1:0] DACMON2_dout
,output DACMON2_en
,output [DACMON_DATAWIDTH/8-1:0] DACMON2_we

,output DACMON3_clk
,output DACMON3_rst
,output [BRAMADDRWIDTH-1:0] DACMON3_addr
,output [DACMON_DATAWIDTH-1:0] DACMON3_din
,input [DACMON_DATAWIDTH-1:0] DACMON3_dout
,output DACMON3_en
,output [DACMON_DATAWIDTH/8-1:0] DACMON3_we

,output QDRVENV0_clk
,output QDRVENV0_rst
,output [BRAMADDRWIDTH-1:0] QDRVENV0_addr
,output [QDRVENV_DATAWIDTH-1:0] QDRVENV0_din
,input [QDRVENV_DATAWIDTH-1:0] QDRVENV0_dout
,output QDRVENV0_en
,output [QDRVENV_DATAWIDTH/8-1:0] QDRVENV0_we

,output QDRVENV1_clk
,output QDRVENV1_rst
,output [BRAMADDRWIDTH-1:0] QDRVENV1_addr
,output [QDRVENV_DATAWIDTH-1:0] QDRVENV1_din
,input [QDRVENV_DATAWIDTH-1:0] QDRVENV1_dout
,output QDRVENV1_en
,output [QDRVENV_DATAWIDTH/8-1:0] QDRVENV1_we

,output QDRVENV2_clk
,output QDRVENV2_rst
,output [BRAMADDRWIDTH-1:0] QDRVENV2_addr
,output [QDRVENV_DATAWIDTH-1:0] QDRVENV2_din
,input [QDRVENV_DATAWIDTH-1:0] QDRVENV2_dout
,output QDRVENV2_en
,output [QDRVENV_DATAWIDTH/8-1:0] QDRVENV2_we

,output QDRVFREQ0_clk
,output QDRVFREQ0_rst
,output [BRAMADDRWIDTH-1:0] QDRVFREQ0_addr
,output [QDRVFREQ_DATAWIDTH-1:0] QDRVFREQ0_din
,input [QDRVFREQ_DATAWIDTH-1:0] QDRVFREQ0_dout
,output QDRVFREQ0_en
,output [QDRVFREQ_DATAWIDTH/8-1:0] QDRVFREQ0_we

,output QDRVFREQ1_clk
,output QDRVFREQ1_rst
,output [BRAMADDRWIDTH-1:0] QDRVFREQ1_addr
,output [QDRVFREQ_DATAWIDTH-1:0] QDRVFREQ1_din
,input [QDRVFREQ_DATAWIDTH-1:0] QDRVFREQ1_dout
,output QDRVFREQ1_en
,output [QDRVFREQ_DATAWIDTH/8-1:0] QDRVFREQ1_we

,output QDRVFREQ2_clk
,output QDRVFREQ2_rst
,output [BRAMADDRWIDTH-1:0] QDRVFREQ2_addr
,output [QDRVFREQ_DATAWIDTH-1:0] QDRVFREQ2_din
,input [QDRVFREQ_DATAWIDTH-1:0] QDRVFREQ2_dout
,output QDRVFREQ2_en
,output [QDRVFREQ_DATAWIDTH/8-1:0] QDRVFREQ2_we

,output RDLOENV0_clk
,output RDLOENV0_rst
,output [BRAMADDRWIDTH-1:0] RDLOENV0_addr
,output [RDLOENV_DATAWIDTH-1:0] RDLOENV0_din
,input [RDLOENV_DATAWIDTH-1:0] RDLOENV0_dout
,output RDLOENV0_en
,output [RDLOENV_DATAWIDTH/8-1:0] RDLOENV0_we

,output RDLOENV1_clk
,output RDLOENV1_rst
,output [BRAMADDRWIDTH-1:0] RDLOENV1_addr
,output [RDLOENV_DATAWIDTH-1:0] RDLOENV1_din
,input [RDLOENV_DATAWIDTH-1:0] RDLOENV1_dout
,output RDLOENV1_en
,output [RDLOENV_DATAWIDTH/8-1:0] RDLOENV1_we

,output RDLOENV2_clk
,output RDLOENV2_rst
,output [BRAMADDRWIDTH-1:0] RDLOENV2_addr
,output [RDLOENV_DATAWIDTH-1:0] RDLOENV2_din
,input [RDLOENV_DATAWIDTH-1:0] RDLOENV2_dout
,output RDLOENV2_en
,output [RDLOENV_DATAWIDTH/8-1:0] RDLOENV2_we

,output RDLOFREQ0_clk
,output RDLOFREQ0_rst
,output [BRAMADDRWIDTH-1:0] RDLOFREQ0_addr
,output [RDLOFREQ_DATAWIDTH-1:0] RDLOFREQ0_din
,input [RDLOFREQ_DATAWIDTH-1:0] RDLOFREQ0_dout
,output RDLOFREQ0_en
,output [RDLOFREQ_DATAWIDTH/8-1:0] RDLOFREQ0_we

,output RDLOFREQ1_clk
,output RDLOFREQ1_rst
,output [BRAMADDRWIDTH-1:0] RDLOFREQ1_addr
,output [RDLOFREQ_DATAWIDTH-1:0] RDLOFREQ1_din
,input [RDLOFREQ_DATAWIDTH-1:0] RDLOFREQ1_dout
,output RDLOFREQ1_en
,output [RDLOFREQ_DATAWIDTH/8-1:0] RDLOFREQ1_we

,output RDLOFREQ2_clk
,output RDLOFREQ2_rst
,output [BRAMADDRWIDTH-1:0] RDLOFREQ2_addr
,output [RDLOFREQ_DATAWIDTH-1:0] RDLOFREQ2_din
,input [RDLOFREQ_DATAWIDTH-1:0] RDLOFREQ2_dout
,output RDLOFREQ2_en
,output [RDLOFREQ_DATAWIDTH/8-1:0] RDLOFREQ2_we

,output RDRVENV0_clk
,output RDRVENV0_rst
,output [BRAMADDRWIDTH-1:0] RDRVENV0_addr
,output [RDRVENV_DATAWIDTH-1:0] RDRVENV0_din
,input [RDRVENV_DATAWIDTH-1:0] RDRVENV0_dout
,output RDRVENV0_en
,output [RDRVENV_DATAWIDTH/8-1:0] RDRVENV0_we

,output RDRVENV1_clk
,output RDRVENV1_rst
,output [BRAMADDRWIDTH-1:0] RDRVENV1_addr
,output [RDRVENV_DATAWIDTH-1:0] RDRVENV1_din
,input [RDRVENV_DATAWIDTH-1:0] RDRVENV1_dout
,output RDRVENV1_en
,output [RDRVENV_DATAWIDTH/8-1:0] RDRVENV1_we

,output RDRVENV2_clk
,output RDRVENV2_rst
,output [BRAMADDRWIDTH-1:0] RDRVENV2_addr
,output [RDRVENV_DATAWIDTH-1:0] RDRVENV2_din
,input [RDRVENV_DATAWIDTH-1:0] RDRVENV2_dout
,output RDRVENV2_en
,output [RDRVENV_DATAWIDTH/8-1:0] RDRVENV2_we

,output RDRVFREQ0_clk
,output RDRVFREQ0_rst
,output [BRAMADDRWIDTH-1:0] RDRVFREQ0_addr
,output [RDRVFREQ_DATAWIDTH-1:0] RDRVFREQ0_din
,input [RDRVFREQ_DATAWIDTH-1:0] RDRVFREQ0_dout
,output RDRVFREQ0_en
,output [RDRVFREQ_DATAWIDTH/8-1:0] RDRVFREQ0_we

,output RDRVFREQ1_clk
,output RDRVFREQ1_rst
,output [BRAMADDRWIDTH-1:0] RDRVFREQ1_addr
,output [RDRVFREQ_DATAWIDTH-1:0] RDRVFREQ1_din
,input [RDRVFREQ_DATAWIDTH-1:0] RDRVFREQ1_dout
,output RDRVFREQ1_en
,output [RDRVFREQ_DATAWIDTH/8-1:0] RDRVFREQ1_we

,output RDRVFREQ2_clk
,output RDRVFREQ2_rst
,output [BRAMADDRWIDTH-1:0] RDRVFREQ2_addr
,output [RDRVFREQ_DATAWIDTH-1:0] RDRVFREQ2_din
,input [RDRVFREQ_DATAWIDTH-1:0] RDRVFREQ2_dout
,output RDRVFREQ2_en
,output [RDRVFREQ_DATAWIDTH/8-1:0] RDRVFREQ2_we