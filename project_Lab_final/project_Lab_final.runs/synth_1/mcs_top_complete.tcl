# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
proc create_report { reportName command } {
  set status "."
  append status $reportName ".fail"
  if { [file exists $status] } {
    eval file delete [glob $status]
  }
  send_msg_id runtcl-4 info "Executing : $command"
  set retval [eval catch { $command } msg]
  if { $retval != 0 } {
    set fp [open $status w]
    close $fp
    send_msg_id runtcl-5 warning "$msg"
  }
}
set_param chipscope.maxJobs 5
set_msg_config  -id {[BD 41-1306]}  -suppress 
set_msg_config  -id {[BD 41-1271]}  -suppress 
create_project -in_memory -part xc7a100tcsg324-1

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir C:/vitis_project/project_Lab_final/project_Lab_final.cache/wt [current_project]
set_property parent.project_path C:/vitis_project/project_Lab_final/project_Lab_final.xpr [current_project]
set_property XPM_LIBRARIES {XPM_CDC XPM_MEMORY} [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property board_part_repo_paths {C:/Users/yusop/AppData/Roaming/Xilinx/Vivado/2019.2/xhub/board_store} [current_project]
set_property board_part digilentinc.com:nexys4_ddr:part0:1.1 [current_project]
set_property ip_output_repo c:/vitis_project/project_Lab_final/project_Lab_final.cache/ip [current_project]
set_property ip_cache_permissions {read write} [current_project]
read_verilog C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_io_map.svh
set_property file_type "Verilog Header" [get_files C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_io_map.svh]
read_mem {
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/new/ghost_bitmap.mem
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/new/mouse_pointer.mem
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/new/sin_table.mem
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/new/font.mem
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/new/hangman_bitmap.mem
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/new/a.mem
}
read_verilog -library xil_defaultlib -sv {
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/adsr.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/bar_src.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/uart/baud_gen.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/bram_fifo_fpro.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_adsr_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_ddfs_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_debounce_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_frame_buffer_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_gpi.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_gpo.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_i2c_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_io_pwm_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_led_mux_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/new/chu_mcs_bridge.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_mmio_controller.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_ps2_core.sv
  {C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_rgb2gray_core .sv}
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_spi_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_timer.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/uart/chu_uart.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/new/chu_vag_hangman_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_vga_bar_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_vga_dummy_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_vga_osd_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_vga_sprite_ghost_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_vga_sprite_mouse_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_vga_sync_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_video_controller.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/chu_xadc_core.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/ddfs.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/debounce_counter.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/debounce_fsm.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/ds_1bit_dac.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/fifo/fifo.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/fifo/fifo_ctrl.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/font_rom.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/frame_counter.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/frame_palette.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/frame_src.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/ghost_ram.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/ghost_src.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/new/hangman_ram.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/new/hangman_src.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/i2c_master.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/led_mux8.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/line_buffer.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/new/mmio_sys_sampler.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/moue_ram.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/mouse_src.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/osd_src.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/ps2_top.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/ps2rx.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/ps2tx.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/ram320K.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/fifo/reg_file.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/rgb2gray.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/sin_rom.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/spi.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/sync_rw_port_ram.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/uart/uart.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/uart/uart_rx.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/uart/uart_tx.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/vga_sync.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/new/video_sys_daisy.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/imports/HDL/xadc_fpro.sv
  C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/new/mcs_top_complete.sv
}
read_ip -quiet C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/mmcm_fpro/mmcm_fpro.xci
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/mmcm_fpro/mmcm_fpro_board.xdc]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/mmcm_fpro/mmcm_fpro.xdc]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/mmcm_fpro/mmcm_fpro_ooc.xdc]

read_ip -quiet C:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/cpu.xci
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/bd_0/ip/ip_0/bd_3914_microblaze_I_0.xdc]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/bd_0/ip/ip_0/bd_3914_microblaze_I_0_ooc_debug.xdc]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/bd_0/ip/ip_1/bd_3914_rst_0_0_board.xdc]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/bd_0/ip/ip_1/bd_3914_rst_0_0.xdc]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/bd_0/ip/ip_2/bd_3914_ilmb_0.xdc]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/bd_0/ip/ip_3/bd_3914_dlmb_0.xdc]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/bd_0/ip/ip_6/bd_3914_lmb_bram_I_0_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/bd_0/ip/ip_7/bd_3914_iomodule_0_0_board.xdc]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/bd_0/bd_3914_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/cpu_board.xdc]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/cpu_ooc.xdc]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/bd_0/ip/ip_0/data/mb_bootloop_le.elf]
set_property used_in_implementation false [get_files -all c:/vitis_project/project_Lab_final/project_Lab_final.srcs/sources_1/ip/cpu_1/mb_bootloop_le.elf]

# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc {{C:/vitis_project/project_Lab_final/project_Lab_final.srcs/constrs_1/imports/M15 to M18 - Complete System/Nexys4_DDR_chu.xdc}}
set_property used_in_implementation false [get_files {{C:/vitis_project/project_Lab_final/project_Lab_final.srcs/constrs_1/imports/M15 to M18 - Complete System/Nexys4_DDR_chu.xdc}}]

set_param ips.enableIPCacheLiteLoad 1
close [open __synthesis_is_running__ w]

synth_design -top mcs_top_complete -part xc7a100tcsg324-1


# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef mcs_top_complete.dcp
create_report "synth_1_synth_report_utilization_0" "report_utilization -file mcs_top_complete_utilization_synth.rpt -pb mcs_top_complete_utilization_synth.pb"
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]
