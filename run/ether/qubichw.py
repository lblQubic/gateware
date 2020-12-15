import json
import numpy
import time
import sys
import devcom
from ether import c_ether
from uartlb import c_uartlb
from regmap import c_regmap
from fmc120 import c_fmc120
from vc707 import c_vc707
from lbaxi import c_lbaxi
import lmk04828
import ads54j60
import dac39j84
import axiinit
class c_qubichw():
	def __init__(self,ip='192.168.1.224',port=0xd003,regmappath='regmap.json'):
		self.udplb=c_ether(ip=ip,port=port)
		self.regmap=c_regmap(self.udplb,regmappath=regmappath)
		self.vc707=c_vc707(self.regmap)
		self.read=self.vc707.read
		self.write=self.vc707.write
		#dev=devcom.devcom(devcom.sndev)
		#vc707uart=dev['vc707uart']
		#self.uartlb=c_uartlb(vc707uart,9600,0)
		#self.vc707=c_vc707(self.regmap)
		self.fmc120_1=c_fmc120(i2cid='fmc1',devread=self.vc707.devread,devwrite=self.vc707.devwrite)
		self.fmc120_2=c_fmc120(i2cid='fmc2',devread=self.vc707.devread,devwrite=self.vc707.devwrite)
		self.fmcprsntpg()
		self.axiinsts={'fmc1':['axifmc1adc0','axifmc1adc1','axifmc1dac'],'fmc2':['axifmc2adc0','axifmc2adc1','axifmc2dac']}
		self.axinames=['axifmc1adc0','axifmc1adc1','axifmc1dac','axifmc2adc0','axifmc2adc1','axifmc2dac']
		self.lbaxi={}
		for name in self.axinames:
			self.lbaxi[name]=c_lbaxi(read=self.vc707.read,write=self.vc707.write)
		self.i2cenable()
		if self.commcheck(lmkreglist=lmk04828.ver,adcreglist=ads54j60.reg5f,dacreglist=dac39j84.vid,axireglist=axiinit.axiver):
			self.clkinit(lmkinitregs=lmk04828.init)
			self.adcinit(initregs=ads54j60.default)
			self.dacinit(initregs=dac39j84.default)
			self.axiinit(initregs=axiinit.axiinit)

		self.vc707.i2cswitch('si570')
		print(self.vc707.si570readinit())
		print(self.vc707.si570setfreq(125.0001e6))

		freqdict=(self.freqs())
		for k,v in freqdict.items():
			print('%8.3f %s'%(v,k))
		for fmc in [self.fmc120_1,self.fmc120_2]:
			self.vc707.i2cswitch(fmc.i2cid)
			print(fmc.i2cid,'ad7291',fmc.ad7291check())
	def commcheck(self,lmkreglist,adcreglist,dacreglist,axireglist):
		commpass=True
		for fmc in [self.fmc120_1,self.fmc120_2]:
			self.vc707.i2cswitch(fmc.i2cid)
			commpass=commpass & fmc.lmkcheck(lmkreglist)
			for adc in range(2):
				commpass=commpass & fmc.adccheck(adca0b1=adc,reglist=adcreglist)
			commpass=commpass & fmc.daccheck(dacreglist)
		for name,axi in self.lbaxi.items():
			commpass=commpass & axi.axi4lite_check(axiprefix=name,reglist=axireglist)
		print('commcheck','pass' if commpass else 'fail')
		return commpass

	def clkinit(self,lmkinitregs,freqoffpercent=1):
		nominal={'freq_lb':125,'freq_sgmiiclk':125,'freq_sma_mgt_refclk':0,'freq_si5324_out_c':250,'freq_pcie_clk_qo':0,'freq_user_clock':125,'freq_fmc1_llmk_dclkout_2':250,'freq_fmc1_llmk_sclkout_3':0,'freq_fmc1_lmk_dclk8_m2c_to_fpga':500,'freq_fmc1_lmk_dclk10_m2c_to_fpga':0,'freq_fmc2_llmk_dclkout_2':250,'freq_fmc2_llmk_sclkout_3':0,'freq_fmc2_lmk_dclk8_m2c_to_fpga':500,'freq_fmc2_lmk_dclk10_m2c_to_fpga':0,'freq_rxusrclk_sfp':100,'freq_txusrclk_sfp':100}
		freqdict=self.freqs()
		ok=True
		for k,v in freqdict.items():
			n=nominal[k]
			maxoffset=max(1,n*freqoffpercent*0.01)
			if (abs(v-n)>maxoffset):
				print(k,n,v)
				ok=False
		print(freqdict)
		print('clkinit', ok)
		if ~ok:
			for fmc in [self.fmc120_1,self.fmc120_2]:
				self.vc707.i2cswitch(fmc.i2cid)
				fmc.reset()
				fmc.lmk04828load(lmkinitregs)
	def adcinit(self,initregs):
		for fmc in [self.fmc120_1,self.fmc120_2]:
			self.vc707.i2cswitch(fmc.i2cid)
			for adc in range(2):
				fmc.adcload(adca0b1=adc,reglist=ads54j60.softreset)
				fmc.adcload(adca0b1=adc,reglist=initregs)
				fmc.adccheck(adca0b1=adc,reglist=initregs)
	def dacinit(self,initregs):
		for fmc in [self.fmc120_1,self.fmc120_2]:
			self.vc707.i2cswitch(fmc.i2cid)
			fmc.dacload(initregs)
			fmc.daccheck(initregs)
	def axiinit(self,initregs):
		for name,axi in self.lbaxi.items():
			for w0r1,addr,data in axiinit.axiinit:
				if w0r1:
					data,valid=axi.axi4lite_read(axiprefix=name,addr=addr)
				else:
					axi.axi4lite_write(axiprefix=name,addr=addr,wdata=data)
				time.sleep(0.1)
				print('write axi',addr,data)
			resetval,valid=axi.axi4lite_read(axiprefix=name,addr=4)
			print('read axi %s  addr'%axi,addr,'resetval',resetval,hex(resetval))
			axi.jesd204axi_reset(axiprefix=name)


	def i2cenable(self,clk4ratio=5000,enable=True):
		self.write((('clk4ratio',clk4ratio),('i2cmux_reset_b',1 if enable else 0)))
	def si5324enable(self,enable=True):
		self.write((('si5324_rst',1 if enable else 0),))
	def fmcprsntpg(self):
		prsnt,pg=self.read(('fmcprsnt','fmcpgm2c'))
		self.fmc120_1.prsnt=(prsnt&0x1)==0
		self.fmc120_2.prsnt=((prsnt>>1)&0x1)==0
		self.fmc120_1.pg=(pg&0x1)==1
		self.fmc120_2.pg=((pg>>1)&0x1)==1
		return (prsnt,pg)
	def freqs(self):
		freqregs=['freq_lb'
	,'freq_sgmiiclk'
	,'freq_sma_mgt_refclk'
	,'freq_si5324_out_c'
	,'freq_pcie_clk_qo'
	,'freq_user_clock'
	,'freq_fmc1_llmk_dclkout_2'
	,'freq_fmc1_llmk_sclkout_3'
	,'freq_fmc1_lmk_dclk8_m2c_to_fpga'
	,'freq_fmc1_lmk_dclk10_m2c_to_fpga'
	,'freq_fmc2_llmk_dclkout_2'
	,'freq_fmc2_llmk_sclkout_3'
	,'freq_fmc2_lmk_dclk8_m2c_to_fpga'
	,'freq_fmc2_lmk_dclk10_m2c_to_fpga'
	,'freq_rxusrclk_sfp'
	,'freq_txusrclk_sfp'
	]
		freqs=(numpy.array(self.vc707.read(freqregs))*125.0/2**24)
		freqdict={}
		for index,freq in enumerate(freqs):
			freqdict[freqregs[index]]=freqs[index]
		return freqdict
	def si5324init(self):
		import si5324
		self.si5324enable()
		self.vc707.i2cswitch('si5324')
