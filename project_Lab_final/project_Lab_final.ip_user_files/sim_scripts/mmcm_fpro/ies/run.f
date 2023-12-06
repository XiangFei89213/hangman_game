-makelib ies_lib/xpm -sv \
  "C:/MY_APPS/Xillinx/Vivado/2019.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
  "C:/MY_APPS/Xillinx/Vivado/2019.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \
-endlib
-makelib ies_lib/xpm \
  "C:/MY_APPS/Xillinx/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../../project_Lab_final.srcs/sources_1/ip/mmcm_fpro/mmcm_fpro_clk_wiz.v" \
  "../../../../project_Lab_final.srcs/sources_1/ip/mmcm_fpro/mmcm_fpro.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  glbl.v
-endlib

