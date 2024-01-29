localparam ACQBUF_R_ADDRPERDATA=$clog2(ACQBUF_R_DATAWIDTH)-3;localparam ACQBUF_W_ADDRPERDATA=$clog2(ACQBUF_W_DATAWIDTH)-3;
localparam RDRVENV_R_ADDRPERDATA=$clog2(RDRVENV_R_DATAWIDTH)-3;localparam RDRVENV_W_ADDRPERDATA=$clog2(RDRVENV_W_DATAWIDTH)-3;
localparam RDRVFREQ_R_ADDRPERDATA=$clog2(RDRVFREQ_R_DATAWIDTH)-3;localparam RDRVFREQ_W_ADDRPERDATA=$clog2(RDRVFREQ_W_DATAWIDTH)-3;
localparam ACCBUF_R_ADDRPERDATA=$clog2(ACCBUF_R_DATAWIDTH)-3;localparam ACCBUF_W_ADDRPERDATA=$clog2(ACCBUF_W_DATAWIDTH)-3;
localparam QDRVENV_R_ADDRPERDATA=$clog2(QDRVENV_R_DATAWIDTH)-3;localparam QDRVENV_W_ADDRPERDATA=$clog2(QDRVENV_W_DATAWIDTH)-3;
localparam RDLOFREQ_R_ADDRPERDATA=$clog2(RDLOFREQ_R_DATAWIDTH)-3;localparam RDLOFREQ_W_ADDRPERDATA=$clog2(RDLOFREQ_W_DATAWIDTH)-3;
localparam DACMON_R_ADDRPERDATA=$clog2(DACMON_R_DATAWIDTH)-3;localparam DACMON_W_ADDRPERDATA=$clog2(DACMON_W_DATAWIDTH)-3;
localparam COMMAND_R_ADDRPERDATA=$clog2(COMMAND_R_DATAWIDTH)-3;localparam COMMAND_W_ADDRPERDATA=$clog2(COMMAND_W_DATAWIDTH)-3;
localparam QDRVFREQ_R_ADDRPERDATA=$clog2(QDRVFREQ_R_DATAWIDTH)-3;localparam QDRVFREQ_W_ADDRPERDATA=$clog2(QDRVFREQ_W_DATAWIDTH)-3;
localparam RDLOENV_R_ADDRPERDATA=$clog2(RDLOENV_R_DATAWIDTH)-3;localparam RDLOENV_W_ADDRPERDATA=$clog2(RDLOENV_W_DATAWIDTH)-3;

ifbram #(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH)) accbuf0_W();
ifbram #(.ADDR_WIDTH(ACCBUF_R_ADDRWIDTH),.DATA_WIDTH(ACCBUF_R_DATAWIDTH)) accbuf0_R();
bram_cfg accbuf0_R_cfg(.bram(accbuf0_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_accbuf0),.DATAWIDTHA(ACCBUF_W_DATAWIDTH),.ADDRWIDTHA(ACCBUF_W_ADDRWIDTH),.SIZEA(ACCBUF_W_DEPTH),.DATAWIDTHB(ACCBUF_R_DATAWIDTH),.ADDRWIDTHB(ACCBUF_R_ADDRWIDTH),.SIZEB(ACCBUF_R_DEPTH))
accbuf0_mem(.clkA(accbuf0_W.clk),.weA(accbuf0_W.we),.addrA(accbuf0_W.addr),.diA(accbuf0_W.din),.clkB(accbuf0_R.clk),.addrB(accbuf0_R.addr),.doB(accbuf0_R.dout));

ifbram #(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH)) accbuf1_W();
ifbram #(.ADDR_WIDTH(ACCBUF_R_ADDRWIDTH),.DATA_WIDTH(ACCBUF_R_DATAWIDTH)) accbuf1_R();
bram_cfg accbuf1_R_cfg(.bram(accbuf1_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_accbuf1),.DATAWIDTHA(ACCBUF_W_DATAWIDTH),.ADDRWIDTHA(ACCBUF_W_ADDRWIDTH),.SIZEA(ACCBUF_W_DEPTH),.DATAWIDTHB(ACCBUF_R_DATAWIDTH),.ADDRWIDTHB(ACCBUF_R_ADDRWIDTH),.SIZEB(ACCBUF_R_DEPTH))
accbuf1_mem(.clkA(accbuf1_W.clk),.weA(accbuf1_W.we),.addrA(accbuf1_W.addr),.diA(accbuf1_W.din),.clkB(accbuf1_R.clk),.addrB(accbuf1_R.addr),.doB(accbuf1_R.dout));

