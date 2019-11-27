set moduleName mvprod_layer_1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type loop_rewind
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {mvprod_layer_1}
set C_modelType { void 0 }
set C_modelArgList {
	{ matrix_0_V int 18 regular {array 1275 { 1 1 } 1 1 }  }
	{ matrix_1_V int 18 regular {array 1275 { 1 1 } 1 1 }  }
	{ matrix_2_V int 18 regular {array 1275 { 1 1 } 1 1 }  }
	{ matrix_3_V int 18 regular {array 1275 { 1 1 } 1 1 }  }
	{ matrix_4_V int 18 regular {array 1275 { 1 1 } 1 1 }  }
	{ matrix_5_V int 18 regular {array 1275 { 1 1 } 1 1 }  }
	{ matrix_6_V int 18 regular {array 1275 { 1 1 } 1 1 }  }
	{ matrix_7_V int 18 regular {array 1100 { 1 1 } 1 1 }  }
	{ input_0_V int 18 regular {array 51 { 1 1 } 1 1 }  }
	{ input_1_V int 18 regular {array 51 { 1 1 } 1 1 }  }
	{ input_2_V int 18 regular {array 51 { 1 1 } 1 1 }  }
	{ input_3_V int 18 regular {array 51 { 1 1 } 1 1 }  }
	{ input_4_V int 18 regular {array 51 { 1 1 } 1 1 }  }
	{ input_5_V int 18 regular {array 51 { 1 1 } 1 1 }  }
	{ input_6_V int 18 regular {array 51 { 1 1 } 1 1 }  }
	{ input_7_V int 18 regular {array 44 { 1 1 } 1 1 }  }
	{ result_V int 18 regular {array 25 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "matrix_0_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "matrix_1_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "matrix_2_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "matrix_3_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "matrix_4_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "matrix_5_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "matrix_6_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "matrix_7_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_0_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_3_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_4_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_5_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_6_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_7_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "result_V", "interface" : "memory", "bitwidth" : 18, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 107
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ matrix_0_V_address0 sc_out sc_lv 11 signal 0 } 
	{ matrix_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ matrix_0_V_q0 sc_in sc_lv 18 signal 0 } 
	{ matrix_0_V_address1 sc_out sc_lv 11 signal 0 } 
	{ matrix_0_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ matrix_0_V_q1 sc_in sc_lv 18 signal 0 } 
	{ matrix_1_V_address0 sc_out sc_lv 11 signal 1 } 
	{ matrix_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ matrix_1_V_q0 sc_in sc_lv 18 signal 1 } 
	{ matrix_1_V_address1 sc_out sc_lv 11 signal 1 } 
	{ matrix_1_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ matrix_1_V_q1 sc_in sc_lv 18 signal 1 } 
	{ matrix_2_V_address0 sc_out sc_lv 11 signal 2 } 
	{ matrix_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ matrix_2_V_q0 sc_in sc_lv 18 signal 2 } 
	{ matrix_2_V_address1 sc_out sc_lv 11 signal 2 } 
	{ matrix_2_V_ce1 sc_out sc_logic 1 signal 2 } 
	{ matrix_2_V_q1 sc_in sc_lv 18 signal 2 } 
	{ matrix_3_V_address0 sc_out sc_lv 11 signal 3 } 
	{ matrix_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ matrix_3_V_q0 sc_in sc_lv 18 signal 3 } 
	{ matrix_3_V_address1 sc_out sc_lv 11 signal 3 } 
	{ matrix_3_V_ce1 sc_out sc_logic 1 signal 3 } 
	{ matrix_3_V_q1 sc_in sc_lv 18 signal 3 } 
	{ matrix_4_V_address0 sc_out sc_lv 11 signal 4 } 
	{ matrix_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ matrix_4_V_q0 sc_in sc_lv 18 signal 4 } 
	{ matrix_4_V_address1 sc_out sc_lv 11 signal 4 } 
	{ matrix_4_V_ce1 sc_out sc_logic 1 signal 4 } 
	{ matrix_4_V_q1 sc_in sc_lv 18 signal 4 } 
	{ matrix_5_V_address0 sc_out sc_lv 11 signal 5 } 
	{ matrix_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ matrix_5_V_q0 sc_in sc_lv 18 signal 5 } 
	{ matrix_5_V_address1 sc_out sc_lv 11 signal 5 } 
	{ matrix_5_V_ce1 sc_out sc_logic 1 signal 5 } 
	{ matrix_5_V_q1 sc_in sc_lv 18 signal 5 } 
	{ matrix_6_V_address0 sc_out sc_lv 11 signal 6 } 
	{ matrix_6_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ matrix_6_V_q0 sc_in sc_lv 18 signal 6 } 
	{ matrix_6_V_address1 sc_out sc_lv 11 signal 6 } 
	{ matrix_6_V_ce1 sc_out sc_logic 1 signal 6 } 
	{ matrix_6_V_q1 sc_in sc_lv 18 signal 6 } 
	{ matrix_7_V_address0 sc_out sc_lv 11 signal 7 } 
	{ matrix_7_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ matrix_7_V_q0 sc_in sc_lv 18 signal 7 } 
	{ matrix_7_V_address1 sc_out sc_lv 11 signal 7 } 
	{ matrix_7_V_ce1 sc_out sc_logic 1 signal 7 } 
	{ matrix_7_V_q1 sc_in sc_lv 18 signal 7 } 
	{ input_0_V_address0 sc_out sc_lv 6 signal 8 } 
	{ input_0_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ input_0_V_q0 sc_in sc_lv 18 signal 8 } 
	{ input_0_V_address1 sc_out sc_lv 6 signal 8 } 
	{ input_0_V_ce1 sc_out sc_logic 1 signal 8 } 
	{ input_0_V_q1 sc_in sc_lv 18 signal 8 } 
	{ input_1_V_address0 sc_out sc_lv 6 signal 9 } 
	{ input_1_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ input_1_V_q0 sc_in sc_lv 18 signal 9 } 
	{ input_1_V_address1 sc_out sc_lv 6 signal 9 } 
	{ input_1_V_ce1 sc_out sc_logic 1 signal 9 } 
	{ input_1_V_q1 sc_in sc_lv 18 signal 9 } 
	{ input_2_V_address0 sc_out sc_lv 6 signal 10 } 
	{ input_2_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ input_2_V_q0 sc_in sc_lv 18 signal 10 } 
	{ input_2_V_address1 sc_out sc_lv 6 signal 10 } 
	{ input_2_V_ce1 sc_out sc_logic 1 signal 10 } 
	{ input_2_V_q1 sc_in sc_lv 18 signal 10 } 
	{ input_3_V_address0 sc_out sc_lv 6 signal 11 } 
	{ input_3_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ input_3_V_q0 sc_in sc_lv 18 signal 11 } 
	{ input_3_V_address1 sc_out sc_lv 6 signal 11 } 
	{ input_3_V_ce1 sc_out sc_logic 1 signal 11 } 
	{ input_3_V_q1 sc_in sc_lv 18 signal 11 } 
	{ input_4_V_address0 sc_out sc_lv 6 signal 12 } 
	{ input_4_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ input_4_V_q0 sc_in sc_lv 18 signal 12 } 
	{ input_4_V_address1 sc_out sc_lv 6 signal 12 } 
	{ input_4_V_ce1 sc_out sc_logic 1 signal 12 } 
	{ input_4_V_q1 sc_in sc_lv 18 signal 12 } 
	{ input_5_V_address0 sc_out sc_lv 6 signal 13 } 
	{ input_5_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ input_5_V_q0 sc_in sc_lv 18 signal 13 } 
	{ input_5_V_address1 sc_out sc_lv 6 signal 13 } 
	{ input_5_V_ce1 sc_out sc_logic 1 signal 13 } 
	{ input_5_V_q1 sc_in sc_lv 18 signal 13 } 
	{ input_6_V_address0 sc_out sc_lv 6 signal 14 } 
	{ input_6_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ input_6_V_q0 sc_in sc_lv 18 signal 14 } 
	{ input_6_V_address1 sc_out sc_lv 6 signal 14 } 
	{ input_6_V_ce1 sc_out sc_logic 1 signal 14 } 
	{ input_6_V_q1 sc_in sc_lv 18 signal 14 } 
	{ input_7_V_address0 sc_out sc_lv 6 signal 15 } 
	{ input_7_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ input_7_V_q0 sc_in sc_lv 18 signal 15 } 
	{ input_7_V_address1 sc_out sc_lv 6 signal 15 } 
	{ input_7_V_ce1 sc_out sc_logic 1 signal 15 } 
	{ input_7_V_q1 sc_in sc_lv 18 signal 15 } 
	{ result_V_address0 sc_out sc_lv 5 signal 16 } 
	{ result_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ result_V_we0 sc_out sc_logic 1 signal 16 } 
	{ result_V_d0 sc_out sc_lv 18 signal 16 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "matrix_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_0_V", "role": "address0" }} , 
 	{ "name": "matrix_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_0_V", "role": "ce0" }} , 
 	{ "name": "matrix_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_0_V", "role": "q0" }} , 
 	{ "name": "matrix_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_0_V", "role": "address1" }} , 
 	{ "name": "matrix_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_0_V", "role": "ce1" }} , 
 	{ "name": "matrix_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_0_V", "role": "q1" }} , 
 	{ "name": "matrix_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_1_V", "role": "address0" }} , 
 	{ "name": "matrix_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_1_V", "role": "ce0" }} , 
 	{ "name": "matrix_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_1_V", "role": "q0" }} , 
 	{ "name": "matrix_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_1_V", "role": "address1" }} , 
 	{ "name": "matrix_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_1_V", "role": "ce1" }} , 
 	{ "name": "matrix_1_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_1_V", "role": "q1" }} , 
 	{ "name": "matrix_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_2_V", "role": "address0" }} , 
 	{ "name": "matrix_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_2_V", "role": "ce0" }} , 
 	{ "name": "matrix_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_2_V", "role": "q0" }} , 
 	{ "name": "matrix_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_2_V", "role": "address1" }} , 
 	{ "name": "matrix_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_2_V", "role": "ce1" }} , 
 	{ "name": "matrix_2_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_2_V", "role": "q1" }} , 
 	{ "name": "matrix_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_3_V", "role": "address0" }} , 
 	{ "name": "matrix_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_3_V", "role": "ce0" }} , 
 	{ "name": "matrix_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_3_V", "role": "q0" }} , 
 	{ "name": "matrix_3_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_3_V", "role": "address1" }} , 
 	{ "name": "matrix_3_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_3_V", "role": "ce1" }} , 
 	{ "name": "matrix_3_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_3_V", "role": "q1" }} , 
 	{ "name": "matrix_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_4_V", "role": "address0" }} , 
 	{ "name": "matrix_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_4_V", "role": "ce0" }} , 
 	{ "name": "matrix_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_4_V", "role": "q0" }} , 
 	{ "name": "matrix_4_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_4_V", "role": "address1" }} , 
 	{ "name": "matrix_4_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_4_V", "role": "ce1" }} , 
 	{ "name": "matrix_4_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_4_V", "role": "q1" }} , 
 	{ "name": "matrix_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_5_V", "role": "address0" }} , 
 	{ "name": "matrix_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_5_V", "role": "ce0" }} , 
 	{ "name": "matrix_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_5_V", "role": "q0" }} , 
 	{ "name": "matrix_5_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_5_V", "role": "address1" }} , 
 	{ "name": "matrix_5_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_5_V", "role": "ce1" }} , 
 	{ "name": "matrix_5_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_5_V", "role": "q1" }} , 
 	{ "name": "matrix_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_6_V", "role": "address0" }} , 
 	{ "name": "matrix_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_6_V", "role": "ce0" }} , 
 	{ "name": "matrix_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_6_V", "role": "q0" }} , 
 	{ "name": "matrix_6_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_6_V", "role": "address1" }} , 
 	{ "name": "matrix_6_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_6_V", "role": "ce1" }} , 
 	{ "name": "matrix_6_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_6_V", "role": "q1" }} , 
 	{ "name": "matrix_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_7_V", "role": "address0" }} , 
 	{ "name": "matrix_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_7_V", "role": "ce0" }} , 
 	{ "name": "matrix_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_7_V", "role": "q0" }} , 
 	{ "name": "matrix_7_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "matrix_7_V", "role": "address1" }} , 
 	{ "name": "matrix_7_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_7_V", "role": "ce1" }} , 
 	{ "name": "matrix_7_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_7_V", "role": "q1" }} , 
 	{ "name": "input_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_0_V", "role": "address0" }} , 
 	{ "name": "input_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_0_V", "role": "ce0" }} , 
 	{ "name": "input_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_0_V", "role": "q0" }} , 
 	{ "name": "input_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_0_V", "role": "address1" }} , 
 	{ "name": "input_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_0_V", "role": "ce1" }} , 
 	{ "name": "input_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_0_V", "role": "q1" }} , 
 	{ "name": "input_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_1_V", "role": "address0" }} , 
 	{ "name": "input_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_V", "role": "ce0" }} , 
 	{ "name": "input_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_1_V", "role": "q0" }} , 
 	{ "name": "input_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_1_V", "role": "address1" }} , 
 	{ "name": "input_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_V", "role": "ce1" }} , 
 	{ "name": "input_1_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_1_V", "role": "q1" }} , 
 	{ "name": "input_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_2_V", "role": "address0" }} , 
 	{ "name": "input_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_V", "role": "ce0" }} , 
 	{ "name": "input_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_2_V", "role": "q0" }} , 
 	{ "name": "input_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_2_V", "role": "address1" }} , 
 	{ "name": "input_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_V", "role": "ce1" }} , 
 	{ "name": "input_2_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_2_V", "role": "q1" }} , 
 	{ "name": "input_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_3_V", "role": "address0" }} , 
 	{ "name": "input_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_3_V", "role": "ce0" }} , 
 	{ "name": "input_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_3_V", "role": "q0" }} , 
 	{ "name": "input_3_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_3_V", "role": "address1" }} , 
 	{ "name": "input_3_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_3_V", "role": "ce1" }} , 
 	{ "name": "input_3_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_3_V", "role": "q1" }} , 
 	{ "name": "input_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_4_V", "role": "address0" }} , 
 	{ "name": "input_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_4_V", "role": "ce0" }} , 
 	{ "name": "input_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_4_V", "role": "q0" }} , 
 	{ "name": "input_4_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_4_V", "role": "address1" }} , 
 	{ "name": "input_4_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_4_V", "role": "ce1" }} , 
 	{ "name": "input_4_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_4_V", "role": "q1" }} , 
 	{ "name": "input_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_V", "role": "address0" }} , 
 	{ "name": "input_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_V", "role": "ce0" }} , 
 	{ "name": "input_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_5_V", "role": "q0" }} , 
 	{ "name": "input_5_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_V", "role": "address1" }} , 
 	{ "name": "input_5_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_V", "role": "ce1" }} , 
 	{ "name": "input_5_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_5_V", "role": "q1" }} , 
 	{ "name": "input_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_6_V", "role": "address0" }} , 
 	{ "name": "input_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_6_V", "role": "ce0" }} , 
 	{ "name": "input_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_6_V", "role": "q0" }} , 
 	{ "name": "input_6_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_6_V", "role": "address1" }} , 
 	{ "name": "input_6_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_6_V", "role": "ce1" }} , 
 	{ "name": "input_6_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_6_V", "role": "q1" }} , 
 	{ "name": "input_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_7_V", "role": "address0" }} , 
 	{ "name": "input_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_7_V", "role": "ce0" }} , 
 	{ "name": "input_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_7_V", "role": "q0" }} , 
 	{ "name": "input_7_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_7_V", "role": "address1" }} , 
 	{ "name": "input_7_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_7_V", "role": "ce1" }} , 
 	{ "name": "input_7_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_7_V", "role": "q1" }} , 
 	{ "name": "result_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "result_V", "role": "address0" }} , 
 	{ "name": "result_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_V", "role": "ce0" }} , 
 	{ "name": "result_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_V", "role": "we0" }} , 
 	{ "name": "result_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "result_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8"],
		"CDFG" : "mvprod_layer_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1429", "EstimateLatencyMax" : "1430",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "matrix_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "matrix_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "matrix_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "matrix_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "matrix_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "matrix_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "matrix_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "matrix_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "input_1_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "input_2_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "input_3_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "input_4_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "input_5_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "input_6_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "input_7_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "result_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_mul_18s_18s_3dEe_U23", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_mul_18s_18s_3dEe_U24", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_mul_18s_18s_3dEe_U25", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_mul_18s_18s_3dEe_U26", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_mul_18s_18s_3dEe_U27", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_mul_18s_18s_3dEe_U28", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_mul_18s_18s_3dEe_U29", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_mul_18s_18s_3dEe_U30", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	mvprod_layer_1 {
		matrix_0_V {Type I LastRead 27 FirstWrite -1}
		matrix_1_V {Type I LastRead 27 FirstWrite -1}
		matrix_2_V {Type I LastRead 27 FirstWrite -1}
		matrix_3_V {Type I LastRead 27 FirstWrite -1}
		matrix_4_V {Type I LastRead 27 FirstWrite -1}
		matrix_5_V {Type I LastRead 27 FirstWrite -1}
		matrix_6_V {Type I LastRead 27 FirstWrite -1}
		matrix_7_V {Type I LastRead 23 FirstWrite -1}
		input_0_V {Type I LastRead 27 FirstWrite -1}
		input_1_V {Type I LastRead 27 FirstWrite -1}
		input_2_V {Type I LastRead 27 FirstWrite -1}
		input_3_V {Type I LastRead 27 FirstWrite -1}
		input_4_V {Type I LastRead 27 FirstWrite -1}
		input_5_V {Type I LastRead 27 FirstWrite -1}
		input_6_V {Type I LastRead 27 FirstWrite -1}
		input_7_V {Type I LastRead 23 FirstWrite -1}
		result_V {Type O LastRead -1 FirstWrite 206}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1429", "Max" : "1430"}
	, {"Name" : "Interval", "Min" : "1275", "Max" : "1275"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	matrix_0_V { ap_memory {  { matrix_0_V_address0 mem_address 1 11 }  { matrix_0_V_ce0 mem_ce 1 1 }  { matrix_0_V_q0 mem_dout 0 18 }  { matrix_0_V_address1 mem_address 1 11 }  { matrix_0_V_ce1 mem_ce 1 1 }  { matrix_0_V_q1 mem_dout 0 18 } } }
	matrix_1_V { ap_memory {  { matrix_1_V_address0 mem_address 1 11 }  { matrix_1_V_ce0 mem_ce 1 1 }  { matrix_1_V_q0 mem_dout 0 18 }  { matrix_1_V_address1 mem_address 1 11 }  { matrix_1_V_ce1 mem_ce 1 1 }  { matrix_1_V_q1 mem_dout 0 18 } } }
	matrix_2_V { ap_memory {  { matrix_2_V_address0 mem_address 1 11 }  { matrix_2_V_ce0 mem_ce 1 1 }  { matrix_2_V_q0 mem_dout 0 18 }  { matrix_2_V_address1 mem_address 1 11 }  { matrix_2_V_ce1 mem_ce 1 1 }  { matrix_2_V_q1 mem_dout 0 18 } } }
	matrix_3_V { ap_memory {  { matrix_3_V_address0 mem_address 1 11 }  { matrix_3_V_ce0 mem_ce 1 1 }  { matrix_3_V_q0 mem_dout 0 18 }  { matrix_3_V_address1 mem_address 1 11 }  { matrix_3_V_ce1 mem_ce 1 1 }  { matrix_3_V_q1 mem_dout 0 18 } } }
	matrix_4_V { ap_memory {  { matrix_4_V_address0 mem_address 1 11 }  { matrix_4_V_ce0 mem_ce 1 1 }  { matrix_4_V_q0 mem_dout 0 18 }  { matrix_4_V_address1 mem_address 1 11 }  { matrix_4_V_ce1 mem_ce 1 1 }  { matrix_4_V_q1 mem_dout 0 18 } } }
	matrix_5_V { ap_memory {  { matrix_5_V_address0 mem_address 1 11 }  { matrix_5_V_ce0 mem_ce 1 1 }  { matrix_5_V_q0 mem_dout 0 18 }  { matrix_5_V_address1 mem_address 1 11 }  { matrix_5_V_ce1 mem_ce 1 1 }  { matrix_5_V_q1 mem_dout 0 18 } } }
	matrix_6_V { ap_memory {  { matrix_6_V_address0 mem_address 1 11 }  { matrix_6_V_ce0 mem_ce 1 1 }  { matrix_6_V_q0 mem_dout 0 18 }  { matrix_6_V_address1 mem_address 1 11 }  { matrix_6_V_ce1 mem_ce 1 1 }  { matrix_6_V_q1 mem_dout 0 18 } } }
	matrix_7_V { ap_memory {  { matrix_7_V_address0 mem_address 1 11 }  { matrix_7_V_ce0 mem_ce 1 1 }  { matrix_7_V_q0 mem_dout 0 18 }  { matrix_7_V_address1 mem_address 1 11 }  { matrix_7_V_ce1 mem_ce 1 1 }  { matrix_7_V_q1 mem_dout 0 18 } } }
	input_0_V { ap_memory {  { input_0_V_address0 mem_address 1 6 }  { input_0_V_ce0 mem_ce 1 1 }  { input_0_V_q0 mem_dout 0 18 }  { input_0_V_address1 mem_address 1 6 }  { input_0_V_ce1 mem_ce 1 1 }  { input_0_V_q1 mem_dout 0 18 } } }
	input_1_V { ap_memory {  { input_1_V_address0 mem_address 1 6 }  { input_1_V_ce0 mem_ce 1 1 }  { input_1_V_q0 mem_dout 0 18 }  { input_1_V_address1 mem_address 1 6 }  { input_1_V_ce1 mem_ce 1 1 }  { input_1_V_q1 mem_dout 0 18 } } }
	input_2_V { ap_memory {  { input_2_V_address0 mem_address 1 6 }  { input_2_V_ce0 mem_ce 1 1 }  { input_2_V_q0 mem_dout 0 18 }  { input_2_V_address1 mem_address 1 6 }  { input_2_V_ce1 mem_ce 1 1 }  { input_2_V_q1 mem_dout 0 18 } } }
	input_3_V { ap_memory {  { input_3_V_address0 mem_address 1 6 }  { input_3_V_ce0 mem_ce 1 1 }  { input_3_V_q0 mem_dout 0 18 }  { input_3_V_address1 mem_address 1 6 }  { input_3_V_ce1 mem_ce 1 1 }  { input_3_V_q1 mem_dout 0 18 } } }
	input_4_V { ap_memory {  { input_4_V_address0 mem_address 1 6 }  { input_4_V_ce0 mem_ce 1 1 }  { input_4_V_q0 mem_dout 0 18 }  { input_4_V_address1 mem_address 1 6 }  { input_4_V_ce1 mem_ce 1 1 }  { input_4_V_q1 mem_dout 0 18 } } }
	input_5_V { ap_memory {  { input_5_V_address0 mem_address 1 6 }  { input_5_V_ce0 mem_ce 1 1 }  { input_5_V_q0 mem_dout 0 18 }  { input_5_V_address1 mem_address 1 6 }  { input_5_V_ce1 mem_ce 1 1 }  { input_5_V_q1 mem_dout 0 18 } } }
	input_6_V { ap_memory {  { input_6_V_address0 mem_address 1 6 }  { input_6_V_ce0 mem_ce 1 1 }  { input_6_V_q0 mem_dout 0 18 }  { input_6_V_address1 mem_address 1 6 }  { input_6_V_ce1 mem_ce 1 1 }  { input_6_V_q1 mem_dout 0 18 } } }
	input_7_V { ap_memory {  { input_7_V_address0 mem_address 1 6 }  { input_7_V_ce0 mem_ce 1 1 }  { input_7_V_q0 mem_dout 0 18 }  { input_7_V_address1 mem_address 1 6 }  { input_7_V_ce1 mem_ce 1 1 }  { input_7_V_q1 mem_dout 0 18 } } }
	result_V { ap_memory {  { result_V_address0 mem_address 1 5 }  { result_V_ce0 mem_ce 1 1 }  { result_V_we0 mem_we 1 1 }  { result_V_d0 mem_din 1 18 } } }
}
