create_pblock qdrv0_3
resize_pblock qdrv0_3 -add {SLICE_X0Y420:SLICE_X80Y479 DSP48E2_X0Y168:DSP48E2_X14Y191 RAMB18_X0Y168:RAMB18_X7Y191 RAMB36_X0Y84:RAMB36_X7Y95}
add_cells_to_pblock qdrv0_3 [get_cells [list \
plps_0/inst/plpsboard/plsv/qdrvenv0_mem \
plps_0/inst/plpsboard/plsv/qdrvenv1_mem \
plps_0/inst/plpsboard/plsv/qdrvenv2_mem \
plps_0/inst/plpsboard/plsv/qdrvenv3_mem \
plps_0/inst/plpsboard/plsv/qdrvfreq0_mem \
plps_0/inst/plpsboard/plsv/qdrvfreq1_mem \
plps_0/inst/plpsboard/plsv/qdrvfreq2_mem \
plps_0/inst/plpsboard/plsv/qdrvfreq3_mem \
{plps_0/inst/plpsboard/plsv/dsp/procelem[0].qdrvelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[1].qdrvelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[2].qdrvelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[3].qdrvelemconn} \
]] \
-clear_locs

create_pblock qdrv4_7
resize_pblock qdrv4_7 -add {SLICE_X0Y360:SLICE_X80Y419 DSP48E2_X0Y144:DSP48E2_X14Y167 RAMB18_X0Y144:RAMB18_X7Y167 RAMB36_X0Y72:RAMB36_X7Y83}
add_cells_to_pblock \
qdrv4_7 \
[get_cells \
[list \
plps_0/inst/plpsboard/plsv/qdrvenv4_mem \
plps_0/inst/plpsboard/plsv/qdrvenv5_mem \
plps_0/inst/plpsboard/plsv/qdrvenv6_mem \
plps_0/inst/plpsboard/plsv/qdrvenv7_mem \
plps_0/inst/plpsboard/plsv/qdrvfreq4_mem \
plps_0/inst/plpsboard/plsv/qdrvfreq5_mem \
plps_0/inst/plpsboard/plsv/qdrvfreq6_mem \
plps_0/inst/plpsboard/plsv/qdrvfreq7_mem \
{plps_0/inst/plpsboard/plsv/dsp/procelem[4].qdrvelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[5].qdrvelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[6].qdrvelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[7].qdrvelemconn} \
]] \
-clear_locs

#create_pblock qdrv8_11
#resize_pblock qdrv8_11 -add {SLICE_X0Y300:SLICE_X80Y359 DSP48E2_X0Y120:DSP48E2_X14Y143 RAMB18_X0Y120:RAMB18_X7Y143 RAMB36_X0Y60:RAMB36_X7Y71}
#add_cells_to_pblock qdrv8_11 [get_cells [list plps_0/inst/plpsboard/plsv/qdrvenv8_mem plps_0/inst/plpsboard/plsv/qdrvenv9_mem plps_0/inst/plpsboard/plsv/qdrvenv10_mem plps_0/inst/plpsboard/plsv/qdrvenv11_mem]] -clear_locs
#add_cells_to_pblock qdrv8_11 [get_cells [list plps_0/inst/plpsboard/plsv/qdrvfreq8_mem plps_0/inst/plpsboard/plsv/qdrvfreq9_mem plps_0/inst/plpsboard/plsv/qdrvfreq10_mem plps_0/inst/plpsboard/plsv/qdrvfreq11_mem]] -clear_locs
#add_cells_to_pblock qdrv8_11 [get_cells [list {plps_0/inst/plpsboard/plsv/dsp/procelem[8].qdrvelemconn} {plps_0/inst/plpsboard/plsv/dsp/procelem[9].qdrvelemconn} {plps_0/inst/plpsboard/plsv/dsp/procelem[10].qdrvelemconn} {plps_0/inst/plpsboard/plsv/dsp/procelem[11].qdrvelemconn}]] -clear_locs

