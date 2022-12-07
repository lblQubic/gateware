import cocotb
from cocotb.triggers import Timer, RisingEdge
import axi4
import bram
import regs
import numpy
import random
from matplotlib import pyplot

import sys
sys.path.append("../../../../submodules/distributed_processor/python")  # install doesn't work, why?
import distproc.command_gen as cg  


class plsv():
    def __init__(self):
        self.acqbuf0=numpy.zeros(16384)
        self.brams=bram.brams("../../bram.json")
        self.dspregs=regs.regs("../../dspregs.json")
        self.cfgregs=regs.regs("../../cfgregs.json")
    def pulse_i_test_cmd(self):
        self.cmdbuf('command0',[cg.pulse_i(freq_word=2, phase_word=110, amp_word=30000, env_word=(0x123<<12)+0x20, cfg_word=1, cmd_time=0)])
        self.cmdbuf('command0',[cg.pulse_i(freq_word=2, phase_word=220, amp_word=30000, env_word=(0x123<<12)+0x20, cfg_word=2, cmd_time=20)])
        self.cmdbuf('command0',[cg.pulse_i(freq_word=1, phase_word=330, amp_word=30000, env_word=(0x123<<12)+0x20, cfg_word=1, cmd_time=330)])
        self.cmdbuf('command0',[cg.pulse_i(freq_word=1, phase_word=440, amp_word=30000, env_word=(0x123<<12)+0x20, cfg_word=2, cmd_time=350)])
        self.freqbuf('qdrvfreq0',[10e6,20e6,30e6,4.6e9])
        self.freqbuf('rdrvfreq0',[10e6,20e6,30e6,4.6e9])
        self.freqbuf('rdlofreq0',[10e6,20e6,30e6,4.6e9],ratio=4)
        self.freqbuf('qdrvfreq1',[10e6,20e6,30e6,4.6e9])
        self.freqbuf('rdrvfreq1',[10e6,20e6,30e6,4.6e9])
        self.freqbuf('rdlofreq1',[10e6,20e6,30e6,4.6e9],ratio=4)
        self.envbuf('qdrvenv0',[numpy.zeros(16*32),numpy.ones(16*100)*0x7eff0000,numpy.zeros(16*20),self.complex32(numpy.arange(1,16*171+1)*100+1j*numpy.zeros(16*171))])
        self.envbuf('rdrvenv0',[numpy.zeros(16*32),numpy.ones(16*100)*0x7eff0000,numpy.zeros(16*20),self.complex32(numpy.arange(1,16*171+1)*100+1j*numpy.zeros(16*171))])
        self.envbuf('rdloenv0',[numpy.zeros(16*32),numpy.ones(16*100)*0x7eff0000,numpy.zeros(16*20),self.complex32(numpy.arange(1,16*171+1)*100+1j*numpy.zeros(16*171))])
        self.envbuf('qdrvenv1',[numpy.zeros(16*32),numpy.ones(16*100)*0x7eff0000,numpy.zeros(16*20),self.complex32(numpy.arange(1,16*171+1)*100+1j*numpy.zeros(16*171))])
        self.envbuf('rdrvenv1',[numpy.zeros(16*32),numpy.ones(16*100)*0x7eff0000,numpy.zeros(16*20),self.complex32(numpy.arange(1,16*171+1)*100+1j*numpy.zeros(16*171))])
        self.envbuf('rdloenv1',[numpy.zeros(16*32),numpy.ones(16*100)*0x7eff0000,numpy.zeros(16*20),self.complex32(numpy.arange(1,16*171+1)*100+1j*numpy.zeros(16*171))])
#        n_cmd = 11
#        command0= []
#        command1= []
#        freq_word_list = []
#        phase_word_list = []
#        env_word_list = []
#        pulse_time_list = [2, 3, 4, 7, 8, 9, 15, 16, 18, 19, 22]

#        for i in range(n_cmd):
#            freq_word = random.randint(0, 2**9-1)
#            phase_word = random.randint(0, 2**17-1)
#            env_word = random.randint(0, 2**24-1)
#            amp_word = random.randint(0, 2**16-1)
#            cfg_word = random.randint(0, 2**4-1)
#            freq_word_list.append(freq_word)
#            phase_word_list.append(phase_word)
#            env_word_list.append(env_word)
#            cmd_list.append(cg.pulse_i(freq_word, phase_word, amp_word, env_word, cfg_word, pulse_time_list[i]))

