import cocotb
from cocotb.triggers import Timer, RisingEdge,FallingEdge 
class axi4:
    def __init__(self,aclk,aresetn,araddr,arburst,arcache,arid,arlen,arlock,arprot,arqos,arready,arregion,arsize,aruser,arvalid,awaddr,awburst,awcache,awid,awlen,awlock,awprot,awqos,awready,awregion,awsize,awuser,awvalid,bid,bready,bresp,buser,bvalid,rdata,rid,rlast,rready,rresp,ruser,rvalid,wdata,wlast,wready,wstrb,wuser,wvalid):
        self.aclk     =aclk
        self.aresetn  =aresetn

        self.araddr  =araddr
        self.arburst =arburst
        self.arcache =arcache
        self.arid    =arid
        self.arlen   =arlen
        self.arlock  =arlock
        self.arprot  =arprot
        self.arqos   =arqos
        self.arready =arready
        self.arregion=arregion
        self.arsize  =arsize
        self.aruser  =aruser
        self.arvalid =arvalid
        self.awaddr  =awaddr
        self.awburst =awburst
        self.awcache =awcache
        self.awid    =awid
        self.awlen   =awlen
        self.awlock  =awlock
        self.awprot  =awprot
        self.awqos   =awqos
        self.awready =awready
        self.awregion=awregion
        self.awsize  =awsize
        self.awuser  =awuser
        self.awvalid =awvalid
        self.bid     =bid
        self.bready  =bready
        self.bresp   =bresp
        self.buser   =buser
        self.bvalid  =bvalid
        self.rdata   =rdata
        self.rid     =rid
        self.rlast   =rlast
        self.rready  =rready
        self.rresp   =rresp
        self.ruser   =ruser
        self.rvalid  =rvalid
        self.wdata   =wdata
        self.wlast   =wlast
        self.wready  =wready
        self.wstrb   =wstrb
        self.wuser   =wuser
        self.wvalid  =wvalid  

    async def awchannel(self,addr,delay=1,awburst=0,awlen=0):
        print('start a aw channel')
        for t in range(delay):
            await RisingEdge(self.aclk)
        self.awvalid.value=1
        self.awaddr.value=addr
        self.awburst.value=awburst
        self.awlen.value=awlen
        if (self.awready!=1):
            await RisingEdge(self.awready)
            await RisingEdge(self.aclk)
        await RisingEdge(self.aclk)
        self.awvalid.value=0
        self.awaddr.value=0;
        #await RisingEdge(self.bvalid)
        print('finish a aw channel')
    async def wchannel(self,data,awlen,delay=1):
        print('start a w channel',data)
        for t in range(delay):
            await RisingEdge(self.aclk)
        self.wvalid.value=1
        if awlen>0:
            for i in range(awlen+1):
                await RisingEdge(self.aclk)
                self.wdata.value=int(data[i])
                print(int(data[i]))
        else:
            self.wdata.value=data
            if (self.wready!=1):
                await RisingEdge(self.wready)
            await RisingEdge(self.aclk)
            print(awlen)
        await RisingEdge(self.aclk)
#        await RisingEdge(self.aclk)
        self.wvalid.value=0
        self.wdata.value=0;
        #await RisingEdge(self.bvalid)
        print('finish a w  channel')
    async def bchannel(self,delay=1):
        print('start a b channel')
        for t in range(delay):
            await RisingEdge(self.aclk)
        self.bready.value=1
        if (self.bvalid.value==1):
            print("b valid start with 1")
            await RisingEdge(self.aclk)
        else:
            await RisingEdge(self.bvalid)
            await RisingEdge(self.aclk)
        self.bready.value=0
        print('finish a b  channel')
    async def write(self,addr,data,awburst=0,awlen=0,wdelay=10):
        print('start one write')
        bth=cocotb.start_soon(self.bchannel())
        wth=cocotb.start_soon(self.wchannel(data=data,awlen=awlen))
        awth=cocotb.start_soon(self.awchannel(addr=addr,awburst=awburst,awlen=awlen))
        await awth
        await wth
        await bth
        print('finish one write')

    async def write1(self,addr,data,awburst=None,awlen=0,wdelay=10):
        await FallingEdge(self.aclk)
        if awburst is not None:
            self.awburst.value=awburst
        self.awlen.value=awlen
        self.awaddr.value=addr
        self.awvalid.value=1
        self.awstrb=0xf
        self.wlast.value=1
        self.bready.value=1
