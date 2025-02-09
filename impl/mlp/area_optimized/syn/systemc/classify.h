// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _classify_HH_
#define _classify_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct classify : public sc_module {
    // Port declarations 11
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > activated_L2_V_address0;
    sc_out< sc_logic > activated_L2_V_ce0;
    sc_in< sc_lv<18> > activated_L2_V_q0;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    classify(sc_module_name name);
    SC_HAS_PROCESS(classify);

    ~classify();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > network_digit_fu_81_p2;
    sc_signal< sc_lv<4> > network_digit_reg_130;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_fu_75_p2;
    sc_signal< sc_lv<18> > max_V_2_fu_101_p3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > network_digit_1_fu_109_p3;
    sc_signal< sc_lv<18> > p_0_reg_42;
    sc_signal< sc_lv<32> > result_write_assign_reg_52;
    sc_signal< sc_lv<4> > k_reg_64;
    sc_signal< sc_lv<64> > tmp_s_fu_87_p1;
    sc_signal< sc_lv<1> > tmp_16_fu_92_p2;
    sc_signal< sc_lv<32> > network_digit_2_cast_fu_98_p1;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_state3;
    static const sc_lv<4> ap_ST_fsm_state4;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_activated_L2_V_address0();
    void thread_activated_L2_V_ce0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_max_V_2_fu_101_p3();
    void thread_network_digit_1_fu_109_p3();
    void thread_network_digit_2_cast_fu_98_p1();
    void thread_network_digit_fu_81_p2();
    void thread_tmp_16_fu_92_p2();
    void thread_tmp_fu_75_p2();
    void thread_tmp_s_fu_87_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
