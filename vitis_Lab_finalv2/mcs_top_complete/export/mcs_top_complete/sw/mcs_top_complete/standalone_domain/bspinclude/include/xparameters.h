#ifndef XPARAMETERS_H   /* prevent circular inclusions */
#define XPARAMETERS_H   /* by using protection macros */

/* Definitions for bus frequencies */
/******************************************************************/

/* Canonical definitions for bus frequencies */
/******************************************************************/

#define XPAR_CPU_CORE_CLOCK_FREQ_HZ 100000000
#define XPAR_MICROBLAZE_CORE_CLOCK_FREQ_HZ 100000000

/******************************************************************/


/* Definitions for peripheral MICROBLAZE_I */
#define XPAR_MICROBLAZE_I_ADDR_SIZE 32
#define XPAR_MICROBLAZE_I_ADDR_TAG_BITS 0
#define XPAR_MICROBLAZE_I_ALLOW_DCACHE_WR 1
#define XPAR_MICROBLAZE_I_ALLOW_ICACHE_WR 1
#define XPAR_MICROBLAZE_I_AREA_OPTIMIZED 1
#define XPAR_MICROBLAZE_I_ASYNC_INTERRUPT 1
#define XPAR_MICROBLAZE_I_ASYNC_WAKEUP 3
#define XPAR_MICROBLAZE_I_AVOID_PRIMITIVES 0
#define XPAR_MICROBLAZE_I_BASE_VECTORS 0x0000000000000000
#define XPAR_MICROBLAZE_I_BRANCH_TARGET_CACHE_SIZE 0
#define XPAR_MICROBLAZE_I_CACHE_BYTE_SIZE 8192
#define XPAR_MICROBLAZE_I_DADDR_SIZE 32
#define XPAR_MICROBLAZE_I_DATA_SIZE 32
#define XPAR_MICROBLAZE_I_DCACHE_ADDR_TAG 0
#define XPAR_MICROBLAZE_I_DCACHE_ALWAYS_USED 1
#define XPAR_MICROBLAZE_I_DCACHE_BASEADDR 0x00000000
#define XPAR_MICROBLAZE_I_DCACHE_BYTE_SIZE 8192
#define XPAR_MICROBLAZE_I_DCACHE_DATA_WIDTH 0
#define XPAR_MICROBLAZE_I_DCACHE_FORCE_TAG_LUTRAM 0
#define XPAR_MICROBLAZE_I_DCACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_MICROBLAZE_I_DCACHE_LINE_LEN 4
#define XPAR_MICROBLAZE_I_DCACHE_USE_WRITEBACK 0
#define XPAR_MICROBLAZE_I_DCACHE_VICTIMS 0
#define XPAR_MICROBLAZE_I_DC_AXI_MON 0
#define XPAR_MICROBLAZE_I_DEBUG_COUNTER_WIDTH 32
#define XPAR_MICROBLAZE_I_DEBUG_ENABLED 0
#define XPAR_MICROBLAZE_I_DEBUG_EVENT_COUNTERS 5
#define XPAR_MICROBLAZE_I_DEBUG_EXTERNAL_TRACE 0
#define XPAR_MICROBLAZE_I_DEBUG_INTERFACE 0
#define XPAR_MICROBLAZE_I_DEBUG_LATENCY_COUNTERS 1
#define XPAR_MICROBLAZE_I_DEBUG_PROFILE_SIZE 0
#define XPAR_MICROBLAZE_I_DEBUG_TRACE_ASYNC_RESET 0
#define XPAR_MICROBLAZE_I_DEBUG_TRACE_SIZE 8192
#define XPAR_MICROBLAZE_I_DIV_ZERO_EXCEPTION 0
#define XPAR_MICROBLAZE_I_DP_AXI_MON 0
#define XPAR_MICROBLAZE_I_DYNAMIC_BUS_SIZING 0
#define XPAR_MICROBLAZE_I_D_AXI 0
#define XPAR_MICROBLAZE_I_D_LMB 1
#define XPAR_MICROBLAZE_I_D_LMB_MON 0
#define XPAR_MICROBLAZE_I_D_LMB_PROTOCOL 0
#define XPAR_MICROBLAZE_I_ECC_USE_CE_EXCEPTION 0
#define XPAR_MICROBLAZE_I_EDGE_IS_POSITIVE 1
#define XPAR_MICROBLAZE_I_ENABLE_DISCRETE_PORTS 0
#define XPAR_MICROBLAZE_I_ENDIANNESS 1
#define XPAR_MICROBLAZE_I_FAULT_TOLERANT 0
#define XPAR_MICROBLAZE_I_FPU_EXCEPTION 0
#define XPAR_MICROBLAZE_I_FREQ 100000000
#define XPAR_MICROBLAZE_I_FSL_EXCEPTION 0
#define XPAR_MICROBLAZE_I_FSL_LINKS 0
#define XPAR_MICROBLAZE_I_IADDR_SIZE 32
#define XPAR_MICROBLAZE_I_ICACHE_ALWAYS_USED 1
#define XPAR_MICROBLAZE_I_ICACHE_BASEADDR 0x00000000
#define XPAR_MICROBLAZE_I_ICACHE_DATA_WIDTH 0
#define XPAR_MICROBLAZE_I_ICACHE_FORCE_TAG_LUTRAM 0
#define XPAR_MICROBLAZE_I_ICACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_MICROBLAZE_I_ICACHE_LINE_LEN 4
#define XPAR_MICROBLAZE_I_ICACHE_STREAMS 0
#define XPAR_MICROBLAZE_I_ICACHE_VICTIMS 0
#define XPAR_MICROBLAZE_I_IC_AXI_MON 0
#define XPAR_MICROBLAZE_I_ILL_OPCODE_EXCEPTION 0
#define XPAR_MICROBLAZE_I_IMPRECISE_EXCEPTIONS 0
#define XPAR_MICROBLAZE_I_INSTR_SIZE 32
#define XPAR_MICROBLAZE_I_INTERCONNECT 2
#define XPAR_MICROBLAZE_I_INTERRUPT_IS_EDGE 0
#define XPAR_MICROBLAZE_I_INTERRUPT_MON 0
#define XPAR_MICROBLAZE_I_IP_AXI_MON 0
#define XPAR_MICROBLAZE_I_I_AXI 0
#define XPAR_MICROBLAZE_I_I_LMB 1
#define XPAR_MICROBLAZE_I_I_LMB_MON 0
#define XPAR_MICROBLAZE_I_I_LMB_PROTOCOL 0
#define XPAR_MICROBLAZE_I_LMB_DATA_SIZE 32
#define XPAR_MICROBLAZE_I_LOCKSTEP_MASTER 0
#define XPAR_MICROBLAZE_I_LOCKSTEP_SELECT 0
#define XPAR_MICROBLAZE_I_LOCKSTEP_SLAVE 0
#define XPAR_MICROBLAZE_I_M0_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M0_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M1_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M1_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M2_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M2_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M3_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M3_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M4_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M4_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M5_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M5_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M6_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M6_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M7_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M7_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M8_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M8_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M9_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M9_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M10_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M10_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M11_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M11_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M12_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M12_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M13_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M13_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M14_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M14_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_M15_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M15_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_MMU_DTLB_SIZE 4
#define XPAR_MICROBLAZE_I_MMU_ITLB_SIZE 2
#define XPAR_MICROBLAZE_I_MMU_PRIVILEGED_INSTR 0
#define XPAR_MICROBLAZE_I_MMU_TLB_ACCESS 3
#define XPAR_MICROBLAZE_I_MMU_ZONES 16
#define XPAR_MICROBLAZE_I_M_AXI_DC_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_I_M_AXI_DC_ARUSER_WIDTH 5
#define XPAR_MICROBLAZE_I_M_AXI_DC_AWUSER_WIDTH 5
#define XPAR_MICROBLAZE_I_M_AXI_DC_BUSER_WIDTH 1
#define XPAR_MICROBLAZE_I_M_AXI_DC_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M_AXI_DC_EXCLUSIVE_ACCESS 0
#define XPAR_MICROBLAZE_I_M_AXI_DC_RUSER_WIDTH 1
#define XPAR_MICROBLAZE_I_M_AXI_DC_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_I_M_AXI_DC_USER_SIGNALS 0
#define XPAR_MICROBLAZE_I_M_AXI_DC_USER_VALUE 31
#define XPAR_MICROBLAZE_I_M_AXI_DC_WUSER_WIDTH 1
#define XPAR_MICROBLAZE_I_M_AXI_DP_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_I_M_AXI_DP_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M_AXI_DP_EXCLUSIVE_ACCESS 0
#define XPAR_MICROBLAZE_I_M_AXI_DP_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_I_M_AXI_D_BUS_EXCEPTION 0
#define XPAR_MICROBLAZE_I_M_AXI_IC_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_I_M_AXI_IC_ARUSER_WIDTH 5
#define XPAR_MICROBLAZE_I_M_AXI_IC_AWUSER_WIDTH 5
#define XPAR_MICROBLAZE_I_M_AXI_IC_BUSER_WIDTH 1
#define XPAR_MICROBLAZE_I_M_AXI_IC_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M_AXI_IC_RUSER_WIDTH 1
#define XPAR_MICROBLAZE_I_M_AXI_IC_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_I_M_AXI_IC_USER_SIGNALS 0
#define XPAR_MICROBLAZE_I_M_AXI_IC_USER_VALUE 31
#define XPAR_MICROBLAZE_I_M_AXI_IC_WUSER_WIDTH 1
#define XPAR_MICROBLAZE_I_M_AXI_IP_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_I_M_AXI_IP_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_M_AXI_IP_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_I_M_AXI_I_BUS_EXCEPTION 0
#define XPAR_MICROBLAZE_I_NUMBER_OF_PC_BRK 1
#define XPAR_MICROBLAZE_I_NUMBER_OF_RD_ADDR_BRK 0
#define XPAR_MICROBLAZE_I_NUMBER_OF_WR_ADDR_BRK 0
#define XPAR_MICROBLAZE_I_NUM_SYNC_FF_CLK 2
#define XPAR_MICROBLAZE_I_NUM_SYNC_FF_CLK_DEBUG 2
#define XPAR_MICROBLAZE_I_NUM_SYNC_FF_CLK_IRQ 1
#define XPAR_MICROBLAZE_I_NUM_SYNC_FF_DBG_CLK 1
#define XPAR_MICROBLAZE_I_NUM_SYNC_FF_DBG_TRACE_CLK 2
#define XPAR_MICROBLAZE_I_OPCODE_0X0_ILLEGAL 0
#define XPAR_MICROBLAZE_I_OPTIMIZATION 0
#define XPAR_MICROBLAZE_I_PC_WIDTH 17
#define XPAR_MICROBLAZE_I_PIADDR_SIZE 32
#define XPAR_MICROBLAZE_I_PVR 0
#define XPAR_MICROBLAZE_I_PVR_USER1 0x00
#define XPAR_MICROBLAZE_I_PVR_USER2 0x00000000
#define XPAR_MICROBLAZE_I_RESET_MSR 0x00000000
#define XPAR_MICROBLAZE_I_RESET_MSR_BIP 0
#define XPAR_MICROBLAZE_I_RESET_MSR_DCE 0
#define XPAR_MICROBLAZE_I_RESET_MSR_EE 0
#define XPAR_MICROBLAZE_I_RESET_MSR_EIP 0
#define XPAR_MICROBLAZE_I_RESET_MSR_ICE 0
#define XPAR_MICROBLAZE_I_RESET_MSR_IE 0
#define XPAR_MICROBLAZE_I_S0_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S0_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S1_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S1_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S2_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S2_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S3_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S3_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S4_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S4_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S5_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S5_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S6_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S6_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S7_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S7_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S8_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S8_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S9_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S9_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S10_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S10_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S11_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S11_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S12_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S12_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S13_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S13_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S14_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S14_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_S15_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_I_S15_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_I_SCO 0
#define XPAR_MICROBLAZE_I_TRACE 0
#define XPAR_MICROBLAZE_I_UNALIGNED_EXCEPTIONS 0
#define XPAR_MICROBLAZE_I_USE_BARREL 0
#define XPAR_MICROBLAZE_I_USE_BRANCH_TARGET_CACHE 0
#define XPAR_MICROBLAZE_I_USE_CONFIG_RESET 0
#define XPAR_MICROBLAZE_I_USE_DCACHE 0
#define XPAR_MICROBLAZE_I_USE_DIV 0
#define XPAR_MICROBLAZE_I_USE_EXTENDED_FSL_INSTR 0
#define XPAR_MICROBLAZE_I_USE_EXT_BRK 0
#define XPAR_MICROBLAZE_I_USE_EXT_NM_BRK 0
#define XPAR_MICROBLAZE_I_USE_FPU 0
#define XPAR_MICROBLAZE_I_USE_HW_MUL 0
#define XPAR_MICROBLAZE_I_USE_ICACHE 0
#define XPAR_MICROBLAZE_I_USE_INTERRUPT 0
#define XPAR_MICROBLAZE_I_USE_MMU 0
#define XPAR_MICROBLAZE_I_USE_MSR_INSTR 0
#define XPAR_MICROBLAZE_I_USE_NON_SECURE 0
#define XPAR_MICROBLAZE_I_USE_PCMP_INSTR 0
#define XPAR_MICROBLAZE_I_USE_REORDER_INSTR 0
#define XPAR_MICROBLAZE_I_USE_STACK_PROTECTION 0
#define XPAR_MICROBLAZE_I_COMPONENT_NAME bd_3914_microblaze_I_0
#define XPAR_MICROBLAZE_I_EDK_IPTYPE PROCESSOR
#define XPAR_MICROBLAZE_I_EDK_SPECIAL microblaze
#define XPAR_MICROBLAZE_I_G_TEMPLATE_LIST 0
#define XPAR_MICROBLAZE_I_G_USE_EXCEPTIONS 0

