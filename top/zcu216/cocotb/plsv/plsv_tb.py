import cocotb
from cocotb.triggers import Timer, RisingEdge
import axi4
import numpy
from matplotlib import pyplot
async def generate_clock(freq,pin,tstop):
    clk_cycle_ns=round(1/freq*1e9/2.0,3)
    for i in range(int(tstop/(clk_cycle_ns*1e-9))):
        pin.value = 0
        await Timer(clk_cycle_ns, units='ns')
        pin.value = 1
        await Timer(clk_cycle_ns, units='ns')
    #dut._log.debug("clk cycle {}".format(i))

def startclk(dut,tstop):
    cocotb.start_soon(generate_clock(freq=100e6,pin=dut.clk100,tstop=tstop))
    cocotb.start_soon(generate_clock(freq=300e6,pin=dut.usersi570c0,tstop=tstop))
    cocotb.start_soon(generate_clock(freq=300e6,pin=dut.usersi570c1,tstop=tstop))
    cocotb.start_soon(generate_clock(freq=600e6,pin=dut.clk104_pl_clk,tstop=tstop))
    cocotb.start_soon(generate_clock(freq=9.8e6,pin=dut.clk104_pl_sysref,tstop=tstop))
    cocotb.start_soon(generate_clock(freq=600e6,pin=dut.lb1_clk,tstop=tstop))
    cocotb.start_soon(generate_clock(freq=600e6,pin=dut.lb2_clk,tstop=tstop))
    cocotb.start_soon(generate_clock(freq=33.3e6,pin=dut.pl_clk0,tstop=tstop))
    cocotb.start_soon(generate_clock(freq=600e6,pin=dut.clk_dac2,tstop=tstop))
    cocotb.start_soon(generate_clock(freq=600e6,pin=dut.clk_dac3,tstop=tstop))
    cocotb.start_soon(generate_clock(freq=300e6,pin=dut.clk_adc2,tstop=tstop))
    cocotb.start_soon(generate_clock(freq=300e6,pin=dut.clkadc2_300,tstop=tstop))
    cocotb.start_soon(generate_clock(freq=600e6,pin=dut.clkadc2_600,tstop=tstop))
    cocotb.start_soon(generate_clock(freq=125e6,pin=dut.clk125,tstop=tstop))

@cocotb.test()
async def testclk(dut):
    dut.DAC20_M_AXIS_TREADY.value=1
    dut.aresetn= 1;
    startclk(dut=dut,tstop=10e-4)
    await Timer(257,units='ns')
    dut.aresetn= 0;
    await Timer(379,units='ns')
    dut.aresetn= 1;
    dut.DAC20_M_AXIS_TREADY.value=1
    dut.DAC22_M_AXIS_TREADY.value=1
    dut.DAC30_M_AXIS_TREADY.value=1
    dut.DAC32_M_AXIS_TREADY.value=1
    for t in range(200):
        await RisingEdge(dut.hw.clk100)



