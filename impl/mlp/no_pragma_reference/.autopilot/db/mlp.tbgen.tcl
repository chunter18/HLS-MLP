set C_TypeInfoList {{ 
"mlp" : [[], {"return": [[], {"scalar": "int"}] }, [{"ExternC" : 0}], [ {"weights_L1": [[], {"array": [ {"array": ["0", [401]]}, [25]]}] }, {"weights_L2": [[], {"array": [ {"array": ["1", [26]]}, [10]]}] }, {"input": [[], {"array": ["2", [400]]}] }],[],""], 
"2": [ "input_t", {"typedef": [[[],"3"],""]}], 
"3": [ "ap_fixed<18, 2, 5, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 18}}],[[], {"scalar": { "int": 2}}],[[], {"scalar": { "4": 5}}],[[], {"scalar": { "5": 3}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"5": [ "ap_o_mode", {"enum": [[],[],[{"SC_SAT":  {"scalar": "__integer__"}},{"SC_SAT_ZERO":  {"scalar": "__integer__"}},{"SC_SAT_SYM":  {"scalar": "__integer__"}},{"SC_WRAP":  {"scalar": "__integer__"}},{"SC_WRAP_SM":  {"scalar": "__integer__"}}],""]}], 
"4": [ "ap_q_mode", {"enum": [[],[],[{"SC_RND":  {"scalar": "__integer__"}},{"SC_RND_ZERO":  {"scalar": "__integer__"}},{"SC_RND_MIN_INF":  {"scalar": "__integer__"}},{"SC_RND_INF":  {"scalar": "__integer__"}},{"SC_RND_CONV":  {"scalar": "__integer__"}},{"SC_TRN":  {"scalar": "__integer__"}},{"SC_TRN_ZERO":  {"scalar": "__integer__"}}],""]}], 
"0": [ "weights_L1_t", {"typedef": [[[],"3"],""]}], 
"1": [ "weights_L2_t", {"typedef": [[[],"6"],""]}], 
"6": [ "ap_fixed<18, 4, 5, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 18}}],[[], {"scalar": { "int": 4}}],[[], {"scalar": { "4": 5}}],[[], {"scalar": { "5": 3}}],[[], {"scalar": { "int": 0}}]],""]}}]
}}
set moduleName mlp
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
set C_modelName {mlp}
set C_modelType { int 32 }
set C_modelArgList {
	{ weights_L1_V int 18 regular {array 10025 { 1 3 } 1 1 }  }
	{ weights_L2_V int 18 regular {array 260 { 1 3 } 1 1 }  }
	{ input_V int 18 regular {array 400 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "weights_L1_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY", "bitSlice":[{"low":0,"up":17,"cElement": [{"cName": "weights_L1.V","cData": "int18","bit_use": { "low": 0,"up": 17},"cArray": [{"low" : 0,"up" : 24,"step" : 1},{"low" : 0,"up" : 400,"step" : 1}]}]}]} , 
 	{ "Name" : "weights_L2_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY", "bitSlice":[{"low":0,"up":17,"cElement": [{"cName": "weights_L2.V","cData": "int18","bit_use": { "low": 0,"up": 17},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "input_V", "interface" : "memory", "bitwidth" : 18, "direction" : "READONLY", "bitSlice":[{"low":0,"up":17,"cElement": [{"cName": "input.V","cData": "int18","bit_use": { "low": 0,"up": 17},"cArray": [{"low" : 0,"up" : 399,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ weights_L1_V_address0 sc_out sc_lv 14 signal 0 } 
	{ weights_L1_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ weights_L1_V_q0 sc_in sc_lv 18 signal 0 } 
	{ weights_L2_V_address0 sc_out sc_lv 9 signal 1 } 
	{ weights_L2_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ weights_L2_V_q0 sc_in sc_lv 18 signal 1 } 
	{ input_V_address0 sc_out sc_lv 9 signal 2 } 
	{ input_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ input_V_q0 sc_in sc_lv 18 signal 2 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "weights_L1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "weights_L1_V", "role": "address0" }} , 
 	{ "name": "weights_L1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_L1_V", "role": "ce0" }} , 
 	{ "name": "weights_L1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "weights_L1_V", "role": "q0" }} , 
 	{ "name": "weights_L2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights_L2_V", "role": "address0" }} , 
 	{ "name": "weights_L2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_L2_V", "role": "ce0" }} , 
 	{ "name": "weights_L2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "weights_L2_V", "role": "q0" }} , 
 	{ "name": "input_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "input_V", "role": "address0" }} , 
 	{ "name": "input_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "ce0" }} , 
 	{ "name": "input_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_V", "role": "q0" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "9", "11", "12"],
		"CDFG" : "mlp",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "63600", "EstimateLatencyMax" : "63600",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_mvprod_layer_2_fu_358"},
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_mvprod_layer_1_fu_366"}],
		"Port" : [
			{"Name" : "weights_L1_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "grp_mvprod_layer_1_fu_366", "Port" : "matrix_V"}]},
			{"Name" : "weights_L2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_mvprod_layer_2_fu_358", "Port" : "matrix_V"}]},
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_added_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.L1_no_activ_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.L1_activ_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.L2_bias_added_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.L2_out_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.L2_out_activ_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_mvprod_layer_2_fu_358", "Parent" : "0", "Child" : ["8"],
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
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mvprod_layer_2_fu_358.mlp_mul_mul_18s_1cud_U6", "Parent" : "7"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_mvprod_layer_1_fu_366", "Parent" : "0", "Child" : ["10"],
		"CDFG" : "mvprod_layer_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "60201", "EstimateLatencyMax" : "60201",
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
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_mvprod_layer_1_fu_366.mlp_mac_muladd_18bkb_U1", "Parent" : "9"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_mul_mul_18s_1cud_U11", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mlp_mul_mul_18s_1cud_U12", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	mlp {
		weights_L1_V {Type I LastRead 3 FirstWrite -1}
		weights_L2_V {Type I LastRead 3 FirstWrite -1}
		input_V {Type I LastRead 1 FirstWrite -1}}
	mvprod_layer_2 {
		matrix_V {Type I LastRead 3 FirstWrite -1}
		input_V {Type I LastRead 3 FirstWrite -1}
		result_V {Type O LastRead -1 FirstWrite 8}}
	mvprod_layer_1 {
		matrix_V {Type I LastRead 3 FirstWrite -1}
		input_V {Type I LastRead 3 FirstWrite -1}
		result_V {Type O LastRead -1 FirstWrite 7}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "63600", "Max" : "63600"}
	, {"Name" : "Interval", "Min" : "63601", "Max" : "63601"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	weights_L1_V { ap_memory {  { weights_L1_V_address0 mem_address 1 14 }  { weights_L1_V_ce0 mem_ce 1 1 }  { weights_L1_V_q0 mem_dout 0 18 } } }
	weights_L2_V { ap_memory {  { weights_L2_V_address0 mem_address 1 9 }  { weights_L2_V_ce0 mem_ce 1 1 }  { weights_L2_V_q0 mem_dout 0 18 } } }
	input_V { ap_memory {  { input_V_address0 mem_address 1 9 }  { input_V_ce0 mem_ce 1 1 }  { input_V_q0 mem_dout 0 18 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