/******************************************************************/

#define XPAR_CPU_ID 0
#define XPAR_MICROBLAZE_ID 0
#define XPAR_MICROBLAZE_ADDR_SIZE 32
#define XPAR_MICROBLAZE_ADDR_TAG_BITS 0
#define XPAR_MICROBLAZE_ALLOW_DCACHE_WR 1
#define XPAR_MICROBLAZE_ALLOW_ICACHE_WR 1
#define XPAR_MICROBLAZE_AREA_OPTIMIZED 1
#define XPAR_MICROBLAZE_ASYNC_INTERRUPT 1
#define XPAR_MICROBLAZE_ASYNC_WAKEUP 3
#define XPAR_MICROBLAZE_AVOID_PRIMITIVES 0
#define XPAR_MICROBLAZE_BASE_VECTORS 0x0000000000000000
#define XPAR_MICROBLAZE_BRANCH_TARGET_CACHE_SIZE 0
#define XPAR_MICROBLAZE_CACHE_BYTE_SIZE 8192
#define XPAR_MICROBLAZE_DADDR_SIZE 32
#define XPAR_MICROBLAZE_DATA_SIZE 32
#define XPAR_MICROBLAZE_DCACHE_ADDR_TAG 0
#define XPAR_MICROBLAZE_DCACHE_ALWAYS_USED 1
#define XPAR_MICROBLAZE_DCACHE_BASEADDR 0x00000000
#define XPAR_MICROBLAZE_DCACHE_BYTE_SIZE 8192
#define XPAR_MICROBLAZE_DCACHE_DATA_WIDTH 0
#define XPAR_MICROBLAZE_DCACHE_FORCE_TAG_LUTRAM 0
#define XPAR_MICROBLAZE_DCACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_MICROBLAZE_DCACHE_LINE_LEN 4
#define XPAR_MICROBLAZE_DCACHE_USE_WRITEBACK 0
#define XPAR_MICROBLAZE_DCACHE_VICTIMS 0
#define XPAR_MICROBLAZE_DC_AXI_MON 0
#define XPAR_MICROBLAZE_DEBUG_COUNTER_WIDTH 32
#define XPAR_MICROBLAZE_DEBUG_ENABLED 0
#define XPAR_MICROBLAZE_DEBUG_EVENT_COUNTERS 5
#define XPAR_MICROBLAZE_DEBUG_EXTERNAL_TRACE 0
#define XPAR_MICROBLAZE_DEBUG_INTERFACE 0
#define XPAR_MICROBLAZE_DEBUG_LATENCY_COUNTERS 1
#define XPAR_MICROBLAZE_DEBUG_PROFILE_SIZE 0
#define XPAR_MICROBLAZE_DEBUG_TRACE_ASYNC_RESET 0
#define XPAR_MICROBLAZE_DEBUG_TRACE_SIZE 8192
#define XPAR_MICROBLAZE_DIV_ZERO_EXCEPTION 0
#define XPAR_MICROBLAZE_DP_AXI_MON 0
#define XPAR_MICROBLAZE_DYNAMIC_BUS_SIZING 0
#define XPAR_MICROBLAZE_D_AXI 0
#define XPAR_MICROBLAZE_D_LMB 1
#define XPAR_MICROBLAZE_D_LMB_MON 0
#define XPAR_MICROBLAZE_D_LMB_PROTOCOL 0
#define XPAR_MICROBLAZE_ECC_USE_CE_EXCEPTION 0
#define XPAR_MICROBLAZE_EDGE_IS_POSITIVE 1
#define XPAR_MICROBLAZE_ENABLE_DISCRETE_PORTS 0
#define XPAR_MICROBLAZE_ENDIANNESS 1
#define XPAR_MICROBLAZE_FAULT_TOLERANT 0
#define XPAR_MICROBLAZE_FPU_EXCEPTION 0
#define XPAR_MICROBLAZE_FREQ 100000000
#define XPAR_MICROBLAZE_FSL_EXCEPTION 0
#define XPAR_MICROBLAZE_FSL_LINKS 0
#define XPAR_MICROBLAZE_IADDR_SIZE 32
#define XPAR_MICROBLAZE_ICACHE_ALWAYS_USED 1
#define XPAR_MICROBLAZE_ICACHE_BASEADDR 0x00000000
#define XPAR_MICROBLAZE_ICACHE_DATA_WIDTH 0
#define XPAR_MICROBLAZE_ICACHE_FORCE_TAG_LUTRAM 0
#define XPAR_MICROBLAZE_ICACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_MICROBLAZE_ICACHE_LINE_LEN 4
#define XPAR_MICROBLAZE_ICACHE_STREAMS 0
#define XPAR_MICROBLAZE_ICACHE_VICTIMS 0
#define XPAR_MICROBLAZE_IC_AXI_MON 0
#define XPAR_MICROBLAZE_ILL_OPCODE_EXCEPTION 0
#define XPAR_MICROBLAZE_IMPRECISE_EXCEPTIONS 0
#define XPAR_MICROBLAZE_INSTR_SIZE 32
#define XPAR_MICROBLAZE_INTERCONNECT 2
#define XPAR_MICROBLAZE_INTERRUPT_IS_EDGE 0
#define XPAR_MICROBLAZE_INTERRUPT_MON 0
#define XPAR_MICROBLAZE_IP_AXI_MON 0
#define XPAR_MICROBLAZE_I_AXI 0
#define XPAR_MICROBLAZE_I_LMB 1
#define XPAR_MICROBLAZE_I_LMB_MON 0
#define XPAR_MICROBLAZE_I_LMB_PROTOCOL 0
#define XPAR_MICROBLAZE_LMB_DATA_SIZE 32
#define XPAR_MICROBLAZE_LOCKSTEP_MASTER 0
#define XPAR_MICROBLAZE_LOCKSTEP_SELECT 0
#define XPAR_MICROBLAZE_LOCKSTEP_SLAVE 0
#define XPAR_MICROBLAZE_M0_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M0_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M1_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M1_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M2_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M2_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M3_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M3_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M4_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M4_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M5_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M5_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M6_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M6_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M7_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M7_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M8_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M8_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M9_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M9_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M10_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M10_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M11_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M11_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M12_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M12_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M13_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M13_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M14_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M14_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M15_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M15_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_MMU_DTLB_SIZE 4
#define XPAR_MICROBLAZE_MMU_ITLB_SIZE 2
#define XPAR_MICROBLAZE_MMU_PRIVILEGED_INSTR 0
#define XPAR_MICROBLAZE_MMU_TLB_ACCESS 3
#define XPAR_MICROBLAZE_MMU_ZONES 16
#define XPAR_MICROBLAZE_M_AXI_DC_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DC_ARUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_DC_AWUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_DC_BUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DC_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DC_EXCLUSIVE_ACCESS 0
#define XPAR_MICROBLAZE_M_AXI_DC_RUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DC_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DC_USER_SIGNALS 0
#define XPAR_MICROBLAZE_M_AXI_DC_USER_VALUE 31
#define XPAR_MICROBLAZE_M_AXI_DC_WUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DP_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DP_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DP_EXCLUSIVE_ACCESS 0
#define XPAR_MICROBLAZE_M_AXI_DP_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_D_BUS_EXCEPTION 0
#define XPAR_MICROBLAZE_M_AXI_IC_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IC_ARUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_IC_AWUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_IC_BUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IC_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IC_RUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IC_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IC_USER_SIGNALS 0
#define XPAR_MICROBLAZE_M_AXI_IC_USER_VALUE 31
#define XPAR_MICROBLAZE_M_AXI_IC_WUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IP_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IP_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IP_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_I_BUS_EXCEPTION 0
#define XPAR_MICROBLAZE_NUMBER_OF_PC_BRK 1
#define XPAR_MICROBLAZE_NUMBER_OF_RD_ADDR_BRK 0
#define XPAR_MICROBLAZE_NUMBER_OF_WR_ADDR_BRK 0
#define XPAR_MICROBLAZE_NUM_SYNC_FF_CLK 2
#define XPAR_MICROBLAZE_NUM_SYNC_FF_CLK_DEBUG 2
#define XPAR_MICROBLAZE_NUM_SYNC_FF_CLK_IRQ 1
#define XPAR_MICROBLAZE_NUM_SYNC_FF_DBG_CLK 1
#define XPAR_MICROBLAZE_NUM_SYNC_FF_DBG_TRACE_CLK 2
#define XPAR_MICROBLAZE_OPCODE_0X0_ILLEGAL 0
#define XPAR_MICROBLAZE_OPTIMIZATION 0
#define XPAR_MICROBLAZE_PC_WIDTH 17
#define XPAR_MICROBLAZE_PIADDR_SIZE 32
#define XPAR_MICROBLAZE_PVR 0
#define XPAR_MICROBLAZE_PVR_USER1 0x00
#define XPAR_MICROBLAZE_PVR_USER2 0x00000000
#define XPAR_MICROBLAZE_RESET_MSR 0x00000000
#define XPAR_MICROBLAZE_RESET_MSR_BIP 0
#define XPAR_MICROBLAZE_RESET_MSR_DCE 0
#define XPAR_MICROBLAZE_RESET_MSR_EE 0
#define XPAR_MICROBLAZE_RESET_MSR_EIP 0
#define XPAR_MICROBLAZE_RESET_MSR_ICE 0
#define XPAR_MICROBLAZE_RESET_MSR_IE 0
#define XPAR_MICROBLAZE_S0_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S0_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S1_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S1_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S2_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S2_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S3_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S3_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S4_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S4_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S5_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S5_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S6_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S6_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S7_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S7_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S8_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S8_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S9_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S9_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S10_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S10_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S11_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S11_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S12_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S12_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S13_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S13_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S14_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S14_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S15_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S15_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_SCO 0
#define XPAR_MICROBLAZE_TRACE 0
#define XPAR_MICROBLAZE_UNALIGNED_EXCEPTIONS 0
#define XPAR_MICROBLAZE_USE_BARREL 0
#define XPAR_MICROBLAZE_USE_BRANCH_TARGET_CACHE 0
#define XPAR_MICROBLAZE_USE_CONFIG_RESET 0
#define XPAR_MICROBLAZE_USE_DCACHE 0
#define XPAR_MICROBLAZE_USE_DIV 0
#define XPAR_MICROBLAZE_USE_EXTENDED_FSL_INSTR 0
#define XPAR_MICROBLAZE_USE_EXT_BRK 0
#define XPAR_MICROBLAZE_USE_EXT_NM_BRK 0
#define XPAR_MICROBLAZE_USE_FPU 0
#define XPAR_MICROBLAZE_USE_HW_MUL 0
#define XPAR_MICROBLAZE_USE_ICACHE 0
#define XPAR_MICROBLAZE_USE_INTERRUPT 0
#define XPAR_MICROBLAZE_USE_MMU 0
#define XPAR_MICROBLAZE_USE_MSR_INSTR 0
#define XPAR_MICROBLAZE_USE_NON_SECURE 0
#define XPAR_MICROBLAZE_USE_PCMP_INSTR 0
#define XPAR_MICROBLAZE_USE_REORDER_INSTR 0
#define XPAR_MICROBLAZE_USE_STACK_PROTECTION 0
#define XPAR_MICROBLAZE_COMPONENT_NAME bd_3914_microblaze_I_0
#define XPAR_MICROBLAZE_EDK_IPTYPE PROCESSOR
#define XPAR_MICROBLAZE_EDK_SPECIAL microblaze
#define XPAR_MICROBLAZE_G_TEMPLATE_LIST 0
#define XPAR_MICROBLAZE_G_USE_EXCEPTIONS 0

