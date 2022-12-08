import numpy
import json
def sign16(v):
    return int(v-65536) if (v>>15)&1 else v
class brams(dict):
    def __init__(self,jsonfilename,overlaymmio=None,siminit=False):
        with open(jsonfilename) as jfile:
            bramjson=json.load(jfile)
        for name,paradict in bramjson.items():
            super().__setitem__(name,bram(name,paradict,overlaymmio=overlaymmio,siminit=siminit))


        pass
class bram:
    def __init__(self,name,paradict,overlaymmio=None,siminit=False):
        self.name=name
        self.paradict=paradict
        length=int(self.paradict['Adepth'] if self.paradict['access']=='r' else self.paradict['Awidth']*self.paradict['Adepth']/self.paradict['Bwidth'])
        self.paradict['length']=length
        self.overlaymmio=overlaymmio
        self._value=numpy.zeros(length,dtype=int)
        self.next=0
        if siminit:
            self.siminit()
        pass
    def address(self,offset):
        return int(str(self.paradict['address']),0)+offset
    def get_value(self,offset):
        return self._value[offset]
    def _set_value(self,offset,value):
        if offset<=self.paradict['length']:
            self._value[offset]=value
            if offset+1>self.next:
                self.next=offset+1
        else:
            exit('error set bram offset %08x index %d  exceed length'%(offset,i))
    def set_value(self,offset,value):
        if isinstance(value,int):
            self._set_value(offset,value)
        elif isinstance(value,list) or isinstance(value,tuple) or isinstance(value,numpy.ndarray):
            for i,v in enumerate(value):
                self._set_value(offset+i,v)
    def siminit(self,filename=None):
        filename ="INIT_%s.mem"%self.name if filename is None else filename
        print("write init file for simulation:",filename)
        f=open(filename,'w')
        s='\n'.join([format(int(i),'08x') for i in self._value])
        f.write(s)
        f.close()


if __name__=="__main__":
    bs=brams("/tmp/bram.json")
    bram({"Awidth":32,"Adepth":65536,"Bwidth":512,"latency":2,"prefix":"RDRVENV","access":"r","address":"0x00000000","ram_style":"block"})
    print(bs.keys())
