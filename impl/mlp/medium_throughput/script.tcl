############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project mlp
set_top mlp
add_files ../src/mlp.h
add_files ../src/mlp.cpp
add_files -tb ../src/theta2.dat -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb ../src/theta1.dat -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb ../src/tb_mlp.cpp -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb ../src/network_outputs_fullbatch.dat -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb ../src/network_inputs_fullbatch.dat -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb L2_out_no_activ.dat -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb L2_out_activ.dat -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb L1_out_no_activ.dat -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
add_files -tb L1_out_activ.dat -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
open_solution "medium_throughput"
set_part {xc7k325tffg676-2}
create_clock -period 4 -name default
source "./mlp/medium_throughput/directives.tcl"
csim_design -clean
csynth_design
cosim_design
export_design -flow impl -rtl verilog -format ip_catalog