/******************************************************************/

#define STDIN_BASEADDRESS 0x80000000
#define STDOUT_BASEADDRESS 0x80000000

/******************************************************************/

/* Platform specific definitions */
#define PLATFORM_MB
 
/* Definitions for sleep timer configuration */
#define XSLEEP_TIMER_IS_DEFAULT_TIMER
 
 
/******************************************************************/
/* Definitions for driver BRAM */
#define XPAR_XBRAM_NUM_INSTANCES 2U

/* Definitions for peripheral DLMB_CNTLR */
#define XPAR_DLMB_CNTLR_DEVICE_ID 0U
#define XPAR_DLMB_CNTLR_DATA_WIDTH 32U
#define XPAR_DLMB_CNTLR_ECC 0U
#define XPAR_DLMB_CNTLR_FAULT_INJECT 0U
#define XPAR_DLMB_CNTLR_CE_FAILING_REGISTERS 0U
#define XPAR_DLMB_CNTLR_UE_FAILING_REGISTERS 0U
#define XPAR_DLMB_CNTLR_ECC_STATUS_REGISTERS 0U
#define XPAR_DLMB_CNTLR_CE_COUNTER_WIDTH 0U
#define XPAR_DLMB_CNTLR_ECC_ONOFF_REGISTER 0U
#define XPAR_DLMB_CNTLR_ECC_ONOFF_RESET_VALUE 1U
#define XPAR_DLMB_CNTLR_WRITE_ACCESS 2U
#define XPAR_DLMB_CNTLR_BASEADDR 0x00000000U
#define XPAR_DLMB_CNTLR_HIGHADDR 0x0001FFFFU
#define XPAR_DLMB_CNTLR_S_AXI_CTRL_BASEADDR 0xFFFFFFFFU  
#define XPAR_DLMB_CNTLR_S_AXI_CTRL_HIGHADDR 0xFFFFFFFFU  