#		for addr,data in si5324.default:
		for addr,data in si5324.init250:
			self.vc707.si5324write(addr,data)
			rdbk=self.vc707.si5324read(addr)
			print(addr,hex(rdbk),rdbk==data)
		time.sleep(1)
	def changeipmac(self,ipmac8b):
		self.vc707.i2cswitch('eeprom')
		self.vc707.eepromwrite(addr=0,data=ipmac8b,devaddr=0x54)
		time.sleep(0.1)
		print('eeprom readback, expect to bo 0x%x=%d'%(ipmac8b,ipmac8b),self.vc707.eepromread(addr=0,devaddr=0x54))
		self.write((('hwreset',0),))

if __name__=="__main__":
	qubichw=c_qubichw()
	qubichw.i2cenable()

	if (0):
		print('test, test1',qubichw.read(('test','test1','test1','test1','test','test','test','test','test','test','test','test2','test1')))
		time.sleep(0.1)
#	for i in range(20):
#	qubichw.write((('clk4ratio',5000),))
#	qubichw.write((('i2cmux_reset_b',0),))
#	qubichw.write((('i2cmux_reset_b',1),))

#	print('prsnt,pgm2c,should  be [0,3], read:',qubichw.read(('fmcprsnt','fmcpgm2c')))
#	dest=qubichw.fmc120_1
#	fmcdest=dest.i2cid
#	if len(sys.argv)>1:
#		fmcdest=int(sys.argv[1])
#	qubichw.vc707.i2cwrite(devaddr=0x74,data=fmcdest);#int(sys.argv[1]))

