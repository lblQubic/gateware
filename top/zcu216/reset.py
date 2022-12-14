resetdict=dict(cfg=8,dsp=8,ps=3,adc2=3)
NCFGRESETN=8
NDSPRESETN=8
NPSRESETN=3
NADC2RESETN=3

portvhtemplate="output %(name)sresetn%(index)d"
portinstvhtemplate=".%(name)sresetn%(index)d(%(name)sresetn%(index)d)"
plsv1template="reg [%(N)d-1:0] %(name)sresetn_r=0;"
#plsv2template="wire %(wirenames)s;"
plsv3template="%(name)sresetn%(index)d"
plsv4template="assign {%(wirenames)s}=%(name)sresetn_r;"
plsv5template="always @(posedge %(name)sclk) begin %(name)sresetn_r<={%(N)d{~%(name)sreset}};end"
paravhtemplate="parameter N%(NAME)sRESETN=%(N)d"

portvh=[]
portinstvh=[]
plsv=[]
paravh=[]
for name,N in resetdict.items():
    plsv1=[]
    plsv2=[]
    plsv3=[]
    plsv4=[]
    plsv5=[]
    paradict=dict(name=name,N=N,NAME=name.upper())
    plsv1.append(plsv1template%paradict)
    for index in range(N):
        paradict.update(dict(index=index))
        portvh.append(portvhtemplate%paradict)
        portinstvh.append(portinstvhtemplate%paradict)
        plsv3.append(plsv3template%paradict)
    paradict.update(dict(wirenames=','.join(plsv3)))
#    plsv2.append(plsv2template%paradict)
    plsv4.append(plsv4template%paradict)
    plsv5.append(plsv5template%paradict)
    paravh.append(paravhtemplate%paradict)
    plsv.extend(plsv1+plsv4+plsv5)
#print('\n,'.join(portinstvh))
#print('\n'.join(plsv))
#print('\n,'.join(paravh))

with open("reset_port.vh",'w') as f:
    f.write('\n,'.join(portvh))
with open("reset_portinst.vh",'w') as f:
    f.write('\n,'.join(portinstvh))
with open("reset_plsv.vh",'w') as f:
    f.write('\n'.join(plsv))
with open("reset_para.vh",'w') as f:
    f.write('\n,'.join(paravh))