/* Definitions for peripheral ILMB_CNTLR */
#define XPAR_ILMB_CNTLR_DEVICE_ID 1U
#define XPAR_ILMB_CNTLR_DATA_WIDTH 32U
#define XPAR_ILMB_CNTLR_ECC 0U
#define XPAR_ILMB_CNTLR_FAULT_INJECT 0U
#define XPAR_ILMB_CNTLR_CE_FAILING_REGISTERS 0U
#define XPAR_ILMB_CNTLR_UE_FAILING_REGISTERS 0U
#define XPAR_ILMB_CNTLR_ECC_STATUS_REGISTERS 0U
#define XPAR_ILMB_CNTLR_CE_COUNTER_WIDTH 0U
#define XPAR_ILMB_CNTLR_ECC_ONOFF_REGISTER 0U
#define XPAR_ILMB_CNTLR_ECC_ONOFF_RESET_VALUE 1U
#define XPAR_ILMB_CNTLR_WRITE_ACCESS 2U
#define XPAR_ILMB_CNTLR_BASEADDR 0x00000000U
#define XPAR_ILMB_CNTLR_HIGHADDR 0x0001FFFFU
#define XPAR_ILMB_CNTLR_S_AXI_CTRL_BASEADDR 0xFFFFFFFFU  
#define XPAR_ILMB_CNTLR_S_AXI_CTRL_HIGHADDR 0xFFFFFFFFU  