ifbram #(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH)) accbuf2_W();
ifbram #(.ADDR_WIDTH(ACCBUF_R_ADDRWIDTH),.DATA_WIDTH(ACCBUF_R_DATAWIDTH)) accbuf2_R();
bram_cfg accbuf2_R_cfg(.bram(accbuf2_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_accbuf2),.DATAWIDTHA(ACCBUF_W_DATAWIDTH),.ADDRWIDTHA(ACCBUF_W_ADDRWIDTH),.SIZEA(ACCBUF_W_DEPTH),.DATAWIDTHB(ACCBUF_R_DATAWIDTH),.ADDRWIDTHB(ACCBUF_R_ADDRWIDTH),.SIZEB(ACCBUF_R_DEPTH))
accbuf2_mem(.clkA(accbuf2_W.clk),.weA(accbuf2_W.we),.addrA(accbuf2_W.addr),.diA(accbuf2_W.din),.clkB(accbuf2_R.clk),.addrB(accbuf2_R.addr),.doB(accbuf2_R.dout));

ifbram #(.ADDR_WIDTH(ACQBUF_W_ADDRWIDTH),.DATA_WIDTH(ACQBUF_W_DATAWIDTH)) acqbuf0_W();
ifbram #(.ADDR_WIDTH(ACQBUF_R_ADDRWIDTH),.DATA_WIDTH(ACQBUF_R_DATAWIDTH)) acqbuf0_R();
bram_cfg acqbuf0_R_cfg(.bram(acqbuf0_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_acqbuf0),.DATAWIDTHA(ACQBUF_W_DATAWIDTH),.ADDRWIDTHA(ACQBUF_W_ADDRWIDTH),.SIZEA(ACQBUF_W_DEPTH),.DATAWIDTHB(ACQBUF_R_DATAWIDTH),.ADDRWIDTHB(ACQBUF_R_ADDRWIDTH),.SIZEB(ACQBUF_R_DEPTH))
acqbuf0_mem(.clkA(acqbuf0_W.clk),.weA(acqbuf0_W.we),.addrA(acqbuf0_W.addr),.diA(acqbuf0_W.din),.clkB(acqbuf0_R.clk),.addrB(acqbuf0_R.addr),.doB(acqbuf0_R.dout));

ifbram #(.ADDR_WIDTH(ACQBUF_W_ADDRWIDTH),.DATA_WIDTH(ACQBUF_W_DATAWIDTH)) acqbuf1_W();
ifbram #(.ADDR_WIDTH(ACQBUF_R_ADDRWIDTH),.DATA_WIDTH(ACQBUF_R_DATAWIDTH)) acqbuf1_R();
bram_cfg acqbuf1_R_cfg(.bram(acqbuf1_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_acqbuf1),.DATAWIDTHA(ACQBUF_W_DATAWIDTH),.ADDRWIDTHA(ACQBUF_W_ADDRWIDTH),.SIZEA(ACQBUF_W_DEPTH),.DATAWIDTHB(ACQBUF_R_DATAWIDTH),.ADDRWIDTHB(ACQBUF_R_ADDRWIDTH),.SIZEB(ACQBUF_R_DEPTH))
acqbuf1_mem(.clkA(acqbuf1_W.clk),.weA(acqbuf1_W.we),.addrA(acqbuf1_W.addr),.diA(acqbuf1_W.din),.clkB(acqbuf1_R.clk),.addrB(acqbuf1_R.addr),.doB(acqbuf1_R.dout));

