# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 67
set hasByteEnable 0
set MemName mlp_bias_added_0_V_memcore
set CoreName ap_simcore_mem
set PortList { 2 1 }
set DataWd 18
set AddrRange 51
set AddrWd 6
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.148
set ClkPeriod 4
set RegisteredInput 0
set memSimGenFunc ap_gen_simcore_mem
set memImplGenFunc ::AESL_LIB_VIRTEX::xil_gen_RAM
eval "set memGenArgs  { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "

set Depth 2
set FullThresh 0
set CoreName ap_simcore_mem_df_channel
set MemName mlp_bias_added_0_V
if {${::AESL::PGuard_autocg_gen} || ${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem_df_channel] == "ap_gen_simcore_mem_df_channel"} {
    eval "ap_gen_simcore_mem_df_channel { \
    id ${ID} \
    name ${MemName} \
    memcorename ${MemName}_memcore \
    corename ${CoreName} \
    op mem_df_channel \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage} \
    max_latency ${MaxLatency} \
    registered_input ${RegisteredInput} \
    port_num 2 \
    use_pre_full 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    memSimGenFunc $memSimGenFunc\
    memImplGenFunc $memImplGenFunc\
    memGenArgs \{$memGenArgs\} \
} "
} else {
puts "@W \[IMPL-105\] Cannot find ap_gen_simcore_mem_df_channel, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 68
set hasByteEnable 0
set MemName mlp_bias_added_7_V_memcore
set CoreName ap_simcore_mem
set PortList { 2 1 }
set DataWd 18
set AddrRange 44
set AddrWd 6
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.148
set ClkPeriod 4
set RegisteredInput 0
set memSimGenFunc ap_gen_simcore_mem
set memImplGenFunc ::AESL_LIB_VIRTEX::xil_gen_RAM
eval "set memGenArgs  { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "

set Depth 2
set FullThresh 0
set CoreName ap_simcore_mem_df_channel
set MemName mlp_bias_added_7_V
if {${::AESL::PGuard_autocg_gen} || ${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem_df_channel] == "ap_gen_simcore_mem_df_channel"} {
    eval "ap_gen_simcore_mem_df_channel { \
    id ${ID} \
    name ${MemName} \
    memcorename ${MemName}_memcore \
    corename ${CoreName} \
    op mem_df_channel \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage} \
    max_latency ${MaxLatency} \
    registered_input ${RegisteredInput} \
    port_num 2 \
    use_pre_full 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    memSimGenFunc $memSimGenFunc\
    memImplGenFunc $memImplGenFunc\
    memGenArgs \{$memGenArgs\} \
} "
} else {
puts "@W \[IMPL-105\] Cannot find ap_gen_simcore_mem_df_channel, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 69
set hasByteEnable 0
set MemName mlp_L1_no_activ_V_memcore
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 18
set AddrRange 25
set AddrWd 5
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.148
set ClkPeriod 4
set RegisteredInput 0
set memSimGenFunc ap_gen_simcore_mem
set memImplGenFunc ::AESL_LIB_VIRTEX::xil_gen_RAM
eval "set memGenArgs  { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "

set Depth 2
set FullThresh 0
set CoreName ap_simcore_mem_df_channel
set MemName mlp_L1_no_activ_V
if {${::AESL::PGuard_autocg_gen} || ${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem_df_channel] == "ap_gen_simcore_mem_df_channel"} {
    eval "ap_gen_simcore_mem_df_channel { \
    id ${ID} \
    name ${MemName} \
    memcorename ${MemName}_memcore \
    corename ${CoreName} \
    op mem_df_channel \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage} \
    max_latency ${MaxLatency} \
    registered_input ${RegisteredInput} \
    port_num 2 \
    use_pre_full 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    memSimGenFunc $memSimGenFunc\
    memImplGenFunc $memImplGenFunc\
    memGenArgs \{$memGenArgs\} \
} "
} else {
puts "@W \[IMPL-105\] Cannot find ap_gen_simcore_mem_df_channel, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 70
set hasByteEnable 0
set MemName mlp_L2_bias_added_V_memcore
set CoreName ap_simcore_mem
set PortList { 2 1 }
set DataWd 18
set AddrRange 26
set AddrWd 5
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.148
set ClkPeriod 4
set RegisteredInput 0
set memSimGenFunc ap_gen_simcore_mem
set memImplGenFunc ::AESL_LIB_VIRTEX::xil_gen_RAM
eval "set memGenArgs  { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "

set Depth 2
set FullThresh 0
set CoreName ap_simcore_mem_df_channel
set MemName mlp_L2_bias_added_V
if {${::AESL::PGuard_autocg_gen} || ${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem_df_channel] == "ap_gen_simcore_mem_df_channel"} {
    eval "ap_gen_simcore_mem_df_channel { \
    id ${ID} \
    name ${MemName} \
    memcorename ${MemName}_memcore \
    corename ${CoreName} \
    op mem_df_channel \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage} \
    max_latency ${MaxLatency} \
    registered_input ${RegisteredInput} \
    port_num 2 \
    use_pre_full 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    memSimGenFunc $memSimGenFunc\
    memImplGenFunc $memImplGenFunc\
    memGenArgs \{$memGenArgs\} \
} "
} else {
puts "@W \[IMPL-105\] Cannot find ap_gen_simcore_mem_df_channel, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 71
set hasByteEnable 0
set MemName mlp_L2_out_V_memcore
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 18
set AddrRange 10
set AddrWd 4
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.148
set ClkPeriod 4
set RegisteredInput 0
set memSimGenFunc ap_gen_simcore_mem
set memImplGenFunc ::AESL_LIB_VIRTEX::xil_gen_RAM
eval "set memGenArgs  { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "

set Depth 2
set FullThresh 0
set CoreName ap_simcore_mem_df_channel
set MemName mlp_L2_out_V
if {${::AESL::PGuard_autocg_gen} || ${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem_df_channel] == "ap_gen_simcore_mem_df_channel"} {
    eval "ap_gen_simcore_mem_df_channel { \
    id ${ID} \
    name ${MemName} \
    memcorename ${MemName}_memcore \
    corename ${CoreName} \
    op mem_df_channel \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage} \
    max_latency ${MaxLatency} \
    registered_input ${RegisteredInput} \
    port_num 2 \
    use_pre_full 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    memSimGenFunc $memSimGenFunc\
    memImplGenFunc $memImplGenFunc\
    memGenArgs \{$memGenArgs\} \
} "
} else {
puts "@W \[IMPL-105\] Cannot find ap_gen_simcore_mem_df_channel, check your platform lib"
}
}


# FIFO definition:
set ID 72
set FifoName fifo_w32_d2_A
set InstName digit_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 73
set FifoName fifo_w32_d2_A
set InstName digit_load_loc_chann_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 74 \
    name weights_L1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_L1_0_V \
    op interface \
    ports { weights_L1_0_V_address0 { O 11 vector } weights_L1_0_V_ce0 { O 1 bit } weights_L1_0_V_d0 { O 18 vector } weights_L1_0_V_q0 { I 18 vector } weights_L1_0_V_we0 { O 1 bit } weights_L1_0_V_address1 { O 11 vector } weights_L1_0_V_ce1 { O 1 bit } weights_L1_0_V_d1 { O 18 vector } weights_L1_0_V_q1 { I 18 vector } weights_L1_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_L1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 75 \
    name weights_L1_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_L1_1_V \
    op interface \
    ports { weights_L1_1_V_address0 { O 11 vector } weights_L1_1_V_ce0 { O 1 bit } weights_L1_1_V_d0 { O 18 vector } weights_L1_1_V_q0 { I 18 vector } weights_L1_1_V_we0 { O 1 bit } weights_L1_1_V_address1 { O 11 vector } weights_L1_1_V_ce1 { O 1 bit } weights_L1_1_V_d1 { O 18 vector } weights_L1_1_V_q1 { I 18 vector } weights_L1_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_L1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 76 \
    name weights_L1_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_L1_2_V \
    op interface \
    ports { weights_L1_2_V_address0 { O 11 vector } weights_L1_2_V_ce0 { O 1 bit } weights_L1_2_V_d0 { O 18 vector } weights_L1_2_V_q0 { I 18 vector } weights_L1_2_V_we0 { O 1 bit } weights_L1_2_V_address1 { O 11 vector } weights_L1_2_V_ce1 { O 1 bit } weights_L1_2_V_d1 { O 18 vector } weights_L1_2_V_q1 { I 18 vector } weights_L1_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_L1_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 77 \
    name weights_L1_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_L1_3_V \
    op interface \
    ports { weights_L1_3_V_address0 { O 11 vector } weights_L1_3_V_ce0 { O 1 bit } weights_L1_3_V_d0 { O 18 vector } weights_L1_3_V_q0 { I 18 vector } weights_L1_3_V_we0 { O 1 bit } weights_L1_3_V_address1 { O 11 vector } weights_L1_3_V_ce1 { O 1 bit } weights_L1_3_V_d1 { O 18 vector } weights_L1_3_V_q1 { I 18 vector } weights_L1_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_L1_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 78 \
    name weights_L1_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_L1_4_V \
    op interface \
    ports { weights_L1_4_V_address0 { O 11 vector } weights_L1_4_V_ce0 { O 1 bit } weights_L1_4_V_d0 { O 18 vector } weights_L1_4_V_q0 { I 18 vector } weights_L1_4_V_we0 { O 1 bit } weights_L1_4_V_address1 { O 11 vector } weights_L1_4_V_ce1 { O 1 bit } weights_L1_4_V_d1 { O 18 vector } weights_L1_4_V_q1 { I 18 vector } weights_L1_4_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_L1_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 79 \
    name weights_L1_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_L1_5_V \
    op interface \
    ports { weights_L1_5_V_address0 { O 11 vector } weights_L1_5_V_ce0 { O 1 bit } weights_L1_5_V_d0 { O 18 vector } weights_L1_5_V_q0 { I 18 vector } weights_L1_5_V_we0 { O 1 bit } weights_L1_5_V_address1 { O 11 vector } weights_L1_5_V_ce1 { O 1 bit } weights_L1_5_V_d1 { O 18 vector } weights_L1_5_V_q1 { I 18 vector } weights_L1_5_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_L1_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 80 \
    name weights_L1_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_L1_6_V \
    op interface \
    ports { weights_L1_6_V_address0 { O 11 vector } weights_L1_6_V_ce0 { O 1 bit } weights_L1_6_V_d0 { O 18 vector } weights_L1_6_V_q0 { I 18 vector } weights_L1_6_V_we0 { O 1 bit } weights_L1_6_V_address1 { O 11 vector } weights_L1_6_V_ce1 { O 1 bit } weights_L1_6_V_d1 { O 18 vector } weights_L1_6_V_q1 { I 18 vector } weights_L1_6_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_L1_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 81 \
    name weights_L1_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_L1_7_V \
    op interface \
    ports { weights_L1_7_V_address0 { O 11 vector } weights_L1_7_V_ce0 { O 1 bit } weights_L1_7_V_d0 { O 18 vector } weights_L1_7_V_q0 { I 18 vector } weights_L1_7_V_we0 { O 1 bit } weights_L1_7_V_address1 { O 11 vector } weights_L1_7_V_ce1 { O 1 bit } weights_L1_7_V_d1 { O 18 vector } weights_L1_7_V_q1 { I 18 vector } weights_L1_7_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_L1_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 82 \
    name weights_L2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename weights_L2_V \
    op interface \
    ports { weights_L2_V_address0 { O 9 vector } weights_L2_V_ce0 { O 1 bit } weights_L2_V_d0 { O 18 vector } weights_L2_V_q0 { I 18 vector } weights_L2_V_we0 { O 1 bit } weights_L2_V_address1 { O 9 vector } weights_L2_V_ce1 { O 1 bit } weights_L2_V_d1 { O 18 vector } weights_L2_V_q1 { I 18 vector } weights_L2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_L2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 83 \
    name input_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_0_V \
    op interface \
    ports { input_0_V_address0 { O 6 vector } input_0_V_ce0 { O 1 bit } input_0_V_d0 { O 18 vector } input_0_V_q0 { I 18 vector } input_0_V_we0 { O 1 bit } input_0_V_address1 { O 6 vector } input_0_V_ce1 { O 1 bit } input_0_V_d1 { O 18 vector } input_0_V_q1 { I 18 vector } input_0_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 84 \
    name input_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_1_V \
    op interface \
    ports { input_1_V_address0 { O 6 vector } input_1_V_ce0 { O 1 bit } input_1_V_d0 { O 18 vector } input_1_V_q0 { I 18 vector } input_1_V_we0 { O 1 bit } input_1_V_address1 { O 6 vector } input_1_V_ce1 { O 1 bit } input_1_V_d1 { O 18 vector } input_1_V_q1 { I 18 vector } input_1_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 85 \
    name input_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_2_V \
    op interface \
    ports { input_2_V_address0 { O 6 vector } input_2_V_ce0 { O 1 bit } input_2_V_d0 { O 18 vector } input_2_V_q0 { I 18 vector } input_2_V_we0 { O 1 bit } input_2_V_address1 { O 6 vector } input_2_V_ce1 { O 1 bit } input_2_V_d1 { O 18 vector } input_2_V_q1 { I 18 vector } input_2_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 86 \
    name input_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_3_V \
    op interface \
    ports { input_3_V_address0 { O 6 vector } input_3_V_ce0 { O 1 bit } input_3_V_d0 { O 18 vector } input_3_V_q0 { I 18 vector } input_3_V_we0 { O 1 bit } input_3_V_address1 { O 6 vector } input_3_V_ce1 { O 1 bit } input_3_V_d1 { O 18 vector } input_3_V_q1 { I 18 vector } input_3_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 87 \
    name input_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_4_V \
    op interface \
    ports { input_4_V_address0 { O 6 vector } input_4_V_ce0 { O 1 bit } input_4_V_d0 { O 18 vector } input_4_V_q0 { I 18 vector } input_4_V_we0 { O 1 bit } input_4_V_address1 { O 6 vector } input_4_V_ce1 { O 1 bit } input_4_V_d1 { O 18 vector } input_4_V_q1 { I 18 vector } input_4_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 88 \
    name input_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_5_V \
    op interface \
    ports { input_5_V_address0 { O 6 vector } input_5_V_ce0 { O 1 bit } input_5_V_d0 { O 18 vector } input_5_V_q0 { I 18 vector } input_5_V_we0 { O 1 bit } input_5_V_address1 { O 6 vector } input_5_V_ce1 { O 1 bit } input_5_V_d1 { O 18 vector } input_5_V_q1 { I 18 vector } input_5_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 89 \
    name input_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_6_V \
    op interface \
    ports { input_6_V_address0 { O 6 vector } input_6_V_ce0 { O 1 bit } input_6_V_d0 { O 18 vector } input_6_V_q0 { I 18 vector } input_6_V_we0 { O 1 bit } input_6_V_address1 { O 6 vector } input_6_V_ce1 { O 1 bit } input_6_V_d1 { O 18 vector } input_6_V_q1 { I 18 vector } input_6_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 90 \
    name input_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_7_V \
    op interface \
    ports { input_7_V_address0 { O 6 vector } input_7_V_ce0 { O 1 bit } input_7_V_d0 { O 18 vector } input_7_V_q0 { I 18 vector } input_7_V_we0 { O 1 bit } input_7_V_address1 { O 6 vector } input_7_V_ce1 { O 1 bit } input_7_V_d1 { O 18 vector } input_7_V_q1 { I 18 vector } input_7_V_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_7_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 32 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -4 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


