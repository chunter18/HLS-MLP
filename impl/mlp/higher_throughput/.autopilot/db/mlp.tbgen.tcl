set C_TypeInfoList {{ 
"mlp" : [[], {"return": [[], {"scalar": "int"}] }, [{"ExternC" : 0}], [ {"weights_L1": [[], {"array": [ {"array": ["0", [401]]}, [25]]}] }, {"weights_L2": [[], {"array": [ {"array": ["1", [26]]}, [10]]}] }, {"input": [[], {"array": ["2", [400]]}] }],[],""], 
"0": [ "weights_L1_t", {"typedef": [[[],"3"],""]}], 
"3": [ "ap_fixed<18, 2, 5, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 18}}],[[], {"scalar": { "int": 2}}],[[], {"scalar": { "4": 5}}],[[], {"scalar": { "5": 3}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"4": [ "ap_q_mode", {"enum": [[],[],[{"SC_RND":  {"scalar": "__integer__"}},{"SC_RND_ZERO":  {"scalar": "__integer__"}},{"SC_RND_MIN_INF":  {"scalar": "__integer__"}},{"SC_RND_INF":  {"scalar": "__integer__"}},{"SC_RND_CONV":  {"scalar": "__integer__"}},{"SC_TRN":  {"scalar": "__integer__"}},{"SC_TRN_ZERO":  {"scalar": "__integer__"}}],""]}], 
"5": [ "ap_o_mode", {"enum": [[],[],[{"SC_SAT":  {"scalar": "__integer__"}},{"SC_SAT_ZERO":  {"scalar": "__integer__"}},{"SC_SAT_SYM":  {"scalar": "__integer__"}},{"SC_WRAP":  {"scalar": "__integer__"}},{"SC_WRAP_SM":  {"scalar": "__integer__"}}],""]}], 
"2": [ "input_t", {"typedef": [[[],"3"],""]}], 
"1": [ "weights_L2_t", {"typedef": [[[],"6"],""]}], 
"6": [ "ap_fixed<18, 4, 5, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 18}}],[[], {"scalar": { "int": 4}}],[[], {"scalar": { "4": 5}}],[[], {"scalar": { "5": 3}}],[[], {"scalar": { "int": 0}}]],""]}}]
}}
