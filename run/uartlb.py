import time
import serial
import numpy
class c_uartlb():
	def __init__(self,port,baudrate,timeout=0):
		self.ser=serial.Serial(port,baudrate,timeout=timeout)
	def readwrite(self,cadarray,delay=0.1):
		result=numpy.empty(cadarray.shape)
		for i,(c,a,d) in enumerate(cadarray):
			cmd=self.cmdgen(ctrl=c,addr=a,data=d)
			nbytes=self.ser.write(cmd)
			if delay:
				time.sleep(delay)
			rbvalueb=self.ser.read(nbytes)
			(ctrl,addr,data)=self.readparse(rbvalueb)
			result[i,]=(ctrl,addr,data)
		return result
	def write(self,addr,data,delay=0.1):
		cadarray=numpy.array([[1,addr,data]],dtype=int)
		(ctrl,addr,data)=self.readwrite(cadarray)[0]
		return (ctrl,addr,data)
	def read(self,addr,delay=0.1):
		cadarray=numpy.array([[0,addr,0]],dtype=int)
		(ctrl,addr,data)=self.readwrite(cadarray)[0]
		return (ctrl,addr,data)

	def cmdgen(self,ctrl,addr,data):
		cmd=int(ctrl).to_bytes(1,byteorder="big")+int(addr).to_bytes(3,byteorder="big")+int(data).to_bytes(4,byteorder="big")
		return cmd
	def readparse(self,rbvalueb):
		rbvaluei=int.from_bytes(rbvalueb,"big")
		ctrl=int((rbvaluei>>(32+24))&0xff)
		addr=int((rbvaluei>>(32))&0xffffff)
		data=int((rbvaluei>>(0))&0xffffffff)
		return (ctrl,addr,data)
	def settimeout(self,timeout):
		self.ser.timeout=timeout

	def readline(self):
		return self.ser.readline()
	def resetlb(self):
		cmdwrite=self.cmdgen(0xff,0xffffff,0xffffffff)
		writebytes=	self.ser.write(cmdwrite)
		cmdwrite=self.cmdgen(0xff,0xffffff,0xffffff00)
		writebytes=	self.ser.write(cmdwrite)
		self.resetbuf()
	def resetbuf(self):
		self.ser.reset_input_buffer()
if __name__=="__main__":
	import random
	ser=c_uartlb('/dev/ttyUSB1',9600,0)
	ser.resetlb()
	r0=int(random.random()*(2**32-1))
	r0=0xdeadbeef
	ser.write(addr=0,data=r0)
	ser.write(addr=4,data=1)
	print(hex(r0))
	(c,a,v)=ser.read(addr=1)
	print(hex(int(v)))
#	r2=int(random.random()*(2**32-1))
#	ser.write(addr=2,data=r2)
#	r3=int(random.random()*(2**32-1))
#	ser.write(addr=3,data=r3)
#	(c,a,v)=ser.read(addr=1)
#	print(((r0+r2+r3+10)&0xffffffff)==v)
#	ser.write(addr=4,data=2)
#	ser.settimeout(1)
#	ser.resetbuf()
#	for i in range(10):
#		print(ser.readline())
#	ser.settimeout(0)
#	ser.write(addr=4,data=0)
#	ser.resetbuf()
#	(c,a,v0)=ser.read(addr=0)
#	(c,a,v1)=ser.read(addr=1)
#	(c,a,v2)=ser.read(addr=2)
#	(c,a,v3)=ser.read(addr=3)
#	print((int(r0+r2+r3+10)&0xffffffff)==v1)
#	print((int(v0+v2+v3+10)&0xffffffff)==v1)
#	for i in range(10):
#		(c,a,v9)=ser.read(addr=9)
#		print('ppscnt',v9)
#		time.sleep(1)
