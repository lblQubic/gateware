
bram_cfg command0_R_cfg(.bram(command0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH))
command0_R_read(.bram(command0_R),.addr(dspif.addr_command[0]),.data(dspif.data_command[0]));

bram_cfg command1_R_cfg(.bram(command1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH))
command1_R_read(.bram(command1_R),.addr(dspif.addr_command[1]),.data(dspif.data_command[1]));

bram_cfg command2_R_cfg(.bram(command2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH))
command2_R_read(.bram(command2_R),.addr(dspif.addr_command[2]),.data(dspif.data_command[2]));

bram_cfg command3_R_cfg(.bram(command3_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH))
command3_R_read(.bram(command3_R),.addr(dspif.addr_command[3]),.data(dspif.data_command[3]));

bram_cfg command4_R_cfg(.bram(command4_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH))
command4_R_read(.bram(command4_R),.addr(dspif.addr_command[4]),.data(dspif.data_command[4]));

bram_cfg command5_R_cfg(.bram(command5_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH))
command5_R_read(.bram(command5_R),.addr(dspif.addr_command[5]),.data(dspif.data_command[5]));

bram_cfg command6_R_cfg(.bram(command6_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH))
command6_R_read(.bram(command6_R),.addr(dspif.addr_command[6]),.data(dspif.data_command[6]));