#create_pblock qdrv12_13
#resize_pblock qdrv12_13 -add {SLICE_X0Y270:SLICE_X80Y299 DSP48E2_X1Y108:DSP48E2_X14Y119 RAMB18_X2Y108:RAMB18_X7Y119 RAMB36_X0Y54:RAMB36_X7Y59}
#add_cells_to_pblock qdrv12_13 [get_cells [list plps_0/inst/plpsboard/plsv/qdrvenv12_mem plps_0/inst/plpsboard/plsv/qdrvenv13_mem]] -clear_locs
#add_cells_to_pblock qdrv12_13 [get_cells [list plps_0/inst/plpsboard/plsv/qdrvfreq12_mem plps_0/inst/plpsboard/plsv/qdrvfreq13_mem]] -clear_locs
#add_cells_to_pblock qdrv12_13 [get_cells [list {plps_0/inst/plpsboard/plsv/dsp/procelem[12].qdrvelemconn} {plps_0/inst/plpsboard/plsv/dsp/procelem[13].qdrvelemconn} {plps_0/inst/plpsboard/plsv/dsp/procelem[14].qdrvelemconn} {plps_0/inst/plpsboard/plsv/dsp/procelem[15].qdrvelemconn}]] -clear_locs

create_pblock rdrv
resize_pblock rdrv -add {SLICE_X0Y180:SLICE_X80Y239 DSP48E2_X1Y72:DSP48E2_X14Y95 RAMB18_X2Y72:RAMB18_X7Y95 RAMB36_X2Y36:RAMB36_X7Y47}
resize_pblock rdrv -add {SLICE_X22Y120:SLICE_X80Y179 DSP48E2_X2Y48:DSP48E2_X14Y71 RAMB18_X2Y48:RAMB18_X7Y71 RAMB36_X2Y24:RAMB36_X7Y35}
resize_pblock rdrv -add {SLICE_X22Y90:SLICE_X80Y119   DSP48E2_X2Y36:DSP48E2_X14Y47   RAMB18_X2Y36:RAMB18_X7Y47   RAMB36_X2Y18:RAMB36_X7Y23}
resize_pblock rdrv -add {SLICE_X22Y60:SLICE_X80Y89   DSP48E2_X2Y24:DSP48E2_X14Y35   RAMB18_X2Y24:RAMB18_X7Y35   RAMB36_X2Y12:RAMB36_X7Y17}
resize_pblock rdrv -add {SLICE_X22Y0:SLICE_X80Y59   DSP48E2_X2Y0:DSP48E2_X14Y23   RAMB18_X2Y0:RAMB18_X7Y23   RAMB36_X2Y0:RAMB36_X7Y11}
add_cells_to_pblock \
rdrv \
[get_cells \
[list \
plps_0/inst/plpsboard/plsv/rdrvenv0_mem \
plps_0/inst/plpsboard/plsv/rdrvenv1_mem \
plps_0/inst/plpsboard/plsv/rdrvenv2_mem \
plps_0/inst/plpsboard/plsv/rdrvenv3_mem \
plps_0/inst/plpsboard/plsv/rdrvenv4_mem \
plps_0/inst/plpsboard/plsv/rdrvenv5_mem \
plps_0/inst/plpsboard/plsv/rdrvenv6_mem \
plps_0/inst/plpsboard/plsv/rdrvenv7_mem \
plps_0/inst/plpsboard/plsv/rdrvfreq0_mem \
plps_0/inst/plpsboard/plsv/rdrvfreq1_mem \
plps_0/inst/plpsboard/plsv/rdrvfreq2_mem \
plps_0/inst/plpsboard/plsv/rdrvfreq3_mem \
plps_0/inst/plpsboard/plsv/rdrvfreq4_mem \
plps_0/inst/plpsboard/plsv/rdrvfreq5_mem \
plps_0/inst/plpsboard/plsv/rdrvfreq6_mem \
plps_0/inst/plpsboard/plsv/rdrvfreq7_mem \
{plps_0/inst/plpsboard/plsv/dsp/procelem[0].rdrvelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[1].rdrvelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[2].rdrvelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[3].rdrvelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[4].rdrvelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[5].rdrvelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[6].rdrvelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[7].rdrvelemconn} \
plps_0/inst/plpsboard/plsv/dsp/rdrvout07 \
]] \
-clear_locs
#plps_0/inst/plpsboard/plsv/rdrvenv8_mem \
#plps_0/inst/plpsboard/plsv/rdrvenv9_mem \
#plps_0/inst/plpsboard/plsv/rdrvenv10_mem \
#plps_0/inst/plpsboard/plsv/rdrvenv11_mem \
#plps_0/inst/plpsboard/plsv/rdrvenv12_mem \
#plps_0/inst/plpsboard/plsv/rdrvenv13_mem \
#plps_0/inst/plpsboard/plsv/rdrvenv14_mem \
#plps_0/inst/plpsboard/plsv/rdrvenv15_mem 
#plps_0/inst/plpsboard/plsv/rdrvfreq8_mem \
#plps_0/inst/plpsboard/plsv/rdrvfreq9_mem \
#plps_0/inst/plpsboard/plsv/rdrvfreq10_mem \
#plps_0/inst/plpsboard/plsv/rdrvfreq11_mem \
#plps_0/inst/plpsboard/plsv/rdrvfreq12_mem \
#plps_0/inst/plpsboard/plsv/rdrvfreq13_mem \
#plps_0/inst/plpsboard/plsv/rdrvfreq14_mem \
#plps_0/inst/plpsboard/plsv/rdrvfreq15_mem 
#{plps_0/inst/plpsboard/plsv/dsp/procelem[8].rdrvelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[9].rdrvelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[10].rdrvelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[11].rdrvelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[12].rdrvelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[13].rdrvelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[14].rdrvelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[15].rdrvelemconn} \
#plps_0/inst/plpsboard/plsv/dsp/rdrvout8f 

