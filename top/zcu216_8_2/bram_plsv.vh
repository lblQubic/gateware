localparam SDBUF_R_ADDRPERDATA=$clog2(SDBUF_R_DATAWIDTH)-3;localparam SDBUF_W_ADDRPERDATA=$clog2(SDBUF_W_DATAWIDTH)-3;
localparam DACMON_R_ADDRPERDATA=$clog2(DACMON_R_DATAWIDTH)-3;localparam DACMON_W_ADDRPERDATA=$clog2(DACMON_W_DATAWIDTH)-3;
localparam COMMAND_R_ADDRPERDATA=$clog2(COMMAND_R_DATAWIDTH)-3;localparam COMMAND_W_ADDRPERDATA=$clog2(COMMAND_W_DATAWIDTH)-3;
localparam RDLOFREQ_R_ADDRPERDATA=$clog2(RDLOFREQ_R_DATAWIDTH)-3;localparam RDLOFREQ_W_ADDRPERDATA=$clog2(RDLOFREQ_W_DATAWIDTH)-3;
localparam ACQBUF_R_ADDRPERDATA=$clog2(ACQBUF_R_DATAWIDTH)-3;localparam ACQBUF_W_ADDRPERDATA=$clog2(ACQBUF_W_DATAWIDTH)-3;
localparam QDRVENV_R_ADDRPERDATA=$clog2(QDRVENV_R_DATAWIDTH)-3;localparam QDRVENV_W_ADDRPERDATA=$clog2(QDRVENV_W_DATAWIDTH)-3;
localparam RDRVENV_R_ADDRPERDATA=$clog2(RDRVENV_R_DATAWIDTH)-3;localparam RDRVENV_W_ADDRPERDATA=$clog2(RDRVENV_W_DATAWIDTH)-3;
localparam RDRVFREQ_R_ADDRPERDATA=$clog2(RDRVFREQ_R_DATAWIDTH)-3;localparam RDRVFREQ_W_ADDRPERDATA=$clog2(RDRVFREQ_W_DATAWIDTH)-3;
localparam ACCBUF_R_ADDRPERDATA=$clog2(ACCBUF_R_DATAWIDTH)-3;localparam ACCBUF_W_ADDRPERDATA=$clog2(ACCBUF_W_DATAWIDTH)-3;
localparam RDLOENV_R_ADDRPERDATA=$clog2(RDLOENV_R_DATAWIDTH)-3;localparam RDLOENV_W_ADDRPERDATA=$clog2(RDLOENV_W_DATAWIDTH)-3;
localparam QDRVFREQ_R_ADDRPERDATA=$clog2(QDRVFREQ_R_DATAWIDTH)-3;localparam QDRVFREQ_W_ADDRPERDATA=$clog2(QDRVFREQ_W_DATAWIDTH)-3;
localparam SDPARA_R_ADDRPERDATA=$clog2(SDPARA_R_DATAWIDTH)-3;localparam SDPARA_W_ADDRPERDATA=$clog2(SDPARA_W_DATAWIDTH)-3;

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

ifbram #(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH)) accbuf3_W();
ifbram #(.ADDR_WIDTH(ACCBUF_R_ADDRWIDTH),.DATA_WIDTH(ACCBUF_R_DATAWIDTH)) accbuf3_R();
bram_cfg accbuf3_R_cfg(.bram(accbuf3_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_accbuf3),.DATAWIDTHA(ACCBUF_W_DATAWIDTH),.ADDRWIDTHA(ACCBUF_W_ADDRWIDTH),.SIZEA(ACCBUF_W_DEPTH),.DATAWIDTHB(ACCBUF_R_DATAWIDTH),.ADDRWIDTHB(ACCBUF_R_ADDRWIDTH),.SIZEB(ACCBUF_R_DEPTH))
accbuf3_mem(.clkA(accbuf3_W.clk),.weA(accbuf3_W.we),.addrA(accbuf3_W.addr),.diA(accbuf3_W.din),.clkB(accbuf3_R.clk),.addrB(accbuf3_R.addr),.doB(accbuf3_R.dout));

ifbram #(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH)) accbuf4_W();
ifbram #(.ADDR_WIDTH(ACCBUF_R_ADDRWIDTH),.DATA_WIDTH(ACCBUF_R_DATAWIDTH)) accbuf4_R();
bram_cfg accbuf4_R_cfg(.bram(accbuf4_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_accbuf4),.DATAWIDTHA(ACCBUF_W_DATAWIDTH),.ADDRWIDTHA(ACCBUF_W_ADDRWIDTH),.SIZEA(ACCBUF_W_DEPTH),.DATAWIDTHB(ACCBUF_R_DATAWIDTH),.ADDRWIDTHB(ACCBUF_R_ADDRWIDTH),.SIZEB(ACCBUF_R_DEPTH))
accbuf4_mem(.clkA(accbuf4_W.clk),.weA(accbuf4_W.we),.addrA(accbuf4_W.addr),.diA(accbuf4_W.din),.clkB(accbuf4_R.clk),.addrB(accbuf4_R.addr),.doB(accbuf4_R.dout));

ifbram #(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH)) accbuf5_W();
ifbram #(.ADDR_WIDTH(ACCBUF_R_ADDRWIDTH),.DATA_WIDTH(ACCBUF_R_DATAWIDTH)) accbuf5_R();
bram_cfg accbuf5_R_cfg(.bram(accbuf5_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_accbuf5),.DATAWIDTHA(ACCBUF_W_DATAWIDTH),.ADDRWIDTHA(ACCBUF_W_ADDRWIDTH),.SIZEA(ACCBUF_W_DEPTH),.DATAWIDTHB(ACCBUF_R_DATAWIDTH),.ADDRWIDTHB(ACCBUF_R_ADDRWIDTH),.SIZEB(ACCBUF_R_DEPTH))
accbuf5_mem(.clkA(accbuf5_W.clk),.weA(accbuf5_W.we),.addrA(accbuf5_W.addr),.diA(accbuf5_W.din),.clkB(accbuf5_R.clk),.addrB(accbuf5_R.addr),.doB(accbuf5_R.dout));

ifbram #(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH)) accbuf6_W();
ifbram #(.ADDR_WIDTH(ACCBUF_R_ADDRWIDTH),.DATA_WIDTH(ACCBUF_R_DATAWIDTH)) accbuf6_R();
bram_cfg accbuf6_R_cfg(.bram(accbuf6_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_accbuf6),.DATAWIDTHA(ACCBUF_W_DATAWIDTH),.ADDRWIDTHA(ACCBUF_W_ADDRWIDTH),.SIZEA(ACCBUF_W_DEPTH),.DATAWIDTHB(ACCBUF_R_DATAWIDTH),.ADDRWIDTHB(ACCBUF_R_ADDRWIDTH),.SIZEB(ACCBUF_R_DEPTH))
accbuf6_mem(.clkA(accbuf6_W.clk),.weA(accbuf6_W.we),.addrA(accbuf6_W.addr),.diA(accbuf6_W.din),.clkB(accbuf6_R.clk),.addrB(accbuf6_R.addr),.doB(accbuf6_R.dout));

ifbram #(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH)) accbuf7_W();
ifbram #(.ADDR_WIDTH(ACCBUF_R_ADDRWIDTH),.DATA_WIDTH(ACCBUF_R_DATAWIDTH)) accbuf7_R();
bram_cfg accbuf7_R_cfg(.bram(accbuf7_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_accbuf7),.DATAWIDTHA(ACCBUF_W_DATAWIDTH),.ADDRWIDTHA(ACCBUF_W_ADDRWIDTH),.SIZEA(ACCBUF_W_DEPTH),.DATAWIDTHB(ACCBUF_R_DATAWIDTH),.ADDRWIDTHB(ACCBUF_R_ADDRWIDTH),.SIZEB(ACCBUF_R_DEPTH))
accbuf7_mem(.clkA(accbuf7_W.clk),.weA(accbuf7_W.we),.addrA(accbuf7_W.addr),.diA(accbuf7_W.din),.clkB(accbuf7_R.clk),.addrB(accbuf7_R.addr),.doB(accbuf7_R.dout));

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