ifbram #(.ADDR_WIDTH(COMMAND_W_ADDRWIDTH),.DATA_WIDTH(COMMAND_W_DATAWIDTH)) command0_W();
ifbram #(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH)) command0_R();
bram_cfg command0_W_cfg(.bram(command0_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_command0),.DATAWIDTHA(COMMAND_W_DATAWIDTH),.ADDRWIDTHA(COMMAND_W_ADDRWIDTH),.SIZEA(COMMAND_W_DEPTH),.DATAWIDTHB(COMMAND_R_DATAWIDTH),.ADDRWIDTHB(COMMAND_R_ADDRWIDTH),.SIZEB(COMMAND_R_DEPTH),.RAM_STYLE("block"))
command0_mem(.clkA(command0_W.clk),.weA(command0_W.we),.addrA(command0_W.addr),.diA(command0_W.din),.clkB(command0_R.clk),.addrB(command0_R.addr),.doB(command0_R.dout));

ifbram #(.ADDR_WIDTH(COMMAND_W_ADDRWIDTH),.DATA_WIDTH(COMMAND_W_DATAWIDTH)) command1_W();
ifbram #(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH)) command1_R();
bram_cfg command1_W_cfg(.bram(command1_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_command1),.DATAWIDTHA(COMMAND_W_DATAWIDTH),.ADDRWIDTHA(COMMAND_W_ADDRWIDTH),.SIZEA(COMMAND_W_DEPTH),.DATAWIDTHB(COMMAND_R_DATAWIDTH),.ADDRWIDTHB(COMMAND_R_ADDRWIDTH),.SIZEB(COMMAND_R_DEPTH),.RAM_STYLE("block"))
command1_mem(.clkA(command1_W.clk),.weA(command1_W.we),.addrA(command1_W.addr),.diA(command1_W.din),.clkB(command1_R.clk),.addrB(command1_R.addr),.doB(command1_R.dout));

ifbram #(.ADDR_WIDTH(COMMAND_W_ADDRWIDTH),.DATA_WIDTH(COMMAND_W_DATAWIDTH)) command2_W();
ifbram #(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH)) command2_R();
bram_cfg command2_W_cfg(.bram(command2_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_command2),.DATAWIDTHA(COMMAND_W_DATAWIDTH),.ADDRWIDTHA(COMMAND_W_ADDRWIDTH),.SIZEA(COMMAND_W_DEPTH),.DATAWIDTHB(COMMAND_R_DATAWIDTH),.ADDRWIDTHB(COMMAND_R_ADDRWIDTH),.SIZEB(COMMAND_R_DEPTH),.RAM_STYLE("block"))
command2_mem(.clkA(command2_W.clk),.weA(command2_W.we),.addrA(command2_W.addr),.diA(command2_W.din),.clkB(command2_R.clk),.addrB(command2_R.addr),.doB(command2_R.dout));

ifbram #(.ADDR_WIDTH(DACMON_W_ADDRWIDTH),.DATA_WIDTH(DACMON_W_DATAWIDTH)) dacmon0_W();
ifbram #(.ADDR_WIDTH(DACMON_R_ADDRWIDTH),.DATA_WIDTH(DACMON_R_DATAWIDTH)) dacmon0_R();
bram_cfg dacmon0_R_cfg(.bram(dacmon0_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_dacmon0),.DATAWIDTHA(DACMON_W_DATAWIDTH),.ADDRWIDTHA(DACMON_W_ADDRWIDTH),.SIZEA(DACMON_W_DEPTH),.DATAWIDTHB(DACMON_R_DATAWIDTH),.ADDRWIDTHB(DACMON_R_ADDRWIDTH),.SIZEB(DACMON_R_DEPTH))
dacmon0_mem(.clkA(dacmon0_W.clk),.weA(dacmon0_W.we),.addrA(dacmon0_W.addr),.diA(dacmon0_W.din),.clkB(dacmon0_R.clk),.addrB(dacmon0_R.addr),.doB(dacmon0_R.dout));

ifbram #(.ADDR_WIDTH(DACMON_W_ADDRWIDTH),.DATA_WIDTH(DACMON_W_DATAWIDTH)) dacmon1_W();
ifbram #(.ADDR_WIDTH(DACMON_R_ADDRWIDTH),.DATA_WIDTH(DACMON_R_DATAWIDTH)) dacmon1_R();
bram_cfg dacmon1_R_cfg(.bram(dacmon1_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_dacmon1),.DATAWIDTHA(DACMON_W_DATAWIDTH),.ADDRWIDTHA(DACMON_W_ADDRWIDTH),.SIZEA(DACMON_W_DEPTH),.DATAWIDTHB(DACMON_R_DATAWIDTH),.ADDRWIDTHB(DACMON_R_ADDRWIDTH),.SIZEB(DACMON_R_DEPTH))
dacmon1_mem(.clkA(dacmon1_W.clk),.weA(dacmon1_W.we),.addrA(dacmon1_W.addr),.diA(dacmon1_W.din),.clkB(dacmon1_R.clk),.addrB(dacmon1_R.addr),.doB(dacmon1_R.dout));

