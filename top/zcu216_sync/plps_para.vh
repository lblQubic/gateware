parameter DEBUG="true"
,parameter SIM=0
,parameter integer LB1_DATAWIDTH=32
,parameter integer LB1_ADDRWIDTH=10
,parameter integer LB2_DATAWIDTH=32
,parameter integer LB2_ADDRWIDTH=10
,parameter integer LB3_DATAWIDTH=32
,parameter integer LB3_ADDRWIDTH=20
,parameter integer LB4_DATAWIDTH=32
,parameter integer LB4_ADDRWIDTH=20
,parameter integer DAC_AXIS_DATAWIDTH=256
,parameter integer ADC_AXIS_DATAWIDTH=64
,parameter integer BRAMADDRWIDTH=32
,parameter integer NPROC=8
,parameter integer NADC=1
,parameter integer NDLO1=8
,parameter integer NDLO2=0
,parameter integer NMULTI=5
,parameter integer NQDRV=8
,parameter integer NRDRV=1
,parameter integer NDAC=NQDRV+NRDRV

,parameter integer NDACMON=4
,parameter integer NACQ=1
,parameter integer RDLOINTPRATIO=4
,parameter integer RDRVINTPRATIO=16
,`include "reset_para.vh"