ifbram #(.ADDR_WIDTH(COMMAND_W_ADDRWIDTH),.DATA_WIDTH(COMMAND_W_DATAWIDTH)) command3_W();
ifbram #(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH)) command3_R();
bram_cfg command3_W_cfg(.bram(command3_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_command3),.DATAWIDTHA(COMMAND_W_DATAWIDTH),.ADDRWIDTHA(COMMAND_W_ADDRWIDTH),.SIZEA(COMMAND_W_DEPTH),.DATAWIDTHB(COMMAND_R_DATAWIDTH),.ADDRWIDTHB(COMMAND_R_ADDRWIDTH),.SIZEB(COMMAND_R_DEPTH),.RAM_STYLE("block"))
command3_mem(.clkA(command3_W.clk),.weA(command3_W.we),.addrA(command3_W.addr),.diA(command3_W.din),.clkB(command3_R.clk),.addrB(command3_R.addr),.doB(command3_R.dout));

ifbram #(.ADDR_WIDTH(COMMAND_W_ADDRWIDTH),.DATA_WIDTH(COMMAND_W_DATAWIDTH)) command4_W();
ifbram #(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH)) command4_R();
bram_cfg command4_W_cfg(.bram(command4_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_command4),.DATAWIDTHA(COMMAND_W_DATAWIDTH),.ADDRWIDTHA(COMMAND_W_ADDRWIDTH),.SIZEA(COMMAND_W_DEPTH),.DATAWIDTHB(COMMAND_R_DATAWIDTH),.ADDRWIDTHB(COMMAND_R_ADDRWIDTH),.SIZEB(COMMAND_R_DEPTH),.RAM_STYLE("block"))
command4_mem(.clkA(command4_W.clk),.weA(command4_W.we),.addrA(command4_W.addr),.diA(command4_W.din),.clkB(command4_R.clk),.addrB(command4_R.addr),.doB(command4_R.dout));

ifbram #(.ADDR_WIDTH(COMMAND_W_ADDRWIDTH),.DATA_WIDTH(COMMAND_W_DATAWIDTH)) command5_W();
ifbram #(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH)) command5_R();
bram_cfg command5_W_cfg(.bram(command5_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_command5),.DATAWIDTHA(COMMAND_W_DATAWIDTH),.ADDRWIDTHA(COMMAND_W_ADDRWIDTH),.SIZEA(COMMAND_W_DEPTH),.DATAWIDTHB(COMMAND_R_DATAWIDTH),.ADDRWIDTHB(COMMAND_R_ADDRWIDTH),.SIZEB(COMMAND_R_DEPTH),.RAM_STYLE("block"))
command5_mem(.clkA(command5_W.clk),.weA(command5_W.we),.addrA(command5_W.addr),.diA(command5_W.din),.clkB(command5_R.clk),.addrB(command5_R.addr),.doB(command5_R.dout));

ifbram #(.ADDR_WIDTH(COMMAND_W_ADDRWIDTH),.DATA_WIDTH(COMMAND_W_DATAWIDTH)) command6_W();
ifbram #(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH)) command6_R();
bram_cfg command6_W_cfg(.bram(command6_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_command6),.DATAWIDTHA(COMMAND_W_DATAWIDTH),.ADDRWIDTHA(COMMAND_W_ADDRWIDTH),.SIZEA(COMMAND_W_DEPTH),.DATAWIDTHB(COMMAND_R_DATAWIDTH),.ADDRWIDTHB(COMMAND_R_ADDRWIDTH),.SIZEB(COMMAND_R_DEPTH),.RAM_STYLE("block"))
command6_mem(.clkA(command6_W.clk),.weA(command6_W.we),.addrA(command6_W.addr),.diA(command6_W.din),.clkB(command6_R.clk),.addrB(command6_R.addr),.doB(command6_R.dout));

ifbram #(.ADDR_WIDTH(COMMAND_W_ADDRWIDTH),.DATA_WIDTH(COMMAND_W_DATAWIDTH)) command7_W();
ifbram #(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH)) command7_R();
bram_cfg command7_W_cfg(.bram(command7_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_command7),.DATAWIDTHA(COMMAND_W_DATAWIDTH),.ADDRWIDTHA(COMMAND_W_ADDRWIDTH),.SIZEA(COMMAND_W_DEPTH),.DATAWIDTHB(COMMAND_R_DATAWIDTH),.ADDRWIDTHB(COMMAND_R_ADDRWIDTH),.SIZEB(COMMAND_R_DEPTH),.RAM_STYLE("block"))
command7_mem(.clkA(command7_W.clk),.weA(command7_W.we),.addrA(command7_W.addr),.diA(command7_W.din),.clkB(command7_R.clk),.addrB(command7_R.addr),.doB(command7_R.dout));

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

ifbram #(.ADDR_WIDTH(QDRVENV_W_ADDRWIDTH),.DATA_WIDTH(QDRVENV_W_DATAWIDTH)) qdrvenv3_W();
ifbram #(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH)) qdrvenv3_R();
bram_cfg qdrvenv3_W_cfg(.bram(qdrvenv3_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvenv3),.DATAWIDTHA(QDRVENV_W_DATAWIDTH),.ADDRWIDTHA(QDRVENV_W_ADDRWIDTH),.SIZEA(QDRVENV_W_DEPTH),.DATAWIDTHB(QDRVENV_R_DATAWIDTH),.ADDRWIDTHB(QDRVENV_R_ADDRWIDTH),.SIZEB(QDRVENV_R_DEPTH),.RAM_STYLE("block"))
qdrvenv3_mem(.clkA(qdrvenv3_W.clk),.weA(qdrvenv3_W.we),.addrA(qdrvenv3_W.addr),.diA(qdrvenv3_W.din),.clkB(qdrvenv3_R.clk),.addrB(qdrvenv3_R.addr),.doB(qdrvenv3_R.dout));

ifbram #(.ADDR_WIDTH(QDRVENV_W_ADDRWIDTH),.DATA_WIDTH(QDRVENV_W_DATAWIDTH)) qdrvenv4_W();
ifbram #(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH)) qdrvenv4_R();
bram_cfg qdrvenv4_W_cfg(.bram(qdrvenv4_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvenv4),.DATAWIDTHA(QDRVENV_W_DATAWIDTH),.ADDRWIDTHA(QDRVENV_W_ADDRWIDTH),.SIZEA(QDRVENV_W_DEPTH),.DATAWIDTHB(QDRVENV_R_DATAWIDTH),.ADDRWIDTHB(QDRVENV_R_ADDRWIDTH),.SIZEB(QDRVENV_R_DEPTH),.RAM_STYLE("block"))
qdrvenv4_mem(.clkA(qdrvenv4_W.clk),.weA(qdrvenv4_W.we),.addrA(qdrvenv4_W.addr),.diA(qdrvenv4_W.din),.clkB(qdrvenv4_R.clk),.addrB(qdrvenv4_R.addr),.doB(qdrvenv4_R.dout));