create_pblock rdlo
resize_pblock rdlo -add {SLICE_X81Y180:SLICE_X118Y239   DSP48E2_X15Y72:DSP48E2_X22Y95   RAMB18_X8Y72:RAMB18_X11Y95   RAMB36_X8Y36:RAMB36_X11Y47}
resize_pblock rdlo -add {SLICE_X81Y120:SLICE_X118Y179   DSP48E2_X15Y48:DSP48E2_X22Y71   RAMB18_X8Y48:RAMB18_X11Y71   RAMB36_X8Y24:RAMB36_X11Y35}
resize_pblock rdlo -add {SLICE_X81Y60:SLICE_X118Y119   DSP48E2_X15Y24:DSP48E2_X22Y47   RAMB18_X8Y24:RAMB18_X11Y47   RAMB36_X8Y12:RAMB36_X11Y23}
resize_pblock rdlo -add {SLICE_X81Y0:SLICE_X118Y59   DSP48E2_X15Y0:DSP48E2_X22Y23   RAMB18_X8Y0:RAMB18_X11Y23   RAMB36_X8Y0:RAMB36_X11Y11}
add_cells_to_pblock \
rdlo \
[get_cells \
[list \
plps_0/inst/plpsboard/plsv/rdloenv0_mem \
plps_0/inst/plpsboard/plsv/rdloenv1_mem \
plps_0/inst/plpsboard/plsv/rdloenv2_mem \
plps_0/inst/plpsboard/plsv/rdloenv3_mem \
plps_0/inst/plpsboard/plsv/rdloenv4_mem \
plps_0/inst/plpsboard/plsv/rdloenv5_mem \
plps_0/inst/plpsboard/plsv/rdloenv6_mem \
plps_0/inst/plpsboard/plsv/rdloenv7_mem \
plps_0/inst/plpsboard/plsv/rdlofreq0_mem \
plps_0/inst/plpsboard/plsv/rdlofreq1_mem \
plps_0/inst/plpsboard/plsv/rdlofreq2_mem \
plps_0/inst/plpsboard/plsv/rdlofreq3_mem \
plps_0/inst/plpsboard/plsv/rdlofreq4_mem \
plps_0/inst/plpsboard/plsv/rdlofreq5_mem \
plps_0/inst/plpsboard/plsv/rdlofreq6_mem \
plps_0/inst/plpsboard/plsv/rdlofreq7_mem \
{plps_0/inst/plpsboard/plsv/dsp/procelem[0].rdloelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[1].rdloelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[2].rdloelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[3].rdloelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[4].rdloelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[5].rdloelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[6].rdloelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/procelem[7].rdloelemconn} \
{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[0].rdlo0mixacc} \
{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[1].rdlo0mixacc} \
{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[2].rdlo0mixacc} \
{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[3].rdlo0mixacc} \
{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[4].rdlo0mixacc} \
{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[5].rdlo0mixacc} \
{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[6].rdlo0mixacc} \
{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[7].rdlo0mixacc} \
plps_0/inst/plpsboard/plsv/accbuf0_mem \
plps_0/inst/plpsboard/plsv/accbuf1_mem \
plps_0/inst/plpsboard/plsv/accbuf2_mem \
plps_0/inst/plpsboard/plsv/accbuf3_mem \
plps_0/inst/plpsboard/plsv/accbuf4_mem \
plps_0/inst/plpsboard/plsv/accbuf5_mem \
plps_0/inst/plpsboard/plsv/accbuf6_mem \
plps_0/inst/plpsboard/plsv/accbuf7_mem \
]] \
-clear_locs