/******************************************************************/

/* Canonical definitions for peripheral DLMB_CNTLR */
#define XPAR_BRAM_0_DEVICE_ID XPAR_DLMB_CNTLR_DEVICE_ID
#define XPAR_BRAM_0_DATA_WIDTH 32U
#define XPAR_BRAM_0_ECC 0U
#define XPAR_BRAM_0_FAULT_INJECT 0U
#define XPAR_BRAM_0_CE_FAILING_REGISTERS 0U
#define XPAR_BRAM_0_UE_FAILING_REGISTERS 0U
#define XPAR_BRAM_0_ECC_STATUS_REGISTERS 0U
#define XPAR_BRAM_0_CE_COUNTER_WIDTH 0U
#define XPAR_BRAM_0_ECC_ONOFF_REGISTER 0U
#define XPAR_BRAM_0_ECC_ONOFF_RESET_VALUE 1U
#define XPAR_BRAM_0_WRITE_ACCESS 2U
#define XPAR_BRAM_0_BASEADDR 0x00000000U
#define XPAR_BRAM_0_HIGHADDR 0x0001FFFFU
#define XPAR_BRAM_0_CTRL_BASEADDR 0xFFFFFFFFU  
#define XPAR_BRAM_0_CTRL_HIGHADDR 0xFFFFFFFEU  