ifbram #(.ADDR_WIDTH(QDRVENV_W_ADDRWIDTH),.DATA_WIDTH(QDRVENV_W_DATAWIDTH)) qdrvenv5_W();
ifbram #(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH)) qdrvenv5_R();
bram_cfg qdrvenv5_W_cfg(.bram(qdrvenv5_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvenv5),.DATAWIDTHA(QDRVENV_W_DATAWIDTH),.ADDRWIDTHA(QDRVENV_W_ADDRWIDTH),.SIZEA(QDRVENV_W_DEPTH),.DATAWIDTHB(QDRVENV_R_DATAWIDTH),.ADDRWIDTHB(QDRVENV_R_ADDRWIDTH),.SIZEB(QDRVENV_R_DEPTH),.RAM_STYLE("block"))
qdrvenv5_mem(.clkA(qdrvenv5_W.clk),.weA(qdrvenv5_W.we),.addrA(qdrvenv5_W.addr),.diA(qdrvenv5_W.din),.clkB(qdrvenv5_R.clk),.addrB(qdrvenv5_R.addr),.doB(qdrvenv5_R.dout));

ifbram #(.ADDR_WIDTH(QDRVENV_W_ADDRWIDTH),.DATA_WIDTH(QDRVENV_W_DATAWIDTH)) qdrvenv6_W();
ifbram #(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH)) qdrvenv6_R();
bram_cfg qdrvenv6_W_cfg(.bram(qdrvenv6_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvenv6),.DATAWIDTHA(QDRVENV_W_DATAWIDTH),.ADDRWIDTHA(QDRVENV_W_ADDRWIDTH),.SIZEA(QDRVENV_W_DEPTH),.DATAWIDTHB(QDRVENV_R_DATAWIDTH),.ADDRWIDTHB(QDRVENV_R_ADDRWIDTH),.SIZEB(QDRVENV_R_DEPTH),.RAM_STYLE("block"))
qdrvenv6_mem(.clkA(qdrvenv6_W.clk),.weA(qdrvenv6_W.we),.addrA(qdrvenv6_W.addr),.diA(qdrvenv6_W.din),.clkB(qdrvenv6_R.clk),.addrB(qdrvenv6_R.addr),.doB(qdrvenv6_R.dout));

ifbram #(.ADDR_WIDTH(QDRVENV_W_ADDRWIDTH),.DATA_WIDTH(QDRVENV_W_DATAWIDTH)) qdrvenv7_W();
ifbram #(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH)) qdrvenv7_R();
bram_cfg qdrvenv7_W_cfg(.bram(qdrvenv7_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvenv7),.DATAWIDTHA(QDRVENV_W_DATAWIDTH),.ADDRWIDTHA(QDRVENV_W_ADDRWIDTH),.SIZEA(QDRVENV_W_DEPTH),.DATAWIDTHB(QDRVENV_R_DATAWIDTH),.ADDRWIDTHB(QDRVENV_R_ADDRWIDTH),.SIZEB(QDRVENV_R_DEPTH),.RAM_STYLE("block"))
qdrvenv7_mem(.clkA(qdrvenv7_W.clk),.weA(qdrvenv7_W.we),.addrA(qdrvenv7_W.addr),.diA(qdrvenv7_W.din),.clkB(qdrvenv7_R.clk),.addrB(qdrvenv7_R.addr),.doB(qdrvenv7_R.dout));

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

