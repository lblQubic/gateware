proc bramwithctrl {bramname Awidth Adepth Bwidth latency} {
	incr $Awidth 0
	incr $Adepth 0
	incr $Bwidth 0
	incr $latency 0
	create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 ${bramname}_ctrl
	create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 ${bramname}_mem
	set_property -dict [list CONFIG.READ_LATENCY ${latency} CONFIG.SINGLE_PORT_BRAM {1} CONFIG.DATA_WIDTH ${Awidth}] [get_bd_cells ${bramname}_ctrl]
	set_property -dict [list CONFIG.use_bram_block {Stand_Alone} CONFIG.Memory_Type {True_Dual_Port_RAM} CONFIG.Write_Depth_A ${Adepth} CONFIG.Write_Width_A ${Awidth} CONFIG.Read_Width_A ${Awidth} CONFIG.Write_Width_B ${Bwidth} CONFIG.Read_Width_B ${Bwidth} CONFIG.Enable_32bit_Address {true} CONFIG.Use_Byte_Write_Enable {true} CONFIG.Byte_Size {8} CONFIG.Use_RSTA_Pin {false} CONFIG.Use_RSTB_Pin {false} CONFIG.Enable_A {Always_Enabled} CONFIG.Enable_B {Always_Enabled} CONFIG.EN_SAFETY_CKT {false}] [get_bd_cells ${bramname}_mem]
}
bramwithctrl accbuf0 64 1024 32 2
bramwithctrl accbuf1 64 1024 32 2
bramwithctrl accbuf2 64 1024 32 2
bramwithctrl acqbuf0 64 4096 32 2
bramwithctrl acqbuf1 64 4096 32 2
bramwithctrl command0 32 8192 128 2
bramwithctrl command1 32 8192 128 2
bramwithctrl command2 32 8192 128 2
bramwithctrl dacmon0 256 512 32 2
bramwithctrl dacmon1 256 512 32 2
bramwithctrl dacmon2 256 512 32 2
bramwithctrl dacmon3 256 512 32 2
bramwithctrl qdrvenv0 32 4096 512 2
bramwithctrl qdrvenv1 32 4096 512 2
bramwithctrl qdrvenv2 32 4096 512 2
bramwithctrl qdrvfreq0 32 8192 512 2
bramwithctrl qdrvfreq1 32 8192 512 2
bramwithctrl qdrvfreq2 32 8192 512 2
bramwithctrl rdloenv0 32 4096 32 2
bramwithctrl rdloenv1 32 4096 32 2
bramwithctrl rdloenv2 32 4096 32 2
bramwithctrl rdlofreq0 32 2048 128 2
bramwithctrl rdlofreq1 32 2048 128 2
bramwithctrl rdlofreq2 32 2048 128 2
bramwithctrl rdrvenv0 32 4096 32 2
bramwithctrl rdrvenv1 32 4096 32 2
bramwithctrl rdrvenv2 32 4096 32 2
bramwithctrl rdrvfreq0 32 8192 512 2
bramwithctrl rdrvfreq1 32 8192 512 2
bramwithctrl rdrvfreq2 32 8192 512 2