ifbram #(.ADDR_WIDTH(DACMON_W_ADDRWIDTH),.DATA_WIDTH(DACMON_W_DATAWIDTH)) dacmon2_W();
ifbram #(.ADDR_WIDTH(DACMON_R_ADDRWIDTH),.DATA_WIDTH(DACMON_R_DATAWIDTH)) dacmon2_R();
bram_cfg dacmon2_R_cfg(.bram(dacmon2_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_dacmon2),.DATAWIDTHA(DACMON_W_DATAWIDTH),.ADDRWIDTHA(DACMON_W_ADDRWIDTH),.SIZEA(DACMON_W_DEPTH),.DATAWIDTHB(DACMON_R_DATAWIDTH),.ADDRWIDTHB(DACMON_R_ADDRWIDTH),.SIZEB(DACMON_R_DEPTH))
dacmon2_mem(.clkA(dacmon2_W.clk),.weA(dacmon2_W.we),.addrA(dacmon2_W.addr),.diA(dacmon2_W.din),.clkB(dacmon2_R.clk),.addrB(dacmon2_R.addr),.doB(dacmon2_R.dout));

ifbram #(.ADDR_WIDTH(DACMON_W_ADDRWIDTH),.DATA_WIDTH(DACMON_W_DATAWIDTH)) dacmon3_W();
ifbram #(.ADDR_WIDTH(DACMON_R_ADDRWIDTH),.DATA_WIDTH(DACMON_R_DATAWIDTH)) dacmon3_R();
bram_cfg dacmon3_R_cfg(.bram(dacmon3_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_dacmon3),.DATAWIDTHA(DACMON_W_DATAWIDTH),.ADDRWIDTHA(DACMON_W_ADDRWIDTH),.SIZEA(DACMON_W_DEPTH),.DATAWIDTHB(DACMON_R_DATAWIDTH),.ADDRWIDTHB(DACMON_R_ADDRWIDTH),.SIZEB(DACMON_R_DEPTH))
dacmon3_mem(.clkA(dacmon3_W.clk),.weA(dacmon3_W.we),.addrA(dacmon3_W.addr),.diA(dacmon3_W.din),.clkB(dacmon3_R.clk),.addrB(dacmon3_R.addr),.doB(dacmon3_R.dout));

ifbram #(.ADDR_WIDTH(QDRVENV_W_ADDRWIDTH),.DATA_WIDTH(QDRVENV_W_DATAWIDTH)) qdrvenv0_W();
ifbram #(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH)) qdrvenv0_R();
bram_cfg qdrvenv0_W_cfg(.bram(qdrvenv0_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvenv0),.DATAWIDTHA(QDRVENV_W_DATAWIDTH),.ADDRWIDTHA(QDRVENV_W_ADDRWIDTH),.SIZEA(QDRVENV_W_DEPTH),.DATAWIDTHB(QDRVENV_R_DATAWIDTH),.ADDRWIDTHB(QDRVENV_R_ADDRWIDTH),.SIZEB(QDRVENV_R_DEPTH),.RAM_STYLE("block"))
qdrvenv0_mem(.clkA(qdrvenv0_W.clk),.weA(qdrvenv0_W.we),.addrA(qdrvenv0_W.addr),.diA(qdrvenv0_W.din),.clkB(qdrvenv0_R.clk),.addrB(qdrvenv0_R.addr),.doB(qdrvenv0_R.dout));

