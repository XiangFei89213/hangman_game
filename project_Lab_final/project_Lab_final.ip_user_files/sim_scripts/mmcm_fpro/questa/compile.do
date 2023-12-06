vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/xpm
vlib questa_lib/msim/xil_defaultlib

vmap xpm questa_lib/msim/xpm
vmap xil_defaultlib questa_lib/msim/xil_defaultlib

vlog -work xpm -64 -sv "+incdir+../../../ipstatic" \
"C:/MY_APPS/Xillinx/Vivado/2019.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"C:/MY_APPS/Xillinx/Vivado/2019.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -64 -93 \
"C:/MY_APPS/Xillinx/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work xil_defaultlib -64 "+incdir+../../../ipstatic" \
"../../../../project_Lab_final.srcs/sources_1/ip/mmcm_fpro/mmcm_fpro_clk_wiz.v" \
"../../../../project_Lab_final.srcs/sources_1/ip/mmcm_fpro/mmcm_fpro.v" \

vlog -work xil_defaultlib \
"glbl.v"