'''        




reg [127:0] cfgresetn_r=0;
reg [31:0] dspresetn_r=0;
reg [31:0] psresetn_r=0;
reg [31:0] adc2resetn_r=0;
wire cfgresetn127,cfgresetn126,cfgresetn125,cfgresetn124,cfgresetn123,cfgresetn122,cfgresetn121,cfgresetn120,cfgresetn119,cfgresetn118,cfgresetn117,cfgresetn116,cfgresetn115,cfgresetn114,cfgresetn113,cfgresetn112,cfgresetn111,cfgresetn110,cfgresetn109,cfgresetn108,cfgresetn107,cfgresetn106,cfgresetn105,cfgresetn104,cfgresetn103,cfgresetn102,cfgresetn101,cfgresetn100,cfgresetn99,cfgresetn98,cfgresetn97,cfgresetn96,cfgresetn95,cfgresetn94,cfgresetn93,cfgresetn92,cfgresetn91,cfgresetn90,cfgresetn89,cfgresetn88,cfgresetn87,cfgresetn86,cfgresetn85,cfgresetn84,cfgresetn83,cfgresetn82,cfgresetn81,cfgresetn80,cfgresetn79,cfgresetn78,cfgresetn77,cfgresetn76,cfgresetn75,cfgresetn74,cfgresetn73,cfgresetn72,cfgresetn71,cfgresetn70,cfgresetn69,cfgresetn68,cfgresetn67,cfgresetn66,cfgresetn65,cfgresetn64,cfgresetn63,cfgresetn62,cfgresetn61,cfgresetn60,cfgresetn59,cfgresetn58,cfgresetn57,cfgresetn56,cfgresetn55,cfgresetn54,cfgresetn53,cfgresetn52,cfgresetn51,cfgresetn50,cfgresetn49,cfgresetn48,cfgresetn47,cfgresetn46,cfgresetn45,cfgresetn44,cfgresetn43,cfgresetn42,cfgresetn41,cfgresetn40,cfgresetn39,cfgresetn38,cfgresetn37,cfgresetn36,cfgresetn35,cfgresetn34,cfgresetn33,cfgresetn32,cfgresetn31,cfgresetn30,cfgresetn29,cfgresetn28,cfgresetn27,cfgresetn26,cfgresetn25,cfgresetn24,cfgresetn23,cfgresetn22,cfgresetn21,cfgresetn20,cfgresetn19,cfgresetn18,cfgresetn17,cfgresetn16,cfgresetn15,cfgresetn14,cfgresetn13,cfgresetn12,cfgresetn11,cfgresetn10,cfgresetn09,cfgresetn08;//,cfgresetn07,cfgresetn06,cfgresetn05,cfgresetn04,cfgresetn03,cfgresetn02,cfgresetn01,cfgresetn00;
assign {cfgresetn127,cfgresetn126,cfgresetn125,cfgresetn124,cfgresetn123,cfgresetn122,cfgresetn121,cfgresetn120,cfgresetn119,cfgresetn118,cfgresetn117,cfgresetn116,cfgresetn115,cfgresetn114,cfgresetn113,cfgresetn112,cfgresetn111,cfgresetn110,cfgresetn109,cfgresetn108,cfgresetn107,cfgresetn106,cfgresetn105,cfgresetn104,cfgresetn103,cfgresetn102,cfgresetn101,cfgresetn100,cfgresetn99,cfgresetn98,cfgresetn97,cfgresetn96,cfgresetn95,cfgresetn94,cfgresetn93,cfgresetn92,cfgresetn91,cfgresetn90,cfgresetn89,cfgresetn88,cfgresetn87,cfgresetn86,cfgresetn85,cfgresetn84,cfgresetn83,cfgresetn82,cfgresetn81,cfgresetn80,cfgresetn79,cfgresetn78,cfgresetn77,cfgresetn76,cfgresetn75,cfgresetn74,cfgresetn73,cfgresetn72,cfgresetn71,cfgresetn70,cfgresetn69,cfgresetn68,cfgresetn67,cfgresetn66,cfgresetn65,cfgresetn64,cfgresetn63,cfgresetn62,cfgresetn61,cfgresetn60,cfgresetn59,cfgresetn58,cfgresetn57,cfgresetn56,cfgresetn55,cfgresetn54,cfgresetn53,cfgresetn52,cfgresetn51,cfgresetn50,cfgresetn49,cfgresetn48,cfgresetn47,cfgresetn46,cfgresetn45,cfgresetn44,cfgresetn43,cfgresetn42,cfgresetn41,cfgresetn40,cfgresetn39,cfgresetn38,cfgresetn37,cfgresetn36,cfgresetn35,cfgresetn34,cfgresetn33,cfgresetn32,cfgresetn31,cfgresetn30,cfgresetn29,cfgresetn28,cfgresetn27,cfgresetn26,cfgresetn25,cfgresetn24,cfgresetn23,cfgresetn22,cfgresetn21,cfgresetn20,cfgresetn19,cfgresetn18,cfgresetn17,cfgresetn16,cfgresetn15,cfgresetn14,cfgresetn13,cfgresetn12,cfgresetn11,cfgresetn10,cfgresetn09,cfgresetn08,cfgresetn07,cfgresetn06,cfgresetn05,cfgresetn04,cfgresetn03,cfgresetn02,cfgresetn01,cfgresetn00}=cfgresetn_r;
wire dspresetn31,dspresetn30,dspresetn29,dspresetn28,dspresetn27,dspresetn26,dspresetn25,dspresetn24,dspresetn23,dspresetn22,dspresetn21,dspresetn20,dspresetn19,dspresetn18,dspresetn17,dspresetn16,dspresetn15,dspresetn14,dspresetn13,dspresetn12,dspresetn11,dspresetn10,dspresetn09,dspresetn08;//,dspresetn07,dspresetn06,dspresetn05,dspresetn04,dspresetn03,dspresetn02,dspresetn01,dspresetn00;
assign {dspresetn31,dspresetn30,dspresetn29,dspresetn28,dspresetn27,dspresetn26,dspresetn25,dspresetn24,dspresetn23,dspresetn22,dspresetn21,dspresetn20,dspresetn19,dspresetn18,dspresetn17,dspresetn16,dspresetn15,dspresetn14,dspresetn13,dspresetn12,dspresetn11,dspresetn10,dspresetn09,dspresetn08,dspresetn07,dspresetn06,dspresetn05,dspresetn04,dspresetn03,dspresetn02,dspresetn01,dspresetn00}=dspresetn_r;
wire psresetn31,psresetn30,psresetn29,psresetn28,psresetn27,psresetn26,psresetn25,psresetn24,psresetn23,psresetn22,psresetn21,psresetn20,psresetn19,psresetn18,psresetn17,psresetn16,psresetn15,psresetn14,psresetn13,psresetn12,psresetn11,psresetn10,psresetn09,psresetn08,psresetn07,psresetn06,psresetn05,psresetn04,psresetn03;//,psresetn02,psresetn01,psresetn00;
assign {psresetn31,psresetn30,psresetn29,psresetn28,psresetn27,psresetn26,psresetn25,psresetn24,psresetn23,psresetn22,psresetn21,psresetn20,psresetn19,psresetn18,psresetn17,psresetn16,psresetn15,psresetn14,psresetn13,psresetn12,psresetn11,psresetn10,psresetn09,psresetn08,psresetn07,psresetn06,psresetn05,psresetn04,psresetn03,psresetn02,psresetn01,psresetn00}=psresetn_r;
wire adc2resetn31,adc2resetn30,adc2resetn29,adc2resetn28,adc2resetn27,adc2resetn26,adc2resetn25,adc2resetn24,adc2resetn23,adc2resetn22,adc2resetn21,adc2resetn20,adc2resetn19,adc2resetn18,adc2resetn17,adc2resetn16,adc2resetn15,adc2resetn14,adc2resetn13,adc2resetn12,adc2resetn11,adc2resetn10,adc2resetn09,adc2resetn08,adc2resetn07,adc2resetn06,adc2resetn05,adc2resetn04,adc2resetn03;//,adc2resetn02,adc2resetn01,adc2resetn00;
assign {adc2resetn31,adc2resetn30,adc2resetn29,adc2resetn28,adc2resetn27,adc2resetn26,adc2resetn25,adc2resetn24,adc2resetn23,adc2resetn22,adc2resetn21,adc2resetn20,adc2resetn19,adc2resetn18,adc2resetn17,adc2resetn16,adc2resetn15,adc2resetn14,adc2resetn13,adc2resetn12,adc2resetn11,adc2resetn10,adc2resetn09,adc2resetn08,adc2resetn07,adc2resetn06,adc2resetn05,adc2resetn04,adc2resetn03,adc2resetn02,adc2resetn01,adc2resetn00}=adc2resetn_r;

always @(posedge cfgclk) begin
    cfgresetn_r<={128{~cfgreset}};
end
always @(posedge dspclk) begin
    dspresetn_r<={32{~dspreset}};
end
always @(posedge pl_clk0) begin
    psresetn_r<={32{~psreset}};
end
always @(posedge clkadc2_600) begin
    adc2resetn_r<={32{~adc2reset}};
end

,output dspresetn06
,output dspresetn07
,output psresetn00
,output psresetn01
,output psresetn02
,output adc2resetn00
,output adc2resetn01

output cfgresetn0
,output cfgresetn1
,output cfgresetn2
,output cfgresetn3
,output cfgresetn4
,output cfgresetn5
,output cfgresetn6
,output cfgresetn7
.cfgresetn0(cfgresetn0)
,.cfgresetn1(cfgresetn1)
,.cfgresetn2(cfgresetn2)
,.cfgresetn3(cfgresetn3)
,.cfgresetn4(cfgresetn4)
,.cfgresetn5(cfgresetn5)
,.cfgresetn6(cfgresetn6)
,.cfgresetn7(cfgresetn7)
reg [8-1:0] cfgresetn_r=0
,wire cfgresetn0,cfgresetn1,cfgresetn2,cfgresetn3,cfgresetn4,cfgresetn5,cfgresetn6,cfgresetn7;
,assign {cfgresetn0,cfgresetn1,cfgresetn2,cfgresetn3,cfgresetn4,cfgresetn5,cfgresetn6,cfgresetn7}=cfgresetn_r;
,always @(posedge cfgclk) begin cfgresetn_r<={8{~cfgreset}};end
output dspresetn0
,output dspresetn1
,output dspresetn2
,output dspresetn3
,output dspresetn4
,output dspresetn5
,output dspresetn6
,output dspresetn7
.dspresetn0(dspresetn0)
,.dspresetn1(dspresetn1)
,.dspresetn2(dspresetn2)
,.dspresetn3(dspresetn3)
,.dspresetn4(dspresetn4)
,.dspresetn5(dspresetn5)
,.dspresetn6(dspresetn6)
,.dspresetn7(dspresetn7)
reg [8-1:0] dspresetn_r=0
,wire dspresetn0,dspresetn1,dspresetn2,dspresetn3,dspresetn4,dspresetn5,dspresetn6,dspresetn7;
,assign {dspresetn0,dspresetn1,dspresetn2,dspresetn3,dspresetn4,dspresetn5,dspresetn6,dspresetn7}=dspresetn_r;
,always @(posedge dspclk) begin dspresetn_r<={8{~dspreset}};end
output psresetn0
,output psresetn1
,output psresetn2
.psresetn0(psresetn0)
,.psresetn1(psresetn1)
,.psresetn2(psresetn2)
reg [3-1:0] psresetn_r=0
,wire psresetn0,psresetn1,psresetn2;
,assign {psresetn0,psresetn1,psresetn2}=psresetn_r;
,always @(posedge psclk) begin psresetn_r<={3{~psreset}};end
output adc2resetn0
,output adc2resetn1
,output adc2resetn2
.adc2resetn0(adc2resetn0)
,.adc2resetn1(adc2resetn1)
,.adc2resetn2(adc2resetn2)
reg [3-1:0] adc2resetn_r=0
,wire adc2resetn0,adc2resetn1,adc2resetn2;
,assign {adc2resetn0,adc2resetn1,adc2resetn2}=adc2resetn_r;
,always @(posedge adc2clk) begin adc2resetn_r<={3{~adc2reset}};end
'''        