ifbram #(.ADDR_WIDTH(QDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_W_DATAWIDTH)) qdrvfreq3_W();
ifbram #(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH)) qdrvfreq3_R();
bram_cfg qdrvfreq3_W_cfg(.bram(qdrvfreq3_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvfreq3),.DATAWIDTHA(QDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(QDRVFREQ_W_ADDRWIDTH),.SIZEA(QDRVFREQ_W_DEPTH),.DATAWIDTHB(QDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(QDRVFREQ_R_ADDRWIDTH),.SIZEB(QDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
qdrvfreq3_mem(.clkA(qdrvfreq3_W.clk),.weA(qdrvfreq3_W.we),.addrA(qdrvfreq3_W.addr),.diA(qdrvfreq3_W.din),.clkB(qdrvfreq3_R.clk),.addrB(qdrvfreq3_R.addr),.doB(qdrvfreq3_R.dout));

ifbram #(.ADDR_WIDTH(QDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_W_DATAWIDTH)) qdrvfreq4_W();
ifbram #(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH)) qdrvfreq4_R();
bram_cfg qdrvfreq4_W_cfg(.bram(qdrvfreq4_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvfreq4),.DATAWIDTHA(QDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(QDRVFREQ_W_ADDRWIDTH),.SIZEA(QDRVFREQ_W_DEPTH),.DATAWIDTHB(QDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(QDRVFREQ_R_ADDRWIDTH),.SIZEB(QDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
qdrvfreq4_mem(.clkA(qdrvfreq4_W.clk),.weA(qdrvfreq4_W.we),.addrA(qdrvfreq4_W.addr),.diA(qdrvfreq4_W.din),.clkB(qdrvfreq4_R.clk),.addrB(qdrvfreq4_R.addr),.doB(qdrvfreq4_R.dout));

ifbram #(.ADDR_WIDTH(QDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_W_DATAWIDTH)) qdrvfreq5_W();
ifbram #(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH)) qdrvfreq5_R();
bram_cfg qdrvfreq5_W_cfg(.bram(qdrvfreq5_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvfreq5),.DATAWIDTHA(QDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(QDRVFREQ_W_ADDRWIDTH),.SIZEA(QDRVFREQ_W_DEPTH),.DATAWIDTHB(QDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(QDRVFREQ_R_ADDRWIDTH),.SIZEB(QDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
qdrvfreq5_mem(.clkA(qdrvfreq5_W.clk),.weA(qdrvfreq5_W.we),.addrA(qdrvfreq5_W.addr),.diA(qdrvfreq5_W.din),.clkB(qdrvfreq5_R.clk),.addrB(qdrvfreq5_R.addr),.doB(qdrvfreq5_R.dout));

ifbram #(.ADDR_WIDTH(QDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_W_DATAWIDTH)) qdrvfreq6_W();
ifbram #(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH)) qdrvfreq6_R();
bram_cfg qdrvfreq6_W_cfg(.bram(qdrvfreq6_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvfreq6),.DATAWIDTHA(QDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(QDRVFREQ_W_ADDRWIDTH),.SIZEA(QDRVFREQ_W_DEPTH),.DATAWIDTHB(QDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(QDRVFREQ_R_ADDRWIDTH),.SIZEB(QDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
qdrvfreq6_mem(.clkA(qdrvfreq6_W.clk),.weA(qdrvfreq6_W.we),.addrA(qdrvfreq6_W.addr),.diA(qdrvfreq6_W.din),.clkB(qdrvfreq6_R.clk),.addrB(qdrvfreq6_R.addr),.doB(qdrvfreq6_R.dout));

ifbram #(.ADDR_WIDTH(QDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_W_DATAWIDTH)) qdrvfreq7_W();
ifbram #(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH)) qdrvfreq7_R();
bram_cfg qdrvfreq7_W_cfg(.bram(qdrvfreq7_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_qdrvfreq7),.DATAWIDTHA(QDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(QDRVFREQ_W_ADDRWIDTH),.SIZEA(QDRVFREQ_W_DEPTH),.DATAWIDTHB(QDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(QDRVFREQ_R_ADDRWIDTH),.SIZEB(QDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
qdrvfreq7_mem(.clkA(qdrvfreq7_W.clk),.weA(qdrvfreq7_W.we),.addrA(qdrvfreq7_W.addr),.diA(qdrvfreq7_W.din),.clkB(qdrvfreq7_R.clk),.addrB(qdrvfreq7_R.addr),.doB(qdrvfreq7_R.dout));

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

ifbram #(.ADDR_WIDTH(RDLOENV_W_ADDRWIDTH),.DATA_WIDTH(RDLOENV_W_DATAWIDTH)) rdloenv3_W();
ifbram #(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH)) rdloenv3_R();
bram_cfg rdloenv3_W_cfg(.bram(rdloenv3_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdloenv3),.DATAWIDTHA(RDLOENV_W_DATAWIDTH),.ADDRWIDTHA(RDLOENV_W_ADDRWIDTH),.SIZEA(RDLOENV_W_DEPTH),.DATAWIDTHB(RDLOENV_R_DATAWIDTH),.ADDRWIDTHB(RDLOENV_R_ADDRWIDTH),.SIZEB(RDLOENV_R_DEPTH),.RAM_STYLE("block"))
rdloenv3_mem(.clkA(rdloenv3_W.clk),.weA(rdloenv3_W.we),.addrA(rdloenv3_W.addr),.diA(rdloenv3_W.din),.clkB(rdloenv3_R.clk),.addrB(rdloenv3_R.addr),.doB(rdloenv3_R.dout));

ifbram #(.ADDR_WIDTH(RDLOENV_W_ADDRWIDTH),.DATA_WIDTH(RDLOENV_W_DATAWIDTH)) rdloenv4_W();
ifbram #(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH)) rdloenv4_R();
bram_cfg rdloenv4_W_cfg(.bram(rdloenv4_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdloenv4),.DATAWIDTHA(RDLOENV_W_DATAWIDTH),.ADDRWIDTHA(RDLOENV_W_ADDRWIDTH),.SIZEA(RDLOENV_W_DEPTH),.DATAWIDTHB(RDLOENV_R_DATAWIDTH),.ADDRWIDTHB(RDLOENV_R_ADDRWIDTH),.SIZEB(RDLOENV_R_DEPTH),.RAM_STYLE("block"))
rdloenv4_mem(.clkA(rdloenv4_W.clk),.weA(rdloenv4_W.we),.addrA(rdloenv4_W.addr),.diA(rdloenv4_W.din),.clkB(rdloenv4_R.clk),.addrB(rdloenv4_R.addr),.doB(rdloenv4_R.dout));

ifbram #(.ADDR_WIDTH(RDLOENV_W_ADDRWIDTH),.DATA_WIDTH(RDLOENV_W_DATAWIDTH)) rdloenv5_W();
ifbram #(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH)) rdloenv5_R();
bram_cfg rdloenv5_W_cfg(.bram(rdloenv5_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdloenv5),.DATAWIDTHA(RDLOENV_W_DATAWIDTH),.ADDRWIDTHA(RDLOENV_W_ADDRWIDTH),.SIZEA(RDLOENV_W_DEPTH),.DATAWIDTHB(RDLOENV_R_DATAWIDTH),.ADDRWIDTHB(RDLOENV_R_ADDRWIDTH),.SIZEB(RDLOENV_R_DEPTH),.RAM_STYLE("block"))
rdloenv5_mem(.clkA(rdloenv5_W.clk),.weA(rdloenv5_W.we),.addrA(rdloenv5_W.addr),.diA(rdloenv5_W.din),.clkB(rdloenv5_R.clk),.addrB(rdloenv5_R.addr),.doB(rdloenv5_R.dout));

ifbram #(.ADDR_WIDTH(RDLOENV_W_ADDRWIDTH),.DATA_WIDTH(RDLOENV_W_DATAWIDTH)) rdloenv6_W();
ifbram #(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH)) rdloenv6_R();
bram_cfg rdloenv6_W_cfg(.bram(rdloenv6_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdloenv6),.DATAWIDTHA(RDLOENV_W_DATAWIDTH),.ADDRWIDTHA(RDLOENV_W_ADDRWIDTH),.SIZEA(RDLOENV_W_DEPTH),.DATAWIDTHB(RDLOENV_R_DATAWIDTH),.ADDRWIDTHB(RDLOENV_R_ADDRWIDTH),.SIZEB(RDLOENV_R_DEPTH),.RAM_STYLE("block"))
rdloenv6_mem(.clkA(rdloenv6_W.clk),.weA(rdloenv6_W.we),.addrA(rdloenv6_W.addr),.diA(rdloenv6_W.din),.clkB(rdloenv6_R.clk),.addrB(rdloenv6_R.addr),.doB(rdloenv6_R.dout));

ifbram #(.ADDR_WIDTH(RDLOENV_W_ADDRWIDTH),.DATA_WIDTH(RDLOENV_W_DATAWIDTH)) rdloenv7_W();
ifbram #(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH)) rdloenv7_R();
bram_cfg rdloenv7_W_cfg(.bram(rdloenv7_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdloenv7),.DATAWIDTHA(RDLOENV_W_DATAWIDTH),.ADDRWIDTHA(RDLOENV_W_ADDRWIDTH),.SIZEA(RDLOENV_W_DEPTH),.DATAWIDTHB(RDLOENV_R_DATAWIDTH),.ADDRWIDTHB(RDLOENV_R_ADDRWIDTH),.SIZEB(RDLOENV_R_DEPTH),.RAM_STYLE("block"))
rdloenv7_mem(.clkA(rdloenv7_W.clk),.weA(rdloenv7_W.we),.addrA(rdloenv7_W.addr),.diA(rdloenv7_W.din),.clkB(rdloenv7_R.clk),.addrB(rdloenv7_R.addr),.doB(rdloenv7_R.dout));

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

ifbram #(.ADDR_WIDTH(RDLOFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_W_DATAWIDTH)) rdlofreq3_W();
ifbram #(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH)) rdlofreq3_R();
bram_cfg rdlofreq3_W_cfg(.bram(rdlofreq3_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdlofreq3),.DATAWIDTHA(RDLOFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDLOFREQ_W_ADDRWIDTH),.SIZEA(RDLOFREQ_W_DEPTH),.DATAWIDTHB(RDLOFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDLOFREQ_R_ADDRWIDTH),.SIZEB(RDLOFREQ_R_DEPTH),.RAM_STYLE("block"))
rdlofreq3_mem(.clkA(rdlofreq3_W.clk),.weA(rdlofreq3_W.we),.addrA(rdlofreq3_W.addr),.diA(rdlofreq3_W.din),.clkB(rdlofreq3_R.clk),.addrB(rdlofreq3_R.addr),.doB(rdlofreq3_R.dout));

ifbram #(.ADDR_WIDTH(RDLOFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_W_DATAWIDTH)) rdlofreq4_W();
ifbram #(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH)) rdlofreq4_R();
bram_cfg rdlofreq4_W_cfg(.bram(rdlofreq4_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdlofreq4),.DATAWIDTHA(RDLOFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDLOFREQ_W_ADDRWIDTH),.SIZEA(RDLOFREQ_W_DEPTH),.DATAWIDTHB(RDLOFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDLOFREQ_R_ADDRWIDTH),.SIZEB(RDLOFREQ_R_DEPTH),.RAM_STYLE("block"))
rdlofreq4_mem(.clkA(rdlofreq4_W.clk),.weA(rdlofreq4_W.we),.addrA(rdlofreq4_W.addr),.diA(rdlofreq4_W.din),.clkB(rdlofreq4_R.clk),.addrB(rdlofreq4_R.addr),.doB(rdlofreq4_R.dout));

ifbram #(.ADDR_WIDTH(RDLOFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_W_DATAWIDTH)) rdlofreq5_W();
ifbram #(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH)) rdlofreq5_R();
bram_cfg rdlofreq5_W_cfg(.bram(rdlofreq5_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdlofreq5),.DATAWIDTHA(RDLOFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDLOFREQ_W_ADDRWIDTH),.SIZEA(RDLOFREQ_W_DEPTH),.DATAWIDTHB(RDLOFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDLOFREQ_R_ADDRWIDTH),.SIZEB(RDLOFREQ_R_DEPTH),.RAM_STYLE("block"))
rdlofreq5_mem(.clkA(rdlofreq5_W.clk),.weA(rdlofreq5_W.we),.addrA(rdlofreq5_W.addr),.diA(rdlofreq5_W.din),.clkB(rdlofreq5_R.clk),.addrB(rdlofreq5_R.addr),.doB(rdlofreq5_R.dout));

ifbram #(.ADDR_WIDTH(RDLOFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_W_DATAWIDTH)) rdlofreq6_W();
ifbram #(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH)) rdlofreq6_R();
bram_cfg rdlofreq6_W_cfg(.bram(rdlofreq6_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdlofreq6),.DATAWIDTHA(RDLOFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDLOFREQ_W_ADDRWIDTH),.SIZEA(RDLOFREQ_W_DEPTH),.DATAWIDTHB(RDLOFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDLOFREQ_R_ADDRWIDTH),.SIZEB(RDLOFREQ_R_DEPTH),.RAM_STYLE("block"))
rdlofreq6_mem(.clkA(rdlofreq6_W.clk),.weA(rdlofreq6_W.we),.addrA(rdlofreq6_W.addr),.diA(rdlofreq6_W.din),.clkB(rdlofreq6_R.clk),.addrB(rdlofreq6_R.addr),.doB(rdlofreq6_R.dout));

ifbram #(.ADDR_WIDTH(RDLOFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_W_DATAWIDTH)) rdlofreq7_W();
ifbram #(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH)) rdlofreq7_R();
bram_cfg rdlofreq7_W_cfg(.bram(rdlofreq7_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdlofreq7),.DATAWIDTHA(RDLOFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDLOFREQ_W_ADDRWIDTH),.SIZEA(RDLOFREQ_W_DEPTH),.DATAWIDTHB(RDLOFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDLOFREQ_R_ADDRWIDTH),.SIZEB(RDLOFREQ_R_DEPTH),.RAM_STYLE("block"))
rdlofreq7_mem(.clkA(rdlofreq7_W.clk),.weA(rdlofreq7_W.we),.addrA(rdlofreq7_W.addr),.diA(rdlofreq7_W.din),.clkB(rdlofreq7_R.clk),.addrB(rdlofreq7_R.addr),.doB(rdlofreq7_R.dout));

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

ifbram #(.ADDR_WIDTH(RDRVENV_W_ADDRWIDTH),.DATA_WIDTH(RDRVENV_W_DATAWIDTH)) rdrvenv3_W();
ifbram #(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH)) rdrvenv3_R();
bram_cfg rdrvenv3_W_cfg(.bram(rdrvenv3_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvenv3),.DATAWIDTHA(RDRVENV_W_DATAWIDTH),.ADDRWIDTHA(RDRVENV_W_ADDRWIDTH),.SIZEA(RDRVENV_W_DEPTH),.DATAWIDTHB(RDRVENV_R_DATAWIDTH),.ADDRWIDTHB(RDRVENV_R_ADDRWIDTH),.SIZEB(RDRVENV_R_DEPTH),.RAM_STYLE("block"))
rdrvenv3_mem(.clkA(rdrvenv3_W.clk),.weA(rdrvenv3_W.we),.addrA(rdrvenv3_W.addr),.diA(rdrvenv3_W.din),.clkB(rdrvenv3_R.clk),.addrB(rdrvenv3_R.addr),.doB(rdrvenv3_R.dout));

ifbram #(.ADDR_WIDTH(RDRVENV_W_ADDRWIDTH),.DATA_WIDTH(RDRVENV_W_DATAWIDTH)) rdrvenv4_W();
ifbram #(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH)) rdrvenv4_R();
bram_cfg rdrvenv4_W_cfg(.bram(rdrvenv4_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvenv4),.DATAWIDTHA(RDRVENV_W_DATAWIDTH),.ADDRWIDTHA(RDRVENV_W_ADDRWIDTH),.SIZEA(RDRVENV_W_DEPTH),.DATAWIDTHB(RDRVENV_R_DATAWIDTH),.ADDRWIDTHB(RDRVENV_R_ADDRWIDTH),.SIZEB(RDRVENV_R_DEPTH),.RAM_STYLE("block"))
rdrvenv4_mem(.clkA(rdrvenv4_W.clk),.weA(rdrvenv4_W.we),.addrA(rdrvenv4_W.addr),.diA(rdrvenv4_W.din),.clkB(rdrvenv4_R.clk),.addrB(rdrvenv4_R.addr),.doB(rdrvenv4_R.dout));

ifbram #(.ADDR_WIDTH(RDRVENV_W_ADDRWIDTH),.DATA_WIDTH(RDRVENV_W_DATAWIDTH)) rdrvenv5_W();
ifbram #(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH)) rdrvenv5_R();
bram_cfg rdrvenv5_W_cfg(.bram(rdrvenv5_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvenv5),.DATAWIDTHA(RDRVENV_W_DATAWIDTH),.ADDRWIDTHA(RDRVENV_W_ADDRWIDTH),.SIZEA(RDRVENV_W_DEPTH),.DATAWIDTHB(RDRVENV_R_DATAWIDTH),.ADDRWIDTHB(RDRVENV_R_ADDRWIDTH),.SIZEB(RDRVENV_R_DEPTH),.RAM_STYLE("block"))
rdrvenv5_mem(.clkA(rdrvenv5_W.clk),.weA(rdrvenv5_W.we),.addrA(rdrvenv5_W.addr),.diA(rdrvenv5_W.din),.clkB(rdrvenv5_R.clk),.addrB(rdrvenv5_R.addr),.doB(rdrvenv5_R.dout));

ifbram #(.ADDR_WIDTH(RDRVENV_W_ADDRWIDTH),.DATA_WIDTH(RDRVENV_W_DATAWIDTH)) rdrvenv6_W();
ifbram #(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH)) rdrvenv6_R();
bram_cfg rdrvenv6_W_cfg(.bram(rdrvenv6_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvenv6),.DATAWIDTHA(RDRVENV_W_DATAWIDTH),.ADDRWIDTHA(RDRVENV_W_ADDRWIDTH),.SIZEA(RDRVENV_W_DEPTH),.DATAWIDTHB(RDRVENV_R_DATAWIDTH),.ADDRWIDTHB(RDRVENV_R_ADDRWIDTH),.SIZEB(RDRVENV_R_DEPTH),.RAM_STYLE("block"))
rdrvenv6_mem(.clkA(rdrvenv6_W.clk),.weA(rdrvenv6_W.we),.addrA(rdrvenv6_W.addr),.diA(rdrvenv6_W.din),.clkB(rdrvenv6_R.clk),.addrB(rdrvenv6_R.addr),.doB(rdrvenv6_R.dout));

ifbram #(.ADDR_WIDTH(RDRVENV_W_ADDRWIDTH),.DATA_WIDTH(RDRVENV_W_DATAWIDTH)) rdrvenv7_W();
ifbram #(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH)) rdrvenv7_R();
bram_cfg rdrvenv7_W_cfg(.bram(rdrvenv7_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvenv7),.DATAWIDTHA(RDRVENV_W_DATAWIDTH),.ADDRWIDTHA(RDRVENV_W_ADDRWIDTH),.SIZEA(RDRVENV_W_DEPTH),.DATAWIDTHB(RDRVENV_R_DATAWIDTH),.ADDRWIDTHB(RDRVENV_R_ADDRWIDTH),.SIZEB(RDRVENV_R_DEPTH),.RAM_STYLE("block"))
rdrvenv7_mem(.clkA(rdrvenv7_W.clk),.weA(rdrvenv7_W.we),.addrA(rdrvenv7_W.addr),.diA(rdrvenv7_W.din),.clkB(rdrvenv7_R.clk),.addrB(rdrvenv7_R.addr),.doB(rdrvenv7_R.dout));

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

ifbram #(.ADDR_WIDTH(RDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_W_DATAWIDTH)) rdrvfreq3_W();
ifbram #(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH)) rdrvfreq3_R();
bram_cfg rdrvfreq3_W_cfg(.bram(rdrvfreq3_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvfreq3),.DATAWIDTHA(RDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDRVFREQ_W_ADDRWIDTH),.SIZEA(RDRVFREQ_W_DEPTH),.DATAWIDTHB(RDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDRVFREQ_R_ADDRWIDTH),.SIZEB(RDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
rdrvfreq3_mem(.clkA(rdrvfreq3_W.clk),.weA(rdrvfreq3_W.we),.addrA(rdrvfreq3_W.addr),.diA(rdrvfreq3_W.din),.clkB(rdrvfreq3_R.clk),.addrB(rdrvfreq3_R.addr),.doB(rdrvfreq3_R.dout));

ifbram #(.ADDR_WIDTH(RDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_W_DATAWIDTH)) rdrvfreq4_W();
ifbram #(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH)) rdrvfreq4_R();
bram_cfg rdrvfreq4_W_cfg(.bram(rdrvfreq4_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvfreq4),.DATAWIDTHA(RDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDRVFREQ_W_ADDRWIDTH),.SIZEA(RDRVFREQ_W_DEPTH),.DATAWIDTHB(RDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDRVFREQ_R_ADDRWIDTH),.SIZEB(RDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
rdrvfreq4_mem(.clkA(rdrvfreq4_W.clk),.weA(rdrvfreq4_W.we),.addrA(rdrvfreq4_W.addr),.diA(rdrvfreq4_W.din),.clkB(rdrvfreq4_R.clk),.addrB(rdrvfreq4_R.addr),.doB(rdrvfreq4_R.dout));

ifbram #(.ADDR_WIDTH(RDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_W_DATAWIDTH)) rdrvfreq5_W();
ifbram #(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH)) rdrvfreq5_R();
bram_cfg rdrvfreq5_W_cfg(.bram(rdrvfreq5_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvfreq5),.DATAWIDTHA(RDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDRVFREQ_W_ADDRWIDTH),.SIZEA(RDRVFREQ_W_DEPTH),.DATAWIDTHB(RDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDRVFREQ_R_ADDRWIDTH),.SIZEB(RDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
rdrvfreq5_mem(.clkA(rdrvfreq5_W.clk),.weA(rdrvfreq5_W.we),.addrA(rdrvfreq5_W.addr),.diA(rdrvfreq5_W.din),.clkB(rdrvfreq5_R.clk),.addrB(rdrvfreq5_R.addr),.doB(rdrvfreq5_R.dout));

ifbram #(.ADDR_WIDTH(RDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_W_DATAWIDTH)) rdrvfreq6_W();
ifbram #(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH)) rdrvfreq6_R();
bram_cfg rdrvfreq6_W_cfg(.bram(rdrvfreq6_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvfreq6),.DATAWIDTHA(RDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDRVFREQ_W_ADDRWIDTH),.SIZEA(RDRVFREQ_W_DEPTH),.DATAWIDTHB(RDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDRVFREQ_R_ADDRWIDTH),.SIZEB(RDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
rdrvfreq6_mem(.clkA(rdrvfreq6_W.clk),.weA(rdrvfreq6_W.we),.addrA(rdrvfreq6_W.addr),.diA(rdrvfreq6_W.din),.clkB(rdrvfreq6_R.clk),.addrB(rdrvfreq6_R.addr),.doB(rdrvfreq6_R.dout));

ifbram #(.ADDR_WIDTH(RDRVFREQ_W_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_W_DATAWIDTH)) rdrvfreq7_W();
ifbram #(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH)) rdrvfreq7_R();
bram_cfg rdrvfreq7_W_cfg(.bram(rdrvfreq7_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_rdrvfreq7),.DATAWIDTHA(RDRVFREQ_W_DATAWIDTH),.ADDRWIDTHA(RDRVFREQ_W_ADDRWIDTH),.SIZEA(RDRVFREQ_W_DEPTH),.DATAWIDTHB(RDRVFREQ_R_DATAWIDTH),.ADDRWIDTHB(RDRVFREQ_R_ADDRWIDTH),.SIZEB(RDRVFREQ_R_DEPTH),.RAM_STYLE("block"))
rdrvfreq7_mem(.clkA(rdrvfreq7_W.clk),.weA(rdrvfreq7_W.we),.addrA(rdrvfreq7_W.addr),.diA(rdrvfreq7_W.din),.clkB(rdrvfreq7_R.clk),.addrB(rdrvfreq7_R.addr),.doB(rdrvfreq7_R.dout));

ifbram #(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH)) sdbuf0_W();
ifbram #(.ADDR_WIDTH(SDBUF_R_ADDRWIDTH),.DATA_WIDTH(SDBUF_R_DATAWIDTH)) sdbuf0_R();
bram_cfg sdbuf0_R_cfg(.bram(sdbuf0_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_sdbuf0),.DATAWIDTHA(SDBUF_W_DATAWIDTH),.ADDRWIDTHA(SDBUF_W_ADDRWIDTH),.SIZEA(SDBUF_W_DEPTH),.DATAWIDTHB(SDBUF_R_DATAWIDTH),.ADDRWIDTHB(SDBUF_R_ADDRWIDTH),.SIZEB(SDBUF_R_DEPTH))
sdbuf0_mem(.clkA(sdbuf0_W.clk),.weA(sdbuf0_W.we),.addrA(sdbuf0_W.addr),.diA(sdbuf0_W.din),.clkB(sdbuf0_R.clk),.addrB(sdbuf0_R.addr),.doB(sdbuf0_R.dout));

ifbram #(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH)) sdbuf1_W();
ifbram #(.ADDR_WIDTH(SDBUF_R_ADDRWIDTH),.DATA_WIDTH(SDBUF_R_DATAWIDTH)) sdbuf1_R();
bram_cfg sdbuf1_R_cfg(.bram(sdbuf1_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_sdbuf1),.DATAWIDTHA(SDBUF_W_DATAWIDTH),.ADDRWIDTHA(SDBUF_W_ADDRWIDTH),.SIZEA(SDBUF_W_DEPTH),.DATAWIDTHB(SDBUF_R_DATAWIDTH),.ADDRWIDTHB(SDBUF_R_ADDRWIDTH),.SIZEB(SDBUF_R_DEPTH))
sdbuf1_mem(.clkA(sdbuf1_W.clk),.weA(sdbuf1_W.we),.addrA(sdbuf1_W.addr),.diA(sdbuf1_W.din),.clkB(sdbuf1_R.clk),.addrB(sdbuf1_R.addr),.doB(sdbuf1_R.dout));

ifbram #(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH)) sdbuf2_W();
ifbram #(.ADDR_WIDTH(SDBUF_R_ADDRWIDTH),.DATA_WIDTH(SDBUF_R_DATAWIDTH)) sdbuf2_R();
bram_cfg sdbuf2_R_cfg(.bram(sdbuf2_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_sdbuf2),.DATAWIDTHA(SDBUF_W_DATAWIDTH),.ADDRWIDTHA(SDBUF_W_ADDRWIDTH),.SIZEA(SDBUF_W_DEPTH),.DATAWIDTHB(SDBUF_R_DATAWIDTH),.ADDRWIDTHB(SDBUF_R_ADDRWIDTH),.SIZEB(SDBUF_R_DEPTH))
sdbuf2_mem(.clkA(sdbuf2_W.clk),.weA(sdbuf2_W.we),.addrA(sdbuf2_W.addr),.diA(sdbuf2_W.din),.clkB(sdbuf2_R.clk),.addrB(sdbuf2_R.addr),.doB(sdbuf2_R.dout));

ifbram #(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH)) sdbuf3_W();
ifbram #(.ADDR_WIDTH(SDBUF_R_ADDRWIDTH),.DATA_WIDTH(SDBUF_R_DATAWIDTH)) sdbuf3_R();
bram_cfg sdbuf3_R_cfg(.bram(sdbuf3_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_sdbuf3),.DATAWIDTHA(SDBUF_W_DATAWIDTH),.ADDRWIDTHA(SDBUF_W_ADDRWIDTH),.SIZEA(SDBUF_W_DEPTH),.DATAWIDTHB(SDBUF_R_DATAWIDTH),.ADDRWIDTHB(SDBUF_R_ADDRWIDTH),.SIZEB(SDBUF_R_DEPTH))
sdbuf3_mem(.clkA(sdbuf3_W.clk),.weA(sdbuf3_W.we),.addrA(sdbuf3_W.addr),.diA(sdbuf3_W.din),.clkB(sdbuf3_R.clk),.addrB(sdbuf3_R.addr),.doB(sdbuf3_R.dout));

ifbram #(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH)) sdbuf4_W();
ifbram #(.ADDR_WIDTH(SDBUF_R_ADDRWIDTH),.DATA_WIDTH(SDBUF_R_DATAWIDTH)) sdbuf4_R();
bram_cfg sdbuf4_R_cfg(.bram(sdbuf4_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_sdbuf4),.DATAWIDTHA(SDBUF_W_DATAWIDTH),.ADDRWIDTHA(SDBUF_W_ADDRWIDTH),.SIZEA(SDBUF_W_DEPTH),.DATAWIDTHB(SDBUF_R_DATAWIDTH),.ADDRWIDTHB(SDBUF_R_ADDRWIDTH),.SIZEB(SDBUF_R_DEPTH))
sdbuf4_mem(.clkA(sdbuf4_W.clk),.weA(sdbuf4_W.we),.addrA(sdbuf4_W.addr),.diA(sdbuf4_W.din),.clkB(sdbuf4_R.clk),.addrB(sdbuf4_R.addr),.doB(sdbuf4_R.dout));

ifbram #(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH)) sdbuf5_W();
ifbram #(.ADDR_WIDTH(SDBUF_R_ADDRWIDTH),.DATA_WIDTH(SDBUF_R_DATAWIDTH)) sdbuf5_R();
bram_cfg sdbuf5_R_cfg(.bram(sdbuf5_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_sdbuf5),.DATAWIDTHA(SDBUF_W_DATAWIDTH),.ADDRWIDTHA(SDBUF_W_ADDRWIDTH),.SIZEA(SDBUF_W_DEPTH),.DATAWIDTHB(SDBUF_R_DATAWIDTH),.ADDRWIDTHB(SDBUF_R_ADDRWIDTH),.SIZEB(SDBUF_R_DEPTH))
sdbuf5_mem(.clkA(sdbuf5_W.clk),.weA(sdbuf5_W.we),.addrA(sdbuf5_W.addr),.diA(sdbuf5_W.din),.clkB(sdbuf5_R.clk),.addrB(sdbuf5_R.addr),.doB(sdbuf5_R.dout));

ifbram #(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH)) sdbuf6_W();
ifbram #(.ADDR_WIDTH(SDBUF_R_ADDRWIDTH),.DATA_WIDTH(SDBUF_R_DATAWIDTH)) sdbuf6_R();
bram_cfg sdbuf6_R_cfg(.bram(sdbuf6_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_sdbuf6),.DATAWIDTHA(SDBUF_W_DATAWIDTH),.ADDRWIDTHA(SDBUF_W_ADDRWIDTH),.SIZEA(SDBUF_W_DEPTH),.DATAWIDTHB(SDBUF_R_DATAWIDTH),.ADDRWIDTHB(SDBUF_R_ADDRWIDTH),.SIZEB(SDBUF_R_DEPTH))
sdbuf6_mem(.clkA(sdbuf6_W.clk),.weA(sdbuf6_W.we),.addrA(sdbuf6_W.addr),.diA(sdbuf6_W.din),.clkB(sdbuf6_R.clk),.addrB(sdbuf6_R.addr),.doB(sdbuf6_R.dout));

ifbram #(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH)) sdbuf7_W();
ifbram #(.ADDR_WIDTH(SDBUF_R_ADDRWIDTH),.DATA_WIDTH(SDBUF_R_DATAWIDTH)) sdbuf7_R();
bram_cfg sdbuf7_R_cfg(.bram(sdbuf7_R),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_write_wider #(.INIT_FILE(INIT_sdbuf7),.DATAWIDTHA(SDBUF_W_DATAWIDTH),.ADDRWIDTHA(SDBUF_W_ADDRWIDTH),.SIZEA(SDBUF_W_DEPTH),.DATAWIDTHB(SDBUF_R_DATAWIDTH),.ADDRWIDTHB(SDBUF_R_ADDRWIDTH),.SIZEB(SDBUF_R_DEPTH))
sdbuf7_mem(.clkA(sdbuf7_W.clk),.weA(sdbuf7_W.we),.addrA(sdbuf7_W.addr),.diA(sdbuf7_W.din),.clkB(sdbuf7_R.clk),.addrB(sdbuf7_R.addr),.doB(sdbuf7_R.dout));

ifbram #(.ADDR_WIDTH(SDPARA_W_ADDRWIDTH),.DATA_WIDTH(SDPARA_W_DATAWIDTH)) sdpara0_W();
ifbram #(.ADDR_WIDTH(SDPARA_R_ADDRWIDTH),.DATA_WIDTH(SDPARA_R_DATAWIDTH)) sdpara0_R();
bram_cfg sdpara0_W_cfg(.bram(sdpara0_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_sdpara0),.DATAWIDTHA(SDPARA_W_DATAWIDTH),.ADDRWIDTHA(SDPARA_W_ADDRWIDTH),.SIZEA(SDPARA_W_DEPTH),.DATAWIDTHB(SDPARA_R_DATAWIDTH),.ADDRWIDTHB(SDPARA_R_ADDRWIDTH),.SIZEB(SDPARA_R_DEPTH),.RAM_STYLE("block"))
sdpara0_mem(.clkA(sdpara0_W.clk),.weA(sdpara0_W.we),.addrA(sdpara0_W.addr),.diA(sdpara0_W.din),.clkB(sdpara0_R.clk),.addrB(sdpara0_R.addr),.doB(sdpara0_R.dout));

ifbram #(.ADDR_WIDTH(SDPARA_W_ADDRWIDTH),.DATA_WIDTH(SDPARA_W_DATAWIDTH)) sdpara1_W();
ifbram #(.ADDR_WIDTH(SDPARA_R_ADDRWIDTH),.DATA_WIDTH(SDPARA_R_DATAWIDTH)) sdpara1_R();
bram_cfg sdpara1_W_cfg(.bram(sdpara1_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_sdpara1),.DATAWIDTHA(SDPARA_W_DATAWIDTH),.ADDRWIDTHA(SDPARA_W_ADDRWIDTH),.SIZEA(SDPARA_W_DEPTH),.DATAWIDTHB(SDPARA_R_DATAWIDTH),.ADDRWIDTHB(SDPARA_R_ADDRWIDTH),.SIZEB(SDPARA_R_DEPTH),.RAM_STYLE("block"))
sdpara1_mem(.clkA(sdpara1_W.clk),.weA(sdpara1_W.we),.addrA(sdpara1_W.addr),.diA(sdpara1_W.din),.clkB(sdpara1_R.clk),.addrB(sdpara1_R.addr),.doB(sdpara1_R.dout));

ifbram #(.ADDR_WIDTH(SDPARA_W_ADDRWIDTH),.DATA_WIDTH(SDPARA_W_DATAWIDTH)) sdpara2_W();
ifbram #(.ADDR_WIDTH(SDPARA_R_ADDRWIDTH),.DATA_WIDTH(SDPARA_R_DATAWIDTH)) sdpara2_R();
bram_cfg sdpara2_W_cfg(.bram(sdpara2_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_sdpara2),.DATAWIDTHA(SDPARA_W_DATAWIDTH),.ADDRWIDTHA(SDPARA_W_ADDRWIDTH),.SIZEA(SDPARA_W_DEPTH),.DATAWIDTHB(SDPARA_R_DATAWIDTH),.ADDRWIDTHB(SDPARA_R_ADDRWIDTH),.SIZEB(SDPARA_R_DEPTH),.RAM_STYLE("block"))
sdpara2_mem(.clkA(sdpara2_W.clk),.weA(sdpara2_W.we),.addrA(sdpara2_W.addr),.diA(sdpara2_W.din),.clkB(sdpara2_R.clk),.addrB(sdpara2_R.addr),.doB(sdpara2_R.dout));

ifbram #(.ADDR_WIDTH(SDPARA_W_ADDRWIDTH),.DATA_WIDTH(SDPARA_W_DATAWIDTH)) sdpara3_W();
ifbram #(.ADDR_WIDTH(SDPARA_R_ADDRWIDTH),.DATA_WIDTH(SDPARA_R_DATAWIDTH)) sdpara3_R();
bram_cfg sdpara3_W_cfg(.bram(sdpara3_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_sdpara3),.DATAWIDTHA(SDPARA_W_DATAWIDTH),.ADDRWIDTHA(SDPARA_W_ADDRWIDTH),.SIZEA(SDPARA_W_DEPTH),.DATAWIDTHB(SDPARA_R_DATAWIDTH),.ADDRWIDTHB(SDPARA_R_ADDRWIDTH),.SIZEB(SDPARA_R_DEPTH),.RAM_STYLE("block"))
sdpara3_mem(.clkA(sdpara3_W.clk),.weA(sdpara3_W.we),.addrA(sdpara3_W.addr),.diA(sdpara3_W.din),.clkB(sdpara3_R.clk),.addrB(sdpara3_R.addr),.doB(sdpara3_R.dout));

ifbram #(.ADDR_WIDTH(SDPARA_W_ADDRWIDTH),.DATA_WIDTH(SDPARA_W_DATAWIDTH)) sdpara4_W();
ifbram #(.ADDR_WIDTH(SDPARA_R_ADDRWIDTH),.DATA_WIDTH(SDPARA_R_DATAWIDTH)) sdpara4_R();
bram_cfg sdpara4_W_cfg(.bram(sdpara4_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_sdpara4),.DATAWIDTHA(SDPARA_W_DATAWIDTH),.ADDRWIDTHA(SDPARA_W_ADDRWIDTH),.SIZEA(SDPARA_W_DEPTH),.DATAWIDTHB(SDPARA_R_DATAWIDTH),.ADDRWIDTHB(SDPARA_R_ADDRWIDTH),.SIZEB(SDPARA_R_DEPTH),.RAM_STYLE("block"))
sdpara4_mem(.clkA(sdpara4_W.clk),.weA(sdpara4_W.we),.addrA(sdpara4_W.addr),.diA(sdpara4_W.din),.clkB(sdpara4_R.clk),.addrB(sdpara4_R.addr),.doB(sdpara4_R.dout));

ifbram #(.ADDR_WIDTH(SDPARA_W_ADDRWIDTH),.DATA_WIDTH(SDPARA_W_DATAWIDTH)) sdpara5_W();
ifbram #(.ADDR_WIDTH(SDPARA_R_ADDRWIDTH),.DATA_WIDTH(SDPARA_R_DATAWIDTH)) sdpara5_R();
bram_cfg sdpara5_W_cfg(.bram(sdpara5_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_sdpara5),.DATAWIDTHA(SDPARA_W_DATAWIDTH),.ADDRWIDTHA(SDPARA_W_ADDRWIDTH),.SIZEA(SDPARA_W_DEPTH),.DATAWIDTHB(SDPARA_R_DATAWIDTH),.ADDRWIDTHB(SDPARA_R_ADDRWIDTH),.SIZEB(SDPARA_R_DEPTH),.RAM_STYLE("block"))
sdpara5_mem(.clkA(sdpara5_W.clk),.weA(sdpara5_W.we),.addrA(sdpara5_W.addr),.diA(sdpara5_W.din),.clkB(sdpara5_R.clk),.addrB(sdpara5_R.addr),.doB(sdpara5_R.dout));

ifbram #(.ADDR_WIDTH(SDPARA_W_ADDRWIDTH),.DATA_WIDTH(SDPARA_W_DATAWIDTH)) sdpara6_W();
ifbram #(.ADDR_WIDTH(SDPARA_R_ADDRWIDTH),.DATA_WIDTH(SDPARA_R_DATAWIDTH)) sdpara6_R();
bram_cfg sdpara6_W_cfg(.bram(sdpara6_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_sdpara6),.DATAWIDTHA(SDPARA_W_DATAWIDTH),.ADDRWIDTHA(SDPARA_W_ADDRWIDTH),.SIZEA(SDPARA_W_DEPTH),.DATAWIDTHB(SDPARA_R_DATAWIDTH),.ADDRWIDTHB(SDPARA_R_ADDRWIDTH),.SIZEB(SDPARA_R_DEPTH),.RAM_STYLE("block"))
sdpara6_mem(.clkA(sdpara6_W.clk),.weA(sdpara6_W.we),.addrA(sdpara6_W.addr),.diA(sdpara6_W.din),.clkB(sdpara6_R.clk),.addrB(sdpara6_R.addr),.doB(sdpara6_R.dout));

ifbram #(.ADDR_WIDTH(SDPARA_W_ADDRWIDTH),.DATA_WIDTH(SDPARA_W_DATAWIDTH)) sdpara7_W();
ifbram #(.ADDR_WIDTH(SDPARA_R_ADDRWIDTH),.DATA_WIDTH(SDPARA_R_DATAWIDTH)) sdpara7_R();
bram_cfg sdpara7_W_cfg(.bram(sdpara7_W),.clk(lb3_clk),.rst(1'b0),.en(1'b1));
asym_ram_sdp_read_wider #(.INIT_FILE(INIT_sdpara7),.DATAWIDTHA(SDPARA_W_DATAWIDTH),.ADDRWIDTHA(SDPARA_W_ADDRWIDTH),.SIZEA(SDPARA_W_DEPTH),.DATAWIDTHB(SDPARA_R_DATAWIDTH),.ADDRWIDTHB(SDPARA_R_ADDRWIDTH),.SIZEB(SDPARA_R_DEPTH),.RAM_STYLE("block"))
sdpara7_mem(.clkA(sdpara7_W.clk),.weA(sdpara7_W.we),.addrA(sdpara7_W.addr),.diA(sdpara7_W.din),.clkB(sdpara7_R.clk),.addrB(sdpara7_R.addr),.doB(sdpara7_R.dout));