#	print('mux read',[hex(i) for i in qubichw.vc707.i2cread(devaddr=0x74)])
#	print(qubichw.read(('clk4ratio',)))
	if 0:
		for fmc in [qubichw.fmc120_1,qubichw.fmc120_2]:
			qubichw.vc707.i2cswitch(fmc.i2cid)
			#cpld05[fmc.i2cid]=fmc.cpldread(addr=0x05)
			print(fmc.cpldcheck())
	if 0:
		sfpinfo=qubichw.vc707.sfpinfo()
		print(sfpinfo,[chr(i) for i in sfpinfo])
	if 0: # test on single vc707 eeprom write and read
		qubichw.vc707.i2cswitch('eeprom')
		qubichw.vc707.eepromwrite(addr=0,data=0x5c,devaddr=0x54)
		time.sleep(0.1)
		print('eeprom readback, expect to bo 0x5c=%d'%0x5c,qubichw.vc707.eepromread(addr=0,devaddr=0x54))

	if 0:
		qubichw.vc707.i2cswitch('eeprom')
		#qubichw.vc707.i2cwrite(devaddr=0x74,data=8)
		vpage=[]
		for page in range(6):
			val=[]
			for addr in range(page*16+0,page*16+16):
				vali=qubichw.vc707.eepromread(addr,devaddr=0x54)[0]
				val.append(vali)
			vpage.append(val)
		print(vpage)

	if 0: # test on vc707 eeprom write and read
		qubichw.vc707.i2cswitch('eeprom')
		#for page in range(16):
		for page in [0,1]:
			for addr in range(page*16+0,page*16+16):
				qubichw.vc707.eepromwrite(addr=addr,data=addr+1,devaddr=0x54)
				print('write page ',page,'addr ',addr,'data',addr+1)
		time.sleep(0.5)
		#for page in range(16):
		for page in [0,1]:
			val=[]
			for addr in range(page*16+0,page*16+16):
				val.append(qubichw.vc707.eepromread(addr=addr,devaddr=0x54)[0])
				print('read page ',page,'addr ',addr,'data',val[-1])
			print(val)
	if 0: # test on fmc120 spi
		#print('mux read',hex(vc707.i2cread(devaddr=0x74)))
		for fmc in [qubichw.fmc120_1,qubichw.fmc120_2]:
			qubichw.vc707.i2cswitch(fmc.i2cid)
		#vc707.i2cwrite(devaddr=0x74,data=fmcdest)
			fmc.reset()
#			fmc.cpldwrite(addr=0x02,data=0x00)
#			fmc.cpldwrite(addr=0x02,data=0x20)
#			fmc.dacwrite(addr=0x02,data=0x2082)
##	   lmkwrite(addr=0x15d,data=0x73)
#			fmc.cpldwrite(addr=0x03,data=0x00)
#			fmc.cpldwrite(addr=0x03,data=0x07)
#			fmc.cpldwrite(addr=0x03,data=0x18)
#			fmc.cpldwrite(addr=0x01,data=0xf0)
#			fmc.lmkwrite(addr=0,data=0x90)
#			fmc.lmkwrite(addr=0,data=0x10)
#	   lmkwrite(addr=0x146,data=0x00)
#	   lmkwrite(addr=0x147,data=0x10)
#			fmc.lmkwrite(addr=0x148,data=0x33)
#	   lmkwrite(addr=0x149,data=0x00)
#	   lmkwrite(addr=0x14a,data=0x00)
#	   lmkwrite(addr=0x14b,data=0x05)
	if 0: # test on fmc120 spi
#	   print('dacread',hex(int(dacread(addr=0x0))))
#	   dacwrite(addr=0x0,data=0x18)
		for fmc in [qubichw.fmc120_1,qubichw.fmc120_2]:
			qubichw.vc707.i2cswitch(fmc.i2cid)
#			fmc.i2cwrite(devaddr=0x74,data=fmcdest)
		#vc707.lmkwrite(addr=0x10,data=0x1010)
