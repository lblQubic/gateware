'''brambus.tcl
bramif_portinst.vh
bramif_port.vh
bram_parainst.vh
bram_para.vh
bram_plsv.vh
bram_portinst.vh
bram_port.vh
bram_range.tcl
bram.tcl
bramwithctrl.tcl
bram.xsa

,"qdrvenv1":{"Awidth":512,"Adepth":1024,"Bwidth":512,"latency":2}
'''
import numpy
import json
import re
class brams:
    def __init__(self,bramparadict,template):
        self.bramlist=[]
        for name,item in bramparadict.items():
            self.bramlist.append(bram(name=name,template=template,**item))
    def writefile(self,filename,strval):
        f=open(filename,'w')
        f.write(strval)
        f.close()
    def brambus_tcl(self,filename="brambus.tcl"):
        perbus='\n'.join([b.brambus_tcl() for b in self.bramlist])
        strval=template['brambus.tcl']['all']%(dict(perbus=perbus))
        self.writefile(filename,strval)
        return strval

    def bramif_portinst_vh(self,filename="bramif_portinst.vh"):
        perbus='\n,'.join([b.bramif_portinst_vh() for b in self.bramlist])
        strval=template['bramif_portinst.vh']['all']%(dict(perbus=perbus))
        self.writefile(filename,strval)
        return strval
    def bramif_port_vh(self,filename="bramif_port.vh"):
        perbus='\n,'.join([b.bramif_port_vh() for b in self.bramlist])
        strval=template['bramif_port.vh']['all']%(dict(perbus=perbus))
        self.writefile(filename,strval)
        return strval

    def bram_parainst_vh(self,filename="bram_parainst.vh"):
        perbuslist=sorted(list(set([b.bram_parainst_vh() for b in self.bramlist])))
        perbus='\n,'.join(perbuslist)
        strval= template['bram_parainst.vh']['all']%(dict(perbus=perbus))
        self.writefile(filename,strval)
        return strval
    def bram_para_vh(self,filename="bram_para.vh"):
        perbuslist=sorted(list(set([b.bram_para_vh() for b in self.bramlist])))
        perbus='\n,'.join(perbuslist)
        strval= template['bram_para.vh']['all']%(dict(perbus=perbus))
        self.writefile(filename,strval)
        return strval
    def bram_plsv_vh(self,filename="bram_plsv.vh"):
        addrperdata='\n'.join(list(set([b.addrperdata() for b in self.bramlist])))
        perbuslist=sorted(list(set([b.bram_plsv_vh() for b in self.bramlist])))
        perbus='\n'.join(perbuslist)
        strval= template['bram_plsv.vh']['all']%(dict(addrperdata=addrperdata,perbus=perbus))
        self.writefile(filename,strval)
        return strval
    def bram_portinst_vh(self,filename="bram_portinst.vh"):
        perbuslist=sorted(list(set([b.bram_portinst_vh() for b in self.bramlist])))
        perbus='\n,'.join(perbuslist)
        strval= template['bram_portinst.vh']['all']%(dict(perbus=perbus))
        self.writefile(filename,strval)
        return strval
    def bram_port_vh(self,filename="bram_port.vh"):
        perbuslist=sorted(list(set([b.bram_port_vh() for b in self.bramlist])))
        perbus='\n,'.join(perbuslist)
        strval= template['bram_port.vh']['all']%(dict(perbus=perbus))
        self.writefile(filename,strval)
        return strval
    def bram_range_tcl(self,filename="bram_range.tcl"):
        perbuslist=sorted(list(set([b.bram_range_tcl() for b in self.bramlist])))
        perbus='\n'.join(perbuslist)
        strval= template['bram_range.tcl']['all']%(dict(perbus=perbus))
        self.writefile(filename,strval)
        return strval
    def bramwithctrl_tcl(self,filename="bramwithctrl.tcl"):
        perbuslist=sorted(list(set([b.bramwithctrl_tcl() for b in self.bramlist])))
        perbus='\n'.join(perbuslist)
        strval= template['bramwithctrl.tcl']['all']%(dict(perbus=perbus))
        self.writefile(filename,strval)
        return strval
    def adw(self):
        perbuslist=sorted(list(set([b.adw() for b in self.bramlist])))
        perbus='\n'.join(perbuslist)
        strval= template['adw']['all']%(dict(perbus=perbus))
        #self.writefile(filename,strval)
        return strval
    def write(self,filename="bram_write.vh"):
        perbuslist=sorted(list(set([b.write() for b in self.bramlist])))
        perbus='\n'.join(perbuslist)
        strval= template['write']['all']%(dict(perbus=perbus))
        self.writefile(filename,strval)
        return strval
    def read(self,filename="bram_read.vh"):
        perbuslist=sorted(list(set([b.read() for b in self.bramlist])))
        perbus='\n'.join(perbuslist)
        strval= template['read']['all']%(dict(perbus=perbus))
        self.writefile(filename,strval)
        return strval



        
