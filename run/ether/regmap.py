from register import c_register
#from mem_gateway import c_mem_gateway
from localbus import c_localbus
from ether import c_ether
import time
import json
import numpy
try:
	basestring
except NameError:
	basestring = str
class c_regmap(c_localbus):
	DWIDTH=32
	def __init__(self,interface,regmappath='regmap.json',wavegrppath='wavegrp.json',run=True):
		c_localbus.__init__(self, interface=interface,run=run)
		self.regs={}
		self.regindex={}
		with open(regmappath) as jsonfile:
			self.registers=json.load(jsonfile)
		with open(wavegrppath) as jsonfile:
			self.wavegrp=json.load(jsonfile)
		for name in self.registers:
			self.regs[name]=c_register(**dict({'name':name,'DWIDTH':self.DWIDTH},**self.registers[name]))
			for addr in self.regs[name].readaddr():
				self.regindex[addr]=self.regs[name]
#	def wavecheckreadallreset(self,wavelist,resetafter=True):
#		if not resetafter:
#			for wavename in wavelist:
#				status_reg=self.wavegrp[wavename]['status']['name']
#				status_bit=self.wavegrp[wavename]['status']['bit']
#				reset_reg=self.wavegrp[wavename]['reset']['name']
#				#print('3rd step!!!!!!!!!!!!reset_reg!!!!!!',wavename,reset_reg)###
#				#print 'reset',wavename
#				self.write(((reset_reg,0),(reset_reg,0),(reset_reg,0)))
#				self.read(status_reg)
#				status=(self.regs[status_reg].getvalue()[0]>>status_bit)&0x1
#				#print('1st step*******status_reg,self.regs[status_reg].getvalue()[0],status_bit,status**********',status_reg,self.regs[status_reg].getvalue()[0],status_bit,status)###
#		timeout=500
#		for wavename in wavelist:
#			status_reg=self.wavegrp[wavename]['status']['name']
#			status_bit=self.wavegrp[wavename]['status']['bit']
#			self.read(status_reg)
#			status=(self.regs[status_reg].getvalue()[0]>>status_bit)&0x1
#			#print('1st step*******status_reg,self.regs[status_reg].getvalue()[0],status_bit,status**********',status_reg,self.regs[status_reg].getvalue()[0],status_bit,status)###
#			index=0
#			while (not status) and index<timeout:
#				#print [hex(i) for i in self.read(((status_reg),))]
#				self.read(status_reg)
#				status=(self.regs[status_reg].getvalue()[0]>>status_bit)&0x1
#				index=index+1
#				#print('2nd step@@@@@@@@@@@@@@@@@@in loop status, index',status,index)###
#				#print 'c_regmap wavecheckreadallreset index',index
#				#self.read((('keep'),))
#				#v3=self.regs['keep'].getvalue()[0]
#				#self.read((('trace_status2'),))
#				#v2=self.regs['trace_status2'].getvalue()[0]
#				#v2=self.read(status_reg)[0]
##			print 'wavecheckreadreset',status_bit,status_reg,format(v,'08x'),status,'trace_status2:',format(v2,'08x'),'keep:',format(v3,'08x')
#				time.sleep(0.1)
#			if index==timeout:
#				print('timeout on ',wavename)
##			print status_reg,status
#			self.readregs((wavename,))
#		if resetafter:
#			for wavename in wavelist:
#				reset_reg=self.wavegrp[wavename]['reset']['name']
#				#print('3rd step!!!!!!!!!!!!reset_reg!!!!!!',wavename,reset_reg)###
#				#print 'reset',wavename
#				self.write(((reset_reg,0),(reset_reg,0),(reset_reg,0)))
#		result=[]
#		for wavename in wavelist:
#			result.append(self.regs[wavename].getvalue())
#		return result
#
#	def wavecheckreadreset(self,wavename,length=None):
#		status_reg=self.wavegrp[wavename]['status']['name']
#		status_bit=self.wavegrp[wavename]['status']['bit']
#		reset_reg=self.wavegrp[wavename]['reset']['name']
#		self.read(status_reg)
#		status=(self.regs[status_reg].getvalue()[0]>>status_bit)&0x1
#		index=0
#		while (not status) and index<10:
#			#print [hex(i) for i in self.read(((status_reg),))]
#			self.read(status_reg)
#			status=(self.regs[status_reg].getvalue()[0]>>status_bit)&0x1
#			index=index+1
#			#print index
#			#self.read((('keep'),))
#			#v3=self.regs['keep'].getvalue()[0]
#			#self.read((('trace_status2'),))
#			#v2=self.regs['trace_status2'].getvalue()[0]
#			#v2=self.read(status_reg)[0]
##			print 'wavecheckreadreset',status_bit,status_reg,format(v,'08x'),status,'trace_status2:',format(v2,'08x'),'keep:',format(v3,'08x')
#			time.sleep(0.1)
##		print status_reg,status
#		self.readregs((wavename,))
#		self.write(((reset_reg,0),))
#		return self.regs[wavename].getvalue()
#
#	def readandwrite(self,opnamedatalist,addr=None):
#		#		print opnamedatalist
#		cadlist=numpy.array((len(opnamedatalist),3))
#		for i,(o,n,d) in enumerate(opnamedatalist):
#			cadlist[i][0]=self.cmds[o]
#			cmdlist[i][1]=
#		alist=[]
#		dlist=[]
#		wlist=[]
#		for (o,n,d) in opnamedatalist:
#			if o=='write':
#				(a,d,w)=self.writeadw(((n,d),))
#			elif o=='read':
#				(a,d,w)=self.readadw(((n),))
#			alist.extend(a)
#			dlist.extend(d)
#			wlist.extend(w)
#		return self.rawadw(alist,dlist,wlist)
	def write(self,namedatalist):
		#(alist,dlist,wlist)=self.writeadw(namedatalist)
