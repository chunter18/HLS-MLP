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
create_project -in_memory -part xc7k325tffg676-2

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_property webtalk.parent_dir C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/project.cache/wt [current_project]
set_property parent.project_path C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/project.xpr [current_project]
set_property XPM_LIBRARIES XPM_MEMORY [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property ip_cache_permissions {read write} [current_project]
read_verilog -library xil_defaultlib {
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/Block_arrayctor_loop.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/add_bias_pre_L1.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/add_bias_pre_L2.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/classify.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/fifo_w18_d2_A.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/fifo_w4_d2_A.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/mlp.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/mlp_L1_no_activ_V.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/mlp_L1_no_activ_V_memcore.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/mlp_L2_out_V.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/mlp_L2_out_V_memcore.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/mlp_mul_18s_18s_3bkb.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/mlp_mul_18s_18s_3dEe.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/mlp_mul_mul_18s_1cud.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/mvprod_layer_1.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/mvprod_layer_2.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/p_src_mlp_cpp_lin.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/sigmoid_activation_L.v
  C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/sigmoid_activation_L_1.v
}
# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/mlp.xdc
set_property used_in_implementation false [get_files C:/Users/chunt/Desktop/ELEN226/assignment3/mlp/impl/mlp/high_throughput/impl/verilog/mlp.xdc]

set_param ips.enableIPCacheLiteLoad 0
close [open __synthesis_is_running__ w]

synth_design -top mlp -part xc7k325tffg676-2 -directive sdx_optimization_effort_high -no_iobuf -mode out_of_context


# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef mlp.dcp
create_report "synth_1_synth_report_utilization_0" "report_utilization -file mlp_utilization_synth.rpt -pb mlp_utilization_synth.pb"
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]