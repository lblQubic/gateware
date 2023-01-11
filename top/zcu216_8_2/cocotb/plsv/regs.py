import numpy
import json
def sign16(v):
    return int(v-65536) if (v>>15)&1 else v
class regs(dict):
    def __init__(self,jsonfilename,overlaymmio=None):
        with open(jsonfilename) as jfile:
            regjson=json.load(jfile)
        for name,paradict in regjson.items():
            super().__setitem__(name,reg(name,paradict,overlaymmio=overlaymmio))


        pass
class reg:
    def __init__(self,name,paradict,overlaymmio=None):
        self.name=name
        self.paradict=paradict
#        self.paradict['length']=int(self.paradict['Adepth'] if self.paradict['access']=='r' else self.paradict['Awidth']*self.paradict['Adepth']/self.paradict['Bwidth'])
#            reg("qdrvfreqsel":{"access": "rw", "addr_width": 0, "data_width": 32, "sign": "unsigned", "init": "3", "base_addr": 3})
        self.overlaymmio=overlaymmio
        self._value=self.paradict['init']
        pass
    @property
    def address(self):
        return self.paradict['base_addr']
    @property
    def value(self):
        return self._value
    @value.setter
    def value(self,value):
        self._value=value

#    def read(self,length=None):
#        length=self.paradict['length'] if length is None else length
#        addr=int(self.paradict['address'],0)
#        if self.overlaymmio is not None:
#            val=self.overlaymmio.array[addr:addr+length]
#        return val
#    def read16(self,length=None):
#        v32=self.read(length)
#        v16=numpy.array([[sign16(i&0xffff),sign16(i>>16)] for i in v32]).reshape((-1,1)).flatten()
#        return v16
#    def write(self,val):
#        length=self.paradict['length']
#        addr=int(self.paradict['address'],0)
#        if (isinstance(val,int)):
#            print("write %s with %d (0x%x) for length of %d"%(self.name,val,val,length))
#            val=numpy.ones(length,dtype=int)*val
#        length=len(val)
#        if self.overlaymmio is not None:
#            for a,d in enumerate(val):
#                self.overlaymmio.write((addr+a)*4,int(d))            
if __name__=="__main__":
    bs=regs("../../dspregs.json")
#    reg("qdrvfreqsel":{"access": "rw", "addr_width": 0, "data_width": 32, "sign": "unsigned", "init": "3", "base_addr": 3})
    print(bs.keys())
    print(bs["qdrvfreqsel"].address)
    print(bs["qdrvfreqsel"].value)
    bs["qdrvfreqsel"].value=0x234
    print(hex(bs["qdrvfreqsel"].value))

