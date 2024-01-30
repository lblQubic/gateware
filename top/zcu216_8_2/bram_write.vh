
bram_cfg accbuf0_W_cfg(.bram(accbuf0_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH))
accbuf0_W_write(.bram(accbuf0_W),.addr(dspif.addr_accbuf[0]),.data(dspif.data_accbuf[0]),.we(dspif.we_accbuf[0]));

bram_cfg accbuf1_W_cfg(.bram(accbuf1_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH))
accbuf1_W_write(.bram(accbuf1_W),.addr(dspif.addr_accbuf[1]),.data(dspif.data_accbuf[1]),.we(dspif.we_accbuf[1]));

bram_cfg accbuf2_W_cfg(.bram(accbuf2_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH))
accbuf2_W_write(.bram(accbuf2_W),.addr(dspif.addr_accbuf[2]),.data(dspif.data_accbuf[2]),.we(dspif.we_accbuf[2]));

bram_cfg accbuf3_W_cfg(.bram(accbuf3_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH))
accbuf3_W_write(.bram(accbuf3_W),.addr(dspif.addr_accbuf[3]),.data(dspif.data_accbuf[3]),.we(dspif.we_accbuf[3]));

bram_cfg accbuf4_W_cfg(.bram(accbuf4_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH))
accbuf4_W_write(.bram(accbuf4_W),.addr(dspif.addr_accbuf[4]),.data(dspif.data_accbuf[4]),.we(dspif.we_accbuf[4]));

bram_cfg accbuf5_W_cfg(.bram(accbuf5_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH))
accbuf5_W_write(.bram(accbuf5_W),.addr(dspif.addr_accbuf[5]),.data(dspif.data_accbuf[5]),.we(dspif.we_accbuf[5]));

bram_cfg accbuf6_W_cfg(.bram(accbuf6_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH))
accbuf6_W_write(.bram(accbuf6_W),.addr(dspif.addr_accbuf[6]),.data(dspif.data_accbuf[6]),.we(dspif.we_accbuf[6]));

bram_cfg accbuf7_W_cfg(.bram(accbuf7_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(ACCBUF_W_ADDRWIDTH),.DATA_WIDTH(ACCBUF_W_DATAWIDTH))
accbuf7_W_write(.bram(accbuf7_W),.addr(dspif.addr_accbuf[7]),.data(dspif.data_accbuf[7]),.we(dspif.we_accbuf[7]));

bram_cfg acqbuf0_W_cfg(.bram(acqbuf0_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(ACQBUF_W_ADDRWIDTH),.DATA_WIDTH(ACQBUF_W_DATAWIDTH))
acqbuf0_W_write(.bram(acqbuf0_W),.addr(dspif.addr_acqbuf[0]),.data(dspif.data_acqbuf[0]),.we(dspif.we_acqbuf[0]));

bram_cfg acqbuf1_W_cfg(.bram(acqbuf1_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(ACQBUF_W_ADDRWIDTH),.DATA_WIDTH(ACQBUF_W_DATAWIDTH))
acqbuf1_W_write(.bram(acqbuf1_W),.addr(dspif.addr_acqbuf[1]),.data(dspif.data_acqbuf[1]),.we(dspif.we_acqbuf[1]));

bram_cfg dacmon0_W_cfg(.bram(dacmon0_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(DACMON_W_ADDRWIDTH),.DATA_WIDTH(DACMON_W_DATAWIDTH))
dacmon0_W_write(.bram(dacmon0_W),.addr(dspif.addr_dacmon[0]),.data(dspif.data_dacmon[0]),.we(dspif.we_dacmon[0]));

bram_cfg dacmon1_W_cfg(.bram(dacmon1_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(DACMON_W_ADDRWIDTH),.DATA_WIDTH(DACMON_W_DATAWIDTH))
dacmon1_W_write(.bram(dacmon1_W),.addr(dspif.addr_dacmon[1]),.data(dspif.data_dacmon[1]),.we(dspif.we_dacmon[1]));

bram_cfg dacmon2_W_cfg(.bram(dacmon2_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(DACMON_W_ADDRWIDTH),.DATA_WIDTH(DACMON_W_DATAWIDTH))
dacmon2_W_write(.bram(dacmon2_W),.addr(dspif.addr_dacmon[2]),.data(dspif.data_dacmon[2]),.we(dspif.we_dacmon[2]));

bram_cfg dacmon3_W_cfg(.bram(dacmon3_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(DACMON_W_ADDRWIDTH),.DATA_WIDTH(DACMON_W_DATAWIDTH))
dacmon3_W_write(.bram(dacmon3_W),.addr(dspif.addr_dacmon[3]),.data(dspif.data_dacmon[3]),.we(dspif.we_dacmon[3]));

bram_cfg sdbuf0_W_cfg(.bram(sdbuf0_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH))
sdbuf0_W_write(.bram(sdbuf0_W),.addr(dspif.addr_sdbuf[0]),.data(dspif.data_sdbuf[0]),.we(dspif.we_sdbuf[0]));

bram_cfg sdbuf1_W_cfg(.bram(sdbuf1_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH))
sdbuf1_W_write(.bram(sdbuf1_W),.addr(dspif.addr_sdbuf[1]),.data(dspif.data_sdbuf[1]),.we(dspif.we_sdbuf[1]));

bram_cfg sdbuf2_W_cfg(.bram(sdbuf2_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH))
sdbuf2_W_write(.bram(sdbuf2_W),.addr(dspif.addr_sdbuf[2]),.data(dspif.data_sdbuf[2]),.we(dspif.we_sdbuf[2]));

bram_cfg sdbuf3_W_cfg(.bram(sdbuf3_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH))
sdbuf3_W_write(.bram(sdbuf3_W),.addr(dspif.addr_sdbuf[3]),.data(dspif.data_sdbuf[3]),.we(dspif.we_sdbuf[3]));

bram_cfg sdbuf4_W_cfg(.bram(sdbuf4_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH))
sdbuf4_W_write(.bram(sdbuf4_W),.addr(dspif.addr_sdbuf[4]),.data(dspif.data_sdbuf[4]),.we(dspif.we_sdbuf[4]));

bram_cfg sdbuf5_W_cfg(.bram(sdbuf5_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH))
sdbuf5_W_write(.bram(sdbuf5_W),.addr(dspif.addr_sdbuf[5]),.data(dspif.data_sdbuf[5]),.we(dspif.we_sdbuf[5]));

bram_cfg sdbuf6_W_cfg(.bram(sdbuf6_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH))
sdbuf6_W_write(.bram(sdbuf6_W),.addr(dspif.addr_sdbuf[6]),.data(dspif.data_sdbuf[6]),.we(dspif.we_sdbuf[6]));

bram_cfg sdbuf7_W_cfg(.bram(sdbuf7_W),.clk(dspclk),.rst(1'b0),.en(1'b1));
bram_write#(.ADDR_WIDTH(SDBUF_W_ADDRWIDTH),.DATA_WIDTH(SDBUF_W_DATAWIDTH))
sdbuf7_W_write(.bram(sdbuf7_W),.addr(dspif.addr_sdbuf[7]),.data(dspif.data_sdbuf[7]),.we(dspif.we_sdbuf[7]));
