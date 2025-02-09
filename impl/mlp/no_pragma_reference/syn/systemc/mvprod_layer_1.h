// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _mvprod_layer_1_HH_
#define _mvprod_layer_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "mlp_mac_muladd_18bkb.h"

namespace ap_rtl {

struct mvprod_layer_1 : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<14> > matrix_V_address0;
    sc_out< sc_logic > matrix_V_ce0;
    sc_in< sc_lv<18> > matrix_V_q0;
    sc_out< sc_lv<9> > input_V_address0;
    sc_out< sc_logic > input_V_ce0;
    sc_in< sc_lv<18> > input_V_q0;
    sc_out< sc_lv<5> > result_V_address0;
    sc_out< sc_logic > result_V_ce0;
    sc_out< sc_logic > result_V_we0;
    sc_out< sc_lv<18> > result_V_d0;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    mvprod_layer_1(sc_module_name name);
    SC_HAS_PROCESS(mvprod_layer_1);

    ~mvprod_layer_1();

    sc_trace_file* mVcdFile;

    mlp_mac_muladd_18bkb<1,3,18,18,38,39>* mlp_mac_muladd_18bkb_U1;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<14> > next_mul_fu_138_p2;
    sc_signal< sc_lv<14> > next_mul_reg_263;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<5> > m_2_fu_150_p2;
    sc_signal< sc_lv<5> > m_2_reg_271;
    sc_signal< sc_lv<5> > result_V_addr_reg_276;
    sc_signal< sc_lv<1> > tmp_fu_144_p2;
    sc_signal< sc_lv<9> > n_2_fu_167_p2;
    sc_signal< sc_lv<9> > n_2_reg_284;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<14> > tmp_7_fu_177_p2;
    sc_signal< sc_lv<14> > tmp_7_reg_289;
    sc_signal< sc_lv<1> > tmp_8_fu_161_p2;
    sc_signal< sc_lv<1> > tmp_1_fu_183_p2;
    sc_signal< sc_lv<1> > tmp_1_reg_294;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > tmp_5_fu_198_p2;
    sc_signal< sc_lv<1> > tmp_5_reg_309;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<18> > acc_V_reg_323;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<5> > m_reg_98;
    sc_signal< sc_lv<14> > phi_mul_reg_109;
    sc_signal< sc_lv<9> > n_reg_121;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > tmp_s_fu_156_p1;
    sc_signal< sc_lv<64> > tmp_16_cast_fu_194_p1;
    sc_signal< sc_lv<64> > tmp_2_fu_189_p1;
    sc_signal< sc_lv<18> > acc_V_2_fu_56;
    sc_signal< sc_lv<14> > tmp_2_cast_fu_173_p1;
    sc_signal< sc_lv<18> > tmp_10_fu_215_p3;
    sc_signal< sc_lv<38> > tmp_3_fu_222_p3;
    sc_signal< sc_lv<39> > grp_fu_247_p3;
    sc_signal< sc_lv<38> > grp_fu_247_p2;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    sc_signal< sc_lv<39> > grp_fu_247_p20;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<18> ap_const_lv18_0;
    static const sc_lv<14> ap_const_lv14_191;
    static const sc_lv<5> ap_const_lv5_19;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<9> ap_const_lv9_191;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<9> ap_const_lv9_190;
    static const sc_lv<20> ap_const_lv20_0;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_25;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_fu_247_p2();
    void thread_grp_fu_247_p20();
    void thread_input_V_address0();
    void thread_input_V_ce0();
    void thread_m_2_fu_150_p2();
    void thread_matrix_V_address0();
    void thread_matrix_V_ce0();
    void thread_n_2_fu_167_p2();
    void thread_next_mul_fu_138_p2();
    void thread_result_V_address0();
    void thread_result_V_ce0();
    void thread_result_V_d0();
    void thread_result_V_we0();
    void thread_tmp_10_fu_215_p3();
    void thread_tmp_16_cast_fu_194_p1();
    void thread_tmp_1_fu_183_p2();
    void thread_tmp_2_cast_fu_173_p1();
    void thread_tmp_2_fu_189_p1();
    void thread_tmp_3_fu_222_p3();
    void thread_tmp_5_fu_198_p2();
    void thread_tmp_7_fu_177_p2();
    void thread_tmp_8_fu_161_p2();
    void thread_tmp_fu_144_p2();
    void thread_tmp_s_fu_156_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