ifbram #(.ADDR_WIDTH(QDRVENV_W_ADDRWIDTH),.DATA_WIDTH(QDRVENV_W_DATAWIDTH)) qdrvenv1_W();
ifbram #(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH)) qdrvenv1_R();
bram_cfg qdrvenv1_W_cfg(.bram(qdrvenv1_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvenv1),.DATAWIDTHA(QDRVENV_W_DATAWIDTH),.ADDRWIDTHA(QDRVENV_W_ADDRWIDTH),.SIZEA(QDRVENV_W_DEPTH),.DATAWIDTHB(QDRVENV_R_DATAWIDTH),.ADDRWIDTHB(QDRVENV_R_ADDRWIDTH),.SIZEB(QDRVENV_R_DEPTH),.RAM_STYLE("block"))
qdrvenv1_mem(.clkA(qdrvenv1_W.clk),.weA(qdrvenv1_W.we),.addrA(qdrvenv1_W.addr),.diA(qdrvenv1_W.din),.clkB(qdrvenv1_R.clk),.addrB(qdrvenv1_R.addr),.doB(qdrvenv1_R.dout));

ifbram #(.ADDR_WIDTH(QDRVENV_W_ADDRWIDTH),.DATA_WIDTH(QDRVENV_W_DATAWIDTH)) qdrvenv2_W();
ifbram #(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH)) qdrvenv2_R();
bram_cfg qdrvenv2_W_cfg(.bram(qdrvenv2_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvenv2),.DATAWIDTHA(QDRVENV_W_DATAWIDTH),.ADDRWIDTHA(QDRVENV_W_ADDRWIDTH),.SIZEA(QDRVENV_W_DEPTH),.DATAWIDTHB(QDRVENV_R_DATAWIDTH),.ADDRWIDTHB(QDRVENV_R_ADDRWIDTH),.SIZEB(QDRVENV_R_DEPTH),.RAM_STYLE("block"))
qdrvenv2_mem(.clkA(qdrvenv2_W.clk),.weA(qdrvenv2_W.we),.addrA(qdrvenv2_W.addr),.diA(qdrvenv2_W.din),.clkB(qdrvenv2_R.clk),.addrB(qdrvenv2_R.addr),.doB(qdrvenv2_R.dout));

