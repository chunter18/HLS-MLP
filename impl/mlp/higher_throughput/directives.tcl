############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_array_partition -type block -factor 100 -dim 2 "mlp" weights_L1
set_directive_dataflow "mlp"
set_directive_array_partition -type block -factor 100 -dim 1 "mlp" input
set_directive_array_partition -type block -factor 100 -dim 1 "mlp" bias_added
set_directive_allocation -limit 100 -type operation "mvprod_layer_1" mul
set_directive_allocation -limit 100 -type operation "mvprod_layer_2" mul
set_directive_pipeline -II 1 "add_bias_pre_L1"
set_directive_pipeline -II 1 "add_bias_pre_L2"
set_directive_pipeline -II 1 "sigmoid_activation_L1"
set_directive_pipeline -II 1 "sigmoid_activation_L2"
set_directive_pipeline -II 1 "classify"
set_directive_array_partition -type complete -dim 1 "mlp" weights_L2
set_directive_pipeline -II 5 -rewind "mvprod_layer_1/outer"
set_directive_pipeline -II 1 -rewind "mvprod_layer_2/outer"
