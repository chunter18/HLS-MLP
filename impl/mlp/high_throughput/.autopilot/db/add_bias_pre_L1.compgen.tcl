# This script segment is generated automatically by AutoPilot

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
    id 1 \
    name input_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_0_V \
    op interface \
    ports { input_0_V_address0 { O 5 vector } input_0_V_ce0 { O 1 bit } input_0_V_q0 { I 18 vector } input_0_V_address1 { O 5 vector } input_0_V_ce1 { O 1 bit } input_0_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 2 \
    name input_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_1_V \
    op interface \
    ports { input_1_V_address0 { O 5 vector } input_1_V_ce0 { O 1 bit } input_1_V_q0 { I 18 vector } input_1_V_address1 { O 5 vector } input_1_V_ce1 { O 1 bit } input_1_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3 \
    name input_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_2_V \
    op interface \
    ports { input_2_V_address0 { O 5 vector } input_2_V_ce0 { O 1 bit } input_2_V_q0 { I 18 vector } input_2_V_address1 { O 5 vector } input_2_V_ce1 { O 1 bit } input_2_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 4 \
    name input_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_3_V \
    op interface \
    ports { input_3_V_address0 { O 5 vector } input_3_V_ce0 { O 1 bit } input_3_V_q0 { I 18 vector } input_3_V_address1 { O 5 vector } input_3_V_ce1 { O 1 bit } input_3_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 5 \
    name input_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_4_V \
    op interface \
    ports { input_4_V_address0 { O 5 vector } input_4_V_ce0 { O 1 bit } input_4_V_q0 { I 18 vector } input_4_V_address1 { O 5 vector } input_4_V_ce1 { O 1 bit } input_4_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 6 \
    name input_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_5_V \
    op interface \
    ports { input_5_V_address0 { O 5 vector } input_5_V_ce0 { O 1 bit } input_5_V_q0 { I 18 vector } input_5_V_address1 { O 5 vector } input_5_V_ce1 { O 1 bit } input_5_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 7 \
    name input_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_6_V \
    op interface \
    ports { input_6_V_address0 { O 5 vector } input_6_V_ce0 { O 1 bit } input_6_V_q0 { I 18 vector } input_6_V_address1 { O 5 vector } input_6_V_ce1 { O 1 bit } input_6_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 8 \
    name input_7_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_7_V \
    op interface \
    ports { input_7_V_address0 { O 5 vector } input_7_V_ce0 { O 1 bit } input_7_V_q0 { I 18 vector } input_7_V_address1 { O 5 vector } input_7_V_ce1 { O 1 bit } input_7_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 9 \
    name input_8_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_8_V \
    op interface \
    ports { input_8_V_address0 { O 5 vector } input_8_V_ce0 { O 1 bit } input_8_V_q0 { I 18 vector } input_8_V_address1 { O 5 vector } input_8_V_ce1 { O 1 bit } input_8_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_8_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 10 \
    name input_9_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_9_V \
    op interface \
    ports { input_9_V_address0 { O 5 vector } input_9_V_ce0 { O 1 bit } input_9_V_q0 { I 18 vector } input_9_V_address1 { O 5 vector } input_9_V_ce1 { O 1 bit } input_9_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_9_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 11 \
    name input_10_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_10_V \
    op interface \
    ports { input_10_V_address0 { O 5 vector } input_10_V_ce0 { O 1 bit } input_10_V_q0 { I 18 vector } input_10_V_address1 { O 5 vector } input_10_V_ce1 { O 1 bit } input_10_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_10_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 12 \
    name input_11_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_11_V \
    op interface \
    ports { input_11_V_address0 { O 5 vector } input_11_V_ce0 { O 1 bit } input_11_V_q0 { I 18 vector } input_11_V_address1 { O 5 vector } input_11_V_ce1 { O 1 bit } input_11_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_11_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 13 \
    name input_12_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_12_V \
    op interface \
    ports { input_12_V_address0 { O 5 vector } input_12_V_ce0 { O 1 bit } input_12_V_q0 { I 18 vector } input_12_V_address1 { O 5 vector } input_12_V_ce1 { O 1 bit } input_12_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_12_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 14 \
    name input_13_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_13_V \
    op interface \
    ports { input_13_V_address0 { O 5 vector } input_13_V_ce0 { O 1 bit } input_13_V_q0 { I 18 vector } input_13_V_address1 { O 5 vector } input_13_V_ce1 { O 1 bit } input_13_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_13_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 15 \
    name input_14_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_14_V \
    op interface \
    ports { input_14_V_address0 { O 5 vector } input_14_V_ce0 { O 1 bit } input_14_V_q0 { I 18 vector } input_14_V_address1 { O 5 vector } input_14_V_ce1 { O 1 bit } input_14_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_14_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 16 \
    name input_15_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_15_V \
    op interface \
    ports { input_15_V_address0 { O 5 vector } input_15_V_ce0 { O 1 bit } input_15_V_q0 { I 18 vector } input_15_V_address1 { O 5 vector } input_15_V_ce1 { O 1 bit } input_15_V_q1 { I 18 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_15_V'"
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
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
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
    ports { ap_return { O 1 vector } } \
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