#def pulse_i(freq_word, phase_word, amp_word, env_word, cfg_word, cmd_time):

#        print('\n'.join([format(i,'016x') for i in cmd_list]))
 #       self.cmdbuf('command1',[self.fakecmd(trigt=0,envstart=20,envlength=100,amp=12345,freqaddr=0,pini=65535,mode=2)])
 #       self.cmdbuf('command1',[self.fakecmd(trigt=200,envstart=20,envlength=100,amp=12345,freqaddr=1,pini=65535,mode=2)])
 #       self.cmdbuf('command1',[self.fakecmd(trigt=400,envstart=20,envlength=100,amp=12345,freqaddr=2,pini=65535,mode=2)])
 #       self.cmdbuf('command1',[self.fakecmd(trigt=600,envstart=20,envlength=100,amp=12345,freqaddr=3,pini=65535,mode=2)])
 #       self.cmdbuf('command1',[self.fakecmd(trigt=800,envstart=20,envlength=100,amp=12345,freqaddr=4,pini=65535,mode=2)])
 #       self.cmdbuf('command1',[self.fakecmd(trigt=1000,envstart=20,envlength=100,amp=12345,freqaddr=5,pini=65535,mode=2)])
 #       self.cmdbuf('command2',[self.fakecmd(trigt=0,envstart=20,envlength=100,amp=12345,freqaddr=0,pini=65535,mode=2)])
 #       self.cmdbuf('command2',[self.fakecmd(trigt=100,envstart=20,envlength=100,amp=12345,freqaddr=1,pini=65535,mode=2)])
 #       self.cmdbuf('command2',[self.fakecmd(trigt=300,envstart=20,envlength=100,amp=12345,freqaddr=2,pini=65535,mode=2)])
 #       self.cmdbuf('command2',[self.fakecmd(trigt=500,envstart=20,envlength=100,amp=12345,freqaddr=3,pini=65535,mode=2)])
 #       self.cmdbuf('command2',[self.fakecmd(trigt=700,envstart=20,envlength=100,amp=12345,freqaddr=4,pini=65535,mode=2)])
 #       self.cmdbuf('command2',[self.fakecmd(trigt=900,envstart=20,envlength=100,amp=12345,freqaddr=5,pini=65535,mode=2)])
        # cmd, env, freq

    def fakeprocmem(self):        
        self.freqbuf('qdrvfreq0',[10e6,20e6,30e6,4.6e9])
        self.freqbuf('rdrvfreq0',[10e6,20e6,30e6,4.6e9])
        self.freqbuf('rdlofreq0',[10e6,20e6,30e6,4.6e9],ratio=4)
        self.freqbuf('qdrvfreq1',[10e6,20e6,30e6,4.6e9])
        self.freqbuf('rdrvfreq1',[10e6,20e6,30e6,4.6e9])
        self.freqbuf('rdlofreq1',[10e6,20e6,30e6,4.6e9],ratio=4)
        self.envbuf('qdrvenv0',[numpy.zeros(16*10),numpy.ones(16*20)*0x7eff0000,numpy.zeros(16*20),self.complex32(numpy.arange(1,16*16+1)*100+1j*numpy.zeros(16*16))])
        self.envbuf('rdrvenv0',[numpy.zeros(16*10),numpy.ones(16*20)*0x7eff0000,numpy.zeros(16*20),self.complex32(numpy.arange(1,16*16+1)*100+1j*numpy.zeros(16*16))])
        self.envbuf('rdloenv0',[numpy.zeros(16*10),numpy.ones(16*20)*0x7eff0000,numpy.zeros(16*20),self.complex32(numpy.arange(1,16*16+1)*100+1j*numpy.zeros(16*16))])
        self.cmdbuf('command0',[self.fakecmd(trigt=10,envstart=10,envlength=20,amp=12345,freqaddr=1,pini=65535,mode=0)])
        self.cmdbuf('command0',[self.fakecmd(trigt=140,envstart=50,envlength=16,amp=34567,freqaddr=2,pini=0x2340,mode=0)])
        self.cmdbuf('command0',[self.fakecmd(trigt=160,envstart=50,envlength=16,amp=34567,freqaddr=2,pini=0x2341,mode=1)])
        self.cmdbuf('command0',[self.fakecmd(trigt=169,envstart=50,envlength=16,amp=34567,freqaddr=2,pini=0x2342,mode=2)])
        self.cmdbuf('command0',[self.fakecmd(trigt=270,envstart=0,envlength=0,amp=32005,freqaddr=3,pini=0xabc,mode=0)])
        self.cmdbuf('command0',[self.fakecmd(trigt=292,envstart=50,envlength=16,amp=34567,freqaddr=2,pini=0x2341,mode=1)])
        self.cmdbuf('command0',[self.fakecmd(trigt=301,envstart=50,envlength=16,amp=34567,freqaddr=2,pini=0x2342,mode=2)])
        self.cmdbuf('command0',[self.fakecmd(trigt=1500,envstart=10,envlength=20,amp=12345,freqaddr=1,pini=65535,mode=0)])
        self.cmdbuf('command1',[self.fakecmd(trigt=0,envstart=10,envlength=0,amp=12345,freqaddr=1,pini=65535,mode=0)])
        self.cmdbuf('command1',[self.fakecmd(trigt=6,envstart=20,envlength=0,amp=12345,freqaddr=2,pini=65535,mode=2)])
        pass
    def widthshift(self,val,width,shift):
        mask1=(1<<width)-1;
        return (val&mask1)<<shift
    def cmdbuf(self,bufname,cmdlist):
        for i,cmd in enumerate(cmdlist):
            startaddr=self.brams[bufname].next
            for j in range(4):
                self.brams[bufname].set_value(startaddr+j,(cmd>>(j*32))&0xffffffff)
                print('cmdbuf',startaddr+j,format((cmd>>(j*32))&0xffffffff,'08x'))
        self.brams[bufname].siminit()
    def fakecmd(self,trigt,amp,freqaddr,envstart,envlength,mode,pini):
        cmd=self.widthshift(mode,2,0)\
                +self.widthshift(pini,17,2)\
                +self.widthshift(freqaddr,9,19)\
                +self.widthshift(amp,16,28)\
                +self.widthshift(envlength,12,44)\
                +self.widthshift(envstart,12,56)\
                +self.widthshift(trigt,27,68);
        print('fakecmd',cmd)
        return cmd
    def envbuf(self,bufname,envlist):
        for i,env in enumerate(envlist):
            startaddr=self.brams[bufname].next
            self.brams[bufname].set_value(startaddr,env)
        self.brams[bufname].siminit()
    def complex32(self,c):
        ffff=(numpy.ones(len(c))*0xffff).astype(int)
        real=c.real.astype(int)
        imag=c.imag.astype(int)
        c32=(real<<16)+imag
        return c32


    def freqbuf(self,bufname,freqlist,ratio=16):
        for i,freq in enumerate(freqlist):
            freqphase16=self.freqcalc(freq)
            self.brams[bufname].set_value(i*ratio,freqphase16)
        self.brams[bufname].siminit()            



    def freqcalc(self,freq,ffpga=600e6,ratio=16,scale=32767):
        fsample=ratio*ffpga
        Ts=1/fsample
        r=[]
        for i in range(ratio):
            c=int(round(numpy.cos(2*numpy.pi*freq*i*Ts)*scale))%0x10000
            s=int(round(numpy.sin(2*numpy.pi*freq*i*Ts)*scale))%0x10000
            if (i==0):
                r.append(int(freq*2**32/ffpga)&0xffffffff)
            else:
                r.append(((c<<16)+s))
            print([hex(i) for i in r])
        return r
    def conndut(self,dut):
        self.dut=dut
        self.cfgregsaxi=axi4.axi4(aclk=dut.cfgregsaxi_aclk,aresetn=dut.cfgregsaxi_aresetn,araddr=dut.cfgregsaxi_araddr,arburst=dut.cfgregsaxi_arburst,arcache=dut.cfgregsaxi_arcache,arid=dut.cfgregsaxi_arid,arlen=dut.cfgregsaxi_arlen,arlock=dut.cfgregsaxi_arlock,arprot=dut.cfgregsaxi_arprot,arqos=dut.cfgregsaxi_arqos,arready=dut.cfgregsaxi_arready,arregion=dut.cfgregsaxi_arregion,arsize=dut.cfgregsaxi_arsize,aruser=dut.cfgregsaxi_aruser,arvalid=dut.cfgregsaxi_arvalid,awaddr=dut.cfgregsaxi_awaddr,awburst=dut.cfgregsaxi_awburst,awcache=dut.cfgregsaxi_awcache,awid=dut.cfgregsaxi_awid,awlen=dut.cfgregsaxi_awlen,awlock=dut.cfgregsaxi_awlock,awprot=dut.cfgregsaxi_awprot,awqos=dut.cfgregsaxi_awqos,awready=dut.cfgregsaxi_awready,awregion=dut.cfgregsaxi_awregion,awsize=dut.cfgregsaxi_awsize,awuser=dut.cfgregsaxi_awuser,awvalid=dut.cfgregsaxi_awvalid,bid=dut.cfgregsaxi_bid,bready=dut.cfgregsaxi_bready,bresp=dut.cfgregsaxi_bresp,buser=dut.cfgregsaxi_buser,bvalid=dut.cfgregsaxi_bvalid,rdata=dut.cfgregsaxi_rdata,rid=dut.cfgregsaxi_rid,rlast=dut.cfgregsaxi_rlast,rready=dut.cfgregsaxi_rready,rresp=dut.cfgregsaxi_rresp,ruser=dut.cfgregsaxi_ruser,rvalid=dut.cfgregsaxi_rvalid,wdata=dut.cfgregsaxi_wdata,wlast=dut.cfgregsaxi_wlast,wready=dut.cfgregsaxi_wready,wstrb=dut.cfgregsaxi_wstrb,wuser=dut.cfgregsaxi_wuser,wvalid=dut.cfgregsaxi_wvalid)
        self.dspregsaxi=axi4.axi4(aclk=dut.dspregsaxi_aclk,aresetn=dut.dspregsaxi_aresetn,araddr=dut.dspregsaxi_araddr,arburst=dut.dspregsaxi_arburst,arcache=dut.dspregsaxi_arcache,arid=dut.dspregsaxi_arid,arlen=dut.dspregsaxi_arlen,arlock=dut.dspregsaxi_arlock,arprot=dut.dspregsaxi_arprot,arqos=dut.dspregsaxi_arqos,arready=dut.dspregsaxi_arready,arregion=dut.dspregsaxi_arregion,arsize=dut.dspregsaxi_arsize,aruser=dut.dspregsaxi_aruser,arvalid=dut.dspregsaxi_arvalid,awaddr=dut.dspregsaxi_awaddr,awburst=dut.dspregsaxi_awburst,awcache=dut.dspregsaxi_awcache,awid=dut.dspregsaxi_awid,awlen=dut.dspregsaxi_awlen,awlock=dut.dspregsaxi_awlock,awprot=dut.dspregsaxi_awprot,awqos=dut.dspregsaxi_awqos,awready=dut.dspregsaxi_awready,awregion=dut.dspregsaxi_awregion,awsize=dut.dspregsaxi_awsize,awuser=dut.dspregsaxi_awuser,awvalid=dut.dspregsaxi_awvalid,bid=dut.dspregsaxi_bid,bready=dut.dspregsaxi_bready,bresp=dut.dspregsaxi_bresp,buser=dut.dspregsaxi_buser,bvalid=dut.dspregsaxi_bvalid,rdata=dut.dspregsaxi_rdata,rid=dut.dspregsaxi_rid,rlast=dut.dspregsaxi_rlast,rready=dut.dspregsaxi_rready,rresp=dut.dspregsaxi_rresp,ruser=dut.dspregsaxi_ruser,rvalid=dut.dspregsaxi_rvalid,wdata=dut.dspregsaxi_wdata,wlast=dut.dspregsaxi_wlast,wready=dut.dspregsaxi_wready,wstrb=dut.dspregsaxi_wstrb,wuser=dut.dspregsaxi_wuser,wvalid=dut.dspregsaxi_wvalid)
        self.bramsaxi=axi4.axi4(aclk=dut.bramaxi_aclk,aresetn=dut.bramaxi_aresetn,araddr=dut.bramaxi_araddr,arburst=dut.bramaxi_arburst,arcache=dut.bramaxi_arcache,arid=dut.bramaxi_arid,arlen=dut.bramaxi_arlen,arlock=dut.bramaxi_arlock,arprot=dut.bramaxi_arprot,arqos=dut.bramaxi_arqos,arready=dut.bramaxi_arready,arregion=dut.bramaxi_arregion,arsize=dut.bramaxi_arsize,aruser=dut.bramaxi_aruser,arvalid=dut.bramaxi_arvalid,awaddr=dut.bramaxi_awaddr,awburst=dut.bramaxi_awburst,awcache=dut.bramaxi_awcache,awid=dut.bramaxi_awid,awlen=dut.bramaxi_awlen,awlock=dut.bramaxi_awlock,awprot=dut.bramaxi_awprot,awqos=dut.bramaxi_awqos,awready=dut.bramaxi_awready,awregion=dut.bramaxi_awregion,awsize=dut.bramaxi_awsize,awuser=dut.bramaxi_awuser,awvalid=dut.bramaxi_awvalid,bid=dut.bramaxi_bid,bready=dut.bramaxi_bready,bresp=dut.bramaxi_bresp,buser=dut.bramaxi_buser,bvalid=dut.bramaxi_bvalid,rdata=dut.bramaxi_rdata,rid=dut.bramaxi_rid,rlast=dut.bramaxi_rlast,rready=dut.bramaxi_rready,rresp=dut.bramaxi_rresp,ruser=dut.bramaxi_ruser,rvalid=dut.bramaxi_rvalid,wdata=dut.bramaxi_wdata,wlast=dut.bramaxi_wlast,wready=dut.bramaxi_wready,wstrb=dut.bramaxi_wstrb,wuser=dut.bramaxi_wuser,wvalid=dut.bramaxi_wvalid)
        self.dutinit()
    def dutinit(self):
        self.dut.DAC20_M_AXIS_TREADY.value=1
        self.dut.DAC22_M_AXIS_TREADY.value=1
        self.dut.DAC30_M_AXIS_TREADY.value=1
        self.dut.DAC32_M_AXIS_TREADY.value=1
        self.dut.aresetn.value= 1;
        pass
    async def asyncreset(self,length=23):
        self.dut.aresetn.value= 0;
        await Timer(length,units='ns')
        self.dut.aresetn.value= 1;
    async def dspregswrite(self,name,val):
        await self.dspregsaxi.write(addr=self.dspregs[name].address*4,data=val)
    async def dspregsread(self,name):
        value=await self.dspregsaxi.read(addr=self.dspregs[name].address*4)
        self.dspregs[name].value=value
        return value
    async def cfgregswrite(self,name,val):
        await self.cfgregsaxi.write(addr=self.cfgregs[name].address*4,data=val)
    async def cfgregsread(self,name):
        value= await self.cfgregsaxi.read(addr=self.cfgregs[name].address*4)
        self.cfgregs[name].value=value
        return value
    async def bramswrite(self,name,offset,val):
        await self.bramsaxi.write(addr=self.brams[name].address(offset)*4,data=val)
    async def bramsread(self,name,offset):
        value= await self.bramsaxi.read(addr=self.brams[name].address(offset)*4)
        self.brams[name].set_value(offset=offset,value=value)
        return value
    async def generate_clock(slef,freq,pin,tstop):
        clk_cycle_ns=round(1/freq*1e9/2.0,3)
        for i in range(int(tstop/(clk_cycle_ns*1e-9))):
            pin.value = 0
            await Timer(clk_cycle_ns, units='ns')
            pin.value = 1
            await Timer(clk_cycle_ns, units='ns')
        #dut._log.debug("clk cycle {}".format(i))

    def startclk(self,dut,tstop):
        cocotb.start_soon(self.generate_clock(freq=100e6,pin=dut.clk100,tstop=tstop))
        cocotb.start_soon(self.generate_clock(freq=300e6,pin=dut.usersi570c0,tstop=tstop))
        cocotb.start_soon(self.generate_clock(freq=300e6,pin=dut.usersi570c1,tstop=tstop))
        cocotb.start_soon(self.generate_clock(freq=600e6,pin=dut.clk104_pl_clk,tstop=tstop))
        cocotb.start_soon(self.generate_clock(freq=9.8e6,pin=dut.clk104_pl_sysref,tstop=tstop))
        cocotb.start_soon(self.generate_clock(freq=600e6,pin=dut.lb1_clk,tstop=tstop))
        cocotb.start_soon(self.generate_clock(freq=600e6,pin=dut.lb2_clk,tstop=tstop))
        cocotb.start_soon(self.generate_clock(freq=33.3e6,pin=dut.pl_clk0,tstop=tstop))
        cocotb.start_soon(self.generate_clock(freq=600e6,pin=dut.clk_dac2,tstop=tstop))
        cocotb.start_soon(self.generate_clock(freq=600e6,pin=dut.clk_dac3,tstop=tstop))
        cocotb.start_soon(self.generate_clock(freq=300e6,pin=dut.clk_adc2,tstop=tstop))
        cocotb.start_soon(self.generate_clock(freq=300e6,pin=dut.clkadc2_300,tstop=tstop))
        cocotb.start_soon(self.generate_clock(freq=600e6,pin=dut.clkadc2_600,tstop=tstop))
        cocotb.start_soon(self.generate_clock(freq=125e6,pin=dut.clk125,tstop=tstop))
    async def clk(self,tstop,resettime=257,resetpulselen=23):
        self.dutinit()
        self.startclk(dut=self.dut,tstop=tstop)
        await Timer(resettime,units='ns')
        await self.asyncreset(resetpulselen);
    async def dspregsrw(self): 
        await self.clk(1e-3)
        await self.delayclk(20,"clk_dac2")
        randval=random.randint(0,2**32)
        await self.dspregswrite("resetacc",randval)
        await self.delayclk(20,"clk_dac2")
        value=await self.dspregsread("resetacc")
        await self.delayclk(20,"clk_dac2")
        assert self.dut.plsv.pltop.dspregs.resetacc.value.integer==randval
        assert value[0]==randval
    async def cfgregsrw(self): 
        await self.clk(1e-3)
        await self.delayclk(20,"hw.clk100")
        randval=random.randint(0,2**32)
        await self.cfgregswrite("test",randval)
        await self.delayclk(20,"hw.clk100")
        value=await self.cfgregsread("test")
        await self.delayclk(20,"hw.clk100")
        assert self.dut.plsv.pltop.cfgregs.test.value.integer==randval
        assert value[0]==randval

    async def bramsw(self): 
        await self.clk(1e-3)
        await self.delayclk(20,"hw.clk100")
        addroffset=28
        randval=random.randint(0,2**32)
        await self.bramswrite("command0",addroffset,randval)
        assert self.dut.plsv.command0_mem.addrA_d.value.integer==addroffset
        assert self.dut.plsv.command0_mem.weA_d.value.integer==1
        assert self.dut.plsv.command0_mem.diA_d.value.integer==randval
        await self.delayclk(20,"hw.clk100")

    async def bramsr(self):


        await self.clk(1e-3)
        await self.delayclk(20,"hw.clk100")
        value=await self.bramsread("acqbuf0",10)
        print(value,[hex(i) for i in value],self.acqbuf0[10])