ifbram #(.ADDR_WIDTH(QDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_W_DATAWIDTH)) qdrvfreq0_W();
ifbram #(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH)) qdrvfreq0_R();
bram_cfg qdrvfreq0_W_cfg(.bram(qdrvfreq0_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvfreq0),.DATAWIDTHA(QDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(QDRVFREQ_W_ADDRWIDTH),.SIZEA(QDRVFREQ_W_DEPTH),.DATAWIDTHB(QDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(QDRVFREQ_R_ADDRWIDTH),.SIZEB(QDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
qdrvfreq0_mem(.clkA(qdrvfreq0_W.clk),.weA(qdrvfreq0_W.we),.addrA(qdrvfreq0_W.addr),.diA(qdrvfreq0_W.din),.clkB(qdrvfreq0_R.clk),.addrB(qdrvfreq0_R.addr),.doB(qdrvfreq0_R.dout));

ifbram #(.ADDR_WIDTH(QDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_W_DATAWIDTH)) qdrvfreq1_W();
ifbram #(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH)) qdrvfreq1_R();
bram_cfg qdrvfreq1_W_cfg(.bram(qdrvfreq1_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvfreq1),.DATAWIDTHA(QDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(QDRVFREQ_W_ADDRWIDTH),.SIZEA(QDRVFREQ_W_DEPTH),.DATAWIDTHB(QDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(QDRVFREQ_R_ADDRWIDTH),.SIZEB(QDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
qdrvfreq1_mem(.clkA(qdrvfreq1_W.clk),.weA(qdrvfreq1_W.we),.addrA(qdrvfreq1_W.addr),.diA(qdrvfreq1_W.din),.clkB(qdrvfreq1_R.clk),.addrB(qdrvfreq1_R.addr),.doB(qdrvfreq1_R.dout));

ifbram #(.ADDR_WIDTH(QDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_W_DATAWIDTH)) qdrvfreq2_W();
ifbram #(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH)) qdrvfreq2_R();
bram_cfg qdrvfreq2_W_cfg(.bram(qdrvfreq2_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvfreq2),.DATAWIDTHA(QDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(QDRVFREQ_W_ADDRWIDTH),.SIZEA(QDRVFREQ_W_DEPTH),.DATAWIDTHB(QDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(QDRVFREQ_R_ADDRWIDTH),.SIZEB(QDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
qdrvfreq2_mem(.clkA(qdrvfreq2_W.clk),.weA(qdrvfreq2_W.we),.addrA(qdrvfreq2_W.addr),.diA(qdrvfreq2_W.din),.clkB(qdrvfreq2_R.clk),.addrB(qdrvfreq2_R.addr),.doB(qdrvfreq2_R.dout));

ifbram #(.ADDR_WIDTH(RDLOENV_W_ADDRWIDTH),.DATA_WIDTH(RDLOENV_W_DATAWIDTH)) rdloenv0_W();
ifbram #(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH)) rdloenv0_R();
bram_cfg rdloenv0_W_cfg(.bram(rdloenv0_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdloenv0),.DATAWIDTHA(RDLOENV_W_DATAWIDTH),.ADDRWIDTHA(RDLOENV_W_ADDRWIDTH),.SIZEA(RDLOENV_W_DEPTH),.DATAWIDTHB(RDLOENV_R_DATAWIDTH),.ADDRWIDTHB(RDLOENV_R_ADDRWIDTH),.SIZEB(RDLOENV_R_DEPTH),.RAM_STYLE("block"))
rdloenv0_mem(.clkA(rdloenv0_W.clk),.weA(rdloenv0_W.we),.addrA(rdloenv0_W.addr),.diA(rdloenv0_W.din),.clkB(rdloenv0_R.clk),.addrB(rdloenv0_R.addr),.doB(rdloenv0_R.dout));

ifbram #(.ADDR_WIDTH(RDLOENV_W_ADDRWIDTH),.DATA_WIDTH(RDLOENV_W_DATAWIDTH)) rdloenv1_W();
ifbram #(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH)) rdloenv1_R();
bram_cfg rdloenv1_W_cfg(.bram(rdloenv1_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdloenv1),.DATAWIDTHA(RDLOENV_W_DATAWIDTH),.ADDRWIDTHA(RDLOENV_W_ADDRWIDTH),.SIZEA(RDLOENV_W_DEPTH),.DATAWIDTHB(RDLOENV_R_DATAWIDTH),.ADDRWIDTHB(RDLOENV_R_ADDRWIDTH),.SIZEB(RDLOENV_R_DEPTH),.RAM_STYLE("block"))
rdloenv1_mem(.clkA(rdloenv1_W.clk),.weA(rdloenv1_W.we),.addrA(rdloenv1_W.addr),.diA(rdloenv1_W.din),.clkB(rdloenv1_R.clk),.addrB(rdloenv1_R.addr),.doB(rdloenv1_R.dout));

ifbram #(.ADDR_WIDTH(RDLOENV_W_ADDRWIDTH),.DATA_WIDTH(RDLOENV_W_DATAWIDTH)) rdloenv2_W();
ifbram #(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH)) rdloenv2_R();
bram_cfg rdloenv2_W_cfg(.bram(rdloenv2_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdloenv2),.DATAWIDTHA(RDLOENV_W_DATAWIDTH),.ADDRWIDTHA(RDLOENV_W_ADDRWIDTH),.SIZEA(RDLOENV_W_DEPTH),.DATAWIDTHB(RDLOENV_R_DATAWIDTH),.ADDRWIDTHB(RDLOENV_R_ADDRWIDTH),.SIZEB(RDLOENV_R_DEPTH),.RAM_STYLE("block"))
rdloenv2_mem(.clkA(rdloenv2_W.clk),.weA(rdloenv2_W.we),.addrA(rdloenv2_W.addr),.diA(rdloenv2_W.din),.clkB(rdloenv2_R.clk),.addrB(rdloenv2_R.addr),.doB(rdloenv2_R.dout));

ifbram #(.ADDR_WIDTH(RDLOFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_W_DATAWIDTH)) rdlofreq0_W();
ifbram #(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH)) rdlofreq0_R();
bram_cfg rdlofreq0_W_cfg(.bram(rdlofreq0_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdlofreq0),.DATAWIDTHA(RDLOFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDLOFREQ_W_ADDRWIDTH),.SIZEA(RDLOFREQ_W_DEPTH),.DATAWIDTHB(RDLOFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDLOFREQ_R_ADDRWIDTH),.SIZEB(RDLOFREQ_R_DEPTH),.RAM_STYLE("block"))
rdlofreq0_mem(.clkA(rdlofreq0_W.clk),.weA(rdlofreq0_W.we),.addrA(rdlofreq0_W.addr),.diA(rdlofreq0_W.din),.clkB(rdlofreq0_R.clk),.addrB(rdlofreq0_R.addr),.doB(rdlofreq0_R.dout));

ifbram #(.ADDR_WIDTH(RDLOFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_W_DATAWIDTH)) rdlofreq1_W();
ifbram #(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH)) rdlofreq1_R();
bram_cfg rdlofreq1_W_cfg(.bram(rdlofreq1_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdlofreq1),.DATAWIDTHA(RDLOFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDLOFREQ_W_ADDRWIDTH),.SIZEA(RDLOFREQ_W_DEPTH),.DATAWIDTHB(RDLOFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDLOFREQ_R_ADDRWIDTH),.SIZEB(RDLOFREQ_R_DEPTH),.RAM_STYLE("block"))
rdlofreq1_mem(.clkA(rdlofreq1_W.clk),.weA(rdlofreq1_W.we),.addrA(rdlofreq1_W.addr),.diA(rdlofreq1_W.din),.clkB(rdlofreq1_R.clk),.addrB(rdlofreq1_R.addr),.doB(rdlofreq1_R.dout));

ifbram #(.ADDR_WIDTH(RDLOFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_W_DATAWIDTH)) rdlofreq2_W();
ifbram #(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH)) rdlofreq2_R();
bram_cfg rdlofreq2_W_cfg(.bram(rdlofreq2_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdlofreq2),.DATAWIDTHA(RDLOFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDLOFREQ_W_ADDRWIDTH),.SIZEA(RDLOFREQ_W_DEPTH),.DATAWIDTHB(RDLOFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDLOFREQ_R_ADDRWIDTH),.SIZEB(RDLOFREQ_R_DEPTH),.RAM_STYLE("block"))
rdlofreq2_mem(.clkA(rdlofreq2_W.clk),.weA(rdlofreq2_W.we),.addrA(rdlofreq2_W.addr),.diA(rdlofreq2_W.din),.clkB(rdlofreq2_R.clk),.addrB(rdlofreq2_R.addr),.doB(rdlofreq2_R.dout));

ifbram #(.ADDR_WIDTH(RDRVENV_W_ADDRWIDTH),.DATA_WIDTH(RDRVENV_W_DATAWIDTH)) rdrvenv0_W();
ifbram #(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH)) rdrvenv0_R();
bram_cfg rdrvenv0_W_cfg(.bram(rdrvenv0_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvenv0),.DATAWIDTHA(RDRVENV_W_DATAWIDTH),.ADDRWIDTHA(RDRVENV_W_ADDRWIDTH),.SIZEA(RDRVENV_W_DEPTH),.DATAWIDTHB(RDRVENV_R_DATAWIDTH),.ADDRWIDTHB(RDRVENV_R_ADDRWIDTH),.SIZEB(RDRVENV_R_DEPTH),.RAM_STYLE("block"))
rdrvenv0_mem(.clkA(rdrvenv0_W.clk),.weA(rdrvenv0_W.we),.addrA(rdrvenv0_W.addr),.diA(rdrvenv0_W.din),.clkB(rdrvenv0_R.clk),.addrB(rdrvenv0_R.addr),.doB(rdrvenv0_R.dout));

ifbram #(.ADDR_WIDTH(RDRVENV_W_ADDRWIDTH),.DATA_WIDTH(RDRVENV_W_DATAWIDTH)) rdrvenv1_W();
ifbram #(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH)) rdrvenv1_R();
bram_cfg rdrvenv1_W_cfg(.bram(rdrvenv1_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvenv1),.DATAWIDTHA(RDRVENV_W_DATAWIDTH),.ADDRWIDTHA(RDRVENV_W_ADDRWIDTH),.SIZEA(RDRVENV_W_DEPTH),.DATAWIDTHB(RDRVENV_R_DATAWIDTH),.ADDRWIDTHB(RDRVENV_R_ADDRWIDTH),.SIZEB(RDRVENV_R_DEPTH),.RAM_STYLE("block"))
rdrvenv1_mem(.clkA(rdrvenv1_W.clk),.weA(rdrvenv1_W.we),.addrA(rdrvenv1_W.addr),.diA(rdrvenv1_W.din),.clkB(rdrvenv1_R.clk),.addrB(rdrvenv1_R.addr),.doB(rdrvenv1_R.dout));

ifbram #(.ADDR_WIDTH(RDRVENV_W_ADDRWIDTH),.DATA_WIDTH(RDRVENV_W_DATAWIDTH)) rdrvenv2_W();
ifbram #(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH)) rdrvenv2_R();
bram_cfg rdrvenv2_W_cfg(.bram(rdrvenv2_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvenv2),.DATAWIDTHA(RDRVENV_W_DATAWIDTH),.ADDRWIDTHA(RDRVENV_W_ADDRWIDTH),.SIZEA(RDRVENV_W_DEPTH),.DATAWIDTHB(RDRVENV_R_DATAWIDTH),.ADDRWIDTHB(RDRVENV_R_ADDRWIDTH),.SIZEB(RDRVENV_R_DEPTH),.RAM_STYLE("block"))
rdrvenv2_mem(.clkA(rdrvenv2_W.clk),.weA(rdrvenv2_W.we),.addrA(rdrvenv2_W.addr),.diA(rdrvenv2_W.din),.clkB(rdrvenv2_R.clk),.addrB(rdrvenv2_R.addr),.doB(rdrvenv2_R.dout));

ifbram #(.ADDR_WIDTH(RDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_W_DATAWIDTH)) rdrvfreq0_W();
ifbram #(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH)) rdrvfreq0_R();
bram_cfg rdrvfreq0_W_cfg(.bram(rdrvfreq0_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvfreq0),.DATAWIDTHA(RDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDRVFREQ_W_ADDRWIDTH),.SIZEA(RDRVFREQ_W_DEPTH),.DATAWIDTHB(RDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDRVFREQ_R_ADDRWIDTH),.SIZEB(RDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
rdrvfreq0_mem(.clkA(rdrvfreq0_W.clk),.weA(rdrvfreq0_W.we),.addrA(rdrvfreq0_W.addr),.diA(rdrvfreq0_W.din),.clkB(rdrvfreq0_R.clk),.addrB(rdrvfreq0_R.addr),.doB(rdrvfreq0_R.dout));

ifbram #(.ADDR_WIDTH(RDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_W_DATAWIDTH)) rdrvfreq1_W();
ifbram #(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH)) rdrvfreq1_R();
bram_cfg rdrvfreq1_W_cfg(.bram(rdrvfreq1_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvfreq1),.DATAWIDTHA(RDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDRVFREQ_W_ADDRWIDTH),.SIZEA(RDRVFREQ_W_DEPTH),.DATAWIDTHB(RDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDRVFREQ_R_ADDRWIDTH),.SIZEB(RDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
rdrvfreq1_mem(.clkA(rdrvfreq1_W.clk),.weA(rdrvfreq1_W.we),.addrA(rdrvfreq1_W.addr),.diA(rdrvfreq1_W.din),.clkB(rdrvfreq1_R.clk),.addrB(rdrvfreq1_R.addr),.doB(rdrvfreq1_R.dout));

ifbram #(.ADDR_WIDTH(RDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_W_DATAWIDTH)) rdrvfreq2_W();
ifbram #(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH)) rdrvfreq2_R();
bram_cfg rdrvfreq2_W_cfg(.bram(rdrvfreq2_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvfreq2),.DATAWIDTHA(RDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDRVFREQ_W_ADDRWIDTH),.SIZEA(RDRVFREQ_W_DEPTH),.DATAWIDTHB(RDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDRVFREQ_R_ADDRWIDTH),.SIZEB(RDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
rdrvfreq2_mem(.clkA(rdrvfreq2_W.clk),.weA(rdrvfreq2_W.we),.addrA(rdrvfreq2_W.addr),.diA(rdrvfreq2_W.din),.clkB(rdrvfreq2_R.clk),.addrB(rdrvfreq2_R.addr),.doB(rdrvfreq2_R.dout));