/* Canonical definitions for peripheral ILMB_CNTLR */
#define XPAR_BRAM_1_DEVICE_ID XPAR_ILMB_CNTLR_DEVICE_ID
#define XPAR_BRAM_1_DATA_WIDTH 32U
#define XPAR_BRAM_1_ECC 0U
#define XPAR_BRAM_1_FAULT_INJECT 0U
#define XPAR_BRAM_1_CE_FAILING_REGISTERS 0U
#define XPAR_BRAM_1_UE_FAILING_REGISTERS 0U
#define XPAR_BRAM_1_ECC_STATUS_REGISTERS 0U
#define XPAR_BRAM_1_CE_COUNTER_WIDTH 0U
#define XPAR_BRAM_1_ECC_ONOFF_REGISTER 0U
#define XPAR_BRAM_1_ECC_ONOFF_RESET_VALUE 1U
#define XPAR_BRAM_1_WRITE_ACCESS 2U
#define XPAR_BRAM_1_BASEADDR 0x00000000U
#define XPAR_BRAM_1_HIGHADDR 0x0001FFFFU
#define XPAR_BRAM_1_CTRL_BASEADDR 0xFFFFFFFFU  
#define XPAR_BRAM_1_CTRL_HIGHADDR 0xFFFFFFFEU  