#	   print('lmkread',hex(3),hex(int(lmkread(addr=3))));
#	   print('dacread',hex(int(dacread(addr=0x0))))
			for addr in range(16):
		#   for addr in [0,3]:#range(3):
				adca=fmc.adcread(mpchaddr=addr,adca0b1=0)
				lmk=fmc.lmkread(addr=addr)
				dac=fmc.dacread(addr=addr)
				adcb=fmc.adcread(mpchaddr=addr,adca0b1=1)
				print([hex(i) for i in [addr,lmk,dac,adca,adcb]])

	if 0:
		for fmc in [qubichw.fmc120_1,qubichw.fmc120_2]:
			qubichw.vc707.i2cswitch(fmc.i2cid)
			print('ad7291',fmc.ad7291check())
				#		time.sleep(1)
#		for i in range(8):
#			vc707.ad7291write(addr=0x0,data=((1<<(i+8))+0x80))
#			chv,vout=vc707.ad7291calc(vc707.ad7291read(0x01))
#			cht,temp=vc707.ad7291calc(vc707.ad7291read(0x02))
#			cha,tavr=vc707.ad7291calc(vc707.ad7291read(0x03))
#			print('%d %3.2f %d %4.2f %d %4.2f'%(chv,vout,cht,temp,cha,tavr))
	if 0:
		#vc707.i2cwrite(devaddr=0x74,data=0x1)a
		qubichw.vc707.i2cswitch('si570')
		print(qubichw.vc707.si570readinit())
		print(qubichw.vc707.si570setfreq(125.0001e6))
#		for addr in [7,8,9,10,11,12,13,14,15,16,17,18,135,137]:
#			val=qubichw.vc707.si570read(addr)
#			print('(%d,0x%x)'%(addr,val))
#			#print(format(addr,'3d'),format(addr,'02x'),format(val,'02x'))
#		addr=18
#		vc707.si570write(addr,0xff)
#		val=vc707.si570read(addr)
#		print(addr,val)
#		print(format(addr,'3d'),format(addr,'02x'),format(val,'02x'))
	if 0:
		#   lmkwrite(addr=0,data=0x80);
		#lmkwrite(addr=0,data=0x10);
		#lmkwrite(addr=2,data=0x00);
		import lmk04828
		for fmc in [qubichw.fmc120_1,qubichw.fmc120_2]:
			qubichw.vc707.i2cswitch(fmc.i2cid)
			fmc.lmk04828init(lmk04828.init)
#			for addr,data in lmk04828.init:
#				fmc.lmkwrite(addr=addr,data=data)
#		with open('lmkinit.json') as f:
#			lmkinit=json.load(f)
		#for addr in [0,2,3,4,5,6,0xc,0xd,0x100,0x101,0x103,0x104]:
#		for addr,data in lmk04828.default:
#			rdbk=dest.lmkread(addr=addr)[0]
#			if data==rdbk:
#				pass
#			else:
#				print('lmk init addr %x data %x %d rdbk %x %d'%(addr,data,data,rdbk,rdbk))
	#	for addr,data in lmk04828.default:
	#		vc707.lmkwrite(addr=addr,data=data)

	if 0:
		for addr in [1,2,3,4,5,6,7,8,0x0e,0x0f]:
			print('cpldread',hex(addr),hex(int(vc707.cpldread(addr=addr)[0])))

	if 0:
		import ads54j60
		for fmc in [qubichw.fmc120_1,qubichw.fmc120_2]:
			qubichw.vc707.i2cswitch(fmc.i2cid)
			for adc in range(2):
				fmc.adcload(adca0b1=adc,reglist=ads54j60.softreset)
				fmc.adcload(adca0b1=adc,reglist=ads54j60.default)
				fmc.adccheck(adca0b1=adc,reglist=ads54j60.default)