#        assert self.dut.plsv.command0_mem.addrA_d.value.integer==10
#        assert self.dut.plsv.command0_mem.weA_d.value.integer==1
#        assert self.dut.plsv.command0_mem.diA_d.value.integer==randval
        await self.delayclk(20,"hw.clk100")


    async def delayclk(self,n,clkname):
        for i in range(n):
            await RisingEdge(getattr(self.dut,clkname))

    async def start(self):
        await self.clk(4e-6)
        await self.delayclk(20,"clk_dac2")
        await self.dspregswrite("nshot",10)
        await self.dspregswrite("start",0)
        await self.delayclk(2000,"clk_dac2")


a=plsv()
@cocotb.test()
async def init(dut):
    a.conndut(dut)

#@cocotb.test()
async def clk(dut):
    await a.clk(2e-6)
    await a.delayclk(20,"hw.clk100")

#@cocotb.test()
async def dspregsrw(dut):
    await a.dspregsrw()

#@cocotb.test()
async def cfgregsrw(dut):
    await a.cfgregsrw()

#@cocotb.test()
async def bramsw(dut):
    await a.bramsw()

#@cocotb.test()
async def bramsr(dut):
    await a.bramsr()

#@cocotb.test()
async def start(dut):
    await a.start()

@cocotb.test()
async def pulse_i_test(dut):
    a.pulse_i_test_cmd()
    await a.clk(4e-6)
    await a.delayclk(20,"clk_dac2")
    await a.dspregswrite("nshot",10)
    await a.dspregswrite("start",0)
    await a.delayclk(2000,"clk_dac2")


