############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_array_partition -type block -factor 8 -dim 2 "mlp" weights_L1
set_directive_dataflow "mlp"
set_directive_array_partition -type block -factor 8 -dim 1 "mlp" input
set_directive_array_partition -type block -factor 8 -dim 1 "mlp" bias_added
set_directive_pipeline -II 1 -rewind "add_bias_pre_L1/fill"
set_directive_pipeline -II 51 -rewind "mvprod_layer_1/outer"
set_directive_allocation -limit 8 -type operation "mvprod_layer_1" mul
set_directive_allocation -limit 1 -type operation "mvprod_layer_2" mul
set_directive_pipeline -II 26 -rewind "mvprod_layer_2/outer"