@cocotb.test()
async def axi4readwrite(dut):
    cfgregsaxi=axi4.axi4(aclk=dut.cfgregsaxi_aclk,aresetn=dut.cfgregsaxi_aresetn,araddr=dut.cfgregsaxi_araddr,arburst=dut.cfgregsaxi_arburst,arcache=dut.cfgregsaxi_arcache,arid=dut.cfgregsaxi_arid,arlen=dut.cfgregsaxi_arlen,arlock=dut.cfgregsaxi_arlock,arprot=dut.cfgregsaxi_arprot,arqos=dut.cfgregsaxi_arqos,arready=dut.cfgregsaxi_arready,arregion=dut.cfgregsaxi_arregion,arsize=dut.cfgregsaxi_arsize,aruser=dut.cfgregsaxi_aruser,arvalid=dut.cfgregsaxi_arvalid,awaddr=dut.cfgregsaxi_awaddr,awburst=dut.cfgregsaxi_awburst,awcache=dut.cfgregsaxi_awcache,awid=dut.cfgregsaxi_awid,awlen=dut.cfgregsaxi_awlen,awlock=dut.cfgregsaxi_awlock,awprot=dut.cfgregsaxi_awprot,awqos=dut.cfgregsaxi_awqos,awready=dut.cfgregsaxi_awready,awregion=dut.cfgregsaxi_awregion,awsize=dut.cfgregsaxi_awsize,awuser=dut.cfgregsaxi_awuser,awvalid=dut.cfgregsaxi_awvalid,bid=dut.cfgregsaxi_bid,bready=dut.cfgregsaxi_bready,bresp=dut.cfgregsaxi_bresp,buser=dut.cfgregsaxi_buser,bvalid=dut.cfgregsaxi_bvalid,rdata=dut.cfgregsaxi_rdata,rid=dut.cfgregsaxi_rid,rlast=dut.cfgregsaxi_rlast,rready=dut.cfgregsaxi_rready,rresp=dut.cfgregsaxi_rresp,ruser=dut.cfgregsaxi_ruser,rvalid=dut.cfgregsaxi_rvalid,wdata=dut.cfgregsaxi_wdata,wlast=dut.cfgregsaxi_wlast,wready=dut.cfgregsaxi_wready,wstrb=dut.cfgregsaxi_wstrb,wuser=dut.cfgregsaxi_wuser,wvalid=dut.cfgregsaxi_wvalid)
    dspregsaxi=axi4.axi4(aclk=dut.dspregsaxi_aclk,aresetn=dut.dspregsaxi_aresetn,araddr=dut.dspregsaxi_araddr,arburst=dut.dspregsaxi_arburst,arcache=dut.dspregsaxi_arcache,arid=dut.dspregsaxi_arid,arlen=dut.dspregsaxi_arlen,arlock=dut.dspregsaxi_arlock,arprot=dut.dspregsaxi_arprot,arqos=dut.dspregsaxi_arqos,arready=dut.dspregsaxi_arready,arregion=dut.dspregsaxi_arregion,arsize=dut.dspregsaxi_arsize,aruser=dut.dspregsaxi_aruser,arvalid=dut.dspregsaxi_arvalid,awaddr=dut.dspregsaxi_awaddr,awburst=dut.dspregsaxi_awburst,awcache=dut.dspregsaxi_awcache,awid=dut.dspregsaxi_awid,awlen=dut.dspregsaxi_awlen,awlock=dut.dspregsaxi_awlock,awprot=dut.dspregsaxi_awprot,awqos=dut.dspregsaxi_awqos,awready=dut.dspregsaxi_awready,awregion=dut.dspregsaxi_awregion,awsize=dut.dspregsaxi_awsize,awuser=dut.dspregsaxi_awuser,awvalid=dut.dspregsaxi_awvalid,bid=dut.dspregsaxi_bid,bready=dut.dspregsaxi_bready,bresp=dut.dspregsaxi_bresp,buser=dut.dspregsaxi_buser,bvalid=dut.dspregsaxi_bvalid,rdata=dut.dspregsaxi_rdata,rid=dut.dspregsaxi_rid,rlast=dut.dspregsaxi_rlast,rready=dut.dspregsaxi_rready,rresp=dut.dspregsaxi_rresp,ruser=dut.dspregsaxi_ruser,rvalid=dut.dspregsaxi_rvalid,wdata=dut.dspregsaxi_wdata,wlast=dut.dspregsaxi_wlast,wready=dut.dspregsaxi_wready,wstrb=dut.dspregsaxi_wstrb,wuser=dut.dspregsaxi_wuser,wvalid=dut.dspregsaxi_wvalid)
#    dut.cfgregsaxi_rready.value=1
    cfgclk=cfgregsaxi.aclk;
    dspclk=dspregsaxi.aclk;
    startclk(dut=dut,tstop=10e-4)
    testaddr=0*4
    for t in range(10):
        #await RisingEdge(dut.cfgregsaxi_aclk)
        await RisingEdge(dspclk)
        #await RisingEdge(cfgregsaxi.aclk)
    #dut.cfgregsaxi_awvalid=1
    print('write 18,0')
    await dspregsaxi.write(18*4,234,awlen=0,wdelay=0)
    print('write 17,0')
    await dspregsaxi.write(17*4,999,awlen=0,wdelay=10)
    print('write 11,arange, 15')
    await dspregsaxi.write(testaddr,0+numpy.arange(16),awburst=1,awlen=15)
#    await RisingEdge(dut.dspregsaxi_aclk)
    for t in range(10):
        await RisingEdge(dspclk)
        await RisingEdge(dspclk)
    await dspregsaxi.write(testaddr,99,awlen=0)
    for t in range(10):
        await RisingEdge(dspclk)
##    await dspregsaxi.idle()
#    await RisingEdge(dut.dspregsaxi_aclk)
    await dspregsaxi.read(testaddr)
    await dspregsaxi.read(16*4)
    await RisingEdge(cfgclk)
    await cfgregsaxi.write(32,9)
