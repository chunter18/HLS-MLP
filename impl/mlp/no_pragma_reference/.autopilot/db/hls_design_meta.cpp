#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("weights_L1_V_address0", 14, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("weights_L1_V_ce0", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("weights_L1_V_q0", 18, hls_in, 0, "ap_memory", "mem_dout", 1),
	Port_Property("weights_L2_V_address0", 9, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("weights_L2_V_ce0", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("weights_L2_V_q0", 18, hls_in, 1, "ap_memory", "mem_dout", 1),
	Port_Property("input_V_address0", 9, hls_out, 2, "ap_memory", "mem_address", 1),
	Port_Property("input_V_ce0", 1, hls_out, 2, "ap_memory", "mem_ce", 1),
	Port_Property("input_V_q0", 18, hls_in, 2, "ap_memory", "mem_dout", 1),
	Port_Property("ap_return", 32, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "mlp";