#		vc707.i2cwrite(devaddr=0x74,data=fmcdest);#int(sys.argv[1]))
##		vc707.lmkwrite(addr=0x10,data=0x1010)
#		for addr,val in ads54j60.softreset:
#			m=(addr>>14)&0x1
#			p=(addr>>13)&0x1
#			ch=(addr>>12)&0x1
#			ad=(addr>>0)&0xfff
#			vc707.adcwrite(addr=addr,m=m,p=p,ch=ch,data=val,adca0b1=1)
#		for addr,val in ads54j60.default:
#			r1w0=(addr>>15)&0x1
#			m=(addr>>14)&0x1
#			p=(addr>>13)&0x1
#			ch=(addr>>12)&0x1
#			ad=(addr>>0)&0xfff
##		   print(hex(addr),m,p,ch,val)
##		   before=adcread(addr=addr,m=m,p=p,ch=ch,adca0b1=1)
##			if addr in ads54j60.ctrladdr:
#			if (r1w0==0):
#				vc707.adcwrite(addr=addr,m=m,p=p,ch=ch,data=val,adca0b1=1)
#			else:
#				after=vc707.adcread(addr=addr,m=m,p=p,ch=ch,adca0b1=1)[0]
#				if (after==val):
#					pass
#				else:
#					print('addr',hex(addr),'val',format(val,'x'),'read',format(after,'x'))

	if 0:
		import dac39j84
		for fmc in [qubichw.fmc120_1,qubichw.fmc120_2]:
			qubichw.vc707.i2cswitch(fmc.i2cid)
			fmc.dacload(dac39j84.default)
			fmc.daccheck(dac39j84.default)
#		vc707.i2cwrite(devaddr=0x74,data=fmcdest);#int(sys.argv[1]))
#		#vc707.lmkwrite(addr=0x10,data=0x1010)
#		for addr,val in dac39j84.default:
#			rdbk=vc707.dacread(addr=addr)[0]
#			if val==rdbk:
#				pass
#			else:
#				print('dacread',hex(addr),'val',hex(val),'rdbk',hex(int(rdbk)),val==rdbk)

#		for addr in range(0x6d):
		#for addr in [0x6d]:
#			print('dacread',hex(addr),hex(int(vc707.dacread(addr=addr)[0])))
	if 0:
		vc707.jesd204axi_reset('axifmc1adc0')
	if 0:
		vc707.axi4lite_write(axi='axifmc1adc0',addr=0x04,wdata=0x00001)
		for addr in range(0,0x3c,4):
			data,valid=vc707.axi4lite_read('axifmc1adc0',addr=addr)
			print('read axi addr',addr,hex(addr),'data',data,hex(data))
#	vc707.write((('axifmc1adc0_w0r1',1),('axifmc1adc0_start',1),))
#	while 1:
#		rdatavalid=vc707.read(('axifmc1adc0_rdatavalid',))
#		print(rdatavalid)
#		time.sleep(0.1)
	if 0:
		import axiinit
		for name,axi in qubichw.lbaxi.items():
			for w0r1,addr,data in axiinit.axiinit:
				if w0r1:
					data,valid=axi.axi4lite_read(axiprefix=name,addr=addr)
				else:
					axi.axi4lite_write(axiprefix=name,addr=addr,wdata=data)
				time.sleep(0.1)
				print('write axi',addr,data)
			resetval,valid=axi.axi4lite_read(axiprefix=name,addr=4)
			print('read axi %s  addr'%axi,addr,'resetval',resetval,hex(resetval))
			axi.jesd204axi_reset(axiprefix=name)
#
#		axiinsts={2:['axifmc1adc0','axifmc1adc1','axifmc1dac'],4:['axifmc2adc0','axifmc2adc1','axifmc2dac']}
#		for axi in axiinsts[fmcdest]:
#			for w0r1,addr,data in axiinit.axiinit:
#				if w0r1:
#					data,valid=qubichw.vc707.axi4lite_read(axi,addr=addr)
#				else:
#					qubichw.vc707.axi4lite_write(axi,addr=addr,wdata=data)
#				time.sleep(0.1)
#				print('write axi',addr,data)
#			resetval,valid=qubichw.vc707.axi4lite_read(axi,addr=4)
#			print('read axi %s  addr'%axi,addr,'resetval',resetval,hex(resetval))
#			qubichw.vc707.jesd204axi_reset(axi)
		#while resetval:
		#	addr=4;	resetval,valid=vc707.axi4lite_read('axifmc1adc0',addr=addr)
		#	print('read axi addr',addr,'resetval',resetval,hex(resetval))
		#	addr=0;	readdata,valid=vc707.axi4lite_read('axifmc1adc0',addr=addr)
		#	print('read axi addr',addr,'readdata',readdata,hex(readdata))
		#	time.sleep(0.1)
#	for addr in range(4):
#		print('addr',addr,vc707.axi4lite_read('axifmc1adc0',addr=addr))
	if 0:
		qubichw.si5324init()
	if 0:
		freqdict=(qubichw.freqs())
		for k,v in freqdict.items():
			print('%8.3f %s'%(v,k))
		#print(freqdict)