class bram:
    def __init__(self,name,rw,Awidth,Adepth,Bwidth,latency,template,prefix):
        self.name=name
        self.rw=rw
        self.Awidth=Awidth
        self.Adepth=Adepth
        self.Bwidth=Bwidth
        self.latency=latency
        self.prefix=prefix
        self.membitsize=self.Awidth*self.Adepth
        self.Bdepth=self.membitsize/self.Bwidth
        self.Aaddrwidth=int(numpy.log2(self.membitsize/self.Awidth))
        self.bitaddrwidth=int(numpy.log2(self.membitsize))
        self.byteaddrwidth=int(numpy.log2(self.membitsize/8))
        self.Baddrwidth=int(numpy.log2(self.membitsize/self.Bwidth))
        self.template=template
    @property    
    def subname(self):
        nosubname=['command']
        subname=self.name
        if self.name not in nosubname:
            m=re.match('(\S+)([0-9a-f])',self.name)
            if m:
                subname='%s[%d]'%(m.groups()[0],int(m.groups()[1],16))
        return subname            
    @property    
    def sizekM(self):
        if self.membitsize<2**20:
            kM='%dk'%(self.membitsize/1024)
        else:
            kM='%dM'%(self.membitsize/1024/1024)
        return kM
    @property
    def w(self):
        return 'w' in self.rw
    @property
    def r(self):
        return 'r' in self.rw
    def paradict(self):
        return dict(name=self.name,NAME=self.name.upper(),Awidth=self.Awidth,Adepth=self.Adepth,Bwidth=self.Bwidth,latency=self.latency,prefix=self.prefix,membitsize=self.membitsize,Baddrwidth=self.Baddrwidth,memsizekM=self.sizekM,subname=self.subname,Aaddrwidth=self.Aaddrwidth,Bdepth=self.Bdepth)
    def brambus_tcl(self):
        return template['brambus.tcl']['perbus']%(self.paradict())
    def bramif_portinst_vh(self):
        return template['bramif_portinst.vh']['perbus'+('r' if self.r else 'w')]%(self.paradict())
    def bramif_port_vh(self):
        return template['bramif_port.vh']['perbus'+('r' if self.r else 'w')]%(self.paradict())
    def bram_parainst_vh(self):
        return template['bram_parainst.vh']['perbus']%(self.paradict())
    def bram_para_vh(self):
        return template['bram_para.vh']['perbus']%(self.paradict())
    def addrperdata(self):
        return template['bram_plsv.vh']['addrperdata']%(self.paradict())
    def bram_plsv_vh(self):
        return template['bram_plsv.vh']['perbus'+('r' if self.r else 'w')]%(self.paradict())
    def bram_portinst_vh(self):
        return template['bram_portinst.vh']['perbus']%(self.paradict())
    def bram_port_vh(self):
        return template['bram_port.vh']['perbus']%(self.paradict())
    def bram_range_tcl(self):
        return template['bram_range.tcl']['perbus']%(self.paradict())
    def bramwithctrl_tcl(self):
        return template['bramwithctrl.tcl']['perbus']%(self.paradict())
    def adw(self):
        return template['adw']['perbus'+('r' if self.r else 'w')]%(self.paradict())
    def write(self):
        return template['write']['perbus']%(self.paradict()) if self.w else ''
    def read(self):
        return template['read']['perbus']%(self.paradict()) if self.r else ''

