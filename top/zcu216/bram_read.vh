
bram_cfg command0_R_cfg(.bram(command0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH))
command0_R_read(.bram(command0_R),.addr(dspif.addr_command[0]),.data(dspif.data_command[0]));

bram_cfg command1_R_cfg(.bram(command1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH))
command1_R_read(.bram(command1_R),.addr(dspif.addr_command[1]),.data(dspif.data_command[1]));

bram_cfg command2_R_cfg(.bram(command2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH))
command2_R_read(.bram(command2_R),.addr(dspif.addr_command[2]),.data(dspif.data_command[2]));

bram_cfg qdrvenv0_R_cfg(.bram(qdrvenv0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH))
qdrvenv0_R_read(.bram(qdrvenv0_R),.addr(dspif.addr_qdrvenv[0]),.data(dspif.data_qdrvenv[0]));

bram_cfg qdrvenv1_R_cfg(.bram(qdrvenv1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH))
qdrvenv1_R_read(.bram(qdrvenv1_R),.addr(dspif.addr_qdrvenv[1]),.data(dspif.data_qdrvenv[1]));

bram_cfg qdrvenv2_R_cfg(.bram(qdrvenv2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH))
qdrvenv2_R_read(.bram(qdrvenv2_R),.addr(dspif.addr_qdrvenv[2]),.data(dspif.data_qdrvenv[2]));

bram_cfg qdrvfreq0_R_cfg(.bram(qdrvfreq0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH))
qdrvfreq0_R_read(.bram(qdrvfreq0_R),.addr(dspif.addr_qdrvfreq[0]),.data(dspif.data_qdrvfreq[0]));

bram_cfg qdrvfreq1_R_cfg(.bram(qdrvfreq1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH))
qdrvfreq1_R_read(.bram(qdrvfreq1_R),.addr(dspif.addr_qdrvfreq[1]),.data(dspif.data_qdrvfreq[1]));

bram_cfg qdrvfreq2_R_cfg(.bram(qdrvfreq2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH))
qdrvfreq2_R_read(.bram(qdrvfreq2_R),.addr(dspif.addr_qdrvfreq[2]),.data(dspif.data_qdrvfreq[2]));

bram_cfg rdloenv0_R_cfg(.bram(rdloenv0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH))
rdloenv0_R_read(.bram(rdloenv0_R),.addr(dspif.addr_rdloenv[0]),.data(dspif.data_rdloenv[0]));

bram_cfg rdloenv1_R_cfg(.bram(rdloenv1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH))
rdloenv1_R_read(.bram(rdloenv1_R),.addr(dspif.addr_rdloenv[1]),.data(dspif.data_rdloenv[1]));

bram_cfg rdloenv2_R_cfg(.bram(rdloenv2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH))
rdloenv2_R_read(.bram(rdloenv2_R),.addr(dspif.addr_rdloenv[2]),.data(dspif.data_rdloenv[2]));

bram_cfg rdlofreq0_R_cfg(.bram(rdlofreq0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH))
rdlofreq0_R_read(.bram(rdlofreq0_R),.addr(dspif.addr_rdlofreq[0]),.data(dspif.data_rdlofreq[0]));

bram_cfg rdlofreq1_R_cfg(.bram(rdlofreq1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH))
rdlofreq1_R_read(.bram(rdlofreq1_R),.addr(dspif.addr_rdlofreq[1]),.data(dspif.data_rdlofreq[1]));

bram_cfg rdlofreq2_R_cfg(.bram(rdlofreq2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH))
rdlofreq2_R_read(.bram(rdlofreq2_R),.addr(dspif.addr_rdlofreq[2]),.data(dspif.data_rdlofreq[2]));

bram_cfg rdrvenv0_R_cfg(.bram(rdrvenv0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH))
rdrvenv0_R_read(.bram(rdrvenv0_R),.addr(dspif.addr_rdrvenv[0]),.data(dspif.data_rdrvenv[0]));

bram_cfg rdrvenv1_R_cfg(.bram(rdrvenv1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH))
rdrvenv1_R_read(.bram(rdrvenv1_R),.addr(dspif.addr_rdrvenv[1]),.data(dspif.data_rdrvenv[1]));

bram_cfg rdrvenv2_R_cfg(.bram(rdrvenv2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH))
rdrvenv2_R_read(.bram(rdrvenv2_R),.addr(dspif.addr_rdrvenv[2]),.data(dspif.data_rdrvenv[2]));

bram_cfg rdrvfreq0_R_cfg(.bram(rdrvfreq0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH))
rdrvfreq0_R_read(.bram(rdrvfreq0_R),.addr(dspif.addr_rdrvfreq[0]),.data(dspif.data_rdrvfreq[0]));

bram_cfg rdrvfreq1_R_cfg(.bram(rdrvfreq1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH))
rdrvfreq1_R_read(.bram(rdrvfreq1_R),.addr(dspif.addr_rdrvfreq[1]),.data(dspif.data_rdrvfreq[1]));

bram_cfg rdrvfreq2_R_cfg(.bram(rdrvfreq2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH))
rdrvfreq2_R_read(.bram(rdrvfreq2_R),.addr(dspif.addr_rdrvfreq[2]),.data(dspif.data_rdrvfreq[2]));
