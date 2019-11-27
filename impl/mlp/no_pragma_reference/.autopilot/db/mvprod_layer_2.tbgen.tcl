set moduleName mvprod_layer_2
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {mvprod_layer_2}
set C_modelType { void 0 }
set C_modelArgList {
	{ matrix_V int 18 regular {array 260 { 1 3 } 1 1 }  }
	{ input_V int 18 regular {array 26 { 1 3 } 1 1 }  }
	{ result_V int 18 regular {array 10 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "matrix_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "input_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY"} , 
 	{ "Name" : "result_V", "interface" : "memory", "bitwidth" : 18, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ matrix_V_address0 sc_out sc_lv 9 signal 0 } 
	{ matrix_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ matrix_V_q0 sc_in sc_lv 18 signal 0 } 
	{ input_V_address0 sc_out sc_lv 5 signal 1 } 
	{ input_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ input_V_q0 sc_in sc_lv 18 signal 1 } 
	{ result_V_address0 sc_out sc_lv 4 signal 2 } 
	{ result_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ result_V_we0 sc_out sc_logic 1 signal 2 } 
	{ result_V_d0 sc_out sc_lv 18 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "matrix_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "matrix_V", "role": "address0" }} , 
 	{ "name": "matrix_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "matrix_V", "role": "ce0" }} , 
 	{ "name": "matrix_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "matrix_V", "role": "q0" }} , 
 	{ "name": "input_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_V", "role": "address0" }} , 
 	{ "name": "input_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "ce0" }} , 
 	{ "name": "input_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_V", "role": "q0" }} , 
 	{ "name": "result_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "result_V", "role": "address0" }} , 
 	{ "name": "result_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_V", "role": "ce0" }} , 
 	{ "name": "result_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "result_V", "role": "we0" }} , 
 	{ "name": "result_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "result_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "mvprod_layer_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1841", "EstimateLatencyMax" : "1841",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "matrix_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "result_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_mul_mul_18s_1cud_U6", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	mvprod_layer_2 {
		matrix_V {Type I LastRead 3 FirstWrite -1}
		input_V {Type I LastRead 3 FirstWrite -1}
		result_V {Type O LastRead -1 FirstWrite 8}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1841", "Max" : "1841"}
	, {"Name" : "Interval", "Min" : "1841", "Max" : "1841"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	matrix_V { ap_memory {  { matrix_V_address0 mem_address 1 9 }  { matrix_V_ce0 mem_ce 1 1 }  { matrix_V_q0 mem_dout 0 18 } } }
	input_V { ap_memory {  { input_V_address0 mem_address 1 5 }  { input_V_ce0 mem_ce 1 1 }  { input_V_q0 mem_dout 0 18 } } }
	result_V { ap_memory {  { result_V_address0 mem_address 1 4 }  { result_V_ce0 mem_ce 1 1 }  { result_V_we0 mem_we 1 1 }  { result_V_d0 mem_din 1 18 } } }
}