if __name__=="__main__":
    template={"brambus.tcl":{
    "perbus":"brambus %(name)s"
    ,"all":"proc bram_map {busname inst} {\n	set brampins {RST CLK DIN EN DOUT WE ADDR}\n	foreach pin $brampins {\n		ipx::add_port_map $pin [ipx::get_bus_interfaces $busname -of_objects [ipx::current_core]]\n		set_property physical_name ${inst}_[string tolower $pin] [ipx::get_port_maps $pin -of_objects [ipx::get_bus_interfaces $busname -of_objects [ipx::current_core]]]\n	}\n}\nproc brambus {bramname} {\n\tipx::add_bus_interface ${bramname} [ipx::current_core]\n\tset_property abstraction_type_vlnv xilinx.com:interface:bram_rtl:1.0 [ipx::get_bus_interfaces ${bramname} -of_objects [ipx::current_core]]\n\tset_property bus_type_vlnv xilinx.com:interface:bram:1.0 [ipx::get_bus_interfaces ${bramname} -of_objects [ipx::current_core]]\n\tset_property interface_mode master [ipx::get_bus_interfaces ${bramname} -of_objects [ipx::current_core]]\n\tbram_map ${bramname} [string toupper $bramname]\n}\n%(perbus)s"
    ,"perbus":"brambus %(name)s"
    }
    ,"bramwithctrl.tcl":{
        "all":"proc bramwithctrl {bramname Awidth Adepth Bwidth latency} {\n\tincr $Awidth 0\n\tincr $Adepth 0\n\tincr $Bwidth 0\n\tincr $latency 0\n\tcreate_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 ${bramname}_ctrl\n\tcreate_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 ${bramname}_mem\n\tset_property -dict [list CONFIG.READ_LATENCY ${latency} CONFIG.SINGLE_PORT_BRAM {1} CONFIG.DATA_WIDTH ${Awidth}] [get_bd_cells ${bramname}_ctrl]\n\tset_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A ${Adepth} CONFIG.Write_Width_A ${Awidth} CONFIG.Read_Width_A ${Awidth} CONFIG.Write_Width_B ${Bwidth} CONFIG.Read_Width_B ${Bwidth} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells ${bramname}_mem]\n}\n%(perbus)s"
        ,"perbus":"bramwithctrl %(name)s %(Awidth)d %(Adepth)d %(Bwidth)d %(latency)d"
        }
    ,"bramif_portinst.vh":{
        "all":"%(perbus)s"
        ,"perbusr":".%(name)s_R(%(name)s_R)"
        ,"perbusw":".%(name)s_W(%(name)s_W)"
        }
    ,"bramif_port.vh":{
        "all":"%(perbus)s"
        ,"perbusr":"ifbram %(name)s_R"
        ,"perbusw":"ifbram %(name)s_W"
        }
    ,"bram_parainst.vh":{
        "all":"%(perbus)s"
        ,"perbus":".%(prefix)s_R_ADDRWIDTH(%(prefix)s_R_ADDRWIDTH),.%(prefix)s_R_DATAWIDTH(%(prefix)s_R_DATAWIDTH),.%(prefix)s_W_ADDRWIDTH(%(prefix)s_W_ADDRWIDTH),.%(prefix)s_W_DATAWIDTH(%(prefix)s_W_DATAWIDTH)"
        }
    ,"bram_para.vh":{
        "all":"%(perbus)s"
        ,"perbus":"parameter integer %(prefix)s_R_ADDRWIDTH=%(Baddrwidth)d,parameter integer %(prefix)s_R_DATAWIDTH=%(Bwidth)d,parameter integer %(prefix)s_R_DEPTH=%(Bdepth)d,parameter integer %(prefix)s_W_ADDRWIDTH=%(Aaddrwidth)d,parameter integer %(prefix)s_W_DATAWIDTH=%(Awidth)d,parameter integer %(prefix)s_W_DEPTH=%(Adepth)d"
        }
    ,"bram_plsv.vh":{
        "all":"%(addrperdata)s\n\n%(perbus)s"
        ,"addrperdata":"localparam %(prefix)s_R_ADDRPERDATA=$clog2(%(prefix)s_R_DATAWIDTH)-3;localparam %(prefix)s_W_ADDRPERDATA=$clog2(%(prefix)s_W_DATAWIDTH)-3;"
        ,"perbusr":"ifbram #(.ADDR_WIDTH(%(prefix)s_W_ADDRWIDTH),.DATA_WIDTH(%(prefix)s_W_DATAWIDTH)) %(name)s_W();\nifbram #(.ADDR_WIDTH(%(prefix)s_R_ADDRWIDTH),.DATA_WIDTH(%(prefix)s_R_DATAWIDTH)) %(name)s_R();\nasym_ram_sdp_read_wider #(.DATAWIDTHA(%(prefix)s_W_DATAWIDTH),.ADDRWIDTHA(%(prefix)s_W_ADDRWIDTH),.SIZEA(%(prefix)s_W_DEPTH),.DATAWIDTHB(%(prefix)s_R_DATAWIDTH),.ADDRWIDTHB(%(prefix)s_R_ADDRWIDTH),.SIZEB(%(prefix)s_R_DEPTH))\n%(name)s_mem(.clkA(%(name)s_W.clk),.enaA(%(name)s_W.en),.weA(%(name)s_W.we),.addrA(%(name)s_W.addr),.diA(%(name)s_W.din),.clkB(%(name)s_R.clk),.enaB(%(name)s_R.en),.addrB(%(name)s_R.addr),.doB(%(name)s_R.dout));\n"
        ,"perbusw":"ifbram #(.ADDR_WIDTH(%(prefix)s_W_ADDRWIDTH),.DATA_WIDTH(%(prefix)s_W_DATAWIDTH)) %(name)s_W();\nifbram #(.ADDR_WIDTH(%(prefix)s_R_ADDRWIDTH),.DATA_WIDTH(%(prefix)s_R_DATAWIDTH)) %(name)s_R();\nasym_ram_sdp_write_wider #(.DATAWIDTHA(%(prefix)s_W_DATAWIDTH),.ADDRWIDTHA(%(prefix)s_W_ADDRWIDTH),.SIZEA(%(prefix)s_W_DEPTH),.DATAWIDTHB(%(prefix)s_R_DATAWIDTH),.ADDRWIDTHB(%(prefix)s_R_ADDRWIDTH),.SIZEB(%(prefix)s_R_DEPTH))\n%(name)s_mem(.clkA(%(name)s_W.clk),.enaA(%(name)s_W.en),.weA(%(name)s_W.we),.addrA(%(name)s_W.addr),.diA(%(name)s_W.din),.clkB(%(name)s_R.clk),.enaB(%(name)s_R.en),.addrB(%(name)s_R.addr),.doB(%(name)s_R.dout));\n"
        }
    ,"bram_portinst.vh":{
        "all":"%(perbus)s"
        ,"perbus":".%(NAME)s_clk(%(NAME)s_clk)\n,.%(NAME)s_rst(%(NAME)s_rst)\n,.%(NAME)s_addr(%(NAME)s_addr)\n,.%(NAME)s_din(%(NAME)s_din)\n,.%(NAME)s_dout(%(NAME)s_dout)\n,.%(NAME)s_en(%(NAME)s_en)\n,.%(NAME)s_we(%(NAME)s_we)\n"
        }
    ,"bram_port.vh":{
        "all":"%(perbus)s"
        ,"perbus":"output %(NAME)s_clk\n,output %(NAME)s_rst\n,output [BRAMADDRWIDTH-1:0] %(NAME)s_addr\n,output [%(prefix)s_DATAWIDTH-1:0] %(NAME)s_din\n,input [%(prefix)s_DATAWIDTH-1:0] %(NAME)s_dout\n,output %(NAME)s_en\n,output [%(prefix)s_DATAWIDTH/8-1:0] %(NAME)s_we\n"
        }
    ,"bram_range.tcl":{
        "all":"%(perbus)s"
        ,"perbus":"assign_bd_address -target_address_space /zynq_ultra_ps_e_0/Data [get_bd_addr_segs %(name)s_ctrl/S_AXI/Mem0] -force\nset_property range %(memsizekM)s [get_bd_addr_segs {zynq_ultra_ps_e_0/Data/SEG_%(name)s_ctrl_Mem0}]" 
        }
    ,"adw":{
        "all":"%(perbus)s"
        ,"perbusw":"logic [%(prefix)s_W_DATAWIDTH-1:0] %(name)s_data;\nreg [%(prefix)s_W_ADDRWIDTH-1:0] %(name)s_addr=0;\nreg [%(prefix)s_W_DATAWIDTH/8-1:0] %(name)s_we=0;"
        ,"perbusr":"logic [%(prefix)s_R_DATAWIDTH-1:0] %(name)s_data;\nreg [%(prefix)s_R_ADDRWIDTH-1:0] %(name)s_addr=0;\nreg [%(prefix)s_R_DATAWIDTH/8-1:0] %(name)s_we=0;"
        }
    ,"write":{
        "all":"%(perbus)s"
        ,"perbus":"bram_cfg %(name)s_W_cfg(.bram(%(name)s_W),.clk(dspclk),.rst(1'b0),.en(1'b1));\nbram_write#(.ADDR_WIDTH(%(prefix)s_W_ADDRWIDTH),.DATA_WIDTH(%(prefix)s_W_DATAWIDTH))\n%(name)s_W_write(.bram(%(name)s_W),.addr(dspif.addr_%(subname)s),.data(dspif.data_%(subname)s),.we(dspif.we_%(subname)s));\n"
        }
    ,"read":{
        "all":"%(perbus)s"
        ,"perbus":"bram_cfg %(name)s_R_cfg(.bram(%(name)s_R),.clk(dspclk),.rst(1'b0),.en(1'b1));\nbram_read#(.ADDR_WIDTH(%(prefix)s_R_ADDRWIDTH),.DATA_WIDTH(%(prefix)s_R_DATAWIDTH))\n%(name)s_R_read(.bram(%(name)s_R),.addr(dspif.addr_%(subname)s),.data(dspif.data_%(subname)s));\n"
        }
    }
#    d1={"qdrvenv1":{"Awidth":512,"Adepth":1024,"Bwidth":512,"latency":2}}
    with open('bram.json') as jsonfile:
        bramparadict=json.load(jsonfile)
    bs=brams(bramparadict=bramparadict,template=template)
    print(bs.brambus_tcl())
    print(bs.bramif_portinst_vh())
    print(bs.bramif_port_vh())
    print(bs.bram_parainst_vh())
    print(bs.bram_para_vh())
    print(bs.bram_plsv_vh())
    print(bs.bram_portinst_vh())
    print(bs.bram_port_vh())
    print(bs.bram_range_tcl())
    print(bs.bramwithctrl_tcl())
    print(bs.adw())
    print(bs.write())
    print(bs.read())
