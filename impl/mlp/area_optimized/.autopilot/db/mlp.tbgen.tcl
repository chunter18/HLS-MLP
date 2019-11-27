set C_TypeInfoList {{ 
"mlp" : [[], {"return": [[], {"scalar": "int"}] }, [{"ExternC" : 0}], [ {"weights_L1": [[], {"array": [ {"array": ["0", [401]]}, [25]]}] }, {"weights_L2": [[], {"array": [ {"array": ["1", [26]]}, [10]]}] }, {"input": [[], {"array": ["2", [400]]}] }],[],""], 
"0": [ "weights_L1_t", {"typedef": [[[],"3"],""]}], 
"3": [ "ap_fixed<18, 2, 5, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 18}}],[[], {"scalar": { "int": 2}}],[[], {"scalar": { "4": 5}}],[[], {"scalar": { "5": 3}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"4": [ "ap_q_mode", {"enum": [[],[],[{"SC_RND":  {"scalar": "__integer__"}},{"SC_RND_ZERO":  {"scalar": "__integer__"}},{"SC_RND_MIN_INF":  {"scalar": "__integer__"}},{"SC_RND_INF":  {"scalar": "__integer__"}},{"SC_RND_CONV":  {"scalar": "__integer__"}},{"SC_TRN":  {"scalar": "__integer__"}},{"SC_TRN_ZERO":  {"scalar": "__integer__"}}],""]}], 
"5": [ "ap_o_mode", {"enum": [[],[],[{"SC_SAT":  {"scalar": "__integer__"}},{"SC_SAT_ZERO":  {"scalar": "__integer__"}},{"SC_SAT_SYM":  {"scalar": "__integer__"}},{"SC_WRAP":  {"scalar": "__integer__"}},{"SC_WRAP_SM":  {"scalar": "__integer__"}}],""]}], 
"1": [ "weights_L2_t", {"typedef": [[[],"6"],""]}], 
"6": [ "ap_fixed<18, 4, 5, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 18}}],[[], {"scalar": { "int": 4}}],[[], {"scalar": { "4": 5}}],[[], {"scalar": { "5": 3}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"2": [ "input_t", {"typedef": [[[],"3"],""]}]
}}
set moduleName mlp
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type dataflow
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
set portNum 37
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ weights_L1_V_address0 sc_out sc_lv 14 signal 0 } 
	{ weights_L1_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ weights_L1_V_d0 sc_out sc_lv 18 signal 0 } 
	{ weights_L1_V_q0 sc_in sc_lv 18 signal 0 } 
	{ weights_L1_V_we0 sc_out sc_logic 1 signal 0 } 
	{ weights_L1_V_address1 sc_out sc_lv 14 signal 0 } 
	{ weights_L1_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ weights_L1_V_d1 sc_out sc_lv 18 signal 0 } 
	{ weights_L1_V_q1 sc_in sc_lv 18 signal 0 } 
	{ weights_L1_V_we1 sc_out sc_logic 1 signal 0 } 
	{ weights_L2_V_address0 sc_out sc_lv 9 signal 1 } 
	{ weights_L2_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ weights_L2_V_d0 sc_out sc_lv 18 signal 1 } 
	{ weights_L2_V_q0 sc_in sc_lv 18 signal 1 } 
	{ weights_L2_V_we0 sc_out sc_logic 1 signal 1 } 
	{ weights_L2_V_address1 sc_out sc_lv 9 signal 1 } 
	{ weights_L2_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ weights_L2_V_d1 sc_out sc_lv 18 signal 1 } 
	{ weights_L2_V_q1 sc_in sc_lv 18 signal 1 } 
	{ weights_L2_V_we1 sc_out sc_logic 1 signal 1 } 
	{ input_V_address0 sc_out sc_lv 9 signal 2 } 
	{ input_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ input_V_d0 sc_out sc_lv 18 signal 2 } 
	{ input_V_q0 sc_in sc_lv 18 signal 2 } 
	{ input_V_we0 sc_out sc_logic 1 signal 2 } 
	{ input_V_address1 sc_out sc_lv 9 signal 2 } 
	{ input_V_ce1 sc_out sc_logic 1 signal 2 } 
	{ input_V_d1 sc_out sc_lv 18 signal 2 } 
	{ input_V_q1 sc_in sc_lv 18 signal 2 } 
	{ input_V_we1 sc_out sc_logic 1 signal 2 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "weights_L1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "weights_L1_V", "role": "address0" }} , 
 	{ "name": "weights_L1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_L1_V", "role": "ce0" }} , 
 	{ "name": "weights_L1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "weights_L1_V", "role": "d0" }} , 
 	{ "name": "weights_L1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "weights_L1_V", "role": "q0" }} , 
 	{ "name": "weights_L1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_L1_V", "role": "we0" }} , 
 	{ "name": "weights_L1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "weights_L1_V", "role": "address1" }} , 
 	{ "name": "weights_L1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_L1_V", "role": "ce1" }} , 
 	{ "name": "weights_L1_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "weights_L1_V", "role": "d1" }} , 
 	{ "name": "weights_L1_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "weights_L1_V", "role": "q1" }} , 
 	{ "name": "weights_L1_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_L1_V", "role": "we1" }} , 
 	{ "name": "weights_L2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights_L2_V", "role": "address0" }} , 
 	{ "name": "weights_L2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_L2_V", "role": "ce0" }} , 
 	{ "name": "weights_L2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "weights_L2_V", "role": "d0" }} , 
 	{ "name": "weights_L2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "weights_L2_V", "role": "q0" }} , 
 	{ "name": "weights_L2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_L2_V", "role": "we0" }} , 
 	{ "name": "weights_L2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "weights_L2_V", "role": "address1" }} , 
 	{ "name": "weights_L2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_L2_V", "role": "ce1" }} , 
 	{ "name": "weights_L2_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "weights_L2_V", "role": "d1" }} , 
 	{ "name": "weights_L2_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "weights_L2_V", "role": "q1" }} , 
 	{ "name": "weights_L2_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_L2_V", "role": "we1" }} , 
 	{ "name": "input_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "input_V", "role": "address0" }} , 
 	{ "name": "input_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "ce0" }} , 
 	{ "name": "input_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_V", "role": "d0" }} , 
 	{ "name": "input_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_V", "role": "q0" }} , 
 	{ "name": "input_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "we0" }} , 
 	{ "name": "input_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "input_V", "role": "address1" }} , 
 	{ "name": "input_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "ce1" }} , 
 	{ "name": "input_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_V", "role": "d1" }} , 
 	{ "name": "input_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "input_V", "role": "q1" }} , 
 	{ "name": "input_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "we1" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "11", "13", "14", "17", "19", "20", "21", "22", "23"],
		"CDFG" : "mlp",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11860", "EstimateLatencyMax" : "11862",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "8", "Name" : "mvprod_layer_1_U0", "ReadyCount" : "mvprod_layer_1_U0_ap_ready_count"},
			{"ID" : "14", "Name" : "mvprod_layer_2_U0", "ReadyCount" : "mvprod_layer_2_U0_ap_ready_count"},
			{"ID" : "7", "Name" : "add_bias_pre_L1_U0", "ReadyCount" : "add_bias_pre_L1_U0_ap_ready_count"}],
		"OutputProcess" : [
			{"ID" : "21", "Name" : "p_src_mlp_cpp_lin_U0"}],
		"Port" : [
			{"Name" : "weights_L1_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "8", "SubInstance" : "mvprod_layer_1_U0", "Port" : "matrix_V"}]},
			{"Name" : "weights_L2_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "mvprod_layer_2_U0", "Port" : "matrix_V"}]},
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "add_bias_pre_L1_U0", "Port" : "input_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_added_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.L1_no_activ_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.L1_activ_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.L2_bias_added_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.L2_out_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.L2_out_activ_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.add_bias_pre_L1_U0", "Parent" : "0",
		"CDFG" : "add_bias_pre_L1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1201", "EstimateLatencyMax" : "1201",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "result_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "8", "DependentChan" : "1"}]},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mvprod_layer_1_U0", "Parent" : "0", "Child" : ["9", "10"],
		"CDFG" : "mvprod_layer_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10031", "EstimateLatencyMax" : "10032",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "matrix_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "7", "DependentChan" : "1"},
			{"Name" : "result_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "2"}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.mvprod_layer_1_U0.mlp_mac_muladd_5nbkb_U3", "Parent" : "8"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.mvprod_layer_1_U0.mlp_mac_muladd_18cud_U4", "Parent" : "8"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sigmoid_activation_L_1_U0", "Parent" : "0", "Child" : ["12"],
		"CDFG" : "sigmoid_activation_L_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "201", "EstimateLatencyMax" : "201",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "8", "DependentChan" : "2"},
			{"Name" : "result_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "13", "DependentChan" : "3"}]},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.sigmoid_activation_L_1_U0.mlp_mul_mul_18s_1dEe_U10", "Parent" : "11"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.add_bias_pre_L2_U0", "Parent" : "0",
		"CDFG" : "add_bias_pre_L2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "51", "EstimateLatencyMax" : "51",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "11", "DependentChan" : "3"},
			{"Name" : "result_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "14", "DependentChan" : "4"}]},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mvprod_layer_2_U0", "Parent" : "0", "Child" : ["15", "16"],
		"CDFG" : "mvprod_layer_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "Rewind", "UnalignedPipeline" : "0", "RewindPipeline" : "1", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "267", "EstimateLatencyMax" : "268",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "matrix_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "13", "DependentChan" : "4"},
			{"Name" : "result_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "17", "DependentChan" : "5"}]},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.mvprod_layer_2_U0.mlp_mac_muladd_4neOg_U16", "Parent" : "14"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.mvprod_layer_2_U0.mlp_mul_mul_18s_1fYi_U17", "Parent" : "14"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sigmoid_activation_L_U0", "Parent" : "0", "Child" : ["18"],
		"CDFG" : "sigmoid_activation_L",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "81", "EstimateLatencyMax" : "81",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "14", "DependentChan" : "5"},
			{"Name" : "result_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "19", "DependentChan" : "6"}]},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.sigmoid_activation_L_U0.mlp_mul_mul_18s_1g8j_U23", "Parent" : "17"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.classify_U0", "Parent" : "0",
		"CDFG" : "classify",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "22", "EstimateLatencyMax" : "22",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "activated_L2_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "17", "DependentChan" : "6"}]},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Block_arrayctor_loop_U0", "Parent" : "0",
		"CDFG" : "Block_arrayctor_loop",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_read", "Type" : "None", "Direction" : "I", "DependentProc" : "19", "DependentChan" : "22"}]},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.p_src_mlp_cpp_lin_U0", "Parent" : "0",
		"CDFG" : "p_src_mlp_cpp_lin",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p_read", "Type" : "None", "Direction" : "I", "DependentProc" : "20", "DependentChan" : "23"}]},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.digit_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.digit_load_loc_chann_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	mlp {
		weights_L1_V {Type I LastRead 4 FirstWrite -1}
		weights_L2_V {Type I LastRead 4 FirstWrite -1}
		input_V {Type I LastRead 1 FirstWrite -1}}
	add_bias_pre_L1 {
		input_V {Type I LastRead 1 FirstWrite -1}
		result_V {Type O LastRead -1 FirstWrite 0}}
	mvprod_layer_1 {
		matrix_V {Type I LastRead 4 FirstWrite -1}
		input_V {Type I LastRead 4 FirstWrite -1}
		result_V {Type O LastRead -1 FirstWrite 8}}
	sigmoid_activation_L_1 {
		input_V {Type I LastRead 1 FirstWrite -1}
		result_V {Type O LastRead -1 FirstWrite 7}}
	add_bias_pre_L2 {
		input_V {Type I LastRead 1 FirstWrite -1}
		result_V {Type O LastRead -1 FirstWrite 0}}
	mvprod_layer_2 {
		matrix_V {Type I LastRead 4 FirstWrite -1}
		input_V {Type I LastRead 4 FirstWrite -1}
		result_V {Type O LastRead -1 FirstWrite 9}}
	sigmoid_activation_L {
		input_V {Type I LastRead 1 FirstWrite -1}
		result_V {Type O LastRead -1 FirstWrite 7}}
	classify {
		activated_L2_V {Type I LastRead 2 FirstWrite -1}}
	Block_arrayctor_loop {
		p_read {Type I LastRead 0 FirstWrite -1}}
	p_src_mlp_cpp_lin {
		p_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "11860", "Max" : "11862"}
	, {"Name" : "Interval", "Min" : "10025", "Max" : "10025"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	weights_L1_V { ap_memory {  { weights_L1_V_address0 mem_address 1 14 }  { weights_L1_V_ce0 mem_ce 1 1 }  { weights_L1_V_d0 mem_din 1 18 }  { weights_L1_V_q0 mem_dout 0 18 }  { weights_L1_V_we0 mem_we 1 1 }  { weights_L1_V_address1 mem_address 1 14 }  { weights_L1_V_ce1 mem_ce 1 1 }  { weights_L1_V_d1 mem_din 1 18 }  { weights_L1_V_q1 mem_dout 0 18 }  { weights_L1_V_we1 mem_we 1 1 } } }
	weights_L2_V { ap_memory {  { weights_L2_V_address0 mem_address 1 9 }  { weights_L2_V_ce0 mem_ce 1 1 }  { weights_L2_V_d0 mem_din 1 18 }  { weights_L2_V_q0 mem_dout 0 18 }  { weights_L2_V_we0 mem_we 1 1 }  { weights_L2_V_address1 mem_address 1 9 }  { weights_L2_V_ce1 mem_ce 1 1 }  { weights_L2_V_d1 mem_din 1 18 }  { weights_L2_V_q1 mem_dout 0 18 }  { weights_L2_V_we1 mem_we 1 1 } } }
	input_V { ap_memory {  { input_V_address0 mem_address 1 9 }  { input_V_ce0 mem_ce 1 1 }  { input_V_d0 mem_din 1 18 }  { input_V_q0 mem_dout 0 18 }  { input_V_we0 mem_we 1 1 }  { input_V_address1 mem_address 1 9 }  { input_V_ce1 mem_ce 1 1 }  { input_V_d1 mem_din 1 18 }  { input_V_q1 mem_dout 0 18 }  { input_V_we1 mem_we 1 1 } } }
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