#plps_0/inst/plpsboard/plsv/rdloenv8_mem \
#plps_0/inst/plpsboard/plsv/rdloenv9_mem \
#plps_0/inst/plpsboard/plsv/rdloenv10_mem \
#plps_0/inst/plpsboard/plsv/rdloenv11_mem \
#plps_0/inst/plpsboard/plsv/rdloenv12_mem \
#plps_0/inst/plpsboard/plsv/rdloenv13_mem \
#plps_0/inst/plpsboard/plsv/rdloenv14_mem \
#plps_0/inst/plpsboard/plsv/rdloenv15_mem 
#plps_0/inst/plpsboard/plsv/rdlofreq8_mem \
#plps_0/inst/plpsboard/plsv/rdlofreq9_mem \
#plps_0/inst/plpsboard/plsv/rdlofreq10_mem \
#plps_0/inst/plpsboard/plsv/rdlofreq11_mem \
#plps_0/inst/plpsboard/plsv/rdlofreq12_mem \
#plps_0/inst/plpsboard/plsv/rdlofreq13_mem \
#plps_0/inst/plpsboard/plsv/rdlofreq14_mem \
#plps_0/inst/plpsboard/plsv/rdlofreq15_mem 
#{plps_0/inst/plpsboard/plsv/dsp/procelem[8].rdloelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[9].rdloelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[10].rdloelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[11].rdloelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[12].rdloelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[13].rdloelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[14].rdloelemconn} \
#{plps_0/inst/plpsboard/plsv/dsp/procelem[15].rdloelemconn} 
#{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[8].rdlo0mixacc} \
#{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[9].rdlo0mixacc} \
#{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[10].rdlo0mixacc} \
#{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[11].rdlo0mixacc} \
#{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[12].rdlo0mixacc} \
#{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[13].rdlo0mixacc} \
#{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[14].rdlo0mixacc} \
#{plps_0/inst/plpsboard/plsv/dsp/rdlomixacc[15].rdlo0mixacc} 
#plps_0/inst/plpsboard/plsv/accbuf8_mem \
#plps_0/inst/plpsboard/plsv/accbuf9_mem \
#plps_0/inst/plpsboard/plsv/accbuf10_mem \
#plps_0/inst/plpsboard/plsv/accbuf11_mem \
#plps_0/inst/plpsboard/plsv/accbuf12_mem \
#plps_0/inst/plpsboard/plsv/accbuf13_mem \
#plps_0/inst/plpsboard/plsv/accbuf14_mem \
#plps_0/inst/plpsboard/plsv/accbuf15_mem 

#place_design -directive Explore
#delete_pblocks qdrv0_3 qdrv4_7 qdrv8_11 qdrv12_13 rdrv rdlo