#		print 'write',alist,dlist,wlist
#		print len(namedatalist)
		regs=[self.regs[name] for name,data in namedatalist]
		reglengths=numpy.array([r.addr_length for r in regs])
		regaddrlen=sum(reglengths)
		cad=numpy.zeros((regaddrlen,3))
		cad[:,0]=regaddrlen*[self.cmds['write']]
		cnt=0
		for index,(regname,val) in enumerate(namedatalist):
			#print(index,regname,val)
			cad[cnt:cnt+reglengths[index],1]=self.regs[regname].readaddr()
			cad[cnt:cnt+reglengths[index],2]=self.regs[regname].writeval(val)
			cnt=cnt+reglengths[index]
	#	print('write cad',cad)
		return self.rawadw(cad)
	#cadarray=numpy.zeros((cmdlen,3))
	#	cadarray[:,0]=cmdlen*[self.cmds['write']]
	#	cadarray[:,1:3]=numpy.array([(r if isinstance(r,basestring) else r.name,v) for r,v in namedatalist])
	#	return self.writeregs(nvlist)
	def writeregs(self,namedatalist):
		adlist=[]
		for name,data in namedatalist:
			offset=(None if len(item)==2 else item[2])
			adlist.append(self.regs[name].write(data,offset))
			###if name=='period_dac0':###
				###print '((((((((((((name==period_dac0))))))))))))',data###
			###if name=='start':###
				###print '((((((((((((name==start))))))))))))',data###
		#print adlist
		(alist,dlist)=zip(*sum(adlist,[]))
		wlist=len(alist)*[1]
		return self.rawadw(alist,dlist,wlist)
	def readregs(self,names):
		#print names
		regs=[self.regs[name] for name in names]
		reglengths=numpy.array([r.addr_length for r in regs])
		regaddrlen=sum(reglengths)
		cad=numpy.zeros((regaddrlen,3))
		cad[:,0]=regaddrlen*[self.cmds['read']]
		cad[:,2]=numpy.zeros(regaddrlen)
		cnt=0
		#print(reglengths)
		for index,r in enumerate(regs):

			cad[cnt:cnt+reglengths[index],1]=r.readaddr()
			cnt=cnt+reglengths[index]
		#print(cad)
		return self.rawadw(cad)
	def read(self,names):
		namelists=[]
		reglist=[]
		wavelist=[]
		reglist = [n for n in names if n not in self.wavegrp]
		wavelist = [n for n in names if n in self.wavegrp]
		if reglist:
			self.readregs(reglist)
		if wavelist:
			#print('0 step in read^^^^^^^^',wavelist)###
			self.wavecheckreadallreset(wavelist,resetafter=resetafter)
		return self.getregval(names)
	def rawadw(self,cadlist):
		result=self.readwrite(cadlist)
		cad=self.parse_readvalue(result)
		#print 'rawadw',len(alist),len(result),len(value)
		self.updatereadvalue(cad)
		return cad
	def updatereadvalue(self,cad):
		result=[]
		for cmd,addr,val in cad:
			if addr in self.regindex and cmd==self.cmds['read']:
				self.regindex[addr].setvalue(val,addr)
		#		result.append((self.regindex[addr].name,self.regindex[addr].getvalue()))
		#return result
#		print result
	def getregval(self,names):
		return numpy.array([self.regs[name].getvalue() for name in names])
	def readregval(self,name):
		self.read(names=[name])

if __name__=="__main__":
	interface=c_ether('192.168.1.224',port=0xd003)
	regmap=c_regmap(interface)
	import sys
	numpy.set_printoptions(formatter={'int':hex})
	print('write',regmap.write((('test',int(sys.argv[1],0)),('test2',0xdeadbeef),('err',0))))
	print('write2',regmap.write((('test',int(sys.argv[1],0)),('test2',0xdeadbeef),('err',0))))
	print('write3',regmap.write((('test',int(sys.argv[1],0)**2),)))
	regs=['test','test2','test1']
	print('read',regmap.read(regs))
	print('read2',numpy.array(regmap.getregval(regs)))
#	print('getval',[hex(i) for i in [regmap.getregval(i) for i in regs]])