bram_cfg command7_R_cfg(.bram(command7_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(COMMAND_R_ADDRWIDTH),.DATA_WIDTH(COMMAND_R_DATAWIDTH))
command7_R_read(.bram(command7_R),.addr(dspif.addr_command[7]),.data(dspif.data_command[7]));

bram_cfg qdrvenv0_R_cfg(.bram(qdrvenv0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH))
qdrvenv0_R_read(.bram(qdrvenv0_R),.addr(dspif.addr_qdrvenv[0]),.data(dspif.data_qdrvenv[0]));

bram_cfg qdrvenv1_R_cfg(.bram(qdrvenv1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH))
qdrvenv1_R_read(.bram(qdrvenv1_R),.addr(dspif.addr_qdrvenv[1]),.data(dspif.data_qdrvenv[1]));

bram_cfg qdrvenv2_R_cfg(.bram(qdrvenv2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH))
qdrvenv2_R_read(.bram(qdrvenv2_R),.addr(dspif.addr_qdrvenv[2]),.data(dspif.data_qdrvenv[2]));

bram_cfg qdrvenv3_R_cfg(.bram(qdrvenv3_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH))
qdrvenv3_R_read(.bram(qdrvenv3_R),.addr(dspif.addr_qdrvenv[3]),.data(dspif.data_qdrvenv[3]));

bram_cfg qdrvenv4_R_cfg(.bram(qdrvenv4_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH))
qdrvenv4_R_read(.bram(qdrvenv4_R),.addr(dspif.addr_qdrvenv[4]),.data(dspif.data_qdrvenv[4]));

bram_cfg qdrvenv5_R_cfg(.bram(qdrvenv5_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH))
qdrvenv5_R_read(.bram(qdrvenv5_R),.addr(dspif.addr_qdrvenv[5]),.data(dspif.data_qdrvenv[5]));

bram_cfg qdrvenv6_R_cfg(.bram(qdrvenv6_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH))
qdrvenv6_R_read(.bram(qdrvenv6_R),.addr(dspif.addr_qdrvenv[6]),.data(dspif.data_qdrvenv[6]));

bram_cfg qdrvenv7_R_cfg(.bram(qdrvenv7_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVENV_R_ADDRWIDTH),.DATA_WIDTH(QDRVENV_R_DATAWIDTH))
qdrvenv7_R_read(.bram(qdrvenv7_R),.addr(dspif.addr_qdrvenv[7]),.data(dspif.data_qdrvenv[7]));

bram_cfg qdrvfreq0_R_cfg(.bram(qdrvfreq0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH))
qdrvfreq0_R_read(.bram(qdrvfreq0_R),.addr(dspif.addr_qdrvfreq[0]),.data(dspif.data_qdrvfreq[0]));

bram_cfg qdrvfreq1_R_cfg(.bram(qdrvfreq1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH))
qdrvfreq1_R_read(.bram(qdrvfreq1_R),.addr(dspif.addr_qdrvfreq[1]),.data(dspif.data_qdrvfreq[1]));

bram_cfg qdrvfreq2_R_cfg(.bram(qdrvfreq2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH))
qdrvfreq2_R_read(.bram(qdrvfreq2_R),.addr(dspif.addr_qdrvfreq[2]),.data(dspif.data_qdrvfreq[2]));

bram_cfg qdrvfreq3_R_cfg(.bram(qdrvfreq3_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH))
qdrvfreq3_R_read(.bram(qdrvfreq3_R),.addr(dspif.addr_qdrvfreq[3]),.data(dspif.data_qdrvfreq[3]));

bram_cfg qdrvfreq4_R_cfg(.bram(qdrvfreq4_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH))
qdrvfreq4_R_read(.bram(qdrvfreq4_R),.addr(dspif.addr_qdrvfreq[4]),.data(dspif.data_qdrvfreq[4]));

bram_cfg qdrvfreq5_R_cfg(.bram(qdrvfreq5_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH))
qdrvfreq5_R_read(.bram(qdrvfreq5_R),.addr(dspif.addr_qdrvfreq[5]),.data(dspif.data_qdrvfreq[5]));

bram_cfg qdrvfreq6_R_cfg(.bram(qdrvfreq6_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH))
qdrvfreq6_R_read(.bram(qdrvfreq6_R),.addr(dspif.addr_qdrvfreq[6]),.data(dspif.data_qdrvfreq[6]));

bram_cfg qdrvfreq7_R_cfg(.bram(qdrvfreq7_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(QDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(QDRVFREQ_R_DATAWIDTH))
qdrvfreq7_R_read(.bram(qdrvfreq7_R),.addr(dspif.addr_qdrvfreq[7]),.data(dspif.data_qdrvfreq[7]));

bram_cfg rdloenv0_R_cfg(.bram(rdloenv0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH))
rdloenv0_R_read(.bram(rdloenv0_R),.addr(dspif.addr_rdloenv[0]),.data(dspif.data_rdloenv[0]));

bram_cfg rdloenv1_R_cfg(.bram(rdloenv1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH))
rdloenv1_R_read(.bram(rdloenv1_R),.addr(dspif.addr_rdloenv[1]),.data(dspif.data_rdloenv[1]));

bram_cfg rdloenv2_R_cfg(.bram(rdloenv2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH))
rdloenv2_R_read(.bram(rdloenv2_R),.addr(dspif.addr_rdloenv[2]),.data(dspif.data_rdloenv[2]));

bram_cfg rdloenv3_R_cfg(.bram(rdloenv3_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH))
rdloenv3_R_read(.bram(rdloenv3_R),.addr(dspif.addr_rdloenv[3]),.data(dspif.data_rdloenv[3]));

bram_cfg rdloenv4_R_cfg(.bram(rdloenv4_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH))
rdloenv4_R_read(.bram(rdloenv4_R),.addr(dspif.addr_rdloenv[4]),.data(dspif.data_rdloenv[4]));

bram_cfg rdloenv5_R_cfg(.bram(rdloenv5_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH))
rdloenv5_R_read(.bram(rdloenv5_R),.addr(dspif.addr_rdloenv[5]),.data(dspif.data_rdloenv[5]));

bram_cfg rdloenv6_R_cfg(.bram(rdloenv6_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH))
rdloenv6_R_read(.bram(rdloenv6_R),.addr(dspif.addr_rdloenv[6]),.data(dspif.data_rdloenv[6]));

bram_cfg rdloenv7_R_cfg(.bram(rdloenv7_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOENV_R_ADDRWIDTH),.DATA_WIDTH(RDLOENV_R_DATAWIDTH))
rdloenv7_R_read(.bram(rdloenv7_R),.addr(dspif.addr_rdloenv[7]),.data(dspif.data_rdloenv[7]));

bram_cfg rdlofreq0_R_cfg(.bram(rdlofreq0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH))
rdlofreq0_R_read(.bram(rdlofreq0_R),.addr(dspif.addr_rdlofreq[0]),.data(dspif.data_rdlofreq[0]));

bram_cfg rdlofreq1_R_cfg(.bram(rdlofreq1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH))
rdlofreq1_R_read(.bram(rdlofreq1_R),.addr(dspif.addr_rdlofreq[1]),.data(dspif.data_rdlofreq[1]));

bram_cfg rdlofreq2_R_cfg(.bram(rdlofreq2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH))
rdlofreq2_R_read(.bram(rdlofreq2_R),.addr(dspif.addr_rdlofreq[2]),.data(dspif.data_rdlofreq[2]));

bram_cfg rdlofreq3_R_cfg(.bram(rdlofreq3_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH))
rdlofreq3_R_read(.bram(rdlofreq3_R),.addr(dspif.addr_rdlofreq[3]),.data(dspif.data_rdlofreq[3]));

bram_cfg rdlofreq4_R_cfg(.bram(rdlofreq4_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH))
rdlofreq4_R_read(.bram(rdlofreq4_R),.addr(dspif.addr_rdlofreq[4]),.data(dspif.data_rdlofreq[4]));

bram_cfg rdlofreq5_R_cfg(.bram(rdlofreq5_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH))
rdlofreq5_R_read(.bram(rdlofreq5_R),.addr(dspif.addr_rdlofreq[5]),.data(dspif.data_rdlofreq[5]));

bram_cfg rdlofreq6_R_cfg(.bram(rdlofreq6_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH))
rdlofreq6_R_read(.bram(rdlofreq6_R),.addr(dspif.addr_rdlofreq[6]),.data(dspif.data_rdlofreq[6]));

bram_cfg rdlofreq7_R_cfg(.bram(rdlofreq7_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDLOFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDLOFREQ_R_DATAWIDTH))
rdlofreq7_R_read(.bram(rdlofreq7_R),.addr(dspif.addr_rdlofreq[7]),.data(dspif.data_rdlofreq[7]));

bram_cfg rdrvenv0_R_cfg(.bram(rdrvenv0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH))
rdrvenv0_R_read(.bram(rdrvenv0_R),.addr(dspif.addr_rdrvenv[0]),.data(dspif.data_rdrvenv[0]));

bram_cfg rdrvenv1_R_cfg(.bram(rdrvenv1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH))
rdrvenv1_R_read(.bram(rdrvenv1_R),.addr(dspif.addr_rdrvenv[1]),.data(dspif.data_rdrvenv[1]));

bram_cfg rdrvenv2_R_cfg(.bram(rdrvenv2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH))
rdrvenv2_R_read(.bram(rdrvenv2_R),.addr(dspif.addr_rdrvenv[2]),.data(dspif.data_rdrvenv[2]));

bram_cfg rdrvenv3_R_cfg(.bram(rdrvenv3_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH))
rdrvenv3_R_read(.bram(rdrvenv3_R),.addr(dspif.addr_rdrvenv[3]),.data(dspif.data_rdrvenv[3]));

bram_cfg rdrvenv4_R_cfg(.bram(rdrvenv4_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH))
rdrvenv4_R_read(.bram(rdrvenv4_R),.addr(dspif.addr_rdrvenv[4]),.data(dspif.data_rdrvenv[4]));

bram_cfg rdrvenv5_R_cfg(.bram(rdrvenv5_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH))
rdrvenv5_R_read(.bram(rdrvenv5_R),.addr(dspif.addr_rdrvenv[5]),.data(dspif.data_rdrvenv[5]));

bram_cfg rdrvenv6_R_cfg(.bram(rdrvenv6_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH))
rdrvenv6_R_read(.bram(rdrvenv6_R),.addr(dspif.addr_rdrvenv[6]),.data(dspif.data_rdrvenv[6]));

bram_cfg rdrvenv7_R_cfg(.bram(rdrvenv7_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVENV_R_ADDRWIDTH),.DATA_WIDTH(RDRVENV_R_DATAWIDTH))
rdrvenv7_R_read(.bram(rdrvenv7_R),.addr(dspif.addr_rdrvenv[7]),.data(dspif.data_rdrvenv[7]));

bram_cfg rdrvfreq0_R_cfg(.bram(rdrvfreq0_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH))
rdrvfreq0_R_read(.bram(rdrvfreq0_R),.addr(dspif.addr_rdrvfreq[0]),.data(dspif.data_rdrvfreq[0]));

bram_cfg rdrvfreq1_R_cfg(.bram(rdrvfreq1_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH))
rdrvfreq1_R_read(.bram(rdrvfreq1_R),.addr(dspif.addr_rdrvfreq[1]),.data(dspif.data_rdrvfreq[1]));

bram_cfg rdrvfreq2_R_cfg(.bram(rdrvfreq2_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH))
rdrvfreq2_R_read(.bram(rdrvfreq2_R),.addr(dspif.addr_rdrvfreq[2]),.data(dspif.data_rdrvfreq[2]));

bram_cfg rdrvfreq3_R_cfg(.bram(rdrvfreq3_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH))
rdrvfreq3_R_read(.bram(rdrvfreq3_R),.addr(dspif.addr_rdrvfreq[3]),.data(dspif.data_rdrvfreq[3]));

bram_cfg rdrvfreq4_R_cfg(.bram(rdrvfreq4_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH))
rdrvfreq4_R_read(.bram(rdrvfreq4_R),.addr(dspif.addr_rdrvfreq[4]),.data(dspif.data_rdrvfreq[4]));

bram_cfg rdrvfreq5_R_cfg(.bram(rdrvfreq5_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH))
rdrvfreq5_R_read(.bram(rdrvfreq5_R),.addr(dspif.addr_rdrvfreq[5]),.data(dspif.data_rdrvfreq[5]));

bram_cfg rdrvfreq6_R_cfg(.bram(rdrvfreq6_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH))
rdrvfreq6_R_read(.bram(rdrvfreq6_R),.addr(dspif.addr_rdrvfreq[6]),.data(dspif.data_rdrvfreq[6]));

bram_cfg rdrvfreq7_R_cfg(.bram(rdrvfreq7_R),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_read#(.ADDR_WIDTH(RDRVFREQ_R_ADDRWIDTH),.DATA_WIDTH(RDRVFREQ_R_DATAWIDTH))
rdrvfreq7_R_read(.bram(rdrvfreq7_R),.addr(dspif.addr_rdrvfreq[7]),.data(dspif.data_rdrvfreq[7]));