/******************************************************************/

/* Definitions for driver IOMODULE */
#define XPAR_XIOMODULE_NUM_INSTANCES 1U

/* Definitions for peripheral IOMODULE_0 */
#define XPAR_IOMODULE_0_DEVICE_ID 0U
#define XPAR_IOMODULE_0_BASEADDR 0x80000000U
#define XPAR_IOMODULE_0_HIGHADDR 0x8000FFFFU
#define XPAR_IOMODULE_0_MASK 0x00000000C0000000U
#define XPAR_IOMODULE_0_FREQ 100000000U
#define XPAR_IOMODULE_0_USE_UART_RX 0U
#define XPAR_IOMODULE_0_USE_UART_TX 0U
#define XPAR_IOMODULE_0_UART_BAUDRATE 9600U
#define XPAR_IOMODULE_0_UART_PROG_BAUDRATE 0U
#define XPAR_IOMODULE_0_UART_DATA_BITS 8U
#define XPAR_IOMODULE_0_UART_USE_PARITY 0U
#define XPAR_IOMODULE_0_UART_ODD_PARITY 0U
#define XPAR_IOMODULE_0_UART_RX_INTERRUPT 0U
#define XPAR_IOMODULE_0_UART_TX_INTERRUPT 0U
#define XPAR_IOMODULE_0_UART_ERROR_INTERRUPT 0U
#define XPAR_IOMODULE_0_USE_FIT1 0U
#define XPAR_IOMODULE_0_FIT1_NO_CLOCKS 6216U
#define XPAR_IOMODULE_0_FIT1_INTERRUPT 0U
#define XPAR_IOMODULE_0_USE_FIT2 0U
#define XPAR_IOMODULE_0_FIT2_NO_CLOCKS 6216U
#define XPAR_IOMODULE_0_FIT2_INTERRUPT 0U
#define XPAR_IOMODULE_0_USE_FIT3 0U
#define XPAR_IOMODULE_0_FIT3_NO_CLOCKS 6216U
#define XPAR_IOMODULE_0_FIT3_INTERRUPT 0U
#define XPAR_IOMODULE_0_USE_FIT4 0U
#define XPAR_IOMODULE_0_FIT4_NO_CLOCKS 6216U
#define XPAR_IOMODULE_0_FIT4_INTERRUPT 0U
#define XPAR_IOMODULE_0_USE_PIT1 0U
#define XPAR_IOMODULE_0_PIT1_SIZE 32U
#define XPAR_IOMODULE_0_PIT1_EXPIRED_MASK 0xFFFFFFFFU
#define XPAR_IOMODULE_0_PIT1_READABLE 1U
#define XPAR_IOMODULE_0_PIT1_PRESCALER 0U
#define XPAR_IOMODULE_0_PIT1_INTERRUPT 0U
#define XPAR_IOMODULE_0_USE_PIT2 0U
#define XPAR_IOMODULE_0_PIT2_SIZE 32U
#define XPAR_IOMODULE_0_PIT2_EXPIRED_MASK 0xFFFFFFFFU
#define XPAR_IOMODULE_0_PIT2_READABLE 1U
#define XPAR_IOMODULE_0_PIT2_PRESCALER 0U
#define XPAR_IOMODULE_0_PIT2_INTERRUPT 0U
#define XPAR_IOMODULE_0_USE_PIT3 0U
#define XPAR_IOMODULE_0_PIT3_SIZE 32U
#define XPAR_IOMODULE_0_PIT3_EXPIRED_MASK 0xFFFFFFFFU
#define XPAR_IOMODULE_0_PIT3_READABLE 1U
#define XPAR_IOMODULE_0_PIT3_PRESCALER 0U
#define XPAR_IOMODULE_0_PIT3_INTERRUPT 0U
#define XPAR_IOMODULE_0_USE_PIT4 0U
#define XPAR_IOMODULE_0_PIT4_SIZE 32U
#define XPAR_IOMODULE_0_PIT4_EXPIRED_MASK 0xFFFFFFFFU
#define XPAR_IOMODULE_0_PIT4_READABLE 1U
#define XPAR_IOMODULE_0_PIT4_PRESCALER 0U
#define XPAR_IOMODULE_0_PIT4_INTERRUPT 0U
#define XPAR_IOMODULE_0_USE_GPO1 0U
#define XPAR_IOMODULE_0_GPO1_SIZE 32U
#define XPAR_IOMODULE_0_USE_GPO2 0U
#define XPAR_IOMODULE_0_GPO2_SIZE 32U
#define XPAR_IOMODULE_0_USE_GPO3 0U
#define XPAR_IOMODULE_0_GPO3_SIZE 32U
#define XPAR_IOMODULE_0_USE_GPO4 0U
#define XPAR_IOMODULE_0_GPO4_SIZE 32U
#define XPAR_IOMODULE_0_USE_GPI1 0U
#define XPAR_IOMODULE_0_GPI1_SIZE 32U
#define XPAR_IOMODULE_0_GPI1_INTERRUPT 0U
#define XPAR_IOMODULE_0_USE_GPI2 0U
#define XPAR_IOMODULE_0_GPI2_SIZE 32U
#define XPAR_IOMODULE_0_GPI2_INTERRUPT 0U
#define XPAR_IOMODULE_0_USE_GPI3 0U
#define XPAR_IOMODULE_0_GPI3_SIZE 32U
#define XPAR_IOMODULE_0_GPI3_INTERRUPT 0U
#define XPAR_IOMODULE_0_USE_GPI4 0U
#define XPAR_IOMODULE_0_GPI4_SIZE 32U
#define XPAR_IOMODULE_0_GPI4_INTERRUPT 0U
#define XPAR_IOMODULE_0_INTC_USE_EXT_INTR 0U
#define XPAR_IOMODULE_0_INTC_INTR_SIZE 1U
#define XPAR_IOMODULE_0_INTC_HAS_FAST 1U
#define XPAR_IOMODULE_0_INTC_BASE_VECTORS 0x0000000000000000U
#define XPAR_IOMODULE_0_INTC_ADDR_WIDTH 17U
#define XPAR_IOMODULE_0_ 0U
#define XPAR_IOMODULE_0_USE_IO_BUS 1U
#define XPAR_IOMODULE_0_IO_BASEADDR 0xC0000000U
#define XPAR_IOMODULE_0_IO_HIGHADDR 0xFFFFFFFFU
#define XPAR_IOMODULE_0_IO_MASK 0x00000000C0000000U


/******************************************************************/


/* Additional definitions for peripheral IOMODULE_0 */
#define XPAR_IOMODULE_0_GPO1_INIT 0x00000000U
#define XPAR_IOMODULE_0_GPO2_INIT 0x00000000U
#define XPAR_IOMODULE_0_GPO3_INIT 0x00000000U
#define XPAR_IOMODULE_0_GPO4_INIT 0x00000000U
#define XPAR_IOMODULE_0_INTC_LEVEL_EDGE 0x0000U
#define XPAR_IOMODULE_0_INTC_POSITIVE 0xFFFFU


/******************************************************************/

#define XPAR_IOMODULE_SINGLE_BASEADDR 0x80000000
#define XPAR_IOMODULE_SINGLE_HIGHADDR 0x8000FFFF
#define XPAR_IOMODULE_INTC_SINGLE_DEVICE_ID XPAR_IOMODULE_0_DEVICE_ID
#define XPAR_IOMODULE_INTC_MAX_INTR_SIZE 0U

/******************************************************************/



/******************************************************************/

#endif  /* end of protection macro */
