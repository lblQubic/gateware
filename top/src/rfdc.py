def rfdc(dactilechan,adctilechan):    
    dacporttemplate='''input  %(DACNAME)s_M_AXIS_ACLK
    ,input  %(DACNAME)s_M_AXIS_ARESETN
    ,input  %(DACNAME)s_M_AXIS_TREADY
    ,output  %(DACNAME)s_M_AXIS_TVALID
    ,output  [DAC_AXIS_DATAWIDTH-1 : 0] %(DACNAME)s_M_AXIS_TDATA
    ,output  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] %(DACNAME)s_M_AXIS_TSTRB
    ,output  %(DACNAME)s_M_AXIS_TLAST'''
    dacclkporttemplate='''input clk_dac%(dactile)d'''

    dacportinsttemplate='''.%(DACNAME)s_M_AXIS_ACLK(%(DACNAME)s_M_AXIS_ACLK)
    ,.%(DACNAME)s_M_AXIS_ARESETN(%(DACNAME)s_M_AXIS_ARESETN)
    ,.%(DACNAME)s_M_AXIS_TREADY(%(DACNAME)s_M_AXIS_TREADY)
    ,.%(DACNAME)s_M_AXIS_TVALID(%(DACNAME)s_M_AXIS_TVALID)
    ,.%(DACNAME)s_M_AXIS_TDATA(%(DACNAME)s_M_AXIS_TDATA)
    ,.%(DACNAME)s_M_AXIS_TSTRB(%(DACNAME)s_M_AXIS_TSTRB)
    ,.%(DACNAME)s_M_AXIS_TLAST(%(DACNAME)s_M_AXIS_TLAST)'''
    dacclkportinsttemplate='''.clk_dac%(dactile)d(clk_dac%(dactile)d)'''

    dacwiretemplate='''wire %(DACNAME)s_M_AXIS_ACLK;
    wire %(DACNAME)s_M_AXIS_ARESETN;
    wire  %(DACNAME)s_M_AXIS_TREADY;
    wire  %(DACNAME)s_M_AXIS_TVALID;
    wire  [DAC_AXIS_DATAWIDTH-1 : 0] %(DACNAME)s_M_AXIS_TDATA;
    wire  [(DAC_AXIS_DATAWIDTH/8)-1 : 0] %(DACNAME)s_M_AXIS_TSTRB;
    wire  %(DACNAME)s_M_AXIS_TLAST;
    '''
    dacsimclktemplate='''input clk_dac%(dactile)d'''

    adcporttemplate='''input  %(ADCNAME)s_S_AXIS_ACLK
    ,input  %(ADCNAME)s_S_AXIS_ARESETN
    ,output  %(ADCNAME)s_S_AXIS_TREADY
    ,input  %(ADCNAME)s_S_AXIS_TVALID
    ,input  [ADC_AXIS_DATAWIDTH-1 : 0] %(ADCNAME)s_S_AXIS_TDATA
    ,input  [(ADC_AXIS_DATAWIDTH/8)-1 : 0] %(ADCNAME)s_S_AXIS_TSTRB
    ,input  %(ADCNAME)s_S_AXIS_TLAST'''
    adcclkporttemplate='''input clk_adc%(adctile)d'''

    adcportinsttemplate='''.%(ADCNAME)s_S_AXIS_ACLK(%(ADCNAME)s_S_AXIS_ACLK)
    ,.%(ADCNAME)s_S_AXIS_ARESETN(%(ADCNAME)s_S_AXIS_ARESETN)
    ,.%(ADCNAME)s_S_AXIS_TREADY(%(ADCNAME)s_S_AXIS_TREADY)
    ,.%(ADCNAME)s_S_AXIS_TVALID(%(ADCNAME)s_S_AXIS_TVALID)
    ,.%(ADCNAME)s_S_AXIS_TDATA(%(ADCNAME)s_S_AXIS_TDATA)
    ,.%(ADCNAME)s_S_AXIS_TSTRB(%(ADCNAME)s_S_AXIS_TSTRB)
    ,.%(ADCNAME)s_S_AXIS_TLAST(%(ADCNAME)s_S_AXIS_TLAST)'''
    adcclkportinsttemplate='''.clk_adc%(adctile)d(clk_adc%(adctile)d)'''

    adcwiretemplate='''wire  %(ADCNAME)s_S_AXIS_ACLK;
    wire  %(ADCNAME)s_S_AXIS_ARESETN;
    wire  %(ADCNAME)s_S_AXIS_TREADY;
    wire  %(ADCNAME)s_S_AXIS_TVALID;
    wire  [ADC_AXIS_DATAWIDTH-1 : 0] %(ADCNAME)s_S_AXIS_TDATA;
    wire  [(ADC_AXIS_DATAWIDTH/8)-1 : 0] %(ADCNAME)s_S_AXIS_TSTRB;
    wire  %(ADCNAME)s_S_AXIS_TLAST;
    '''
    adcsimclktemplate='''input clk_adc%(adctile)d'''

    dacplsvtemplate='''axi4stream #(.DATA_WIDTH(DAC_AXIS_DATAWIDTH))   %(dacname)saxis();
    axi4stream_clkrst %(dacname)saxisclkrst(.axi4(%(dacname)saxis.clkrst),.clk(%(DACNAME)s_M_AXIS_ACLK),.resetn(%(DACNAME)s_M_AXIS_ARESETN));
    axi4stream_master_map #(.DATA_WIDTH(DAC_AXIS_DATAWIDTH))
    %(dacname)saxismap(.axis(%(dacname)saxis),.ready(%(DACNAME)s_M_AXIS_TREADY),.valid(%(DACNAME)s_M_AXIS_TVALID),.data(%(DACNAME)s_M_AXIS_TDATA),.strb(%(DACNAME)s_M_AXIS_TSTRB),.last(%(DACNAME)s_M_AXIS_TLAST));
    '''
    adcplsvtemplate='''axi4stream #(.DATA_WIDTH(ADC_AXIS_DATAWIDTH))   %(adcname)saxis();
    axi4stream_clkrst %(adcname)saxisclkrst(.axi4(%(adcname)saxis.clkrst),.clk(%(ADCNAME)s_S_AXIS_ACLK),.resetn(%(ADCNAME)s_S_AXIS_ARESETN));
    axi4stream_slave_map #(.DATA_WIDTH(ADC_AXIS_DATAWIDTH))
    %(adcname)saxismap(.axis(%(adcname)saxis),.ready(%(ADCNAME)s_S_AXIS_TREADY),.valid(%(ADCNAME)s_S_AXIS_TVALID),.data(%(ADCNAME)s_S_AXIS_TDATA),.strb(%(ADCNAME)s_S_AXIS_TSTRB),.last(%(ADCNAME)s_S_AXIS_TLAST));
    '''

    dacifporttemplate='''axi4stream.master %(dacname)saxis'''
    adcifporttemplate='''axi4stream.slave %(adcname)saxis'''

    dacifportinsttemplate='''.%(dacname)saxis(%(dacname)saxis.master)'''
    adcifportinsttemplate='''.%(adcname)saxis(%(adcname)saxis.slave)'''



    dacports=[]
    dacportinsts=[]
    dacparadict={}
    dacwire=[]
    dacsimclk=[]
    dacplsv=[]
    dacifport=[]
    dacifportinst=[]
    adcifport=[]
    adcifportinst=[]
    dactiles=[]
    for tile,chan in dactilechan:
        dacparadict.update(dict(dactile=tile))
        DACNAME='DAC%d%d'%(tile,chan)
        dacname='dac%d%d'%(tile,chan)
        dacparadict.update(dict(DACNAME=DACNAME,dacname=dacname))
        dacports.append(dacporttemplate%(dacparadict))
        dacportinsts.append(dacportinsttemplate%(dacparadict))
        dacwire.append(dacwiretemplate%(dacparadict))
        dacplsv.append(dacplsvtemplate%(dacparadict))
        dacifport.append(dacifporttemplate%(dacparadict))
        dacifportinst.append(dacifportinsttemplate%(dacparadict))
        if tile not in dactiles:
            dactiles.append(tile)
            dacports.append(dacclkporttemplate%(dacparadict))
            dacportinsts.append(dacclkportinsttemplate%(dacparadict))
            dacsimclk.append(dacsimclktemplate%(dacparadict))

    adcports=[]
    adcportinsts=[]
    adcparadict={}
    adcwire=[]
    adcsimclk=[]
    adcplsv=[]
    adctiles=[]
    for tile,chan in adctilechan:
        adcparadict.update(dict(adctile=tile))
        ADCNAME='ADC%d%d'%(tile,chan)
        adcname='adc%d%d'%(tile,chan)
        adcparadict.update(ADCNAME=ADCNAME,adcname=adcname)
        adcports.append(adcporttemplate%(adcparadict))
        adcportinsts.append(adcportinsttemplate%(adcparadict))
        adcwire.append(adcwiretemplate%(adcparadict))
        adcplsv.append(adcplsvtemplate%(adcparadict))
        adcifport.append(adcifporttemplate%(adcparadict))
        adcifportinst.append(adcifportinsttemplate%(adcparadict))
        if tile not in adctiles:
            adctiles.append(tile)
            adcports.append(adcclkporttemplate%(adcparadict))
            adcportinsts.append(adcclkportinsttemplate%(adcparadict))
            adcsimclk.append(adcsimclktemplate%(adcparadict))

    with open("rfdc_port.vh",'w') as f:
        f.write('\n,'.join(dacports+adcports))
    with open("rfdc_portinst.vh",'w') as f:
        f.write('\n,'.join(dacportinsts+adcportinsts))        
    with open("rfdc_wire.vh",'w') as f:
        f.write('\n'.join(dacwire+adcwire))        
    with open("rfdc_simclk.vh",'w') as f:
        f.write('\n,'.join(dacsimclk+adcsimclk))        
    with open("rfdc_plsv.vh",'w') as f:
        f.write('\n'.join(dacplsv+adcplsv))        
    with open("rfdcif_port.vh",'w') as f:
        f.write('\n,'.join(dacifport+adcifport))        
    with open("rfdcif_portinst.vh",'w') as f:
        f.write('\n,'.join(dacifportinst+adcifportinst))        
if __name__=="__main__":
    import json
    with open('rfdc.json') as fjson:
        rfdccfg=json.load(fjson)
    rfdc(rfdccfg['dactilechan'],rfdccfg['adctilechan'])    