#    await RisingEdge(dut.dspregsaxi_aclk)
#    await dspregsaxi.idle()
    for t in range(20):
        await RisingEdge(dspclk)
    await RisingEdge(dspclk)
    await dspregsaxi.read(testaddr,arburst=1,arlen=15)
    await dspregsaxi.write(19*4,0,awlen=0)
    await cfgregsaxi.write(32,18)
    dut.plsv.qdrvenv2_mem.doB=0x7fff0000;
    for t in range(20):
        await RisingEdge(dspclk)
    if 0:
        await dspregsaxi.read(testaddr)
        for t in range(20):
            await RisingEdge(dut.hw.clk100)
            #await RisingEdge(cfgregsaxi.aclk)
        await dspregsaxi.write(testaddr,99)
        await dspregsaxi.read(testaddr)
        for t in range(20):
            await RisingEdge(dut.hw.clk100)
        await dspregsaxi.read(testaddr)
        for t in range(20):
            await RisingEdge(dut.hw.clk100)
        await dspregsaxi.read(testaddr)
        for t in range(20):
            await RisingEdge(dut.hw.clk100)
    pass

def sign16(v):
    return int(v-65536) if (v>>15)&1 else v
@cocotb.test()
async def sinmult(dut):
    startclk(dut=dut,tstop=10e-4)
    dspregsaxi=axi4.axi4(aclk=dut.dspregsaxi_aclk,aresetn=dut.dspregsaxi_aresetn,araddr=dut.dspregsaxi_araddr,arburst=dut.dspregsaxi_arburst,arcache=dut.dspregsaxi_arcache,arid=dut.dspregsaxi_arid,arlen=dut.dspregsaxi_arlen,arlock=dut.dspregsaxi_arlock,arprot=dut.dspregsaxi_arprot,arqos=dut.dspregsaxi_arqos,arready=dut.dspregsaxi_arready,arregion=dut.dspregsaxi_arregion,arsize=dut.dspregsaxi_arsize,aruser=dut.dspregsaxi_aruser,arvalid=dut.dspregsaxi_arvalid,awaddr=dut.dspregsaxi_awaddr,awburst=dut.dspregsaxi_awburst,awcache=dut.dspregsaxi_awcache,awid=dut.dspregsaxi_awid,awlen=dut.dspregsaxi_awlen,awlock=dut.dspregsaxi_awlock,awprot=dut.dspregsaxi_awprot,awqos=dut.dspregsaxi_awqos,awready=dut.dspregsaxi_awready,awregion=dut.dspregsaxi_awregion,awsize=dut.dspregsaxi_awsize,awuser=dut.dspregsaxi_awuser,awvalid=dut.dspregsaxi_awvalid,bid=dut.dspregsaxi_bid,bready=dut.dspregsaxi_bready,bresp=dut.dspregsaxi_bresp,buser=dut.dspregsaxi_buser,bvalid=dut.dspregsaxi_bvalid,rdata=dut.dspregsaxi_rdata,rid=dut.dspregsaxi_rid,rlast=dut.dspregsaxi_rlast,rready=dut.dspregsaxi_rready,rresp=dut.dspregsaxi_rresp,ruser=dut.dspregsaxi_ruser,rvalid=dut.dspregsaxi_rvalid,wdata=dut.dspregsaxi_wdata,wlast=dut.dspregsaxi_wlast,wready=dut.dspregsaxi_wready,wstrb=dut.dspregsaxi_wstrb,wuser=dut.dspregsaxi_wuser,wvalid=dut.dspregsaxi_wvalid)
    bramaxi=axi4.axi4(aclk=dut.bramaxi_aclk,aresetn=dut.bramaxi_aresetn,araddr=dut.bramaxi_araddr,arburst=dut.bramaxi_arburst,arcache=dut.bramaxi_arcache,arid=dut.bramaxi_arid,arlen=dut.bramaxi_arlen,arlock=dut.bramaxi_arlock,arprot=dut.bramaxi_arprot,arqos=dut.bramaxi_arqos,arready=dut.bramaxi_arready,arregion=dut.bramaxi_arregion,arsize=dut.bramaxi_arsize,aruser=dut.bramaxi_aruser,arvalid=dut.bramaxi_arvalid,awaddr=dut.bramaxi_awaddr,awburst=dut.bramaxi_awburst,awcache=dut.bramaxi_awcache,awid=dut.bramaxi_awid,awlen=dut.bramaxi_awlen,awlock=dut.bramaxi_awlock,awprot=dut.bramaxi_awprot,awqos=dut.bramaxi_awqos,awready=dut.bramaxi_awready,awregion=dut.bramaxi_awregion,awsize=dut.bramaxi_awsize,awuser=dut.bramaxi_awuser,awvalid=dut.bramaxi_awvalid,bid=dut.bramaxi_bid,bready=dut.bramaxi_bready,bresp=dut.bramaxi_bresp,buser=dut.bramaxi_buser,bvalid=dut.bramaxi_bvalid,rdata=dut.bramaxi_rdata,rid=dut.bramaxi_rid,rlast=dut.bramaxi_rlast,rready=dut.bramaxi_rready,rresp=dut.bramaxi_rresp,ruser=dut.bramaxi_ruser,rvalid=dut.bramaxi_rvalid,wdata=dut.bramaxi_wdata,wlast=dut.bramaxi_wlast,wready=dut.bramaxi_wready,wstrb=dut.bramaxi_wstrb,wuser=dut.bramaxi_wuser,wvalid=dut.bramaxi_wvalid)
    dspclk=dspregsaxi.aclk;
    val=[]
    for t in range(3):
        await RisingEdge(dspclk)
    await RisingEdge(dspclk)
    await dspregsaxi.write(26*4,4,awlen=0)
    freqph16=[eval(i) for i in '''0x15555555
0x7fed0430
0x7fb9085f
0x7f610c8c
0x7ee710b5
0x7e4914da
0x7d8918f9
0x7ca71d11
0x7ba22121
0x7a7c2528
0x79342925
0x77cb2d16
0x764130fb
0x749634d3
0x72cc389c
0x70e23c56'''.split('\n')]
    #freqph16.extend([1,0])

    addrph16=range(0x68000,0x68000+16);#[0x70000,0x70001,0x70002,0x70003,0x70004,0x70005,0x70006,0x70007,0x70008,0x70009,0x7000a,0x7000b,0x7000c,0x7000d,0x7000e,0x7000f]#,25,25]
    for a,v in enumerate(freqph16):
        await bramaxi.write(addrph16[a]*4,v)
        await RisingEdge(dspclk)
    for a in range(0x48000,0x48400):        
        await bramaxi.write(a*4,0x7fff0000)
        await RisingEdge(dspclk)
    await dspregsaxi.write(18*4,0)
    await dspregsaxi.write(19*4,0)
    await dspregsaxi.write(20*4,0)
    await dspregsaxi.write(25*4,1)

    for t in range(20):
        await RisingEdge(dspclk)

    for t in range(20):
        await RisingEdge(dspclk)
        v16=eval(dut.plsv.pltop.dsp.cossteps.value.hex())
        for j in range(16):
            val.append(sign16((v16>>((15-j)*16))&0xffff))
    print([hex(int(i)) for i in val[0:10]])
    numpy.savetxt('val.dat',val)
    await bramaxi.read(0x40004*4)
    await Timer(16e-6, units='sec')
    await dspregsaxi.write(25*4,1)
#    await bramaxi.write((0x70000)*4,0x2abcd123)
#    for i in range(1,20):
#        await bramaxi.write((0x70000+i)*4,0x7fff0000+i*0x101)
#    await bramaxi.write((0x70000+0)*4,0x2aaaaaaa)
    await dspregsaxi.write(25*4,1)
    await RisingEdge(dspclk)
    dut.aresetn.value= 0;
    await RisingEdge(dspclk)
    dut.aresetn.value= 1;

    await bramaxi.read((0x4000+50)*4)
    #await dspregsaxi.write(25*4,0)
    await Timer(20e-6, units='sec')


@cocotb.test()
async def clkexist(dut):
    tstop=20e-6
    #tstop=500e-6
    tstop_ns=tstop*1e9
    startclk(dut=dut,tstop=tstop)
    await Timer(tstop_ns, units='ns')
    pass
#@cocotb.test()
async def axi4streamdac20(dut):
    startclk(dut=dut,tstop=10e-4)
    dut.DAC20_M_AXIS_TREADY=1
    dut.DAC30_M_AXIS_TREADY=1
#    dut.DAC22_M_AXIS_TREADY=1
    dut.DAC32_M_AXIS_TREADY=1
    await Timer(1e-5, units='sec')

