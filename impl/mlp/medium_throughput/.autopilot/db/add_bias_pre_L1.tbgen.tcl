set moduleName add_bias_pre_L1
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
set C_modelName {add_bias_pre_L1}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_0_V int 18 regular {array 50 { 1 3 } 1 1 }  }
	{ input_1_V int 18 regular {array 50 { 1 3 } 1 1 }  }
	{ input_2_V int 18 regular {array 50 { 1 3 } 1 1 }  }
	{ input_3_V int 18 regular {array 50 { 1 3 } 1 1 }  }
	{ input_4_V int 18 regular {array 50 { 1 3 } 1 1 }  }
	{ input_5_V int 18 regular {array 50 { 1 3 } 1 1 }  }
	{ input_6_V int 18 regular {array 50 { 1 3 } 1 1 }  }
	{ input_7_V int 18 regular {array 50 { 1 3 } 1 1 }  }
	{ result_0_V int 18 regular {array 51 { 0 3 } 0 1 }  }
	{ result_1_V int 18 regular {array 51 { 0 3 } 0 1 }  }
	{ result_2_V int 18 regular {array 51 { 0 3 } 0 1 }  }
	{ result_3_V int 18 regular {array 51 { 0 3 } 0 1 }  }
	{ result_4_V int 18 regular {array 51 { 0 3 } 0 1 }  }
	{ result_5_V int 18 regular {array 51 { 0 3 } 0 1 }  }
	{ result_6_V int 18 regular {array 51 { 0 3 } 0 1 }  }
	{ result_7_V int 18 regular {array 44 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_0_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_3_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_4_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_5_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_6_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_7_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "result_0_V", "interface" : "memory", "bitwidth" : 18, "direction" : "WRITEONLY"} , 
 	{ "Name" : "result_1_V", "interface" : "memory", "bitwidth" : 18, "direction" : "WRITEONLY"} , 
 	{ "Name" : "result_2_V", "interface" : "memory", "bitwidth" : 18, "direction" : "WRITEONLY"} , 
 	{ "Name" : "result_3_V", "interface" : "memory", "bitwidth" : 18, "direction" : "WRITEONLY"} , 
 	{ "Name" : "result_4_V", "interface" : "memory", "bitwidth" : 18, "direction" : "WRITEONLY"} , 
 	{ "Name" : "result_5_V", "interface" : "memory", "bitwidth" : 18, "direction" : "WRITEONLY"} , 
 	{ "Name" : "result_6_V", "interface" : "memory", "bitwidth" : 18, "direction" : "WRITEONLY"} , 
 	{ "Name" : "result_7_V", "interface" : "memory", "bitwidth" : 18, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 63
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_0_V_address0 sc_out sc_lv 6 signal 0 } 
	{ input_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_0_V_q0 sc_in sc_lv 18 signal 0 } 
	{ input_1_V_address0 sc_out sc_lv 6 signal 1 } 
	{ input_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ input_1_V_q0 sc_in sc_lv 18 signal 1 } 
	{ input_2_V_address0 sc_out sc_lv 6 signal 2 } 
	{ input_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ input_2_V_q0 sc_in sc_lv 18 signal 2 } 
	{ input_3_V_address0 sc_out sc_lv 6 signal 3 } 
	{ input_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ input_3_V_q0 sc_in sc_lv 18 signal 3 } 
	{ input_4_V_address0 sc_out sc_lv 6 signal 4 } 
	{ input_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ input_4_V_q0 sc_in sc_lv 18 signal 4 } 
	{ input_5_V_address0 sc_out sc_lv 6 signal 5 } 
	{ input_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ input_5_V_q0 sc_in sc_lv 18 signal 5 } 
	{ input_6_V_address0 sc_out sc_lv 6 signal 6 } 
	{ input_6_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ input_6_V_q0 sc_in sc_lv 18 signal 6 } 
	{ input_7_V_address0 sc_out sc_lv 6 signal 7 } 
	{ input_7_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ input_7_V_q0 sc_in sc_lv 18 signal 7 } 
	{ result_0_V_address0 sc_out sc_lv 6 signal 8 } 
	{ result_0_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ result_0_V_we0 sc_out sc_logic 1 signal 8 } 
	{ result_0_V_d0 sc_out sc_lv 18 signal 8 } 
	{ result_1_V_address0 sc_out sc_lv 6 signal 9 } 
	{ result_1_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ result_1_V_we0 sc_out sc_logic 1 signal 9 } 
	{ result_1_V_d0 sc_out sc_lv 18 signal 9 } 
	{ result_2_V_address0 sc_out sc_lv 6 signal 10 } 
	{ result_2_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ result_2_V_we0 sc_out sc_logic 1 signal 10 } 
	{ result_2_V_d0 sc_out sc_lv 18 signal 10 } 
	{ result_3_V_address0 sc_out sc_lv 6 signal 11 } 
	{ result_3_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ result_3_V_we0 sc_out sc_logic 1 signal 11 } 
	{ result_3_V_d0 sc_out sc_lv 18 signal 11 } 
	{ result_4_V_address0 sc_out sc_lv 6 signal 12 } 
	{ result_4_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ result_4_V_we0 sc_out sc_logic 1 signal 12 } 
	{ result_4_V_d0 sc_out sc_lv 18 signal 12 } 
	{ result_5_V_address0 sc_out sc_lv 6 signal 13 } 
	{ result_5_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ result_5_V_we0 sc_out sc_logic 1 signal 13 } 
	{ result_5_V_d0 sc_out sc_lv 18 signal 13 } 
	{ result_6_V_address0 sc_out sc_lv 6 signal 14 } 
	{ result_6_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ result_6_V_we0 sc_out sc_logic 1 signal 14 } 
	{ result_6_V_d0 sc_out sc_lv 18 signal 14 } 
	{ result_7_V_address0 sc_out sc_lv 6 signal 15 } 
	{ result_7_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ result_7_V_we0 sc_out sc_logic 1 signal 15 } 
	{ result_7_V_d0 sc_out sc_lv 18 signal 15 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_0_V", "role": "address0" }} , 
 	{ "name": "input_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_0_V", "role": "ce0" }} , 
 	{ "name": "input_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_0_V", "role": "q0" }} , 
 	{ "name": "input_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_1_V", "role": "address0" }} , 
 	{ "name": "input_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_V", "role": "ce0" }} , 
 	{ "name": "input_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_1_V", "role": "q0" }} , 
 	{ "name": "input_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_2_V", "role": "address0" }} , 
 	{ "name": "input_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_V", "role": "ce0" }} , 
 	{ "name": "input_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_2_V", "role": "q0" }} , 
 	{ "name": "input_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_3_V", "role": "address0" }} , 
 	{ "name": "input_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_3_V", "role": "ce0" }} , 
 	{ "name": "input_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_3_V", "role": "q0" }} , 
 	{ "name": "input_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_4_V", "role": "address0" }} , 
 	{ "name": "input_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_4_V", "role": "ce0" }} , 
 	{ "name": "input_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_4_V", "role": "q0" }} , 
 	{ "name": "input_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_5_V", "role": "address0" }} , 
 	{ "name": "input_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_V", "role": "ce0" }} , 
 	{ "name": "input_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_5_V", "role": "q0" }} , 
 	{ "name": "input_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_6_V", "role": "address0" }} , 
 	{ "name": "input_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_6_V", "role": "ce0" }} , 
 	{ "name": "input_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_6_V", "role": "q0" }} , 
 	{ "name": "input_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "input_7_V", "role": "address0" }} , 
 	{ "name": "input_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_7_V", "role": "ce0" }} , 
 	{ "name": "input_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_7_V", "role": "q0" }} , 
 	{ "name": "result_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "result_0_V", "role": "address0" }} , 
 	{ "name": "result_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_0_V", "role": "ce0" }} , 
 	{ "name": "result_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_0_V", "role": "we0" }} , 
 	{ "name": "result_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "result_0_V", "role": "d0" }} , 
 	{ "name": "result_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "result_1_V", "role": "address0" }} , 
 	{ "name": "result_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_1_V", "role": "ce0" }} , 
 	{ "name": "result_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_1_V", "role": "we0" }} , 
 	{ "name": "result_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "result_1_V", "role": "d0" }} , 
 	{ "name": "result_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "result_2_V", "role": "address0" }} , 
 	{ "name": "result_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_2_V", "role": "ce0" }} , 
 	{ "name": "result_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_2_V", "role": "we0" }} , 
 	{ "name": "result_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "result_2_V", "role": "d0" }} , 
 	{ "name": "result_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "result_3_V", "role": "address0" }} , 
 	{ "name": "result_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_3_V", "role": "ce0" }} , 
 	{ "name": "result_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_3_V", "role": "we0" }} , 
 	{ "name": "result_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "result_3_V", "role": "d0" }} , 
 	{ "name": "result_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "result_4_V", "role": "address0" }} , 
 	{ "name": "result_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_4_V", "role": "ce0" }} , 
 	{ "name": "result_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_4_V", "role": "we0" }} , 
 	{ "name": "result_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "result_4_V", "role": "d0" }} , 
 	{ "name": "result_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "result_5_V", "role": "address0" }} , 
 	{ "name": "result_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_5_V", "role": "ce0" }} , 
 	{ "name": "result_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_5_V", "role": "we0" }} , 
 	{ "name": "result_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "result_5_V", "role": "d0" }} , 
 	{ "name": "result_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "result_6_V", "role": "address0" }} , 
 	{ "name": "result_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_6_V", "role": "ce0" }} , 
 	{ "name": "result_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_6_V", "role": "we0" }} , 
 	{ "name": "result_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "result_6_V", "role": "d0" }} , 
 	{ "name": "result_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "result_7_V", "role": "address0" }} , 
 	{ "name": "result_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_7_V", "role": "ce0" }} , 
 	{ "name": "result_7_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_7_V", "role": "we0" }} , 
 	{ "name": "result_7_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "result_7_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "add_bias_pre_L1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "811", "EstimateLatencyMax" : "812",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "result_0_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "result_1_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "result_2_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "result_3_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "result_4_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "result_5_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "result_6_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "result_7_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_mux_832_18_2_1_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_urem_9ns_7ns_bkb_U2", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_mul_mul_9ns_1cud_U3", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	add_bias_pre_L1 {
		input_0_V {Type I LastRead 1 FirstWrite -1}
		input_1_V {Type I LastRead 1 FirstWrite -1}
		input_2_V {Type I LastRead 1 FirstWrite -1}
		input_3_V {Type I LastRead 1 FirstWrite -1}
		input_4_V {Type I LastRead 1 FirstWrite -1}
		input_5_V {Type I LastRead 1 FirstWrite -1}
		input_6_V {Type I LastRead 1 FirstWrite -1}
		input_7_V {Type I LastRead 1 FirstWrite -1}
		result_0_V {Type O LastRead -1 FirstWrite 13}
		result_1_V {Type O LastRead -1 FirstWrite 14}
		result_2_V {Type O LastRead -1 FirstWrite 14}
		result_3_V {Type O LastRead -1 FirstWrite 14}
		result_4_V {Type O LastRead -1 FirstWrite 14}
		result_5_V {Type O LastRead -1 FirstWrite 14}
		result_6_V {Type O LastRead -1 FirstWrite 14}
		result_7_V {Type O LastRead -1 FirstWrite 14}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "811", "Max" : "812"}
	, {"Name" : "Interval", "Min" : "800", "Max" : "800"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	input_0_V { ap_memory {  { input_0_V_address0 mem_address 1 6 }  { input_0_V_ce0 mem_ce 1 1 }  { input_0_V_q0 mem_dout 0 18 } } }
	input_1_V { ap_memory {  { input_1_V_address0 mem_address 1 6 }  { input_1_V_ce0 mem_ce 1 1 }  { input_1_V_q0 mem_dout 0 18 } } }
	input_2_V { ap_memory {  { input_2_V_address0 mem_address 1 6 }  { input_2_V_ce0 mem_ce 1 1 }  { input_2_V_q0 mem_dout 0 18 } } }
	input_3_V { ap_memory {  { input_3_V_address0 mem_address 1 6 }  { input_3_V_ce0 mem_ce 1 1 }  { input_3_V_q0 mem_dout 0 18 } } }
	input_4_V { ap_memory {  { input_4_V_address0 mem_address 1 6 }  { input_4_V_ce0 mem_ce 1 1 }  { input_4_V_q0 mem_dout 0 18 } } }
	input_5_V { ap_memory {  { input_5_V_address0 mem_address 1 6 }  { input_5_V_ce0 mem_ce 1 1 }  { input_5_V_q0 mem_dout 0 18 } } }
	input_6_V { ap_memory {  { input_6_V_address0 mem_address 1 6 }  { input_6_V_ce0 mem_ce 1 1 }  { input_6_V_q0 mem_dout 0 18 } } }
	input_7_V { ap_memory {  { input_7_V_address0 mem_address 1 6 }  { input_7_V_ce0 mem_ce 1 1 }  { input_7_V_q0 mem_dout 0 18 } } }
	result_0_V { ap_memory {  { result_0_V_address0 mem_address 1 6 }  { result_0_V_ce0 mem_ce 1 1 }  { result_0_V_we0 mem_we 1 1 }  { result_0_V_d0 mem_din 1 18 } } }
	result_1_V { ap_memory {  { result_1_V_address0 mem_address 1 6 }  { result_1_V_ce0 mem_ce 1 1 }  { result_1_V_we0 mem_we 1 1 }  { result_1_V_d0 mem_din 1 18 } } }
	result_2_V { ap_memory {  { result_2_V_address0 mem_address 1 6 }  { result_2_V_ce0 mem_ce 1 1 }  { result_2_V_we0 mem_we 1 1 }  { result_2_V_d0 mem_din 1 18 } } }
	result_3_V { ap_memory {  { result_3_V_address0 mem_address 1 6 }  { result_3_V_ce0 mem_ce 1 1 }  { result_3_V_we0 mem_we 1 1 }  { result_3_V_d0 mem_din 1 18 } } }
	result_4_V { ap_memory {  { result_4_V_address0 mem_address 1 6 }  { result_4_V_ce0 mem_ce 1 1 }  { result_4_V_we0 mem_we 1 1 }  { result_4_V_d0 mem_din 1 18 } } }
	result_5_V { ap_memory {  { result_5_V_address0 mem_address 1 6 }  { result_5_V_ce0 mem_ce 1 1 }  { result_5_V_we0 mem_we 1 1 }  { result_5_V_d0 mem_din 1 18 } } }
	result_6_V { ap_memory {  { result_6_V_address0 mem_address 1 6 }  { result_6_V_ce0 mem_ce 1 1 }  { result_6_V_we0 mem_we 1 1 }  { result_6_V_d0 mem_din 1 18 } } }
	result_7_V { ap_memory {  { result_7_V_address0 mem_address 1 6 }  { result_7_V_ce0 mem_ce 1 1 }  { result_7_V_we0 mem_we 1 1 }  { result_7_V_d0 mem_din 1 18 } } }
}