#        await RisingEdge(self.awready)
        for i in range(wdelay):
            await RisingEdge(self.aclk)
        self.wvalid.value=1
        await RisingEdge(self.aclk)
        await RisingEdge(self.aclk)
        self.awvalid.value=0
        if awlen>0:
            for i in range(awlen+1):
                self.wdata.value=int(data[i])
                await RisingEdge(self.aclk)
        else:
            self.wdata.value=data
        for i in range(0):
            await RisingEdge(self.aclk)
        if self.wready:
            self.wvalid.value=0
        else:
            await RisingEdge(self.wready)
            self.wvalid.value=0

#        while awlen>=0:
#            await RisingEdge(self.aclk)
#            if ((self.wvalid.value==1) and (self.wready.value==1)):
#                awlen=awlen-1
#        await RisingEdge(self.bvalid)
#        await RisingEdge(self.aclk)
#        await self.ack()
#        self.idle()
        for i in range(20):
            await RisingEdge(self.aclk)
#        self.bready.value=0

#        while not self.bvalid:
#            await RisingEdge(self.aclk.value)
##            self.awvalid.value=0
#            self.awaddr.value=0
#            self.wvalid.value=0
#            self.wdata.value=0
    async def ack(self):

        #await RisingEdge(self.aclk)
        self.wlast.value=0
        await RisingEdge(self.bvalid)
        self.bready.value=0
        self.idle()
        await RisingEdge(self.aclk)

    def idle(self):
        self.awvalid.value=0
        self.arvalid.value=0
        self.rvalid.value=0
        #self.rready.value=0
        self.wlast.value=0




        pass
    async def archannel(self,addr,delay=1,arburst=0,arlen=0):
        print('start a ar channel')
        for t in range(delay):
            await RisingEdge(self.aclk)
        self.arvalid.value=1
        self.araddr.value=addr
        self.arburst.value=arburst
        self.arlen.value=arlen
        if (self.arready!=1):
            await RisingEdge(self.arready)
            await RisingEdge(self.aclk)
        await RisingEdge(self.aclk)
        self.arvalid.value=0
        self.araddr.value=0;
        #await RisingEdge(self.bvalid)
        print('finish a ar channel')
    async def rchannel(self,delay=2):
        self.rdataval=[]
        print('start a r channel')
        self.rready.value=1
        for t in range(delay):
            await RisingEdge(self.aclk)
        self.rready.value=1
        await RisingEdge(self.aclk)
        print(type(self.rdata.value))
        print(int(self.rdata.value))
        self.rdataval.append(int(self.rdata.value))
        while (self.rlast != 1):
            await RisingEdge(self.aclk)
            self.rdataval.append(int(self.rdata.value))
        await RisingEdge(self.aclk)
        self.rready.value=0
        await RisingEdge(self.aclk)
        await RisingEdge(self.aclk)
        print('finish a r channel')
    async def read(self,addr,arburst=0,arlen=0):
        print("start a read")
        arth=cocotb.start_soon(self.archannel(addr=addr,arburst=arburst,arlen=arlen))
        rth=cocotb.start_soon(self.rchannel())
        await arth
        await rth
        print(self.rdataval)


    async def read1(self,addr,arburst=0,arlen=0):
        self.arburst.value=arburst
        self.arlen.value=arlen
        self.rready.value=1
        self.arvalid.value=1
        self.araddr.value=addr
        await RisingEdge(self.arready)
        await RisingEdge(self.aclk)
        self.arvalid.value=0
        await RisingEdge(self.rlast)
#        self.rready.value=0
        await RisingEdge(self.aclk)
        self.idle()
        await RisingEdge(self.aclk)
#            pass
#        else:            
#            await RisingEdge(self.rvalid)
#            await RisingEdge(self.aclk)
#            self.rready.value=0

        pass