#@cocotb.test()
async def axi4readwrite(dut):
    cfgregsaxi=axi4.axi4(aclk=dut.cfgregsaxi_aclk,aresetn=dut.cfgregsaxi_aresetn,araddr=dut.cfgregsaxi_araddr,arburst=dut.cfgregsaxi_arburst,arcache=dut.cfgregsaxi_arcache,arid=dut.cfgregsaxi_arid,arlen=dut.cfgregsaxi_arlen,arlock=dut.cfgregsaxi_arlock,arprot=dut.cfgregsaxi_arprot,arqos=dut.cfgregsaxi_arqos,arready=dut.cfgregsaxi_arready,arregion=dut.cfgregsaxi_arregion,arsize=dut.cfgregsaxi_arsize,aruser=dut.cfgregsaxi_aruser,arvalid=dut.cfgregsaxi_arvalid,awaddr=dut.cfgregsaxi_awaddr,awburst=dut.cfgregsaxi_awburst,awcache=dut.cfgregsaxi_awcache,awid=dut.cfgregsaxi_awid,awlen=dut.cfgregsaxi_awlen,awlock=dut.cfgregsaxi_awlock,awprot=dut.cfgregsaxi_awprot,awqos=dut.cfgregsaxi_awqos,awready=dut.cfgregsaxi_awready,awregion=dut.cfgregsaxi_awregion,awsize=dut.cfgregsaxi_awsize,awuser=dut.cfgregsaxi_awuser,awvalid=dut.cfgregsaxi_awvalid,bid=dut.cfgregsaxi_bid,bready=dut.cfgregsaxi_bready,bresp=dut.cfgregsaxi_bresp,buser=dut.cfgregsaxi_buser,bvalid=dut.cfgregsaxi_bvalid,rdata=dut.cfgregsaxi_rdata,rid=dut.cfgregsaxi_rid,rlast=dut.cfgregsaxi_rlast,rready=dut.cfgregsaxi_rready,rresp=dut.cfgregsaxi_rresp,ruser=dut.cfgregsaxi_ruser,rvalid=dut.cfgregsaxi_rvalid,wdata=dut.cfgregsaxi_wdata,wlast=dut.cfgregsaxi_wlast,wready=dut.cfgregsaxi_wready,wstrb=dut.cfgregsaxi_wstrb,wuser=dut.cfgregsaxi_wuser,wvalid=dut.cfgregsaxi_wvalid)
    dspregsaxi=axi4.axi4(aclk=dut.dspregsaxi_aclk,aresetn=dut.dspregsaxi_aresetn,araddr=dut.dspregsaxi_araddr,arburst=dut.dspregsaxi_arburst,arcache=dut.dspregsaxi_arcache,arid=dut.dspregsaxi_arid,arlen=dut.dspregsaxi_arlen,arlock=dut.dspregsaxi_arlock,arprot=dut.dspregsaxi_arprot,arqos=dut.dspregsaxi_arqos,arready=dut.dspregsaxi_arready,arregion=dut.dspregsaxi_arregion,arsize=dut.dspregsaxi_arsize,aruser=dut.dspregsaxi_aruser,arvalid=dut.dspregsaxi_arvalid,awaddr=dut.dspregsaxi_awaddr,awburst=dut.dspregsaxi_awburst,awcache=dut.dspregsaxi_awcache,awid=dut.dspregsaxi_awid,awlen=dut.dspregsaxi_awlen,awlock=dut.dspregsaxi_awlock,awprot=dut.dspregsaxi_awprot,awqos=dut.dspregsaxi_awqos,awready=dut.dspregsaxi_awready,awregion=dut.dspregsaxi_awregion,awsize=dut.dspregsaxi_awsize,awuser=dut.dspregsaxi_awuser,awvalid=dut.dspregsaxi_awvalid,bid=dut.dspregsaxi_bid,bready=dut.dspregsaxi_bready,bresp=dut.dspregsaxi_bresp,buser=dut.dspregsaxi_buser,bvalid=dut.dspregsaxi_bvalid,rdata=dut.dspregsaxi_rdata,rid=dut.dspregsaxi_rid,rlast=dut.dspregsaxi_rlast,rready=dut.dspregsaxi_rready,rresp=dut.dspregsaxi_rresp,ruser=dut.dspregsaxi_ruser,rvalid=dut.dspregsaxi_rvalid,wdata=dut.dspregsaxi_wdata,wlast=dut.dspregsaxi_wlast,wready=dut.dspregsaxi_wready,wstrb=dut.dspregsaxi_wstrb,wuser=dut.dspregsaxi_wuser,wvalid=dut.dspregsaxi_wvalid)
