vlib work
vlib riviera

vlib riviera/xpm
vlib riviera/xil_defaultlib

vmap xpm riviera/xpm
vmap xil_defaultlib riviera/xil_defaultlib

vlog -work xpm  -sv2k12 "+incdir+../../../ipstatic" \
"C:/MY_APPS/Xillinx/Vivado/2019.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"C:/MY_APPS/Xillinx/Vivado/2019.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93 \
"C:/MY_APPS/Xillinx/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../ipstatic" \
"../../../../project_Lab_final.srcs/sources_1/ip/mmcm_fpro/mmcm_fpro_clk_wiz.v" \
"../../../../project_Lab_final.srcs/sources_1/ip/mmcm_fpro/mmcm_fpro.v" \

vlog -work xil_defaultlib \
"glbl.v"