#    dut.cfgregsaxi_rready.value=1
    cfgclk=cfgregsaxi.aclk;
    dspclk=dspregsaxi.aclk;
    a.startclk(dut=dut,tstop=10e-4)
    testaddr=32*4
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

def cmdad(mode,trigt,envstart,envlength,ampx,freqaddr,pini):
    cmd128=widthshift(mode,2,0)+widthshift(pini,17,2)+widthshift(freqaddr,9,19)+widthshift(ampx,16,28)+widthshift(envlength,12,44)+widthshift(envstart,12,56)+widthshift(trigt,27,68)
    cmd32=[]
    for i in range(4):
        cmd32.insert(0,(cmd128>>((3-i)*32))&0xffffffff)
    return cmd32

import bram
brams=bram.brams("../../bram.json")#,write=bramaxi.write,read=bramaxi.read)
#@cocotb.test()
async def sinmult(dut):
    a.startclk(dut=dut,tstop=10e-4)
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
    addrrdloph16=range(0x84000,0x84000+16);#[0x70000,0x70001,0x70002,0x70003,0x70004,0x70005,0x70006,0x70007,0x70008,0x70009,0x7000a,0x7000b,0x7000c,0x7000d,0x7000e,0x7000f]#,25,25]
    addrrdrvph16=range(0x70000+16,0x70000+32);#[0x70000,0x70001,0x70002,0x70003,0x70004,0x70005,0x70006,0x70007,0x70008,0x70009,0x7000a,0x7000b,0x7000c,0x7000d,0x7000e,0x7000f]#,25,25]
    for a,v in enumerate(freqph16):
        await bramaxi.write(addrph16[a]*4,v)
        await bramaxi.write(addrrdloph16[a]*4,v)
        await bramaxi.write(addrrdrvph16[a]*4,v)
        await RisingEdge(dspclk)
    cmd0addr=int(brams['command0'].paradict['address'],0)
    for a,d in enumerate(cmdad(mode=0,trigt=10,envstart=32,envlength=10,ampx=10000,freqaddr=0,pini=0)):
        await bramaxi.write((cmd0addr+a)*4,d)
    for a,d in enumerate(cmdad(mode=0,trigt=30,envstart=32,envlength=10,ampx=20000,freqaddr=0,pini=0)):
        await bramaxi.write((cmd0addr+4+a)*4,d)
    for a,d in enumerate(cmdad(mode=0,trigt=0,envstart=0,envlength=0,ampx=0,freqaddr=0,pini=0)):
        await bramaxi.write((cmd0addr+8+a)*4,d)

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
#        v16=eval(dut.plsv.pltop.dsp.cossteps.value.hex())
#        for j in range(16):
#            val.append(sign16((v16>>((15-j)*16))&0xffff))
#    print([hex(int(i)) for i in val[0:10]])
#    numpy.savetxt('val.dat',val)
    await bramaxi.read(0x40004*4)
    await Timer(16e-6, units='sec')
    await dspregsaxi.write(25*4,1)
#    await bramaxi.write((0x70000)*4,0x2abcd123)
#    for i in range(1,20):
#        await bramaxi.write((0x70000+i)*4,0x7fff0000+i*0x101)
#    await bramaxi.write((0x70000+0)*4,0x2aaaaaaa)
    await dspregsaxi.write(25*4,1)
    await dspregsaxi.write(6*4,1)
    await RisingEdge(dspclk)
    dut.aresetn.value= 0;
    await RisingEdge(dspclk)
    dut.aresetn.value= 1;

    await bramaxi.read((0x4000+50)*4)
    #await dspregsaxi.write(25*4,0)
    await Timer(20e-6, units='sec')


#@cocotb.test()
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

